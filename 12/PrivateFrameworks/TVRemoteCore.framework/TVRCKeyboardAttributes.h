<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TVRCKeyboardAttributes.h</title>
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

/PrivateFrameworks/TVRemoteCore.framework/TVRCKeyboardAttributes.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore (51.60.5)
 */

@interface TVRCKeyboardAttributes : NSObject <NSSecureCoding> {
    TVRCPINEntryAttributes * _PINEntryAttributes;
    long long  _autocapitalizationType;
    long long  _autocorrectionType;
    bool  _enablesReturnKeyAutomatically;
    long long  _keyboardType;
    bool  _likelyPINEntry;
    NSString * _prompt;
    long long  _returnKeyType;
    RTIDataPayload * _rtiDataPayload;
    bool  _secure;
    long long  _spellCheckingType;
    NSString * _title;
}

@property (nonatomic, retain) TVRCPINEntryAttributes *PINEntryAttributes;
@property (getter=_autocapitalizationType, setter=_setAutocapitalizationType:, nonatomic) long long autocapitalizationType;
@property (getter=_autocorrectionType, setter=_setAutocorrectionType:, nonatomic) long long autocorrectionType;
@property (getter=_enablesReturnKeyAutomatically, setter=_setEnablesReturnKeyAutomatically:, nonatomic) bool enablesReturnKeyAutomatically;
@property (getter=_keyboardType, setter=_setKeyboardType:, nonatomic) long long keyboardType;
@property (getter=_isLikelyPINEntry, setter=_setLikelyPINEntry:, nonatomic) bool likelyPINEntry;
@property (nonatomic, copy) NSString *prompt;
@property (getter=_returnKeyType, setter=_setReturnKeyType:, nonatomic) long long returnKeyType;
@property (nonatomic, retain) RTIDataPayload *rtiDataPayload;
@property (getter=_isSecure, setter=_setSecure:, nonatomic) bool secure;
@property (getter=_spellCheckingType, setter=_setSpellCheckingType:, nonatomic) long long spellCheckingType;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)PINEntryAttributes;
- (long long)_autocapitalizationType;
- (long long)_autocorrectionType;
- (bool)_enablesReturnKeyAutomatically;
- (id)_init;
- (bool)_isLikelyPINEntry;
- (bool)_isSecure;
- (long long)_keyboardType;
- (long long)_returnKeyType;
- (void)_setAutocapitalizationType:(long long)arg1;
- (void)_setAutocorrectionType:(long long)arg1;
- (void)_setEnablesReturnKeyAutomatically:(bool)arg1;
- (void)_setKeyboardType:(long long)arg1;
- (void)_setLikelyPINEntry:(bool)arg1;
- (void)_setReturnKeyType:(long long)arg1;
- (void)_setSecure:(bool)arg1;
- (void)_setSpellCheckingType:(long long)arg1;
- (long long)_spellCheckingType;
- (void)applyToTextField:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAttributes:(id)arg1;
- (id)prompt;
- (id)rtiDataPayload;
- (void)setPINEntryAttributes:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setRtiDataPayload:(id)arg1;
- (void)setTitle:(id)arg1;
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