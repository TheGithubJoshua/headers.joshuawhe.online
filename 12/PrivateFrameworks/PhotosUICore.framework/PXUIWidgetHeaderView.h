<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXUIWidgetHeaderView.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXUIWidgetHeaderView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXUIWidgetHeaderView : UIView {
    UIButton * __captionButton;
    UILabel * __captionLabel;
    NSArray * __constraints;
    double  __currentHeight;
    bool  __hasContent;
    UIButton * __subtitleButton;
    UILabel * __subtitleLabel;
    UILabel * __titleLabel;
    UIVisualEffectView * __visualEffectView;
    bool  _allowUserInteractionWithCaption;
    bool  _allowUserInteractionWithSubtitle;
    NSString * _caption;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    <PXUIWidgetHeaderViewDelegate> * _delegate;
    struct { 
        bool didSelectSubtitle; 
        bool didSelectCaption; 
    }  _delegateRespondsTo;
    double  _distanceBetweenTitleBaselineAndSubtitleBaseline;
    double  _horizontalSpacingBetweenTitleAndSubtitle;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    PXViewLayoutHelper * _layoutHelper;
    long long  _layoutStyle;
    double  _minimumDistanceBetweenLastBaselineAndBottom;
    double  _minimumDistanceBetweenTopAndFirstBaseline;
    struct { 
        bool hasContent; 
        bool title; 
        bool subtitle; 
        bool caption; 
    }  _needsUpdateFlags;
    UIFont * _primaryFont;
    UIFont * _secondaryFont;
    NSString * _subtitle;
    UIColor * _textColor;
    NSString * _title;
}

@property (nonatomic, readonly) UIButton *_captionButton;
@property (nonatomic, readonly) UILabel *_captionLabel;
@property (setter=_setConstraints:, nonatomic, copy) NSArray *_constraints;
@property (setter=_setCurrentHeight:, nonatomic) double _currentHeight;
@property (setter=_setHasContent:, nonatomic) bool _hasContent;
@property (nonatomic, readonly) UIButton *_subtitleButton;
@property (nonatomic, readonly) UILabel *_subtitleLabel;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (nonatomic, readonly) UIVisualEffectView *_visualEffectView;
@property (nonatomic) bool allowUserInteractionWithCaption;
@property (nonatomic) bool allowUserInteractionWithSubtitle;
@property (nonatomic, copy) NSString *caption;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) <PXUIWidgetHeaderViewDelegate> *delegate;
@property (nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline;
@property (nonatomic) double horizontalSpacingBetweenTitleAndSubtitle;
@property (nonatomic, readonly) PXViewLayoutHelper *layoutHelper;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) double minimumDistanceBetweenLastBaselineAndBottom;
@property (nonatomic) double minimumDistanceBetweenTopAndFirstBaseline;
@property (nonatomic, retain) UIFont *primaryFont;
@property (nonatomic, retain) UIFont *secondaryFont;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (bool)_canComposeTitleWithSubtitle;
- (id)_captionButton;
- (id)_captionButtonCreateIfNeeded:(bool)arg1;
- (id)_captionLabel;
- (id)_captionLabelCreateIfNeeded:(bool)arg1;
- (id)_constraints;
- (double)_currentHeight;
- (void)_handleCaptionButton:(id)arg1;
- (void)_handleSubtitleButton:(id)arg1;
- (bool)_hasAccessibilityLargeText;
- (bool)_hasContent;
- (bool)_hasSubtitle;
- (void)_invalidateCaption;
- (void)_invalidateHasContent;
- (void)_invalidateSubtitle;
- (void)_invalidateTitle;
- (bool)_needsUpdate;
- (void)_setConstraints:(id)arg1;
- (void)_setCurrentHeight:(double)arg1;
- (void)_setHasContent:(bool)arg1;
- (void)_setNeedsUpdate;
- (id)_subtitleButton;
- (id)_subtitleButtonCreateIfNeeded:(bool)arg1;
- (id)_subtitleLabel;
- (id)_subtitleLabelCreateIfNeeded:(bool)arg1;
- (id)_titleLabel;
- (id)_titleLabelCreateIfNeeded:(bool)arg1;
- (void)_updateCaptionIfNeeded;
- (void)_updateHasContentIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSubtitleIfNeeded;
- (void)_updateTitleIfNeeded;
- (id)_visualEffectView;
- (id)_visualEffectViewCreateIfNeeded:(bool)arg1;
- (bool)allowUserInteractionWithCaption;
- (bool)allowUserInteractionWithSubtitle;
- (id)caption;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)delegate;
- (double)distanceBetweenTitleBaselineAndSubtitleBaseline;
- (double)horizontalSpacingBetweenTitleAndSubtitle;
- (id)layoutHelper;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (double)minimumDistanceBetweenLastBaselineAndBottom;
- (double)minimumDistanceBetweenTopAndFirstBaseline;
- (void)performChanges:(id /* block */)arg1;
- (id)primaryFont;
- (id)secondaryFont;
- (void)setAllowUserInteractionWithCaption:(bool)arg1;
- (void)setAllowUserInteractionWithSubtitle:(bool)arg1;
- (void)setCaption:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDistanceBetweenTitleBaselineAndSubtitleBaseline:(double)arg1;
- (void)setHorizontalSpacingBetweenTitleAndSubtitle:(double)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setMinimumDistanceBetweenLastBaselineAndBottom:(double)arg1;
- (void)setMinimumDistanceBetweenTopAndFirstBaseline:(double)arg1;
- (void)setPrimaryFont:(id)arg1;
- (void)setSecondaryFont:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subtitle;
- (id)textColor;
- (id)title;

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