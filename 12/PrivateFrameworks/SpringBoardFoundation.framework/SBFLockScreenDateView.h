<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SBFLockScreenDateView.h</title>
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

/PrivateFrameworks/SpringBoardFoundation.framework/SBFLockScreenDateView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation (1)
 */

@interface SBFLockScreenDateView : UIView <SFChargingVisualInformationProvider> {
    double  _alignmentPercent;
    SBFLockScreenDateSubtitleView * _customSubtitleView;
    NSDate * _date;
    SBFLockScreenDateSubtitleDateView * _dateSubtitleView;
    double  _dateToTimeStretch;
    _UILegibilitySettings * _legibilitySettings;
    UIColor * _overrideTextColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _restingFrame;
    double  _subtitleAlpha;
    double  _subtitleLegibilityStrength;
    double  _timeAlpha;
    SBUILegibilityLabel * _timeLabel;
    double  _timeLegibilityStrength;
    bool  _useCompactDateFormat;
}

@property (nonatomic) double alignmentPercent;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } chargingVisualInformationTimeFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } chargingVisualInformationTimeSubtitleFrame;
@property (nonatomic, readonly) double contentAlpha;
@property (nonatomic, retain) SBFLockScreenDateSubtitleView *customSubtitleView;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) double dateToTimeStretch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } restingFrame;
@property (nonatomic, readonly) double subtitleBaselineOffsetFromOrigin;
@property (getter=isSubtitleHidden, nonatomic) bool subtitleHidden;
@property (nonatomic) double subtitleLegibilityStrength;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, readonly) double timeBaselineOffsetFromOrigin;
@property (nonatomic) double timeLegibilityStrength;
@property (nonatomic) bool useCompactDateFormat;

+ (double)defaultHeight;
+ (id)timeFont;
+ (struct { double x1; double x2; double x3; double x4; })timeFontMetrics;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_cachedGlyphInsetsTimeFontForString:(id)arg1;
- (void)_setSubtitleAlpha:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_subtitleViewFrameForView:(id)arg1 alignmentPercent:(double)arg2;
- (id)_timeLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_timeLabelFrameForAlignmentPercent:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_timeLabelInsetsForTimeString:(id)arg1;
- (void)_updateLabelAlpha;
- (void)_updateLabels;
- (void)_updateUsesCompactDateFormat;
- (double)alignmentPercent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chargingVisualInformationTimeFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chargingVisualInformationTimeSubtitleFrame;
- (double)contentAlpha;
- (id)customSubtitleView;
- (id)date;
- (double)dateToTimeStretch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSubtitleHidden;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationExtentForAlignmentPercent:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })restingFrame;
- (void)setAlignmentPercent:(double)arg1;
- (void)setContentAlpha:(double)arg1 withSubtitleVisible:(bool)arg2;
- (void)setCustomSubtitleView:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateToTimeStretch:(double)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setRestingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSubtitleHidden:(bool)arg1;
- (void)setSubtitleLegibilityStrength:(double)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTimeLegibilityStrength:(double)arg1;
- (void)setUseCompactDateFormat:(bool)arg1;
- (double)subtitleBaselineOffsetFromOrigin;
- (double)subtitleLegibilityStrength;
- (id)textColor;
- (double)timeBaselineOffsetFromOrigin;
- (double)timeLegibilityStrength;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFormat;
- (bool)useCompactDateFormat;

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
