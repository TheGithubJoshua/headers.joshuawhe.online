<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ACAccountCredential.h</title>
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

/Frameworks/Accounts.framework/ACAccountCredential.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Accounts.framework/Accounts (113)
 */

@interface ACAccountCredential : NSObject <ACProtobufCoding, NSCoding, NSCopying, NSSecureCoding> {
    NSMutableDictionary * _credentialItems;
    NSString * _credentialType;
    bool  _dirty;
    NSMutableSet * _dirtyProperties;
    bool  _empty;
    ACAccount * _owningAccount;
    bool  _requiresTouchID;
}

@property (nonatomic, copy) NSString *credentialType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDirty, nonatomic) bool dirty;
@property (nonatomic, readonly) NSSet *dirtyProperties;
@property (getter=isEmpty, nonatomic) bool empty;
@property (nonatomic, retain) NSDate *expiryDate;
@property (nonatomic, copy) NSString *findMyiPhoneToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hsaToken;
@property (nonatomic, copy) NSString *mapsToken;
@property (nonatomic, copy) NSString *mdmServerToken;
@property (nonatomic, copy) NSString *oauthRefreshToken;
@property (nonatomic, copy) NSString *oauthToken;
@property (nonatomic, copy) NSString *oauthTokenNoSync;
@property (nonatomic, copy) NSString *oauthTokenSecret;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) bool requiresTouchID;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *token;
@property (nonatomic, copy) NSDate *tokenExpiryDate;

+ (id)additionalServiceSegmentForAccountTypeIdentifier:(id)arg1;
+ (id)allSupportedKeys;
+ (id)credentialPolicyForAccountTypeIdentifier:(id)arg1 key:(id)arg2 clientID:(id)arg3;
+ (id)credentialWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
+ (id)credentialWithPassword:(id)arg1;
+ (id)nonPersistentKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2;
+ (id)supportedKeysForAccountTypeIdentifier:(id)arg1 credentialType:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_clearDirtyProperties;
- (id)_encodeProtobuf;
- (id)_encodeProtobufData;
- (id)_initWithProtobuf:(id)arg1;
- (id)_initWithProtobufData:(id)arg1;
- (void)_markPropertyDirty:(id)arg1;
- (void)_setOwningAccount:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialItemForKey:(id)arg1;
- (id)credentialItems;
- (id)credentialType;
- (id)dirtyProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)expiryDate;
- (id)findMyiPhoneToken;
- (unsigned long long)hash;
- (id)hsaToken;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOAuth2Token:(id)arg1 refreshToken:(id)arg2 expiryDate:(id)arg3;
- (id)initWithOAuthToken:(id)arg1 tokenSecret:(id)arg2;
- (id)initWithPassword:(id)arg1;
- (bool)isDirty;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)keysForCredentialItems;
- (id)mapsToken;
- (id)mdmServerToken;
- (id)oauthRefreshToken;
- (id)oauthToken;
- (id)oauthTokenNoSync;
- (id)oauthTokenSecret;
- (id)password;
- (bool)requiresTouchID;
- (void)setCredentialItem:(id)arg1 forKey:(id)arg2;
- (void)setCredentialType:(id)arg1;
- (void)setDirty:(bool)arg1;
- (void)setEmpty:(bool)arg1;
- (void)setExpiryDate:(id)arg1;
- (void)setFindMyiPhoneToken:(id)arg1;
- (void)setHsaToken:(id)arg1;
- (void)setMapsToken:(id)arg1;
- (void)setMdmServerToken:(id)arg1;
- (void)setOauthRefreshToken:(id)arg1;
- (void)setOauthToken:(id)arg1;
- (void)setOauthTokenNoSync:(id)arg1;
- (void)setOauthTokenSecret:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setRequiresTouchID:(bool)arg1;
- (void)setToken:(id)arg1;
- (void)setTokenExpiryDate:(id)arg1;
- (id)token;
- (id)tokenExpiryDate;

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
