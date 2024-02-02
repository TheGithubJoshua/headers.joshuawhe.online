<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVScrubber.h</title>
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

/Frameworks/AVKit.framework/AVScrubber.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AVKit.framework/AVKit (448.1.20)
 */

@interface AVScrubber : UISlider <AVExternalGestureRecognizerPreventing, UIScrollViewDelegate> {
    bool  _collapsed;
    UIImageView * _currentThumbView;
    double  _currentValueChangedTime;
    <AVScrubberDelegate> * _delegate;
    bool  _didHaveLessThanFullScrubbingSpeedSinceTrackingBegin;
    float  _estimatedFrameRate;
    struct CGSize { 
        double width; 
        double height; 
    }  _extrinsicContentSize;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    bool  _hasAlternateAppearance;
    bool  _hasFullScreenAppearance;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _hitRectInsets;
    bool  _included;
    NSArray * _loadedTimeRanges;
    UIView * _loadedTrackOverlayView;
    NSMutableArray * _previousScrubberVelocities;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousTouchLocationInView;
    float  _previousValue;
    double  _previousValueChangeTime;
    float  _rate;
    double  _resolution;
    bool  _scrollScrubbing;
    UIScrollView * _scrollView;
    long long  _scrubbingSpeed;
    bool  _shouldRecoverFromPrecisionScrubbingIfNeeded;
    bool  _slowKnobMovementDetected;
    double  _timestampWhenTrackingEnded;
    double  _trackingStartTime;
    NSTimer * _updateSlowKnobMovementDetectedTimer;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (getter=isCollapsedOrExcluded, nonatomic, readonly) bool collapsedOrExcluded;
@property (nonatomic) UIImageView *currentThumbView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVScrubberDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) float estimatedFrameRate;
@property (nonatomic) struct CGSize { double x1; double x2; } extrinsicContentSize;
@property (nonatomic, readonly) UISelectionFeedbackGenerator *feedbackGenerator;
@property (nonatomic) bool hasAlternateAppearance;
@property (nonatomic) bool hasFullScreenAppearance;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } hitRectInsets;
@property (getter=isIncluded, nonatomic) bool included;
@property (nonatomic, copy) NSArray *loadedTimeRanges;
@property (nonatomic, readonly) UIView *loadedTrackOverlayView;
@property (nonatomic, readonly) NSString *localizedScrubbingSpeedName;
@property (nonatomic, retain) NSMutableArray *previousScrubberVelocities;
@property (nonatomic) float rate;
@property (nonatomic) double resolution;
@property (getter=isScrollScrubbing, nonatomic) bool scrollScrubbing;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic) long long scrubbingSpeed;
@property (nonatomic) bool shouldRecoverFromPrecisionScrubbingIfNeeded;
@property (nonatomic) bool slowKnobMovementDetected;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeIntervalSinceTrackingEnded;
@property (nonatomic) double timestampWhenTrackingEnded;
@property (nonatomic, retain) NSTimer *updateSlowKnobMovementDetectedTimer;

+ (id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;

- (void).cxx_destruct;
- (bool)_shouldTrackTouchAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateSlowKnobMovementDetected;
- (void)_updateSlowKnobMovementDetectedForTargetValue:(float)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)avkit_shouldPreventExternalGestureRecognizerAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (float)clampedEstimatedFrameRate;
- (struct CGPoint { double x1; double x2; })contentOffsetFromValue;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (id)currentThumbView;
- (id)delegate;
- (float)duration;
- (void)endOrCancelTracking;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (float)estimatedFrameRate;
- (struct CGSize { double x1; double x2; })extrinsicContentSize;
- (id)feedbackGenerator;
- (bool)hasAlternateAppearance;
- (bool)hasFullScreenAppearance;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })hitRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isCollapsed;
- (bool)isCollapsedOrExcluded;
- (bool)isIncluded;
- (bool)isScrollScrubbing;
- (bool)isTracking;
- (void)layoutSubviews;
- (id)loadedTimeRanges;
- (id)loadedTrackOverlayView;
- (id)localizedScrubbingSpeedName;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })maximumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })minimumValueImageRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)normalizedPosition;
- (double)normalizedScrollOffset;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)previousScrubberVelocities;
- (float)rate;
- (double)resolution;
- (id)scrollView;
- (long long)scrubbingSpeed;
- (void)setCollapsed:(bool)arg1;
- (void)setCurrentThumbView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEstimatedFrameRate:(float)arg1;
- (void)setExtrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHasAlternateAppearance:(bool)arg1;
- (void)setHasFullScreenAppearance:(bool)arg1;
- (void)setHitRectInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIncluded:(bool)arg1;
- (void)setLoadedTimeRanges:(id)arg1;
- (void)setPreviousScrubberVelocities:(id)arg1;
- (void)setRate:(float)arg1;
- (void)setResolution:(double)arg1;
- (void)setScrollScrubbing:(bool)arg1;
- (void)setScrollView:(id)arg1;
- (void)setScrubbingSpeed:(long long)arg1;
- (void)setShouldRecoverFromPrecisionScrubbingIfNeeded:(bool)arg1;
- (void)setSlowKnobMovementDetected:(bool)arg1;
- (void)setTimestampWhenTrackingEnded:(double)arg1;
- (void)setUpdateSlowKnobMovementDetectedTimer:(id)arg1;
- (void)setValue:(float)arg1;
- (bool)shouldRecoverFromPrecisionScrubbingIfNeeded;
- (bool)slowKnobMovementDetected;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (double)timeIntervalSinceTrackingEnded;
- (double)timestampWhenTrackingEnded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateScrollViewContentSizeAndOffsetIfNeeded;
- (id)updateSlowKnobMovementDetectedTimer;
- (float)valueFromScrollView;

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