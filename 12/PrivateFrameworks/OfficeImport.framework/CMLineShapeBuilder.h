<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CMLineShapeBuilder.h</title>
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

/PrivateFrameworks/OfficeImport.framework/CMLineShapeBuilder.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport (257.9)
 */

@interface CMLineShapeBuilder : CMShapeBuilder {
    OADStroke * _stroke;
}

- (void).cxx_destruct;
- (float)_adjustedCoefAtIndex:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundingBoxForLineEnd:(id)arg1;
- (float)_getRotationFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2 withBounds:(id)arg3;
- (void)_renderBentConnector2InPath:(struct CGPath { }*)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 andOrientedBounds:(id)arg3 headSrc:(struct CGPoint { double x1; double x2; }*)arg4 headDst:(struct CGPoint { double x1; double x2; }*)arg5 tailSrc:(struct CGPoint { double x1; double x2; }*)arg6 tailDst:(struct CGPoint { double x1; double x2; }*)arg7;
- (void)_renderBentConnector3InPath:(struct CGPath { }*)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 andOrientedBounds:(id)arg3 headSrc:(struct CGPoint { double x1; double x2; }*)arg4 headDst:(struct CGPoint { double x1; double x2; }*)arg5 tailSrc:(struct CGPoint { double x1; double x2; }*)arg6 tailDst:(struct CGPoint { double x1; double x2; }*)arg7;
- (void)_renderLineEnd:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 withOrientation:(float)arg3 inPath:(struct CGPath { }*)arg4;
- (void)_renderStraightConnector1InPath:(struct CGPath { }*)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 andOrientedBounds:(id)arg3 headSrc:(struct CGPoint { double x1; double x2; }*)arg4 headDst:(struct CGPoint { double x1; double x2; }*)arg5 tailSrc:(struct CGPoint { double x1; double x2; }*)arg6 tailDst:(struct CGPoint { double x1; double x2; }*)arg7;
- (struct CGPath { }*)copyShapeWithTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setStroke:(id)arg1;

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