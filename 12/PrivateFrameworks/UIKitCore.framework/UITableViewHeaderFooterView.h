<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UITableViewHeaderFooterView.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UITableViewHeaderFooterView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UITableViewHeaderFooterView : UIView <UITableViewSubviewReusing> {
    UIImage * _backgroundImage;
    UIView * _backgroundView;
    <UITableConstants> * _constants;
    UIView * _contentView;
    _UITableViewHeaderFooterViewLabel * _detailLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    struct { 
        unsigned int isHeader : 1; 
        unsigned int labelBackgroundColorNeedsUpdate : 1; 
        unsigned int detailLabelBackgroundColorNeedsUpdate : 1; 
        unsigned int floating : 1; 
        unsigned int stripPadding : 1; 
        unsigned int isTopHeader : 1; 
        unsigned int didSetSectionHeader : 1; 
        unsigned int didSetupDefaults : 1; 
        unsigned int insetsContentViewsToSafeArea : 1; 
    }  _headerFooterFlags;
    _UITableViewHeaderFooterViewLabel * _label;
    double  _leadingMarginWidth;
    double  _maxTitleWidth;
    NSString * _reuseIdentifier;
    <UITable> * _table;
    <UITable> * _tableView;
    long long  _tableViewStyle;
    long long  _textAlignment;
    double  _trailingMarginWidth;
}

@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic, retain) UIView *backgroundView;
@property (getter=_constants, setter=_setConstants:, nonatomic, retain) <UITableConstants> *constants;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (getter=_effectiveSafeAreaInsets, nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } effectiveSafeAreaInsets;
@property (nonatomic) bool floating;
@property (readonly) unsigned long long hash;
@property (getter=_insetsContentViewsToSafeArea, setter=_setInsetsContentViewsToSafeArea:, nonatomic) bool insetsContentViewsToSafeArea;
@property (getter=_marginWidth, setter=_setMarginWidth:, nonatomic) double marginWidth;
@property (nonatomic) double maxTitleWidth;
@property (nonatomic, copy) NSString *reuseIdentifier;
@property (getter=_rightMarginWidth, setter=_setRightMarginWidth:, nonatomic) double rightMarginWidth;
@property (nonatomic) bool sectionHeader;
@property (getter=_stripPadding, setter=_setStripPadding:, nonatomic) bool stripPadding;
@property (readonly) Class superclass;
@property (nonatomic) <UITable> *table;
@property (nonatomic) UITableView *tableView;
@property (nonatomic) long long tableViewStyle;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, readonly) UILabel *textLabel;
@property (getter=_isTopHeader, setter=_setTopHeader:, nonatomic) bool topHeader;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_defaultFontForHeaderFooterView:(id)arg1;
+ (id)_defaultFontForTableViewStyle:(long long)arg1 isSectionHeader:(bool)arg2;
+ (id)_defaultPlainHeaderFooterFont;
+ (id)_defaultTextColorForTableViewStyle:(long long)arg1 isSectionHeader:(bool)arg2;
+ (double)defaultFooterHeightForStyle:(long long)arg1;
+ (double)defaultHeaderHeightForStyle:(long long)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundRectForWidth:(double)arg1;
- (id)_constants;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectForWidth:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_detailLabelFrame;
- (struct CGSize { double x1; double x2; })_detailTextSizeForWidth:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveSafeAreaInsets;
- (bool)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1;
- (bool)_insetsContentViewsToSafeArea;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsToBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsToContentRect;
- (void)_invalidateDetailLabelBackgroundColor;
- (void)_invalidateLabelBackgroundColor;
- (bool)_isTopHeader;
- (bool)_isTransparentFocusRegion;
- (id)_label:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelFrame;
- (double)_marginWidth;
- (double)_rightMarginWidth;
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setBackgroundViewColor:(id)arg1;
- (void)_setConstants:(id)arg1;
- (void)_setInsetsContentViewsToSafeArea:(bool)arg1;
- (void)_setMarginWidth:(double)arg1;
- (void)_setRightMarginWidth:(double)arg1;
- (void)_setStripPadding:(bool)arg1;
- (void)_setTopHeader:(bool)arg1;
- (void)_setupBackgroundView;
- (void)_setupDefaultsIfNecessary;
- (void)_setupLabelAppearance;
- (struct CGSize { double x1; double x2; })_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 stripPaddingForAbuttingView:(bool)arg2 isTopHeader:(bool)arg3;
- (bool)_stripPadding;
- (void)_tableViewDidUpdateMarginWidth;
- (struct CGSize { double x1; double x2; })_textSizeForWidth:(double)arg1;
- (void)_updateBackgroundImage;
- (void)_updateContentAndBackgroundView;
- (void)_updateDetailLabelBackgroundColor;
- (void)_updateDetailLabelBackgroundColorIfNeeded;
- (void)_updateLabelBackgroundColor;
- (void)_updateLabelBackgroundColorIfNeeeded;
- (void)_updateLayerContents;
- (bool)_useDetailText;
- (id)backgroundImage;
- (id)backgroundView;
- (id)contentView;
- (id)detailTextLabel;
- (void)encodeWithCoder:(id)arg1;
- (bool)floating;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (double)maxTitleWidth;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (bool)sectionHeader;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setFloating:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMaxTitleWidth:(double)arg1;
- (void)setNeedsUpdateConstraints;
- (void)setOpaque:(bool)arg1;
- (void)setReuseIdentifier:(id)arg1;
- (void)setSectionHeader:(bool)arg1;
- (void)setTable:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTableViewStyle:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)table;
- (id)tableView;
- (long long)tableViewStyle;
- (id)text;
- (long long)textAlignment;
- (id)textLabel;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (void)_cnui_applyContactStyle;

// Image: /System/Library/PrivateFrameworks/News/TeaUI.framework/TeaUI

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })ts_cellSeparatorInsets;

// Image: /System/Library/PrivateFrameworks/Stocks/TeaUI.framework/TeaUI

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })ts_cellSeparatorInsets;

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
