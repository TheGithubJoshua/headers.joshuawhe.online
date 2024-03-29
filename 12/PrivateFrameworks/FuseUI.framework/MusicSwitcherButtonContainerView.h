<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MusicSwitcherButtonContainerView.h</title>
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

/PrivateFrameworks/FuseUI.framework/MusicSwitcherButtonContainerView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI (1)
 */

@interface MusicSwitcherButtonContainerView : UIView {
    UIFont * _defaultFontForTrailingAndLeadingButtons;
    <MusicSwitcherButtonContainerViewDelegate> * _delegate;
    UIFont * _fontOfLeadingAndTrailingButtons;
    UIFont * _fontOfTextRightAbove;
    bool  _hairlineHidden;
    MPUTextButton * _leadingButton;
    NSString * _leadingButtonTitle;
    UIView * _leftHairlineView;
    UIView * _rightHairlineView;
    UIButton * _switcherButton;
    UIFont * _switcherButtonFont;
    bool  _switcherButtonHidden;
    NSString * _switcherButtonTitle;
    MPUTextButton * _trailingButton;
    NSString * _trailingButtonTitle;
}

@property (nonatomic) <MusicSwitcherButtonContainerViewDelegate> *delegate;
@property (nonatomic, retain) UIFont *fontOfLeadingAndTrailingButtons;
@property (nonatomic, retain) UIFont *fontOfTextRightAbove;
@property (getter=isHairlineHidden, nonatomic) bool hairlineHidden;
@property (nonatomic, copy) NSString *leadingButtonTitle;
@property (nonatomic, retain) UIFont *switcherButtonFont;
@property (getter=isSwitcherButtonHidden, nonatomic) bool switcherButtonHidden;
@property (nonatomic, copy) NSString *switcherButtonTitle;
@property (nonatomic, readonly) UIView *switcherButtonView;
@property (nonatomic, copy) NSString *trailingButtonTitle;

+ (id)_chevronImageForTraitCollection:(id)arg1;
+ (id)defaultHairlineColor;
+ (double)heightWithFontOfTextRightAbove:(id)arg1 traitCollection:(id)arg2 shouldConsiderLeadingAndTrailingButtons:(bool)arg3;
+ (double)imageWidthForTraitCollection:(id)arg1 includingPadding:(bool)arg2;

- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handleLeadingButtonTapped:(id)arg1;
- (void)_handleSwitcherButtonTapped:(id)arg1;
- (void)_handleTrailingButtonTapped:(id)arg1;
- (id)_helperButtonsFont;
- (void)dealloc;
- (id)delegate;
- (id)fontOfLeadingAndTrailingButtons;
- (id)fontOfTextRightAbove;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHairlineHidden;
- (bool)isSwitcherButtonHidden;
- (void)layoutSubviews;
- (id)leadingButtonTitle;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)setDelegate:(id)arg1;
- (void)setFontOfLeadingAndTrailingButtons:(id)arg1;
- (void)setFontOfTextRightAbove:(id)arg1;
- (void)setHairlineHidden:(bool)arg1;
- (void)setLeadingButtonTitle:(id)arg1;
- (void)setSwitcherButtonFont:(id)arg1;
- (void)setSwitcherButtonHidden:(bool)arg1;
- (void)setSwitcherButtonTitle:(id)arg1;
- (void)setTrailingButtonTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)switcherButtonFont;
- (id)switcherButtonTitle;
- (id)switcherButtonView;
- (id)trailingButtonTitle;

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
