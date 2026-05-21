%% manual_conv_check.m
% Step-by-step hand-check for ONE output pixel (default: y=0, x=0, filter 15).
%
% Shows:
%   (A) Standard 3x3 patch from the test image (conv2 layout)
%   (B) Nine pixels selected by activation_line_buffer.sv (RTL layout)
%   (C) Expected psums for both, and value from psum_results.csv if present
%
% Usage:
%   manual_conv_check
%   manual_conv_check(0, 0, 15)   % out_y, out_x, filter_id

function manual_conv_check(out_y, out_x, filt)
    if nargin < 1, out_y = 0; end
    if nargin < 2, out_x = 0; end
    if nargin < 3, filt = 15; end

    P.IMAGE_W = 28; P.IMAGE_H = 28; P.KERNEL_SIZE = 3;
    img = zeros(P.IMAGE_H, P.IMAGE_W);
    for y = 0:P.IMAGE_H-1
        for x = 0:P.IMAGE_W-1
            img(y+1,x+1) = mod(y*P.IMAGE_W + x, 100);
        end
    end

    w = filt + 1;
    fprintf('Output position: out_y=%d, out_x=%d, filter=%d, weight=%d\n\n', out_y, out_x, filt, w);

    fprintf('(A) Standard conv2 patch img(out_y+(0:2), out_x+(0:2)):\n');
    patch = img(out_y+(1:3), out_x+(1:3));
    disp(patch);
    psum_std = sum(patch(:)) * w;
    fprintf('    sum(patch)*weight = %d\n\n', psum_std);

    fprintf('(B) RTL line-buffer taps (ky,kx) -> pixel (activation_line_buffer.sv):\n');
    reg = zeros(1, P.KERNEL_SIZE*P.IMAGE_W);
    for i = 0:numel(reg)-1
        addr = out_y*P.IMAGE_W + i;
        if addr < P.IMAGE_W*P.IMAGE_H
            reg(i+1) = mod(addr, 100);
        end
    end
    psum_rtl = 0;
    for ky = 0:2
        for kx = 0:2
            tap_x = out_x + kx;
            idx = ky*P.IMAGE_W + tap_x;
            if tap_x < 0 || tap_x >= P.IMAGE_W || idx < 0 || idx >= numel(reg)
                val = 0;
            else
                val = reg(idx+1);
            end
            fprintf('    ky=%d kx=%d  linebuf_idx=%3d  pixel=%3d  contrib=%4d\n', ...
                ky, kx, idx, val, val*w);
            psum_rtl = psum_rtl + val*w;
        end
    end
    fprintf('    RTL line-buffer psum (X0) = %d\n\n', psum_rtl);

    csvFile = fullfile(fileparts(mfilename('fullpath')), 'psum_results.csv');
    if isfile(csvFile)
        T = readtable(csvFile, 'VariableNamingRule', 'modify');
        tile_x = (out_x >= 16);
        ty = out_y;
        bx = tile_x * 16;
        row = T(T.Tile_Y == ty & T.Base_X == bx & T.Filter_ID == filt, :);
        if ~isempty(row)
            hw = row{1, 5};
            fprintf('(C) HW csv X0 = %d  (delta vs RTL LB = %d, vs conv2 = %d)\n', ...
                hw, hw - psum_rtl, hw - psum_std);
        else
            fprintf('(C) No matching row in psum_results.csv\n');
        end
    end
end
