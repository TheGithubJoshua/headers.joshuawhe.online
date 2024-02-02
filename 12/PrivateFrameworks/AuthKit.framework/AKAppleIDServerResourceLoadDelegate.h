<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AKAppleIDServerResourceLoadDelegate.h</title>
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

/PrivateFrameworks/AuthKit.framework/AKAppleIDServerResourceLoadDelegate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit (1)
 */

@interface AKAppleIDServerResourceLoadDelegate : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    <AKAnisetteServiceProtocol> * _anisetteDataProvider;
    NSString * _clientAppName;
    NSString * _continuationToken;
    NSString * _followupItems;
    NSNumber * _hasEmptyPasswordOverride;
    NSString * _heartbeatToken;
    NSString * _identityToken;
    NSArray * _loggedInServices;
    NSString * _passwordResetToken;
    NSArray * _phoneInformation;
    NSString * _phoneNumberCertificate;
    AKDevice * _proxiedDevice;
    AKAnisetteData * _proxiedDeviceAnisetteData;
    NSString * _proxyAppName;
    NSString * _securityUpgradeContext;
    NSString * _serviceToken;
    long long  _serviceType;
    bool  _shouldSendEphemeralAuthHeader;
    bool  _shouldSendICSCIntentHeader;
    bool  _shouldSendLocalUserHasAppleIDLoginHeader;
    bool  _shouldSendPhoneNumber;
    bool  _shouldSendSigningHeaders;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, retain) <AKAnisetteServiceProtocol> *anisetteDataProvider;
@property (nonatomic, copy) NSString *clientAppName;
@property (nonatomic, copy) NSString *continuationToken;
@property (nonatomic, copy) NSString *followupItems;
@property (nonatomic, retain) NSNumber *hasEmptyPasswordOverride;
@property (nonatomic, copy) NSString *heartbeatToken;
@property (nonatomic, copy) NSString *identityToken;
@property (nonatomic, copy) NSArray *loggedInServices;
@property (nonatomic, copy) NSString *passwordResetToken;
@property (nonatomic, copy) NSArray *phoneInformation;
@property (nonatomic, copy) NSString *phoneNumberCertificate;
@property (nonatomic, retain) AKDevice *proxiedDevice;
@property (nonatomic, retain) AKAnisetteData *proxiedDeviceAnisetteData;
@property (nonatomic, copy) NSString *proxyAppName;
@property (nonatomic, copy) NSString *securityUpgradeContext;
@property (nonatomic, copy) NSString *serviceToken;
@property (nonatomic) long long serviceType;
@property (nonatomic) bool shouldSendAbsintheHeader;
@property (nonatomic) bool shouldSendEphemeralAuthHeader;
@property (nonatomic) bool shouldSendICSCIntentHeader;
@property (nonatomic) bool shouldSendLocalUserHasAppleIDLoginHeader;
@property (nonatomic) bool shouldSendPhoneNumber;
@property (nonatomic) bool shouldSendSigningHeaders;

+ (id)sharedController;
+ (unsigned long long)signalFromServerResponse:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_signRequest:(id)arg1;
- (void)_signWithFeatureOptInHeaders:(id)arg1;
- (id)altDSID;
- (id)anisetteDataProvider;
- (id)clientAppName;
- (id)continuationToken;
- (void)encodeWithCoder:(id)arg1;
- (id)followupItems;
- (id)hasEmptyPasswordOverride;
- (id)heartbeatToken;
- (id)identityToken;
- (id)initWithAltDSID:(id)arg1 identityToken:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isAuthenticationRequired:(id)arg1;
- (bool)isResponseActionable:(id)arg1;
- (bool)isResponseFinal:(id)arg1;
- (bool)isResponseFinalForHSA2ServerFlow:(id)arg1;
- (id)loggedInServices;
- (id)passwordResetToken;
- (id)phoneInformation;
- (id)phoneNumberCertificate;
- (id)proxiedDevice;
- (id)proxiedDeviceAnisetteData;
- (id)proxyAppName;
- (id)securityUpgradeContext;
- (id)serviceToken;
- (long long)serviceType;
- (void)setAltDSID:(id)arg1;
- (void)setAnisetteDataProvider:(id)arg1;
- (void)setClientAppName:(id)arg1;
- (void)setContinuationToken:(id)arg1;
- (void)setFollowupItems:(id)arg1;
- (void)setHasEmptyPasswordOverride:(id)arg1;
- (void)setHeartbeatToken:(id)arg1;
- (void)setIdentityToken:(id)arg1;
- (void)setLoggedInServices:(id)arg1;
- (void)setPasswordResetToken:(id)arg1;
- (void)setPhoneInformation:(id)arg1;
- (void)setPhoneNumberCertificate:(id)arg1;
- (void)setProxiedDevice:(id)arg1;
- (void)setProxiedDeviceAnisetteData:(id)arg1;
- (void)setProxyAppName:(id)arg1;
- (void)setSecurityUpgradeContext:(id)arg1;
- (void)setServiceToken:(id)arg1;
- (void)setServiceType:(long long)arg1;
- (void)setShouldSendAbsintheHeader:(bool)arg1;
- (void)setShouldSendEphemeralAuthHeader:(bool)arg1;
- (void)setShouldSendICSCIntentHeader:(bool)arg1;
- (void)setShouldSendLocalUserHasAppleIDLoginHeader:(bool)arg1;
- (void)setShouldSendPhoneNumber:(bool)arg1;
- (void)setShouldSendSigningHeaders:(bool)arg1;
- (bool)shouldSendAbsintheHeader;
- (bool)shouldSendEphemeralAuthHeader;
- (bool)shouldSendICSCIntentHeader;
- (bool)shouldSendLocalUserHasAppleIDLoginHeader;
- (bool)shouldSendPhoneNumber;
- (bool)shouldSendSigningHeaders;
- (void)signRequest:(id)arg1;
- (void)signRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)signRequestWithCommonHeaders:(id)arg1;

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