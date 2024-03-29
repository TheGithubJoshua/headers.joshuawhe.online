<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MCWiFiPayload.h</title>
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

/PrivateFrameworks/ManagedConfiguration.framework/MCWiFiPayload.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration (1.0)
 */

@interface MCWiFiPayload : MCPayload {
    NSString * _HESSID;
    NSArray * _MCCAndMNCs;
    NSArray * _NAIRealmNames;
    bool  _autoJoin;
    NSNumber * _autoJoinNum;
    bool  _captiveBypass;
    NSNumber * _captiveBypassNum;
    NSString * _certificateUUID;
    NSString * _credentialUUID;
    NSString * _displayedOperatorName;
    NSString * _domainName;
    NSDictionary * _eapClientConfig;
    NSString * _encryptionType;
    NSNumber * _isFirstAutoJoinRestricted;
    bool  _isHidden;
    NSNumber * _isHiddenNum;
    bool  _isHotspot;
    NSNumber * _isHotspotNum;
    bool  _isWEP;
    bool  _isWPA;
    NSString * _password;
    bool  _passwordRequired;
    NSArray * _payloadCertificateAnchorUUID;
    NSNumber * _priority;
    bool  _proxyPACFallbackAllowed;
    NSNumber * _proxyPACFallbackAllowedNum;
    NSString * _proxyPACURLString;
    NSString * _proxyPassword;
    NSString * _proxyServer;
    NSNumber * _proxyServerPort;
    int  _proxyType;
    NSString * _proxyUsername;
    NSDictionary * _qosMarkingConfig;
    NSArray * _roamingConsortiumOIs;
    bool  _serviceProviderRoamingEnabled;
    NSNumber * _serviceProviderRoamingEnabledNum;
    NSString * _ssid;
    NSString * _username;
    bool  _usernameRequired;
}

@property (nonatomic, retain) NSString *HESSID;
@property (nonatomic, retain) NSArray *MCCAndMNCs;
@property (nonatomic, retain) NSArray *NAIRealmNames;
@property (nonatomic) bool autoJoin;
@property (nonatomic, retain) NSNumber *autoJoinNum;
@property (nonatomic) bool captiveBypass;
@property (nonatomic, retain) NSNumber *captiveBypassNum;
@property (nonatomic, retain) NSString *certificateUUID;
@property (nonatomic, retain) NSString *credentialUUID;
@property (nonatomic, retain) NSString *displayedOperatorName;
@property (nonatomic, retain) NSString *domainName;
@property (nonatomic, retain) NSDictionary *eapClientConfig;
@property (nonatomic, retain) NSString *encryptionType;
@property (nonatomic) NSNumber *isFirstAutoJoinRestricted;
@property (nonatomic) bool isHidden;
@property (nonatomic, retain) NSNumber *isHiddenNum;
@property (nonatomic) bool isHotspot;
@property (nonatomic, retain) NSNumber *isHotspotNum;
@property (nonatomic) bool isWEP;
@property (nonatomic) bool isWPA;
@property (nonatomic, retain) NSString *password;
@property (nonatomic) bool passwordRequired;
@property (nonatomic, retain) NSArray *payloadCertificateAnchorUUID;
@property (nonatomic, retain) NSNumber *priority;
@property (nonatomic) bool proxyPACFallbackAllowed;
@property (nonatomic, retain) NSNumber *proxyPACFallbackAllowedNum;
@property (nonatomic, retain) NSString *proxyPACURLString;
@property (nonatomic, retain) NSString *proxyPassword;
@property (nonatomic, retain) NSString *proxyServer;
@property (nonatomic, retain) NSNumber *proxyServerPort;
@property (nonatomic) int proxyType;
@property (nonatomic, retain) NSString *proxyUsername;
@property (nonatomic, retain) NSDictionary *qosMarkingConfig;
@property (nonatomic, retain) NSArray *roamingConsortiumOIs;
@property (getter=isServiceProviderRoamingEnabled, nonatomic) bool serviceProviderRoamingEnabled;
@property (nonatomic, retain) NSNumber *serviceProviderRoamingEnabledNum;
@property (nonatomic, retain) NSString *ssid;
@property (nonatomic, retain) NSString *username;
@property (nonatomic) bool usernameRequired;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)HESSID;
- (id)MCCAndMNCs;
- (id)NAIRealmNames;
- (bool)_eapConfigIsValid:(id)arg1 error:(id*)arg2;
- (id)_eapPasswordFromConfig:(id)arg1 isRequired:(bool*)arg2;
- (id)_eapUsernameFromConfig:(id)arg1 isRequired:(bool*)arg2;
- (bool)_isEAPSIMConfig:(id)arg1;
- (id)_localizedEncryptionTypeString;
- (bool)_qosMarkingConfigIsValid:(id)arg1 error:(id*)arg2;
- (bool)autoJoin;
- (id)autoJoinNum;
- (bool)captiveBypass;
- (id)captiveBypassNum;
- (id)certificateUUID;
- (id)credentialUUID;
- (id)description;
- (id)displayedOperatorName;
- (id)domainName;
- (id)eapClientConfig;
- (id)encryptionType;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)isFirstAutoJoinRestricted;
- (bool)isHidden;
- (id)isHiddenNum;
- (bool)isHotspot;
- (id)isHotspotNum;
- (bool)isServiceProviderRoamingEnabled;
- (bool)isWEP;
- (bool)isWPA;
- (id)password;
- (bool)passwordRequired;
- (id)payloadCertificateAnchorUUID;
- (id)payloadDescriptionKeyValueSections;
- (id)priority;
- (bool)proxyPACFallbackAllowed;
- (id)proxyPACFallbackAllowedNum;
- (id)proxyPACURLString;
- (id)proxyPassword;
- (id)proxyServer;
- (id)proxyServerPort;
- (int)proxyType;
- (id)proxyUsername;
- (id)qosMarkingConfig;
- (id)roamingConsortiumOIs;
- (id)serviceProviderRoamingEnabledNum;
- (void)setAutoJoin:(bool)arg1;
- (void)setAutoJoinNum:(id)arg1;
- (void)setCaptiveBypass:(bool)arg1;
- (void)setCaptiveBypassNum:(id)arg1;
- (void)setCertificateUUID:(id)arg1;
- (void)setCredentialUUID:(id)arg1;
- (void)setDisplayedOperatorName:(id)arg1;
- (void)setDomainName:(id)arg1;
- (void)setEapClientConfig:(id)arg1;
- (void)setEncryptionType:(id)arg1;
- (void)setHESSID:(id)arg1;
- (void)setIsFirstAutoJoinRestricted:(id)arg1;
- (void)setIsHidden:(bool)arg1;
- (void)setIsHiddenNum:(id)arg1;
- (void)setIsHotspot:(bool)arg1;
- (void)setIsHotspotNum:(id)arg1;
- (void)setIsWEP:(bool)arg1;
- (void)setIsWPA:(bool)arg1;
- (void)setMCCAndMNCs:(id)arg1;
- (void)setNAIRealmNames:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordRequired:(bool)arg1;
- (void)setPayloadCertificateAnchorUUID:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)setProxyPACFallbackAllowed:(bool)arg1;
- (void)setProxyPACFallbackAllowedNum:(id)arg1;
- (void)setProxyPACURLString:(id)arg1;
- (void)setProxyPassword:(id)arg1;
- (void)setProxyServer:(id)arg1;
- (void)setProxyServerPort:(id)arg1;
- (void)setProxyType:(int)arg1;
- (void)setProxyUsername:(id)arg1;
- (void)setQosMarkingConfig:(id)arg1;
- (void)setRoamingConsortiumOIs:(id)arg1;
- (void)setServiceProviderRoamingEnabled:(bool)arg1;
- (void)setServiceProviderRoamingEnabledNum:(id)arg1;
- (void)setSsid:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setUsernameRequired:(bool)arg1;
- (id)ssid;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)userInputFields;
- (id)username;
- (bool)usernameRequired;

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
