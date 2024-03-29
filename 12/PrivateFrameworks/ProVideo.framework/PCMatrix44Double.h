<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PCMatrix44Double.h</title>
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

/PrivateFrameworks/ProVideo.framework/PCMatrix44Double.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo (398.0.87)
 */

@interface PCMatrix44Double : NSObject <NSCopying, NSSecureCoding> {
    double  _m;
    struct PCMatrix44Tmpl<double> { double x1[4][4]; } * _pcMatrix;
}

+ (bool)supportsSecureCoding;

- (id)array;
- (id)compactDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (double)doubleValueAtRow:(unsigned int)arg1 col:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)getDoubles:(double)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDoubles:(double)arg1;
- (id)initWithDoubles:(double)arg1 external:(bool)arg2;
- (id)initWithPCMatrix:(struct PCMatrix44Tmpl<double> { double x1[4][4]; }*)arg1;
- (bool)invert;
- (bool)invert2D;
- (bool)isEqual:(id)arg1;
- (bool)isIdentity;
- (void)leftFlipAboutY:(double)arg1;
- (void)leftMult:(id)arg1;
- (void)leftRotate:(double)arg1 axis:(int)arg2;
- (void)leftScaleX:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3;
- (void)leftShearX:(double)arg1 shearY:(double)arg2;
- (void)leftTranslateX:(double)arg1 translateY:(double)arg2 translateZ:(double)arg3;
- (void)makeIdentity;
- (id)newPlanarTransformTo:(id)arg1;
- (id)newTransformTo:(id)arg1;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; }*)pcMatrix;
- (void)rightMult:(id)arg1;
- (void)rightRotate:(double)arg1 axis:(int)arg2;
- (void)rightScaleX:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3;
- (void)rightShearX:(double)arg1 shearY:(double)arg2;
- (void)rightTranslateX:(double)arg1 translateY:(double)arg2 translateZ:(double)arg3;
- (void)scaleSizeX:(double)arg1 sizeY:(double)arg2 sizeZ:(double)arg3 scaledSizeX:(double*)arg4 scaledSizeY:(double*)arg5 scaledSizeZ:(double*)arg6;
- (void)setDoubleValue:(double)arg1 atRow:(unsigned int)arg2 col:(unsigned int)arg3;
- (void)setDoubles:(double)arg1;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; })transformInfo;
- (void)transpose;

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
