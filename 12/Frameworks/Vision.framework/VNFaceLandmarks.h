<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VNFaceLandmarks.h</title>
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

/Frameworks/Vision.framework/VNFaceLandmarks.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Vision.framework/Vision (2.0.70)
 */

@interface VNFaceLandmarks : NSObject {
    struct _Geometry2D_rect2D_ { 
        struct _Geometry2D_point2D_ { 
            float x; 
            float y; 
        } origin; 
        struct _Geometry2D_size2D_ { 
            float height; 
            float width; 
        } size; 
    }  _alignedBBox;
    float  _confidence;
    unsigned long long  _pointCount;
    NSData * _pointsData;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _userFacingBBox;
}

@property struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; } alignedBBox;
@property (readonly) float confidence;
@property unsigned long long pointCount;
@property (retain) NSData *pointsData;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } userFacingBBox;

- (void).cxx_destruct;
- (struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })alignedBBox;
- (float)confidence;
- (void*)createPointArray:(const int*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)initWithPointsData:(id)arg1 pointCount:(unsigned long long)arg2 userFacingBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 alignedBBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg4 landmarkScore:(float)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isUserFacingBBoxEquivalentToAlignedBBox;
- (unsigned long long)pointCount;
- (id)pointsData;
- (void)setAlignedBBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPointCount:(unsigned long long)arg1;
- (void)setPointsData:(id)arg1;
- (void)setUserFacingBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })userFacingBBox;

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