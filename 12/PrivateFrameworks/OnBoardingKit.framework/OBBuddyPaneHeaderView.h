<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>OBBuddyPaneHeaderView.h</title>
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

/PrivateFrameworks/OnBoardingKit.framework/OBBuddyPaneHeaderView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit (1)
 */

@interface OBBuddyPaneHeaderView : UIView {
    UIView * _bottomLine;
    double  _customTopPadding;
    UILabel * _detailTextLabel;
    double  _flexibleHeight;
    UIImage * _icon;
    bool  _iconInheritsTint;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    UIImageView * _iconView;
    UIButton * _linkButton;
    id /* block */  _linkHandler;
    UILabel * _subLabel;
    UILabel * _textLabel;
    bool  _textLabelAlignedByLastBaseline;
    bool  _useMinimumTopPadding;
}

@property (nonatomic, retain) UIColor *bottomLineColor;
@property (nonatomic) double customTopPadding;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic) double flexibleHeight;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSString *iconAccessibilityLabel;
@property (nonatomic) bool iconInheritsTint;
@property (nonatomic) struct CGSize { double x1; double x2; } iconSize;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, readonly) UILabel *subLabel;
@property (nonatomic, readonly) UILabel *textLabel;
@property (getter=isTextLabelAlignedByLastBaseline, nonatomic) bool textLabelAlignedByLastBaseline;
@property (nonatomic) bool useMinimumTopPadding;

// Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit

- (void).cxx_destruct;
- (double)_labelsAndLinksBaselineOffsetForView:(id)arg1;
- (void)_linkButtonPressed;
- (id)bottomLineColor;
- (double)customTopPadding;
- (id)detailTextLabel;
- (double)flexibleHeight;
- (double)heightForWidth:(double)arg1 inView:(id)arg2;
- (id)icon;
- (id)iconAccessibilityLabel;
- (bool)iconInheritsTint;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTextLabelAlignedByLastBaseline;
- (void)layoutSubviews;
- (void)setBottomLineColor:(id)arg1;
- (void)setCustomTopPadding:(double)arg1;
- (void)setFlexibleHeight:(double)arg1;
- (void)setIcon:(id)arg1;
- (void)setIconAccessibilityLabel:(id)arg1;
- (void)setIconInheritsTint:(bool)arg1;
- (void)setIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIconView:(id)arg1;
- (void)setLinkText:(id)arg1 handler:(id /* block */)arg2;
- (void)setTextLabelAlignedByLastBaseline:(bool)arg1;
- (void)setTitleText:(id)arg1;
- (void)setUseMinimumTopPadding:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)subLabel;
- (id)textLabel;
- (void)tintColorDidChange;
- (bool)useMinimumTopPadding;

// Image: /System/Library/PrivateFrameworks/ExposureNotificationUI.framework/ExposureNotificationUI

- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContentWithCurrentTraits;

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
