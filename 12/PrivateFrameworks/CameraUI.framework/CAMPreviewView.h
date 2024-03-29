<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CAMPreviewView.h</title>
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

/PrivateFrameworks/CameraUI.framework/CAMPreviewView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI (1)
 */

@interface CAMPreviewView : UIView {
    int  __exposureBiasSide;
    NSMutableDictionary * __faceIndicators;
    NSMutableDictionary * __internalMRCIndicatorViews;
    NSMutableDictionary * __internalTrackedSubjectIndicatorsByIdentifier;
    UILabel * __simulatorLabel;
    double  _bottomContentInset;
    CAMSubjectIndicatorView * _centeredSubjectIndicatorView;
    CAMFocusIndicatorView * _continuousIndicator;
    CAMGridView * _gridView;
    UIView * _indicatorContainerView;
    CAMLevelIndicatorView * _levelView;
    long long  _orientation;
    CAMFocusIndicatorView * _pointIndicator;
    CAMStageLightOverlayView * _stageLightOverlayView;
    <CAMPreviewViewSubjectIndicatorDelegate> * _subjectIndicatorDelegate;
    CAMVideoPreviewView * _videoPreviewView;
}

@property (nonatomic) int _exposureBiasSide;
@property (nonatomic, readonly) NSMutableDictionary *_faceIndicators;
@property (nonatomic, readonly) NSMutableDictionary *_internalMRCIndicatorViews;
@property (nonatomic, readonly) NSMutableDictionary *_internalTrackedSubjectIndicatorsByIdentifier;
@property (nonatomic, readonly) UILabel *_simulatorLabel;
@property (nonatomic) double bottomContentInset;
@property (nonatomic, retain) CAMSubjectIndicatorView *centeredSubjectIndicatorView;
@property (nonatomic, retain) CAMFocusIndicatorView *continuousIndicator;
@property (nonatomic, readonly) NSDictionary *faceIndicatorsByIdentifier;
@property (nonatomic) CAMGridView *gridView;
@property (nonatomic, readonly) UIView *indicatorContainerView;
@property (nonatomic) CAMLevelIndicatorView *levelView;
@property (nonatomic, readonly) NSDictionary *mrcIndicatorViews;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) CAMFocusIndicatorView *pointIndicator;
@property (nonatomic, retain) CAMStageLightOverlayView *stageLightOverlayView;
@property (nonatomic) <CAMPreviewViewSubjectIndicatorDelegate> *subjectIndicatorDelegate;
@property (nonatomic, readonly) NSDictionary *trackedSubjectIndicatorsByIdentifier;
@property (nonatomic, retain) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic, readonly) CAMVideoPreviewView *videoPreviewView;

+ (Class)layerClass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_aspectFaceRectFromSquareFaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 angle:(double)arg2;
- (int)_exposureBiasSide;
- (id)_faceIndicators;
- (int)_faceOrientationForRollAngle:(double)arg1;
- (id)_internalMRCIndicatorViews;
- (id)_internalTrackedSubjectIndicatorsByIdentifier;
- (id)_simulatorLabel;
- (void)addFaceIndicator:(id)arg1 forIdentifier:(long long)arg2;
- (void)addMRCIndicator:(id)arg1 forIdentifier:(id)arg2;
- (void)addTrackedSubjectIndicator:(id)arg1 forIdentifier:(long long)arg2;
- (double)bottomContentInset;
- (struct CGPoint { double x1; double x2; })captureDevicePointOfInterestForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)centeredSubjectIndicatorView;
- (id)continuousIndicator;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceIndicatorFrameForFaceResult:(id)arg1;
- (id)faceIndicatorsByIdentifier;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSubjectIndicator:(id)arg1 andFaceResult:(id)arg2 useFixedSize:(bool)arg3;
- (id)gridView;
- (void)indicatePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (id)indicatorContainerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)levelView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mrcIndicatorFrameForMRCResult:(id)arg1;
- (id)mrcIndicatorViews;
- (long long)orientation;
- (struct CGPoint { double x1; double x2; })pointForCaptureDevicePointOfInterest:(struct CGPoint { double x1; double x2; })arg1;
- (id)pointIndicator;
- (void)removeFaceIndicatorForIdentifier:(long long)arg1;
- (void)removeMRCIndicatorForIdentifier:(id)arg1;
- (void)removeTrackedSubjectIndicatorForIdentifier:(long long)arg1;
- (void)setBottomContentInset:(double)arg1;
- (void)setCenteredSubjectIndicatorView:(id)arg1;
- (void)setContinuousIndicator:(id)arg1;
- (void)setGridView:(id)arg1;
- (void)setLevelView:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setPointIndicator:(id)arg1;
- (void)setStageLightOverlayView:(id)arg1;
- (void)setSubjectIndicatorDelegate:(id)arg1;
- (void)setVideoPreviewLayer:(id)arg1;
- (void)set_exposureBiasSide:(int)arg1;
- (id)stageLightOverlayView;
- (id)subjectIndicatorDelegate;
- (id)trackedSubjectIndicatorsByIdentifier;
- (id)videoPreviewLayer;
- (id)videoPreviewView;

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
