<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WFNetworkProfile.h</title>
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

/PrivateFrameworks/WiFiKit.framework/WFNetworkProfile.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit (1)
 */

@interface WFNetworkProfile : NSObject <NSMutableCopying> {
    NSString * _HS20AccountName;
    NSString * _HS20Badge;
    bool  _HS20Network;
    bool  _HS20NetworkProvisioned;
    struct __SecIdentity { } * _TLSIdentity;
    NSDate * _addedDate;
    bool  _adhoc;
    bool  _autoJoinEnabled;
    bool  _autoLoginEnabled;
    NSString * _bssid;
    bool  _canExposeIMSI;
    bool  _captive;
    bool  _carPlay;
    long long  _carPlayType;
    NSString * _carPlayUUID;
    bool  _carrierBased;
    NSArray * _certificateChain;
    NSDictionary * _enterpriseProfile;
    bool  _fetchedPassword;
    bool  _hidden;
    NSDate * _lastAutoJoinDate;
    bool  _managed;
    NSString * _originatorBundleIdentifier;
    NSString * _password;
    NSString * _policyUUID;
    NSString * _previousPassword;
    bool  _requiresPassword;
    NSDictionary * _scanAttributes;
    long long  _securityMode;
    NSString * _ssid;
    NSString * _username;
}

@property (nonatomic, retain) NSString *HS20AccountName;
@property (nonatomic, retain) NSString *HS20Badge;
@property (getter=isHS20Network, nonatomic) bool HS20Network;
@property (getter=isHS20NetworkProvisioned, nonatomic) bool HS20NetworkProvisioned;
@property (nonatomic) struct __SecIdentity { }*TLSIdentity;
@property (nonatomic, readonly) NSDate *addedDate;
@property (getter=isAdhoc, nonatomic) bool adhoc;
@property (getter=isAutoJoinEnabled, nonatomic) bool autoJoinEnabled;
@property (getter=isAutoLoginEnabled, nonatomic, readonly) bool autoLoginEnabled;
@property (nonatomic, retain) NSString *bssid;
@property (nonatomic) bool canExposeIMSI;
@property (getter=isCaptive, nonatomic) bool captive;
@property (getter=isCarPlay, nonatomic) bool carPlay;
@property (nonatomic) long long carPlayType;
@property (nonatomic, copy) NSString *carPlayUUID;
@property (getter=isCarrierBased, nonatomic) bool carrierBased;
@property (nonatomic, readonly) NSArray *certificateChain;
@property (nonatomic, retain) NSDictionary *enterpriseProfile;
@property (nonatomic) bool fetchedPassword;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, readonly) NSDate *lastAutoJoinDate;
@property (getter=isManaged, nonatomic, readonly) bool managed;
@property (nonatomic, copy) NSString *originatorBundleIdentifier;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, copy) NSString *policyUUID;
@property (nonatomic, readonly) NSString *previousPassword;
@property (nonatomic) bool requiresPassword;
@property (nonatomic, readonly) bool requiresUsernameAndPassword;
@property (nonatomic, retain) NSDictionary *scanAttributes;
@property (nonatomic) long long securityMode;
@property (nonatomic, retain) NSString *ssid;
@property (nonatomic, readonly) bool userProvidedPassword;
@property (nonatomic, readonly) NSString *username;

+ (bool)networkProfileRepresentSameNetwork:(id)arg1 toNetworkProfile:(id)arg2;

- (void).cxx_destruct;
- (id)HS20AccountName;
- (id)HS20Badge;
- (struct __SecIdentity { }*)TLSIdentity;
- (bool)TLSProfileCanJoin;
- (id)addedDate;
- (id)bssid;
- (bool)canAttemptJoin;
- (bool)canExposeIMSI;
- (long long)carPlayType;
- (id)carPlayUUID;
- (id)certificateChain;
- (id)description;
- (id)enterpriseProfile;
- (bool)fetchedPassword;
- (unsigned long long)hash;
- (id)initWithNetwork:(id)arg1;
- (id)initWithNetworkRef:(struct __WiFiNetwork { }*)arg1;
- (bool)isAdhoc;
- (bool)isAutoJoinEnabled;
- (bool)isAutoLoginEnabled;
- (bool)isCaptive;
- (bool)isCarPlay;
- (bool)isCarrierBased;
- (bool)isEnterprise;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNetwork:(id)arg1;
- (bool)isHS20Network;
- (bool)isHS20NetworkProvisioned;
- (bool)isHidden;
- (bool)isManaged;
- (id)lastAutoJoinDate;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)networkAttributes;
- (id)originatorBundleIdentifier;
- (id)password;
- (id)policyUUID;
- (id)previousPassword;
- (bool)profileContainsCarrierEAPType:(id)arg1;
- (bool)profileContainsEAPAKA:(id)arg1;
- (bool)profileContainsEAPSIM:(id)arg1;
- (bool)requiresPassword;
- (bool)requiresTLSIdentityOnly;
- (bool)requiresUsernameAndPassword;
- (id)scanAttributes;
- (long long)securityMode;
- (void)setAdhoc:(bool)arg1;
- (void)setAutoJoinEnabled:(bool)arg1;
- (void)setBssid:(id)arg1;
- (void)setCanExposeIMSI:(bool)arg1;
- (void)setCaptive:(bool)arg1;
- (void)setCarPlay:(bool)arg1;
- (void)setCarPlayType:(long long)arg1;
- (void)setCarPlayUUID:(id)arg1;
- (void)setCarrierBased:(bool)arg1;
- (void)setEnterpriseProfile:(id)arg1;
- (void)setFetchedPassword:(bool)arg1;
- (void)setHS20AccountName:(id)arg1;
- (void)setHS20Badge:(id)arg1;
- (void)setHS20Network:(bool)arg1;
- (void)setHS20NetworkProvisioned:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setOriginatorBundleIdentifier:(id)arg1;
- (void)setPolicyUUID:(id)arg1;
- (void)setRequiresPassword:(bool)arg1;
- (void)setScanAttributes:(id)arg1;
- (void)setSecurityMode:(long long)arg1;
- (void)setSsid:(id)arg1;
- (void)setTLSIdentity:(struct __SecIdentity { }*)arg1;
- (id)ssid;
- (bool)userProvidedPassword;
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
