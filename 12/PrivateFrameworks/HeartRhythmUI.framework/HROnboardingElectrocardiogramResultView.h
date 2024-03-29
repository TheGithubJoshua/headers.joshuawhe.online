<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HROnboardingElectrocardiogramResultView.h</title>
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

/PrivateFrameworks/HeartRhythmUI.framework/HROnboardingElectrocardiogramResultView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI ()
 */

@interface HROnboardingElectrocardiogramResultView : UIView {
    bool  _alwaysExpanded;
    NSLayoutConstraint * _bottomConstraint;
    bool  _expanded;
    UIView * _expandedView;
    bool  _hideNumberedTitle;
    UIButton * _learnMoreButton;
    NSString * _localizationKey;
    NSString * _numberedTitle;
    UILabel * _numberedTitleLabel;
    HRVideoPlayerView * _playerView;
    NSLayoutConstraint * _playerViewTopConstraint;
    HKSeparatorLineView * _separatorLineView;
    bool  _shouldHideSeparatorLine;
    NSString * _title;
    NSString * _visibleBody;
    UILabel * _visibleBodyLabel;
}

@property (getter=isAlwaysExpanded, nonatomic) bool alwaysExpanded;
@property (nonatomic, retain) NSLayoutConstraint *bottomConstraint;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, retain) UIView *expandedView;
@property (getter=isHidingNumberedTitle, nonatomic) bool hideNumberedTitle;
@property (nonatomic, retain) UIButton *learnMoreButton;
@property (nonatomic, copy) NSString *localizationKey;
@property (nonatomic, copy) NSString *numberedTitle;
@property (nonatomic, retain) UILabel *numberedTitleLabel;
@property (nonatomic, retain) HRVideoPlayerView *playerView;
@property (nonatomic, retain) NSLayoutConstraint *playerViewTopConstraint;
@property (nonatomic, retain) HKSeparatorLineView *separatorLineView;
@property (nonatomic) bool shouldHideSeparatorLine;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *visibleBody;
@property (nonatomic, retain) UILabel *visibleBodyLabel;

+ (id)atrialFibrillationResultView;
+ (id)highOrLowHeartRateResultView;
+ (id)inconclusiveResultViewWithDelegate:(id)arg1;
+ (id)sinusRhythmResultView;

- (void).cxx_destruct;
- (double)_learnMoreButtonLastBaselineToBottom;
- (id)_numberedTitleFont;
- (double)_numberedTitleLastBaseLineToVideoTop;
- (double)_numberedTitleTopToFirstBaseline;
- (void)_setUpConstraints;
- (void)_setUpNumberedTitleLabelConstraints;
- (void)_setUpPlayerViewTopConstraint;
- (void)_setUpUI;
- (void)_updateExpandedViewState;
- (void)_updateNumberedTitleViewState;
- (double)_visibleBodyFirstBaselineDistance;
- (id)_visibleBodyFont;
- (id)_visibleBodyFontTextStyle;
- (double)_visibleBodyLastBaselineToLearnMoreButtonFirstBaseline;
- (id)bottomConstraint;
- (id)expandedView;
- (id)initWithLocalizationKey:(id)arg1 video:(id)arg2 expandedView:(id)arg3;
- (bool)isAlwaysExpanded;
- (bool)isExpanded;
- (bool)isHidingNumberedTitle;
- (id)learnMoreButton;
- (void)learnMoreButtonTapped:(id)arg1;
- (id)localizationKey;
- (id)numberedTitle;
- (id)numberedTitleLabel;
- (id)playerView;
- (id)playerViewTopConstraint;
- (id)separatorLineView;
- (void)setAlwaysExpanded:(bool)arg1;
- (void)setBottomConstraint:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpandedView:(id)arg1;
- (void)setHideNumberedTitle:(bool)arg1;
- (void)setLearnMoreButton:(id)arg1;
- (void)setLocalizationKey:(id)arg1;
- (void)setNumberedTitle:(id)arg1;
- (void)setNumberedTitleLabel:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setPlayerViewTopConstraint:(id)arg1;
- (void)setSeparatorLineView:(id)arg1;
- (void)setShouldHideSeparatorLine:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setVisibleBody:(id)arg1;
- (void)setVisibleBodyLabel:(id)arg1;
- (bool)shouldHideSeparatorLine;
- (id)title;
- (id)visibleBody;
- (id)visibleBodyLabel;

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
