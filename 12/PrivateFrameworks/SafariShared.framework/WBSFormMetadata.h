<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WBSFormMetadata.h</title>
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

/PrivateFrameworks/SafariShared.framework/WBSFormMetadata.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared (607.3.18)
 */

@interface WBSFormMetadata : NSObject <NSSecureCoding> {
    NSURL * _action;
    bool  _allowsAutocomplete;
    NSDictionary * _annotations;
    bool  _bestForCredentialPreFill;
    bool  _bestForPageLevelAutoFill;
    bool  _bestForStreamlinedLogin;
    NSString * _confirmPasswordElementUniqueID;
    bool  _containsActiveElement;
    NSNumber * _containsAtLeastOneSecureTextField;
    NSArray * _controls;
    bool  _eligibleForAutomaticLogin;
    NSString * _firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
    bool  _isSearchForm;
    NSString * _oldPasswordElementUniqueID;
    NSString * _passwordElementUniqueID;
    NSDictionary * _passwordRequirements;
    unsigned long long  _requestType;
    NSString * _textSample;
    unsigned long long  _type;
    long long  _uniqueID;
    NSString * _userNameElementUniqueID;
    bool  _usesGeneratedPassword;
    bool  _usesRelAsync;
    bool  _visible;
}

@property (nonatomic, readonly) NSURL *action;
@property (nonatomic, readonly) bool allowsAutocomplete;
@property (nonatomic, readonly, copy) NSDictionary *annotations;
@property (getter=isBestForCredentialPreFill, nonatomic, readonly) bool bestForCredentialPreFill;
@property (getter=isBestForPageLevelAutoFill, nonatomic, readonly) bool bestForPageLevelAutoFill;
@property (getter=isBestForStreamlinedLogin, nonatomic, readonly) bool bestForStreamlinedLogin;
@property (nonatomic, readonly, copy) NSString *confirmPasswordElementUniqueID;
@property (nonatomic, readonly) bool containsActiveElement;
@property (nonatomic, readonly) bool containsAtLeastOneSecureTextField;
@property (nonatomic, readonly, copy) NSArray *controls;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (getter=isEligibleForAutomaticLogin, nonatomic, readonly) bool eligibleForAutomaticLogin;
@property (nonatomic, readonly, copy) NSString *firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
@property (nonatomic, readonly) bool isSearchForm;
@property (nonatomic, readonly, copy) NSString *oldPasswordElementUniqueID;
@property (nonatomic, readonly, copy) NSString *passwordElementUniqueID;
@property (nonatomic, copy) NSDictionary *passwordRequirements;
@property (nonatomic, readonly) unsigned long long requestType;
@property (nonatomic, readonly, copy) NSString *textSample;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) long long uniqueID;
@property (nonatomic, readonly, copy) NSString *userNameElementUniqueID;
@property (nonatomic, readonly) bool usesGeneratedPassword;
@property (nonatomic, readonly) bool usesRelAsync;
@property (getter=isVisible, nonatomic, readonly) bool visible;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)action;
- (bool)allowsAutocomplete;
- (id)annotations;
- (id)confirmPasswordElementUniqueID;
- (bool)containsActiveElement;
- (bool)containsAtLeastOneSecureTextField;
- (id)controls;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
- (id)formMetadataByReplacingControlsWith:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSValue:(id)arg1;
- (bool)isBestForCredentialPreFill;
- (bool)isBestForPageLevelAutoFill;
- (bool)isBestForStreamlinedLogin;
- (bool)isEligibleForAutomaticLogin;
- (bool)isEqual:(id)arg1;
- (bool)isSearchForm;
- (bool)isVisible;
- (id)oldPasswordElementUniqueID;
- (id)passwordElementUniqueID;
- (id)passwordRequirements;
- (unsigned long long)requestType;
- (void)setPasswordRequirements:(id)arg1;
- (id)textSample;
- (unsigned long long)type;
- (long long)uniqueID;
- (id)userNameElementUniqueID;
- (bool)usesGeneratedPassword;
- (bool)usesRelAsync;

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
