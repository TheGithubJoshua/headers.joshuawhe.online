<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKPaymentPassTableCell.h</title>
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

/PrivateFrameworks/PassKitUI.framework/PKPaymentPassTableCell.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI (1)
 */

@interface PKPaymentPassTableCell : PSTableCell {
    UIControl * _actionButton;
    CALayer * _cardSnapshotMask;
    UIView * _cardSnapshotView;
    <PKPaymentPassTableCellDelegate> * _delegate;
    UILabel * _mainLabel;
    PKPaymentPass * _pass;
    PKPassView * _passView;
    PKPaymentApplication * _paymentApplication;
    long long  _settingsContext;
    bool  _showAddButton;
    bool  _showState;
    bool  _showSubTitle;
    bool  _snapshotLoaded;
    UIActivityIndicatorView * _spinner;
    UILabel * _subTextLabel;
}

@property (nonatomic, readonly) UIControl *actionButton;
@property (nonatomic) <PKPaymentPassTableCellDelegate> *delegate;
@property (nonatomic, readonly) UILabel *mainLabel;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, readonly) PKPassFaceViewRendererState *rendererState;
@property (nonatomic) bool showAddButton;
@property (nonatomic) bool showSubTitle;
@property (nonatomic, readonly) UILabel *subTextLabel;

+ (double)heightForCellWithMinimum:(double)arg1 hasSubTitle:(bool)arg2;
+ (id)subTitleFont;
+ (id)titleFont;

- (void).cxx_destruct;
- (void)_addButtonPressed:(id)arg1;
- (id)_stringForPassState:(unsigned long long)arg1;
- (void)_updateSubtitleColorWithSpecifier:(id)arg1;
- (void)_verifyButtonPressed:(id)arg1;
- (id)actionButton;
- (void)dealloc;
- (id)delegate;
- (void)disableAddButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)mainLabel;
- (id)pass;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (id)rendererState;
- (void)setDelegate:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setShowAddButton:(bool)arg1;
- (void)setShowSubTitle:(bool)arg1;
- (void)setSpecifier:(id)arg1;
- (void)showActivitySpinner:(bool)arg1;
- (bool)showAddButton;
- (bool)showSubTitle;
- (id)subTextLabel;
- (void)tintColorDidChange;
- (void)updateSubtitle;
- (void)updateSubtitleForTransitProperties;

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