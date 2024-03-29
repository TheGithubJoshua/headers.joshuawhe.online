<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTKAnalogHandsView.h</title>
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

/PrivateFrameworks/NanoTimeKitCompanion.framework/NTKAnalogHandsView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion (1)
 */

@interface NTKAnalogHandsView : UIView <NTKTimeView> {
    bool  _animatingToNewDate;
    NSTimer * _animationUpdateTimer;
    NSCalendar * _calendar;
    NTKColoringImageView * _colorTransitionSecondHandLargeCircleView;
    NTKColoringImageView * _colorTransitionSecondHandLowerView;
    NTKColoringImageView * _colorTransitionSecondHandSmallCircleView;
    NTKColoringImageView * _colorTransitionSecondHandUpperView;
    long long  _dataMode;
    CLKDevice * _device;
    NSNumber * _displayLinkToken;
    bool  _frozen;
    CALayer * _hourHandTransitionBodyLayer;
    CALayer * _hourHandTransitionStemLayer;
    NTKHandView * _hourHandView;
    NTKHandView * _hourHandView_clientSide;
    UIColor * _inlayColor;
    CALayer * _minuteHandDot;
    CALayer * _minuteHandTransitionBodyLayer;
    CALayer * _minuteHandTransitionPegLayer;
    CALayer * _minuteHandTransitionStemLayer;
    NTKHandView * _minuteHandView;
    NTKHandView * _minuteHandView_clientSide;
    NSDate * _overrideDate;
    CALayer * _secondHandDot;
    NTKHandView * _secondHandView;
    NTKHandView * _secondHandView_clientSide;
    bool  _shouldRestoreSecondHandAfterScrubbing;
    bool  _showDebugClientSideHands;
    double  _timeOffset;
    bool  _timeScrubbing;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic) long long dataMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLKDevice *device;
@property (getter=isFrozen, nonatomic) bool frozen;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NTKHandView *hourHandView;
@property (nonatomic, readonly) NTKHandView *hourHandView_clientSide;
@property (nonatomic, retain) UIColor *inlayColor;
@property (nonatomic, retain) CALayer *minuteHandDot;
@property (nonatomic, retain) NTKHandView *minuteHandView;
@property (nonatomic, readonly) NTKHandView *minuteHandView_clientSide;
@property (nonatomic, readonly) NSDate *overrideDate;
@property (nonatomic, retain) NTKHandView *secondHandView;
@property (nonatomic, readonly) NTKHandView *secondHandView_clientSide;
@property (nonatomic) bool shouldRestoreSecondHandAfterScrubbing;
@property (nonatomic) bool showDebugClientSideHands;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool timeScrubbing;

+ (long long)preferredCountOfInstancesToCache;

- (void).cxx_destruct;
- (void)_accessibilityInvalidateElements;
- (void)_addHourMinuteHandsTransitionLayers;
- (bool)_canRunTimeAnimation;
- (void)_deregisterFromDisplayLinkManager;
- (bool)_dontRepointDebugHands;
- (void)_enumerateHandViews:(id /* block */)arg1;
- (void)_enumerateSecondHandViewsWithBlock:(id /* block */)arg1;
- (void)_handleDisplayLink;
- (void)_removeColorTransitionViews;
- (void)_removeHourMinuteHandsTransitionLayers;
- (void)_repointDebugHandsToCurrentTime;
- (void)_significantTimeChanged;
- (void)_startNewTimeAnimation;
- (void)_stopTimeAnimation;
- (void)applyHourMinuteHandsStrokeColor:(id)arg1 fillColor:(id)arg2;
- (void)applyHourMinuteHandsTransitionFraction:(double)arg1 fromStrokeColor:(id)arg2 fromFillColor:(id)arg3 toStrokeColor:(id)arg4 toFillColor:(id)arg5;
- (void)applySecondHandColor:(id)arg1;
- (void)applySecondHandDotColor:(id)arg1;
- (void)applySecondHandTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (id)calendar;
- (long long)dataMode;
- (void)dealloc;
- (id)device;
- (void)didMoveToWindow;
- (id)displayTime;
- (void)endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)hourHandView;
- (id)hourHandView_clientSide;
- (id)initForDevice:(id)arg1;
- (id)inlayColor;
- (bool)isFrozen;
- (void)layoutSubviews;
- (id)minuteHandDot;
- (id)minuteHandView;
- (id)minuteHandView_clientSide;
- (id)overrideDate;
- (void)scrubToDate:(id)arg1 animated:(bool)arg2;
- (id)secondHandView;
- (id)secondHandView_clientSide;
- (void)setDataMode:(long long)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setHourHandView:(id)arg1;
- (void)setInlayColor:(id)arg1;
- (void)setMinuteHandDot:(id)arg1;
- (void)setMinuteHandView:(id)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setSecondHandView:(id)arg1;
- (void)setShouldRestoreSecondHandAfterScrubbing:(bool)arg1;
- (void)setShowDebugClientSideHands:(bool)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setupDefaultMinuteHandDotIfNecessary;
- (bool)shouldRestoreSecondHandAfterScrubbing;
- (bool)showDebugClientSideHands;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)timeScrubbing;

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
