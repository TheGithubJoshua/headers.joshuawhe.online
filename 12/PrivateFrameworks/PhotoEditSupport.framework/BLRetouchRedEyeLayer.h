<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BLRetouchRedEyeLayer.h</title>
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

/PrivateFrameworks/PhotoEditSupport.framework/BLRetouchRedEyeLayer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport (1)
 */

@interface BLRetouchRedEyeLayer : BLRetouchLayer {
    CIImage * _ciSourceImage;
    NSMutableArray * _eyePoints;
    UIImage * _repairSourceImage;
    UIImage * _repairedImage;
}

@property (nonatomic, copy) NSMutableArray *eyePoints;
@property (nonatomic, retain) UIImage *repairSourceImage;
@property (nonatomic, retain) UIImage *repairedImage;

+ (id)addAutoRedEyeCorrection:(id)arg1 toLayerData:(id)arg2 maskSize:(struct CGSize { double x1; double x2; })arg3 newTimestampIncrement:(double*)arg4;
+ (long long)indexOfPointNear:(struct CGPoint { double x1; double x2; })arg1 inEyePoints:(id)arg2 andMaskSize:(struct CGSize { double x1; double x2; })arg3;

- (void).cxx_destruct;
- (float)amount;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })area;
- (void)clearRedEyes;
- (void)dealloc;
- (id)eyePoints;
- (bool)hasLayerMask;
- (void)hasLayerMaskDidChange;
- (long long)indexOfPointNear:(struct CGPoint { double x1; double x2; })arg1;
- (id)layerData;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maskFrame;
- (struct CGContext { }*)newContextForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inDestRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andScale:(double)arg3;
- (void)repairRedEyes;
- (id)repairSourceImage;
- (id)repairedImage;
- (void)setEyePoints:(id)arg1;
- (void)setLayerData:(id)arg1;
- (void)setRepairSourceImage:(id)arg1;
- (void)setRepairedImage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tapAtPoint:(struct CGPoint { double x1; double x2; })arg1 actualLocation:(struct CGPoint { double x1; double x2; }*)arg2 foundEye:(bool*)arg3 addedEye:(bool*)arg4;

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
