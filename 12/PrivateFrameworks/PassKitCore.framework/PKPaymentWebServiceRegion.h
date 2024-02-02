<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKPaymentWebServiceRegion.h</title>
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

/PrivateFrameworks/PassKitCore.framework/PKPaymentWebServiceRegion.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore (1)
 */

@interface PKPaymentWebServiceRegion : NSObject <NSSecureCoding> {
    NSString * _accountServicePushTopic;
    NSURL * _accountServiceURL;
    NSString * _applyServicePushTopic;
    NSURL * _applyServiceURL;
    NSURL * _brokerURL;
    NSArray * _certificates;
    long long  _consistencyCheckBackoffLevel;
    NSString * _deviceCheckInPushTopic;
    bool  _hasAccounts;
    bool  _hasApplications;
    bool  _hasPeerPaymentAccount;
    NSURL * _inAppPaymentServicesURL;
    NSString * _lastDeviceCheckInBuildVersion;
    NSString * _lastUpdatedTag;
    long long  _outstandingCheckInAction;
    NSURL * _paymentServicesMerchantURL;
    NSURL * _paymentServicesURL;
    NSURL * _peerPaymentServiceURL;
    NSString * _productsPushTopic;
    NSString * _regionCode;
    NSString * _trustedServiceManagerPushTopic;
    NSURL * _trustedServiceManagerURL;
    NSString * _userNotificationPushTopic;
}

@property (nonatomic, retain) NSString *accountServicePushTopic;
@property (nonatomic, retain) NSURL *accountServiceURL;
@property (nonatomic, retain) NSString *applyServicePushTopic;
@property (nonatomic, retain) NSURL *applyServiceURL;
@property (nonatomic, retain) NSURL *brokerURL;
@property (nonatomic, retain) NSArray *certificates;
@property (nonatomic) long long consistencyCheckBackoffLevel;
@property (nonatomic, copy) NSString *deviceCheckInPushTopic;
@property (nonatomic) bool hasAccounts;
@property (nonatomic) bool hasApplications;
@property (nonatomic) bool hasPeerPaymentAccount;
@property (nonatomic, retain) NSURL *inAppPaymentServicesURL;
@property (nonatomic, copy) NSString *lastDeviceCheckInBuildVersion;
@property (nonatomic, retain) NSString *lastUpdatedTag;
@property (nonatomic) long long outstandingCheckInAction;
@property (nonatomic, retain) NSURL *paymentServicesMerchantURL;
@property (nonatomic, retain) NSURL *paymentServicesURL;
@property (nonatomic, retain) NSURL *peerPaymentServiceURL;
@property (nonatomic, copy) NSString *productsPushTopic;
@property (nonatomic, retain) NSString *regionCode;
@property (nonatomic, retain) NSString *trustedServiceManagerPushTopic;
@property (nonatomic, retain) NSURL *trustedServiceManagerURL;
@property (nonatomic, retain) NSString *userNotificationPushTopic;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountServicePushTopic;
- (id)accountServiceURL;
- (id)applyServicePushTopic;
- (id)applyServiceURL;
- (id)brokerURL;
- (id)certificates;
- (long long)consistencyCheckBackoffLevel;
- (id)description;
- (id)deviceCheckInPushTopic;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAccounts;
- (bool)hasApplications;
- (bool)hasPeerPaymentAccount;
- (id)inAppPaymentServicesURL;
- (id)initWithCoder:(id)arg1;
- (id)lastDeviceCheckInBuildVersion;
- (id)lastUpdatedTag;
- (long long)outstandingCheckInAction;
- (id)paymentServicesMerchantURL;
- (id)paymentServicesURL;
- (id)peerPaymentServiceURL;
- (id)productsPushTopic;
- (id)regionCode;
- (void)setAccountServicePushTopic:(id)arg1;
- (void)setAccountServiceURL:(id)arg1;
- (void)setApplyServicePushTopic:(id)arg1;
- (void)setApplyServiceURL:(id)arg1;
- (void)setBrokerURL:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setConsistencyCheckBackoffLevel:(long long)arg1;
- (void)setDeviceCheckInPushTopic:(id)arg1;
- (void)setHasAccounts:(bool)arg1;
- (void)setHasApplications:(bool)arg1;
- (void)setHasPeerPaymentAccount:(bool)arg1;
- (void)setInAppPaymentServicesURL:(id)arg1;
- (void)setLastDeviceCheckInBuildVersion:(id)arg1;
- (void)setLastUpdatedTag:(id)arg1;
- (void)setOutstandingCheckInAction:(long long)arg1;
- (void)setPaymentServicesMerchantURL:(id)arg1;
- (void)setPaymentServicesURL:(id)arg1;
- (void)setPeerPaymentServiceURL:(id)arg1;
- (void)setProductsPushTopic:(id)arg1;
- (void)setRegionCode:(id)arg1;
- (void)setTrustedServiceManagerPushTopic:(id)arg1;
- (void)setTrustedServiceManagerURL:(id)arg1;
- (void)setUserNotificationPushTopic:(id)arg1;
- (id)trustedServiceManagerPushTopic;
- (id)trustedServiceManagerURL;
- (id)userNotificationPushTopic;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npkPossiblyOverriddenPeerPaymentServiceURL;

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