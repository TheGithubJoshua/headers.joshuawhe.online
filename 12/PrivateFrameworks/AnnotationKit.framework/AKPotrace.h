<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AKPotrace.h</title>
    <meta name="viewport" content="width=device-width">
    <style>
    body { margin: 1em; }
    pre { font: 11pt/1.25 ui-monospace, "SF Mono", Menlo, monospace; }
    a { color: #af52de; }
    pre { white-space: pre-wrap; }
    header, footer { color: #8e8e93; }
    header { white-space: pre; }
    footer { max-width: 700px; }
    hr { border: 0; border-top: 1px solid #c6c6c8; }
    .download { text-decoration: none; }
    @media (prefers-color-scheme: dark) {
        body { background: black; color: white; }
        a { color: #bf5af2; }
        hr { border-top-color: #333335; }
    }
    </style>
</head>
<body>
<pre><header>
 ___          _   _             ___
| _ \_  _ _ _| |_(_)_ __  ___  | _ )_ _ _____ __ _____ ___ _ _
|   / || | ' \  _| | '  \/ -_) | _ \ '_/ _ \ V  V (_-// -_) '_|
|_|_\\_,_|_||_\__|_|_|_|_\___| |___/_| \___/\_/\_//__/\___|_|


</header><hr>

/PrivateFrameworks/AnnotationKit.framework/AKPotrace.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit (232.3.30)
 */

@interface AKPotrace : NSObject {
    struct CGPath { } * _cachedPath;
    struct potrace_bitmap_s { int x1; int x2; int x3; unsigned long long *x4; } * _potraceBitmap;
    struct potrace_param_s { int x1; int x2; double x3; int x4; double x5; struct potrace_progress_s { int (*x_6_1_1)(); void *x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; } x6; } * _potraceParameters;
}

@property double alphamax;
@property int opticurve;
@property double opttolerance;
@property int turdsize;
@property int turnpolicy;

+ (struct CGPath { }*)newCGPathFromPotracePath:(struct potrace_path_s { int x1; int x2; struct potrace_curve_s { int x_3_1_1; int *x_3_1_2; struct potrace_dpoint_s {} *x_3_1_3[3]; } x3; struct potrace_path_s {} *x4; struct potrace_path_s {} *x5; struct potrace_path_s {} *x6; struct potrace_privpath_s {} *x7; }*)arg1;

- (struct CGPath { }*)CGPath;
- (void)_clearPathIfNecessary;
- (void)_generatePath;
- (double)alphamax;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { }*)arg1 flipped:(bool)arg2 whiteIsInside:(bool)arg3;
- (int)opticurve;
- (double)opttolerance;
- (void)setAlphamax:(double)arg1;
- (void)setOpticurve:(int)arg1;
- (void)setOpttolerance:(double)arg1;
- (void)setTurdsize:(int)arg1;
- (void)setTurnpolicy:(int)arg1;
- (int)turdsize;
- (int)turnpolicy;

@end


<hr><footer>
Source code: <a href="https://github.com/hbang/RuntimeBrowser">https://github.com/hbang/RuntimeBrowser</a>

Authors:
  Ezra Epstein (eepstein@prajna.com)
  Nicolas Seriot (nicolas@seriot.ch)
  HASHBANG Productions

Copyright &copy; 2002 by Prajna IT Consulting
Copyright &copy; 2015 by <a href="http://www.seriot.ch">Nicolas Seriot</a>
Copyright &copy; 2021 by <a href="https://hashbang.productions">HASHBANG Productions</a>

THIS PROGRAM AND THIS CODE COME WITH ABSOLUTELY NO WARRANTY. THIS CODE HAS BEEN PROVIDED "AS IS" AND THE RESPONSIBILITY FOR ITS OPERATIONS IS 100% YOURS.

RuntimeBrowser is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

RuntimeBrowser is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with RuntimeBrowser (in a file called "COPYING.txt"); if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA</footer></pre>
</body>
</html>
