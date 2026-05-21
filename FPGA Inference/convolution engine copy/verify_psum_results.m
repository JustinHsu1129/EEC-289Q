%% verify_psum_results.m
% Compare psum_results.csv (RTL simulation) against MATLAB golden models.
%
% Testbench inputs (tb_systolic.sv):
%   image(addr)  = mod(addr, 100),   addr = y*28 + x
%   weight row r = r+1 for every 3x3 tap (16 filters)
%
% Models:
%   LineBuf  — matches activation_line_buffer.sv indexing + sliding window
%   Conv2    — standard valid convolution over the same valid output region
%   RTL note — systolic skew/pipeline can differ from LineBuf; see report
%
% Usage:
%   cd('<this folder>');
%   verify_psum_results
%
% Optional:
%   verify_psum_results('psum_results.csv')
%   T = generate_reference_csv('matlab_linebuf_expected.csv');

function verify_psum_results(csvFile)
    if nargin < 1
        csvFile = fullfile(fileparts(mfilename('fullpath')), 'psum_results.csv');
    end

    P = default_params();

    fprintf('=== Systolic psum verification ===\n');
    fprintf('CSV: %s\n\n', csvFile);

    img = build_test_image(P);
    if ~isfile(csvFile)
        error('Missing %s — run: iverilog ... && vvp sim', csvFile);
    end

    [csvTbl, hwVals] = load_psum_csv(csvFile, P);
    hwMap = table_to_feature_map(csvTbl, hwVals, P);

    refLineBuf = compute_linebuf_map(img, P);
    refConv2   = compute_conv2_map(img, P);

    fprintf('--- vs RTL line-buffer model (activation_line_buffer.sv) ---\n');
    report_map_diff(hwMap, refLineBuf);

    fprintf('--- vs standard conv2 (valid, constant 3x3 filter) ---\n');
    report_map_diff(hwMap, refConv2);

    fprintf('\n--- Spot check: first tile (Tile_Y=0, Base_X=0), column X0 ---\n');
    fprintf('Filter | HW csv | LineBuf | Conv2 | LB err | C2 err\n');
    fprintf('-------+--------+---------+-------+--------+-------\n');
    idx0 = find(csvTbl.Tile_Y == 0 & csvTbl.Base_X == 0);
    [~, ord] = sort(csvTbl.Filter_ID(idx0), 'descend');
    idx0 = idx0(ord);
    for ii = 1:numel(idx0)
        k = idx0(ii);
        f = csvTbl.Filter_ID(k);
        hw = hwVals(k, 1);
        lb = refLineBuf(1, 1, f + 1);
        c2 = refConv2(1, 1, f + 1);
        fprintf('%6d | %6d | %7d | %5d | %6d | %5d\n', ...
            f, hw, lb, c2, hw - lb, hw - c2);
    end

    fprintf('\n--- How to interpret ---\n');
    fprintf('  * LineBuf = what the line buffer + 9 MACs should produce if every\n');
    fprintf('    filter row completes all kernel taps.\n');
    fprintf('  * Conv2 = ordinary valid convolution (easier hand calculation).\n');
    fprintf('  * If HW csv != LineBuf, check systolic skew (mac_en per row), BRAM\n');
    fprintf('    read latency, and deskew timing — not just arithmetic.\n');
    fprintf('\n  Generate a full line-buffer reference CSV:\n');
    fprintf('    generate_reference_csv\n');

    if usejava('desktop')
        plot_filter(hwMap, refLineBuf, refConv2, 0);
        plot_filter(hwMap, refLineBuf, refConv2, 15);
    end
end

%% Generate CSV in the same layout as the testbench dump (LineBuf model)
function T = generate_reference_csv(outFile)
    P = default_params();
    if nargin < 1
        outFile = fullfile(fileparts(mfilename('fullpath')), 'matlab_linebuf_expected.csv');
    end
    img = build_test_image(P);
    map = compute_linebuf_map(img, P);

    rows = P.NUM_TILES * P.NUM_FILTERS;
    RAM_Addr = (0:rows-1)';
    Filter_ID = zeros(rows, 1);
    Tile_Y = zeros(rows, 1);
    Base_X = zeros(rows, 1);
    X = zeros(rows, P.ARRAY_COLS);

    idx = 0;
    for tile = 0:P.NUM_TILES-1
        ty = floor(tile / P.TILES_X);
        bx = mod(tile, P.TILES_X) * P.ARRAY_COLS;
        for drain = 0:P.NUM_FILTERS-1
            f = (P.NUM_FILTERS - 1) - drain;
            Filter_ID(idx+1) = f;
            Tile_Y(idx+1) = ty;
            Base_X(idx+1) = bx;
            for j = 0:P.ARRAY_COLS-1
                ox = bx + j;
                if ox < P.IMAGE_W
                    X(idx+1, j+1) = map(ty+1, ox+1, f+1);
                end
            end
            idx = idx + 1;
        end
    end

    T = table(RAM_Addr, Filter_ID, Tile_Y, Base_X);
    for j = 0:P.ARRAY_COLS-1
        T.(sprintf('X%d', j)) = X(:, j+1);
    end
    writetable(T, outFile);
    fprintf('Wrote line-buffer reference: %s\n', outFile);
end

%% -------------------------------------------------------------------------
function P = default_params()
    P.IMAGE_W     = 28;
    P.IMAGE_H     = 28;
    P.KERNEL_SIZE = 3;
    P.NUM_FILTERS = 16;
    P.ARRAY_COLS  = 16;
    P.TILES_X     = ceil(P.IMAGE_W / P.ARRAY_COLS);
    P.OUT_H       = P.IMAGE_H - P.KERNEL_SIZE + 1;  % 26
    P.OUT_W       = P.IMAGE_W - P.KERNEL_SIZE + 1;  % 26 (valid conv width)
    P.NUM_TILES   = P.TILES_X * P.OUT_H;
    P.BUF_DEPTH   = P.KERNEL_SIZE * P.IMAGE_W;
end

function img = build_test_image(P)
    img = zeros(P.IMAGE_H, P.IMAGE_W);
    for y = 0:P.IMAGE_H-1
        for x = 0:P.IMAGE_W-1
            addr = y * P.IMAGE_W + x;
            img(y+1, x+1) = mod(addr, 100);
        end
    end
end

function reg = line_buffer_state(img, out_y, P)
    reg = zeros(1, P.BUF_DEPTH);
    for i = 0:P.BUF_DEPTH-1
        addr = out_y * P.IMAGE_W + i;
        if addr < P.IMAGE_W * P.IMAGE_H
            reg(i+1) = mod(addr, 100);
        end
    end
end

function act = linebuf_activation(img, out_y, out_x, j, ky, kx, P)
    reg = line_buffer_state(img, out_y, P);
    tap_x = out_x + kx + j;
    idx = ky * P.IMAGE_W + tap_x;
    if tap_x < 0 || tap_x >= P.IMAGE_W || idx < 0 || idx >= P.BUF_DEPTH
        act = 0;
    else
        act = reg(idx + 1);
    end
end

function psum = ref_psum_linebuf(img, out_y, out_x, filt, j, P)
    w = filt + 1;
    s = 0;
    for ky = 0:P.KERNEL_SIZE-1
        for kx = 0:P.KERNEL_SIZE-1
            s = s + linebuf_activation(img, out_y, out_x, j, ky, kx, P) * w;
        end
    end
    psum = s;
end

function map = compute_linebuf_map(img, P)
    map = nan(P.OUT_H, P.IMAGE_W, P.NUM_FILTERS);
    for out_y = 0:P.OUT_H-1
        for tile_x = 0:P.TILES_X-1
            out_x = tile_x * P.ARRAY_COLS;
            for j = 0:P.ARRAY_COLS-1
                ox = out_x + j;
                if ox >= P.IMAGE_W, continue; end
                for f = 0:P.NUM_FILTERS-1
                    map(out_y+1, ox+1, f+1) = ref_psum_linebuf(img, out_y, out_x, f, j, P);
                end
            end
        end
    end
end

function map = compute_conv2_map(img, P)
    % conv2(...,'valid') is OUT_H x OUT_W; embed in IMAGE_W canvas to match CSV layout
    map = nan(P.OUT_H, P.IMAGE_W, P.NUM_FILTERS);
    for f = 0:P.NUM_FILTERS-1
        kernel = (f + 1) * ones(P.KERNEL_SIZE);
        plane = conv2(img, kernel, 'valid');
        map(:, 1:P.OUT_W, f+1) = plane;
    end
end

function [T, Xvals] = load_psum_csv(csvFile, P) %#ok<INUSD>
    T = readtable(csvFile, 'VariableNamingRule', 'modify');
    % Columns 5..20 are X0..X15 regardless of padded header names
    Xvals = T{:, 5:(4 + P.ARRAY_COLS)};
end

function map = table_to_feature_map(T, Xvals, P)
    map = nan(P.OUT_H, P.IMAGE_W, P.NUM_FILTERS);
    for k = 1:height(T)
        y = T.Tile_Y(k) + 1;
        bx = T.Base_X(k);
        f = T.Filter_ID(k) + 1;
        for j = 0:P.ARRAY_COLS-1
            x = bx + j + 1;
            if x <= P.IMAGE_W
                map(y, x, f) = Xvals(k, j+1);
            end
        end
    end
end

function report_map_diff(hw, ref)
    mask = ~isnan(hw) & ~isnan(ref);
    err = abs(hw(mask) - ref(mask));
    fprintf('  max |error| = %g, mean |error| = %.2f\n', max(err), mean(err));
    fprintf('  exact matches: %d / %d (%.1f%%)\n', ...
        sum(err == 0), numel(err), 100*mean(err == 0));
end

function plot_filter(hw, lb, c2, f)
    figure('Name', sprintf('Filter %d', f));
    subplot(1,3,1); imagesc(hw(:,:,f+1)); axis image; colorbar; title('HW csv');
    subplot(1,3,2); imagesc(lb(:,:,f+1)); axis image; colorbar; title('LineBuf');
    subplot(1,3,3); imagesc(c2(:,:,f+1)); axis image; colorbar; title('Conv2');
end
