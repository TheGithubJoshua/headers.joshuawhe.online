<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>RPPINEntryView.h</title>
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

/PrivateFrameworks/RapportUI.framework/RPPINEntryView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/RapportUI.framework/RapportUI (174.26)
 */

@interface RPPINEntryView : UIView <UIKeyInput, UITextInputTraits> {
    bool  _alphaNumeric;
    bool  _disabled;
    UILabel * _label1;
    UILabel * _label2;
    UILabel * _label3;
    UILabel * _label4;
    UILabel * _label5;
    UILabel * _label6;
    UILabel * _label7;
    UILabel * _label8;
    NSArray * _labels;
    NSMutableString * _text;
    id /* block */  _textChangedHandler;
    UIView * _well1;
    UIView * _well2;
    UIView * _well3;
    UIView * _well4;
    UIView * _well5;
    UIView * _well6;
    UIView * _well7;
    UIView * _well8;
    UIColor * _wellFocusColor;
    NSArray * _wells;
}

@property (nonatomic) bool alphaNumeric;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disabled;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, retain) UILabel *label1;
@property (nonatomic, retain) UILabel *label2;
@property (nonatomic, retain) UILabel *label3;
@property (nonatomic, retain) UILabel *label4;
@property (nonatomic, retain) UILabel *label5;
@property (nonatomic, retain) UILabel *label6;
@property (nonatomic, retain) UILabel *label7;
@property (nonatomic, retain) UILabel *label8;
@property (nonatomic, retain) NSArray *labels;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) id /* block */ textChangedHandler;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, retain) UIView *well1;
@property (nonatomic, retain) UIView *well2;
@property (nonatomic, retain) UIView *well3;
@property (nonatomic, retain) UIView *well4;
@property (nonatomic, retain) UIView *well5;
@property (nonatomic, retain) UIView *well6;
@property (nonatomic, retain) UIView *well7;
@property (nonatomic, retain) UIView *well8;
@property (nonatomic, retain) UIColor *wellFocusColor;
@property (nonatomic, retain) NSArray *wells;

- (void).cxx_destruct;
- (void)_updateFields;
- (bool)alphaNumeric;
- (long long)autocapitalizationType;
- (long long)autocorrectionType;
- (void)awakeFromNib;
- (bool)canBecomeFirstResponder;
- (void)deleteBackward;
- (bool)disabled;
- (bool)hasText;
- (void)insertText:(id)arg1;
- (long long)keyboardAppearance;
- (long long)keyboardType;
- (id)label1;
- (id)label2;
- (id)label3;
- (id)label4;
- (id)label5;
- (id)label6;
- (id)label7;
- (id)label8;
- (id)labels;
- (void)setAlphaNumeric:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setLabel1:(id)arg1;
- (void)setLabel2:(id)arg1;
- (void)setLabel3:(id)arg1;
- (void)setLabel4:(id)arg1;
- (void)setLabel5:(id)arg1;
- (void)setLabel6:(id)arg1;
- (void)setLabel7:(id)arg1;
- (void)setLabel8:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextChangedHandler:(id /* block */)arg1;
- (void)setWell1:(id)arg1;
- (void)setWell2:(id)arg1;
- (void)setWell3:(id)arg1;
- (void)setWell4:(id)arg1;
- (void)setWell5:(id)arg1;
- (void)setWell6:(id)arg1;
- (void)setWell7:(id)arg1;
- (void)setWell8:(id)arg1;
- (void)setWellFocusColor:(id)arg1;
- (void)setWells:(id)arg1;
- (long long)spellCheckingType;
- (id)text;
- (id /* block */)textChangedHandler;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)well1;
- (id)well2;
- (id)well3;
- (id)well4;
- (id)well5;
- (id)well6;
- (id)well7;
- (id)well8;
- (id)wellFocusColor;
- (id)wells;

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
