<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKEnterCurrencyAmountView.h</title>
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

/PrivateFrameworks/PassKitUI.framework/PKEnterCurrencyAmountView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI (1)
 */

@interface PKEnterCurrencyAmountView : UIView <UITextFieldDelegate> {
    UIFont * _amountFont;
    NSNumberFormatter * _amountFormatter;
    UILabel * _amountLabel;
    NSString * _amountString;
    UITextField * _amountTextField;
    bool  _clearAmountOnFirstKeyboardInput;
    NSString * _currency;
    NSNumberFormatter * _currencySymbolAmountFormatter;
    UIFont * _currencySymbolFont;
    <PKEnterCurrencyAmountViewDelegate> * _delegate;
    bool  _enabled;
    bool  _ignoreIntegralNumber;
    UIView * _internalInputAccessoryView;
    bool  _isFirstKeyboardInput;
    NSNumber * _kerning;
    double  _labelScaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastLayoutBoundsSize;
    PKNumberPadInputView * _numberPad;
    NSDecimalNumberHandler * _roundingBehavior;
    bool  _showDecimalPointButton;
    bool  _showsDecimalPointButton;
    UIColor * _textColor;
}

@property (nonatomic, copy) UIFont *amountFont;
@property (nonatomic, retain) NSNumberFormatter *amountFormatter;
@property (nonatomic, retain) UILabel *amountLabel;
@property (nonatomic, copy) NSString *amountString;
@property (nonatomic, readonly) UITextField *amountTextField;
@property (nonatomic) bool clearAmountOnFirstKeyboardInput;
@property (nonatomic, retain) NSString *currency;
@property (nonatomic, retain) NSNumberFormatter *currencySymbolAmountFormatter;
@property (nonatomic, copy) UIFont *currencySymbolFont;
@property (nonatomic, retain) NSDecimalNumber *currentAmount;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKEnterCurrencyAmountViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreIntegralNumber;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic) bool isFirstKeyboardInput;
@property (nonatomic, copy) NSNumber *kerning;
@property (nonatomic, copy) UIColor *keyboardColor;
@property (nonatomic) double labelScaleFactor;
@property (nonatomic) struct CGSize { double x1; double x2; } lastLayoutBoundsSize;
@property (nonatomic, retain) PKNumberPadInputView *numberPad;
@property (nonatomic, retain) NSDecimalNumberHandler *roundingBehavior;
@property (nonatomic) bool showDecimalPointButton;
@property (nonatomic) bool showsDecimalPointButton;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIColor *textColor;

- (void).cxx_destruct;
- (void)_addSuperscriptToAttributedString:(id)arg1 formattedCurrencyAmount:(id)arg2 currencyAmountWithoutSymbols:(id)arg3;
- (void)_addSuperscriptToAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_createAmountFormatter;
- (void)_createSubviews;
- (id)_decimalNumberFromString:(id)arg1;
- (id)_formatAmount:(id)arg1 minimumFractionDigits:(unsigned long long)arg2;
- (id)_formatAmountForDisplay:(id)arg1 alwaysShowDecimalSeparator:(bool)arg2 minimumFractionDigits:(unsigned long long)arg3 useGroupingSeparator:(bool)arg4;
- (unsigned long long)_numberOfDecimalPlacesInString:(id)arg1 decimalSeperator:(id)arg2;
- (void)_updateContent;
- (id)amountFont;
- (id)amountFormatter;
- (id)amountLabel;
- (id)amountString;
- (id)amountTextField;
- (bool)clearAmountOnFirstKeyboardInput;
- (id)currency;
- (id)currencySymbolAmountFormatter;
- (id)currencySymbolFont;
- (id)currentAmount;
- (id)delegate;
- (void)dismissKeyboard;
- (bool)enabled;
- (bool)ignoreIntegralNumber;
- (id)initWithCurrency:(id)arg1 amount:(id)arg2;
- (id)inputAccessoryView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isFirstKeyboardInput;
- (id)kerning;
- (id)keyboardColor;
- (double)labelScaleFactor;
- (struct CGSize { double x1; double x2; })lastLayoutBoundsSize;
- (void)layoutSubviews;
- (id)numberPad;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (id)roundingBehavior;
- (void)setAmountFont:(id)arg1;
- (void)setAmountFormatter:(id)arg1;
- (void)setAmountLabel:(id)arg1;
- (void)setAmountString:(id)arg1;
- (void)setClearAmountOnFirstKeyboardInput:(bool)arg1;
- (void)setCurrency:(id)arg1;
- (void)setCurrencySymbolAmountFormatter:(id)arg1;
- (void)setCurrencySymbolFont:(id)arg1;
- (void)setCurrentAmount:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIgnoreIntegralNumber:(bool)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setIsFirstKeyboardInput:(bool)arg1;
- (void)setKerning:(id)arg1;
- (void)setKeyboardColor:(id)arg1;
- (void)setLabelScaleFactor:(double)arg1;
- (void)setLastLayoutBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNumberPad:(id)arg1;
- (void)setRoundingBehavior:(id)arg1;
- (void)setShowDecimalPointButton:(bool)arg1;
- (void)setShowsDecimalPointButton:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (bool)showDecimalPointButton;
- (void)showKeyboard;
- (bool)showsDecimalPointButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textColor;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

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
