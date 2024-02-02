<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NCNotificationListSectionHeaderView.h</title>
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

/PrivateFrameworks/UserNotificationsUIKit.framework/NCNotificationListSectionHeaderView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit (1)
 */

@interface NCNotificationListSectionHeaderView : UICollectionReusableView <NCLegibilitySettingsAdjusting, NCToggleControlDelegate, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    NSString * _backgroundGroupName;
    NCToggleControl * _clearButton;
    <NCNotificationListSectionHeaderViewDelegate> * _delegate;
    NCNotificationListHeaderTitleView * _headerTitleView;
    _UILegibilitySettings * _legibilitySettings;
    double  _overrideAlpha;
    struct CGPoint { 
        double x; 
        double y; 
    }  _overrideCenter;
    NSString * _preferredContentSizeCategory;
    NSString * _sectionIdentifier;
    bool  _shouldOverrideForReveal;
    NSString * _title;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, copy) NSString *backgroundGroupName;
@property (nonatomic, readonly) UIControl *clearButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListSectionHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCNotificationListHeaderTitleView *headerTitleView;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double overrideAlpha;
@property (nonatomic) struct CGPoint { double x1; double x2; } overrideCenter;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (nonatomic) bool shouldOverrideForReveal;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (struct CGSize { double x1; double x2; })_clearButtonPreferredSize;
+ (void)_contentSizeCategoryDidChange:(id)arg1;
+ (double)headerHeightWithWidth:(double)arg1 title:(id)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_configureClearButtonIfNecessary;
- (void)_configureHeaderTitleViewIfNecessary;
- (void)_handleClearAll:(id)arg1;
- (void)_handleClearButtonPrimaryActionTriggered:(id)arg1;
- (void)_handleClearButtonTouchUpInside:(id)arg1;
- (void)_layoutClearButton;
- (void)_layoutHeaderTitleView;
- (id)_legibilitySettings;
- (void)_resetClearButtonStateAnimated:(bool)arg1;
- (void)_resetRevealOverrides;
- (void)_updateHeaderTitleViewWithLegibilitySettings:(id)arg1;
- (bool)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (bool)adjustsFontForContentSizeCategory;
- (void)applyLayoutAttributes:(id)arg1;
- (id)backgroundGroupName;
- (id)clearButton;
- (id)containerViewForToggleControlPreviewInteractionPresentedContent:(id)arg1;
- (id)delegate;
- (bool)dismissModalFullScreenIfNeeded;
- (id)headerTitleView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (double)overrideAlpha;
- (struct CGPoint { double x1; double x2; })overrideCenter;
- (id)preferredContentSizeCategory;
- (void)prepareForReuse;
- (void)resetClearButtonStateAnimated:(bool)arg1;
- (id)sectionIdentifier;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setBackgroundGroupName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderTitleView:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setOverrideAlpha:(double)arg1;
- (void)setOverrideCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setShouldOverrideForReveal:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldOverrideForReveal;
- (id)title;
- (void)toggleControlDidBeginPreviewInteraction:(id)arg1;
- (void)toggleControlDidDismssPreviewInteractionPresentedContent:(id)arg1;
- (void)toggleControlDidPresentPreviewInteractionPresentedContent:(id)arg1;

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