<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUTiltWheelControl.h</title>
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

/PrivateFrameworks/PhotosEditUI.framework/PUTiltWheelControl.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI (1)
 */

@interface PUTiltWheelControl : UIControl <PUTiltWheelDataSource> {
    bool  __needsDataReload;
    struct CGPoint { 
        double x; 
        double y; 
    }  __panPreviousPoint;
    PXUISnappingController * __snappingController;
    PUTiltWheel * __tiltWheel;
    PUTiltWheelTriangleView * __triangleView;
    double  _maxTiltAngle;
    double  _minTiltAngle;
    double  _tiltAngle;
    int  _wheelOrientation;
}

@property (setter=_setNeedsDataReload:, nonatomic) bool _needsDataReload;
@property (setter=_setPanPreviousPoint:, nonatomic) struct CGPoint { double x1; double x2; } _panPreviousPoint;
@property (setter=_setSnappingController:, nonatomic, retain) PXUISnappingController *_snappingController;
@property (setter=_setTiltWheel:, nonatomic, retain) PUTiltWheel *_tiltWheel;
@property (setter=_setTriangleView:, nonatomic, retain) PUTiltWheelTriangleView *_triangleView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maxTiltAngle;
@property (nonatomic) double minTiltAngle;
@property (readonly) Class superclass;
@property (nonatomic) double tiltAngle;
@property (nonatomic) int wheelOrientation;

- (void).cxx_destruct;
- (double)_angleBetweenPoint:(struct CGPoint { double x1; double x2; })arg1 andPoint:(struct CGPoint { double x1; double x2; })arg2 measuredFrom:(struct CGPoint { double x1; double x2; })arg3;
- (double)_circumferenceVelocityInPan:(id)arg1;
- (bool)_needsDataReload;
- (struct CGPoint { double x1; double x2; })_panPreviousPoint;
- (void)_setNeedsDataReload:(bool)arg1;
- (void)_setPanPreviousPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setSnappingController:(id)arg1;
- (void)_setTiltAngleFromUserInteraction:(double)arg1;
- (void)_setTiltWheel:(id)arg1;
- (void)_setTriangleView:(id)arg1;
- (id)_snappingController;
- (double)_tiltAngleForDraggedRotation:(double)arg1;
- (id)_tiltWheel;
- (double)_tiltWheelSize;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForTiltAngle:(double)arg1;
- (id)_triangleView;
- (void)_updateTiltWheelConstraintsIfNeeded;
- (void)_updateTiltWheelTransform;
- (void)_updateTriangleConstraintsIfNeeded;
- (void)handlePanGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maxTiltAngle;
- (double)minTiltAngle;
- (void)setMaxTiltAngle:(double)arg1;
- (void)setMinTiltAngle:(double)arg1;
- (void)setTiltAngle:(double)arg1;
- (void)setTiltAngle:(double)arg1 animated:(bool)arg2;
- (void)setWheelOrientation:(int)arg1;
- (double)tiltAngle;
- (unsigned long long)tiltWheelMarkedIndicatorStep:(id)arg1;
- (long long)tiltWheelMaximumIndicatedDegree:(id)arg1;
- (long long)tiltWheelMinimumIndicatedDegree:(id)arg1;
- (unsigned long long)tiltWheelNumericIndicatorStep:(id)arg1;
- (int)tiltWheelOrientation:(id)arg1;
- (void)updateConstraints;
- (int)wheelOrientation;

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