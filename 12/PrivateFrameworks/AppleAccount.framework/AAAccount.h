<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AAAccount.h</title>
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

/PrivateFrameworks/AppleAccount.framework/AAAccount.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount (1.0)
 */

@interface AAAccount : NSObject {
    ACAccount * _account;
    NSArray * _appleIDAliases;
    NSString * _fmipToken;
    NSString * _protocolVersion;
}

@property (nonatomic, copy) NSString *accountDescription;
@property (nonatomic, readonly) NSDictionary *accountFirstDisplayAlert;
@property (nonatomic, readonly) NSDictionary *accountFooterButton;
@property (nonatomic, readonly) NSString *accountFooterText;
@property (nonatomic, readonly) int accountServiceType;
@property (nonatomic, readonly) NSArray *appleIDAliases;
@property (nonatomic, copy) NSString *authToken;
@property (nonatomic, readonly) NSDictionary *dataclassProperties;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSSet *enabledDataclasses;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, copy) NSString *fmipToken;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) bool needsEmailConfiguration;
@property (nonatomic, readonly) bool needsRegistration;
@property (nonatomic) bool needsToVerifyTerms;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic) bool primaryAccount;
@property (nonatomic, readonly) NSString *primaryEmail;
@property (nonatomic, readonly) bool primaryEmailVerified;
@property (nonatomic, readonly) NSString *protocolVersion;
@property (nonatomic, readonly) NSSet *provisionedDataclasses;
@property (nonatomic, readonly) bool serviceUnavailable;
@property (nonatomic, readonly) NSDictionary *serviceUnavailableInfo;
@property (nonatomic, readonly) NSArray *supportedDataclasses;
@property (nonatomic, readonly) NSString *syncStoreIdentifier;
@property (nonatomic, copy) NSString *username;

+ (id)accountTypeString;
+ (id)dataclassesBoundToPrimaryAccount;
+ (id)dataclassesBoundToSingleAccount;
+ (id)dataclassesBoundToSyncAccount;

- (void).cxx_destruct;
- (id)_childAccounts;
- (id)_mailChildAccount;
- (id)account;
- (id)accountDescription;
- (id)accountFirstDisplayAlert;
- (id)accountFooterButton;
- (id)accountFooterText;
- (id)accountPropertyForKey:(id)arg1;
- (int)accountServiceType;
- (id)appleIDAliases;
- (id)authToken;
- (void)authenticateWithHandler:(id /* block */)arg1;
- (id)dataclassProperties;
- (id)displayName;
- (id)enabledDataclasses;
- (id)firstName;
- (void)flushCachedPassword;
- (void)flushCachedTokens;
- (id)fmipToken;
- (id)identifier;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1;
- (bool)isEnabledForDataclass:(id)arg1;
- (bool)isProvisionedForDataclass:(id)arg1;
- (id)lastName;
- (int)mobileMeAccountStatus;
- (bool)needsEmailConfiguration;
- (bool)needsRegistration;
- (bool)needsToVerifyTerms;
- (void)notifyUserOfQuotaDepletion;
- (id)password;
- (id)personID;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1;
- (bool)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 withHandler:(id /* block */)arg2;
- (bool)primaryAccount;
- (id)primaryEmail;
- (bool)primaryEmailVerified;
- (id)propertiesForDataclass:(id)arg1;
- (id)protocolVersion;
- (id)provisionedDataclasses;
- (void)removePasswordFromKeychain;
- (void)removeTokensFromKeychain;
- (void)renewCredentialsForAppleIDWithHandler:(id /* block */)arg1;
- (void)saveFMIPTokenInKeychain;
- (void)savePasswordInKeychain;
- (void)saveTokensInKeychain;
- (bool)serviceUnavailable;
- (id)serviceUnavailableInfo;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (void)setAuthToken:(id)arg1;
- (void)setEnabled:(bool)arg1 forDataclass:(id)arg2;
- (void)setFmipToken:(id)arg1;
- (void)setNeedsToVerifyTerms:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setPrimaryAccount:(bool)arg1;
- (void)setUseCellular:(bool)arg1 forDataclass:(id)arg2;
- (void)setUsername:(id)arg1;
- (void)setupChildMailAccountAndEnable:(bool)arg1 withEmail:(id)arg2;
- (void)signInWithHandler:(id /* block */)arg1;
- (id)supportedDataclasses;
- (id)syncStoreIdentifier;
- (void)updateAccountPropertiesWithHandler:(id /* block */)arg1;
- (void)updateAccountWithProvisioningResponse:(id)arg1;
- (bool)useCellularForDataclass:(id)arg1;
- (id)username;

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