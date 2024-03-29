<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXPinchTracker.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXPinchTracker.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXPinchTracker : PXObservable <PXMutablePinchTracker> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    bool  _didSetInitialValues;
    PXNumberFilter * _horizontalVelocityFilter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialCenter;
    double  _initialPinchAngle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPinchCenter;
    double  _initialPinchDistance;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialPinchOrigin;
    struct CGSize { 
        double width; 
        double height; 
    }  _initialSize;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _initialTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _initialTransformInverse;
    struct { 
        bool initialValues; 
        bool geometry; 
    }  _needsUpdateFlags;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pinchLocation1;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pinchLocation2;
    PXNumberFilter * _pinchRotationFilter;
    double  _rotationHysteris;
    PXNumberFilter * _rotationalVelocityFilter;
    double  _scale;
    long long  _scaleDirection;
    PXChangeDirectionNumberFilter * _scaleDirectionFilter;
    double  _scaleHysteresis;
    PXNumberFilter * _scaleVelocityFilter;
    bool  _shouldResize;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    double  _time;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _transform;
    struct PXDisplayVelocity { 
        double x; 
        double y; 
        double scale; 
        double rotation; 
    }  _velocity;
    PXNumberFilter * _verticalVelocityFilter;
}

@property (setter=_setCenter:, nonatomic) struct CGPoint { double x1; double x2; } center;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } pinchLocation1;
@property (nonatomic) struct CGPoint { double x1; double x2; } pinchLocation2;
@property (nonatomic, readonly) double rotationHysteris;
@property (setter=_setScale:, nonatomic) double scale;
@property (setter=_setScaleDirection:, nonatomic) long long scaleDirection;
@property (nonatomic, readonly) double scaleHysteresis;
@property (nonatomic, readonly) bool shouldResize;
@property (setter=_setSize:, nonatomic) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic) double time;
@property (setter=_setTransform:, nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } transform;
@property (setter=_setVelocity:, nonatomic) struct PXDisplayVelocity { double x1; double x2; double x3; double x4; } velocity;

- (void).cxx_destruct;
- (void)_invalidateGeometry;
- (void)_invalidateInitialValues;
- (bool)_needsUpdate;
- (void)_setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setNeedsUpdate;
- (void)_setScale:(double)arg1;
- (void)_setScaleDirection:(long long)arg1;
- (void)_setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)_setVelocity:(struct PXDisplayVelocity { double x1; double x2; double x3; double x4; })arg1;
- (void)_transformPinchLocation1:(struct CGPoint { double x1; double x2; })arg1 location2:(struct CGPoint { double x1; double x2; })arg2 intoCenter:(struct CGPoint { double x1; double x2; }*)arg3 distance:(double*)arg4 angle:(double*)arg5;
- (void)_updateGeometryIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateInitialValuesIfNeeded;
- (struct CGPoint { double x1; double x2; })center;
- (void)didPerformChanges;
- (id)init;
- (id)initWithCenter:(struct CGPoint { double x1; double x2; })arg1 size:(struct CGSize { double x1; double x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (struct CGPoint { double x1; double x2; })pinchLocation1;
- (struct CGPoint { double x1; double x2; })pinchLocation2;
- (double)rotationHysteris;
- (double)scale;
- (long long)scaleDirection;
- (double)scaleHysteresis;
- (void)setPinchLocation1:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPinchLocation2:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTime:(double)arg1;
- (bool)shouldResize;
- (struct CGSize { double x1; double x2; })size;
- (double)time;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (struct PXDisplayVelocity { double x1; double x2; double x3; double x4; })velocity;

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
