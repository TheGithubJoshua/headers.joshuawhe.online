<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PVPanAndZoomManager.h</title>
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

/PrivateFrameworks/ProVideo.framework/PVPanAndZoomManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo (398.0.87)
 */

@interface PVPanAndZoomManager : NSObject {
    int  _clipTransformInitialStartOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _destSize;
    bool  _keyframeTransforms;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastTransformAnimationTime;
    double  _maxScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _mediaSize;
    int  _mediaStartOffset;
    double  _minScale;
    int  _pendingTransformCount;
    double  _scaleWhileSnapped;
    bool  _skipFirstSnapToEdge;
    NSTimer * _snapToEdgeTimer;
    int  _timeScale;
    NSMutableArray * _transforms;
    bool  _verticalMedia;
    struct PVTransformAnimationInfo { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } time; 
        struct CGPoint { 
            double x; 
            double y; 
        } translation; 
        double scale; 
        double rotation; 
    }  _workingTransformPan;
    struct PVTransformAnimationInfo { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } time; 
        struct CGPoint { 
            double x; 
            double y; 
        } translation; 
        double scale; 
        double rotation; 
    }  _workingTransformRotate;
    struct PVTransformAnimationInfo { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } time; 
        struct CGPoint { 
            double x; 
            double y; 
        } translation; 
        double scale; 
        double rotation; 
    }  _workingTransformScale;
}

@property (nonatomic) int clipTransformInitialStartOffset;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)applyTransform:(struct PVTransformAnimationInfo { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; }*)arg1 shouldCommit:(bool)arg2 outTransform:(id*)arg3;
- (void)beginEditingTransform:(id)arg1 mediaSize:(struct CGSize { double x1; double x2; })arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 atTime:(int)arg4 keyframeTransforms:(bool)arg5 mediaStartOffset:(int)arg6 timeScale:(int)arg7 transformType:(int)arg8;
- (int)clipTransformInitialStartOffset;
- (void)endEditingTransform:(id)arg1 transformType:(int)arg2 outTransform:(id*)arg3;
- (id)init;
- (bool)isEditingTransform;
- (double)maximumX:(double)arg1 scale:(double)arg2;
- (double)maximumY:(double)arg1 scale:(double)arg2;
- (void)panWithDelta:(struct CGPoint { double x1; double x2; })arg1 time:(int)arg2 outTransform:(id*)arg3;
- (void)prepareClipForScale:(struct CGSize { double x1; double x2; })arg1 destSize:(struct CGSize { double x1; double x2; })arg2;
- (void)rotateWithDelta:(double)arg1 location:(struct CGPoint { double x1; double x2; })arg2 time:(int)arg3 outTransform:(id*)arg4;
- (id)scaleClip:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 time:(int)arg3 atLocation:(struct CGPoint { double x1; double x2; })arg4;
- (void)scaleWithDelta:(double)arg1 location:(struct CGPoint { double x1; double x2; })arg2 time:(int)arg3 outTransform:(id*)arg4;
- (void)setClipTransformInitialStartOffset:(int)arg1;
- (void)snapToEdgeEnd:(id)arg1;
- (bool)tooMuchX:(double)arg1 scale:(double)arg2;
- (bool)tooMuchY:(double)arg1 scale:(double)arg2;
- (void)updateTransform:(id)arg1 location:(struct CGPoint { double x1; double x2; })arg2 atTime:(int)arg3 delta:(struct CGPoint { double x1; double x2; })arg4 transformType:(int)arg5 outTransform:(id*)arg6;
- (void)updateTransformScale:(id)arg1 mediaSize:(struct CGSize { double x1; double x2; })arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 location:(struct CGPoint { double x1; double x2; })arg4 outTransform:(id*)arg5;

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