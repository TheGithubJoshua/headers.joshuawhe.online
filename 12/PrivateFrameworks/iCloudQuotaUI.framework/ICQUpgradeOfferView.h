<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ICQUpgradeOfferView.h</title>
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

/PrivateFrameworks/iCloudQuotaUI.framework/ICQUpgradeOfferView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI (1)
 */

@interface ICQUpgradeOfferView : ICQPageView <UIScrollViewDelegate, UITextViewDelegate> {
    UILayoutGuide * _aboveSpinnerLayoutGuide;
    NSArray * _activeConstraints;
    UILayoutGuide * _belowSpinnerLayoutGuide;
    UIButton * _bottomButton;
    ICQLink * _bottomLink;
    UIColor * _buttonTintColor;
    UIView * _contentView;
    <ICQPageDelegate> * _delegate;
    _ICQTextView * _fineprintView;
    UIView * _footerView;
    UIView * _headerView;
    UIImageView * _iconView;
    _UIBackdropView * _lightTrayBackdrop;
    _ICQTextView * _messageView;
    UIButton * _purchase2Button;
    ICQLink * _purchase2Link;
    UIButton * _purchaseButton;
    ICQLink * _purchaseLink;
    UIScrollView * _scrollView;
    UILayoutGuide * _scrollVisibleLayoutGuide;
    UIActivityIndicatorView * _spinner;
    UILabel * _titleLabel;
    UIView * _trayView;
    _UIBackdropView * _ultraLightTrayBackdrop;
    long long  _upgradeMode;
    _ICQUpgradeOfferPageSpecification * _upgradeOfferPageSpecification;
}

@property (nonatomic, readonly) UILayoutGuide *aboveSpinnerLayoutGuide;
@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic, readonly) UILayoutGuide *belowSpinnerLayoutGuide;
@property (nonatomic, retain) UIButton *bottomButton;
@property (nonatomic, readonly) ICQLink *bottomLink;
@property (nonatomic, copy) UIColor *buttonTintColor;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICQPageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIColor *fineprintColor;
@property (nonatomic, readonly) UIFont *fineprintFont;
@property (nonatomic, retain) _ICQTextView *fineprintView;
@property (nonatomic, readonly) UIView *footerView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *headerView;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, readonly) _UIBackdropView *lightTrayBackdrop;
@property (nonatomic, readonly) UIFont *linkButtonFont;
@property (nonatomic, readonly) UIFont *messageFont;
@property (nonatomic, retain) _ICQTextView *messageView;
@property (nonatomic, retain) UIButton *purchase2Button;
@property (nonatomic, readonly) ICQLink *purchase2Link;
@property (nonatomic, retain) UIButton *purchaseButton;
@property (nonatomic, readonly) UIFont *purchaseButtonFont;
@property (nonatomic, readonly) ICQLink *purchaseLink;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) UILayoutGuide *scrollVisibleLayoutGuide;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIFont *titleFont;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, readonly) UIView *trayView;
@property (nonatomic, readonly) _UIBackdropView *ultraLightTrayBackdrop;
@property (nonatomic) long long upgradeMode;
@property (nonatomic, retain) _ICQUpgradeOfferPageSpecification *upgradeOfferPageSpecification;

- (void).cxx_destruct;
- (id)_anchorForLowerView:(id)arg1;
- (id)_anchorForUpperView:(id)arg1;
- (id)_buttons;
- (id)_constraintsForView:(id)arg1 equalToView:(id)arg2;
- (id)_imageForBundleIdentifier:(id)arg1;
- (id)_imageForGenericCloud;
- (id)_makeLinkButton;
- (id)_makePurchaseButton;
- (double)_marginForButton:(id)arg1;
- (void)_setButton:(id)arg1 backgroundColor:(id)arg2;
- (void)_setButtonTintColor:(id)arg1;
- (void)_setLinkTextColor:(id)arg1;
- (double)_spacingFromUpperView:(id)arg1 toLowerView:(id)arg2;
- (long long)_styleOfView:(id)arg1;
- (void)_updateTrayVisibility;
- (id)aboveSpinnerLayoutGuide;
- (id)activeConstraints;
- (id)belowSpinnerLayoutGuide;
- (id)bottomButton;
- (void)bottomButtonTapped:(id)arg1;
- (id)bottomLink;
- (id)buttonTintColor;
- (id)contentView;
- (id)defaultButtonColor;
- (id)delegate;
- (id)fineprintAttributes;
- (id)fineprintColor;
- (id)fineprintFont;
- (id)fineprintParagraphStyle;
- (id)fineprintView;
- (void)flashScrollIndicatorsIfNeeded;
- (id)footerView;
- (id)headerView;
- (id)horizontalConstraintsForView:(id)arg1 margin:(double)arg2;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)lightTrayBackdrop;
- (id)linkButtonFont;
- (id)messageAttributes;
- (id)messageFont;
- (id)messageParagraphStyle;
- (id)messageView;
- (id)purchase2Button;
- (void)purchase2ButtonTapped:(id)arg1;
- (id)purchase2Link;
- (id)purchaseButton;
- (id)purchaseButtonFont;
- (void)purchaseButtonTapped:(id)arg1;
- (id)purchaseLink;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)scrollVisibleLayoutGuide;
- (void)setActiveConstraints:(id)arg1;
- (void)setBottomButton:(id)arg1;
- (void)setButtonTintColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFineprintView:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setMessageView:(id)arg1;
- (void)setPurchase2Button:(id)arg1;
- (void)setPurchaseButton:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpgradeMode:(long long)arg1;
- (void)setUpgradeOfferPageSpecification:(id)arg1;
- (id)spinner;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)titleFont;
- (id)titleLabel;
- (id)trayView;
- (id)ultraLightTrayBackdrop;
- (void)updateConstraints;
- (long long)upgradeMode;
- (id)upgradeOfferPageSpecification;

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