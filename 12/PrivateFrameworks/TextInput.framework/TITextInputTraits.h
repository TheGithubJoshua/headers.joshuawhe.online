<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TITextInputTraits.h</title>
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

/PrivateFrameworks/TextInput.framework/TITextInputTraits.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput (1.0)
 */

@interface TITextInputTraits : NSObject <NSCopying, NSSecureCoding> {
    union { 
        long long integerValue; 
        struct { 
            unsigned int autocapitalizationType : 2; 
            unsigned int autocorrectionType : 2; 
            unsigned int spellCheckingType : 2; 
            unsigned int keyboardType : 4; 
            unsigned int keyboardAppearance : 2; 
            unsigned int returnKeyType : 4; 
            unsigned int textScriptType : 4; 
            unsigned int enablesReturnKeyAutomatically : 1; 
            unsigned int secureTextEntry : 1; 
            unsigned int smartInsertDeleteEnabled : 1; 
            unsigned int smartQuotesEnabled : 1; 
            unsigned int smartDashesEnabled : 1; 
            unsigned int disablePrediction : 1; 
        } fields; 
    }  _mask;
    NSString * _recentInputIdentifier;
    NSString * _textContentType;
}

@property (nonatomic) unsigned long long autocapitalizationType;
@property (nonatomic) unsigned long long autocorrectionType;
@property (nonatomic) bool disablePrediction;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic) unsigned long long keyboardAppearance;
@property (nonatomic) unsigned long long keyboardType;
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (nonatomic) unsigned long long returnKeyType;
@property (nonatomic) bool secureTextEntry;
@property (nonatomic) bool smartDashesEnabled;
@property (nonatomic) bool smartInsertDeleteEnabled;
@property (nonatomic) bool smartQuotesEnabled;
@property (nonatomic) unsigned long long spellCheckingType;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic) unsigned long long textScriptType;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)autocapitalizationType;
- (unsigned long long)autocorrectionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)disablePrediction;
- (bool)enablesReturnKeyAutomatically;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)keyboardAppearance;
- (unsigned long long)keyboardType;
- (id)recentInputIdentifier;
- (unsigned long long)returnKeyType;
- (bool)secureTextEntry;
- (void)setAutocapitalizationType:(unsigned long long)arg1;
- (void)setAutocorrectionType:(unsigned long long)arg1;
- (void)setDisablePrediction:(bool)arg1;
- (void)setEnablesReturnKeyAutomatically:(bool)arg1;
- (void)setKeyboardAppearance:(unsigned long long)arg1;
- (void)setKeyboardType:(unsigned long long)arg1;
- (void)setRecentInputIdentifier:(id)arg1;
- (void)setReturnKeyType:(unsigned long long)arg1;
- (void)setSecureTextEntry:(bool)arg1;
- (void)setSmartDashesEnabled:(bool)arg1;
- (void)setSmartInsertDeleteEnabled:(bool)arg1;
- (void)setSmartQuotesEnabled:(bool)arg1;
- (void)setSpellCheckingType:(unsigned long long)arg1;
- (void)setTextContentType:(id)arg1;
- (void)setTextScriptType:(unsigned long long)arg1;
- (bool)smartDashesEnabled;
- (bool)smartInsertDeleteEnabled;
- (bool)smartQuotesEnabled;
- (unsigned long long)spellCheckingType;
- (id)textContentType;
- (unsigned long long)textScriptType;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)traitsForUITextInputTraits:(id)arg1;
+ (unsigned long long)translateToTextInputAutocapitalizationType:(long long)arg1;
+ (unsigned long long)translateToTextInputAutocorrectionType:(long long)arg1;
+ (unsigned long long)translateToTextInputKeyboardAppearance:(long long)arg1;
+ (unsigned long long)translateToTextInputKeyboardType:(long long)arg1;
+ (id)translateToTextInputRecentInputIdentifier:(id)arg1;
+ (unsigned long long)translateToTextInputReturnKeyType:(long long)arg1;
+ (bool)translateToTextInputSmartInsertDeleteEnabled:(long long)arg1;
+ (unsigned long long)translateToTextInputSpellCheckingType:(long long)arg1;
+ (unsigned long long)translateToTextScriptType:(long long)arg1;

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
