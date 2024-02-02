<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CDPContext.h</title>
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

/PrivateFrameworks/CoreCDP.framework/CDPContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP (1)
 */

@interface CDPContext : NSObject <NSCopying, NSSecureCoding> {
    bool  __alwaysCreateEscrowRecord;
    <CDPAuthProviderInternal> * __authProvider;
    NSString * __recoveryToken;
    bool  __useSecureBackupCachedPassphrase;
    NSString * _altDSID;
    NSString * _appleID;
    NSDictionary * _authenticationResults;
    NSString * _cachedLocalSecret;
    unsigned long long  _cachedLocalSecretType;
    bool  _didUseSMSVerification;
    NSNumber * _dsid;
    KCAESGCMDuplexSession * _duplexSession;
    NSString * _findMyiPhoneUUID;
    bool  _guestMode;
    bool  _idmsMasterKeyRecovery;
    bool  _idmsRecovery;
    bool  _isFederatedAccount;
    bool  _isHSA2Account;
    NSString * _password;
    NSString * _passwordEquivToken;
    AKCircleRequestContext * _resumeContext;
    CUMessageSession * _sharingChannel;
    NSMutableArray * _signInMetricsStack;
    bool  _supportsSkipSignIn;
    long long  _type;
}

@property (nonatomic) bool _alwaysCreateEscrowRecord;
@property (nonatomic, retain) <CDPAuthProviderInternal> *_authProvider;
@property (nonatomic, copy) NSString *_recoveryToken;
@property (nonatomic) bool _useSecureBackupCachedPassphrase;
@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, copy) NSDictionary *authenticationResults;
@property (nonatomic, copy) NSString *cachedLocalSecret;
@property (nonatomic) unsigned long long cachedLocalSecretType;
@property (nonatomic) bool didUseSMSVerification;
@property (nonatomic, copy) NSNumber *dsid;
@property (nonatomic, retain) KCAESGCMDuplexSession *duplexSession;
@property (copy) NSString *findMyiPhoneUUID;
@property (nonatomic) bool guestMode;
@property (nonatomic) bool idmsMasterKeyRecovery;
@property (nonatomic) bool idmsRecovery;
@property (nonatomic) bool isFederatedAccount;
@property (nonatomic) bool isHSA2Account;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *passwordEquivToken;
@property (nonatomic, retain) AKCircleRequestContext *resumeContext;
@property (nonatomic, retain) CUMessageSession *sharingChannel;
@property bool supportsSkipSignIn;
@property (nonatomic) long long type;

// Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP

+ (id)_metricsQueue;
+ (id)preflightContext:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_alwaysCreateEscrowRecord;
- (id)_authProvider;
- (id)_recoveryToken;
- (bool)_useSecureBackupCachedPassphrase;
- (id)altDSID;
- (id)appleID;
- (void)augmentWithCredentialsFromContext:(id)arg1;
- (id)authenticationResults;
- (id)cachedLocalSecret;
- (unsigned long long)cachedLocalSecretType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)desiresAllRecords;
- (bool)didUseSMSVerification;
- (id)dsid;
- (id)duplexSession;
- (void)encodeWithCoder:(id)arg1;
- (struct __CFData { }*)encodedTopLevelMetric;
- (id)findMyiPhoneUUID;
- (bool)guestMode;
- (bool)idmsMasterKeyRecovery;
- (bool)idmsRecovery;
- (id)init;
- (id)initWithAuthenticationResults:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isFederatedAccount;
- (bool)isHSA2Account;
- (id)password;
- (id)passwordEquivToken;
- (void)purgeResumeData;
- (id)resumeContext;
- (void)setAltDSID:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setAuthenticationResults:(id)arg1;
- (void)setCachedLocalSecret:(id)arg1;
- (void)setCachedLocalSecretType:(unsigned long long)arg1;
- (void)setDidUseSMSVerification:(bool)arg1;
- (void)setDsid:(id)arg1;
- (void)setDuplexSession:(id)arg1;
- (void)setFindMyiPhoneUUID:(id)arg1;
- (void)setGuestMode:(bool)arg1;
- (void)setIdmsMasterKeyRecovery:(bool)arg1;
- (void)setIdmsRecovery:(bool)arg1;
- (void)setIsFederatedAccount:(bool)arg1;
- (void)setIsHSA2Account:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordEquivToken:(id)arg1;
- (void)setResumeContext:(id)arg1;
- (void)setSharingChannel:(id)arg1;
- (void)setSupportsSkipSignIn:(bool)arg1;
- (void)setType:(long long)arg1;
- (void)set_alwaysCreateEscrowRecord:(bool)arg1;
- (void)set_authProvider:(id)arg1;
- (void)set_recoveryToken:(id)arg1;
- (void)set_useSecureBackupCachedPassphrase:(bool)arg1;
- (id)sharingChannel;
- (id)startMetricForEventName:(id)arg1;
- (void)stopMetric:(id)arg1 withAttributes:(id)arg2;
- (bool)supportsSkipSignIn;
- (id)topLevelMetric;
- (long long)type;
- (void)updateWithAuthenticationResults:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal

- (void)reauthenticateUserWithCompletion:(id /* block */)arg1;

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