<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKPaymentSetupProduct.h</title>
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

/PrivateFrameworks/PassKitCore.framework/PKPaymentSetupProduct.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore (1)
 */

@interface PKPaymentSetupProduct : NSObject <NSCopying> {
    NSURL * _appLaunchURL;
    NSArray * _associatedStoreIdentifiers;
    PKPaymentSetupProductConfiguration * _configuration;
    NSString * _displayName;
    NSArray * _featureApplications;
    unsigned long long  _flags;
    bool  _hasAccount;
    long long  _hsa2Requirement;
    PKPaymentSetupProductImageAssetURLs * _imageAssetURLs;
    PKPaymentSetupProductImageAssets * _imageAssets;
    NSDictionary * _minimumOSVersion;
    NSArray * _onboardingItems;
    NSArray * _paymentOptions;
    NSDictionary * _rawDictionary;
    NSDictionary * _readerModeMetadata;
    NSSet * _regions;
    NSMutableDictionary * _requestedProvisioningMethods;
    NSArray * _requiredFields;
    NSArray * _searchTerms;
    NSArray * _supportedCameraCaptureTypes;
    NSArray * _supportedInAppTypes;
    NSArray * _supportedProtocols;
    long long  _supportedProvisioningMethods;
    NSArray * _supportedTransitNetworkIdentifiers;
    bool  _suppressPendingPurchases;
    NSURL * _termsURL;
}

@property (nonatomic, copy) NSURL *appLaunchURL;
@property (nonatomic, copy) NSArray *associatedStoreIdentifiers;
@property (nonatomic, readonly, copy) PKPaymentSetupProductConfiguration *configuration;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) NSArray *featureApplications;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) bool hasAccount;
@property (nonatomic) long long hsa2Requirement;
@property (nonatomic, readonly) PKPaymentSetupProductImageAssetURLs *imageAssetURLs;
@property (nonatomic, readonly) PKPaymentSetupProductImageAssets *imageAssets;
@property (nonatomic, retain) NSDictionary *minimumOSVersion;
@property (nonatomic, retain) NSArray *onboardingItems;
@property (nonatomic, readonly, copy) NSString *partnerName;
@property (nonatomic, readonly, copy) NSArray *paymentOptions;
@property (nonatomic, copy) NSDictionary *rawDictionary;
@property (nonatomic, readonly, copy) NSDictionary *readerModeMetadata;
@property (nonatomic, copy) NSSet *regions;
@property (nonatomic, retain) NSMutableDictionary *requestedProvisioningMethods;
@property (nonatomic, copy) NSArray *requiredFields;
@property (nonatomic, readonly, copy) NSArray *searchTerms;
@property (nonatomic, readonly, copy) NSArray *supportedCameraCaptureTypes;
@property (nonatomic, readonly, copy) NSArray *supportedInAppTypes;
@property (nonatomic, copy) NSArray *supportedProtocols;
@property (nonatomic) long long supportedProvisioningMethods;
@property (nonatomic, readonly, copy) NSArray *supportedTransitNetworkIdentifiers;
@property (nonatomic, readonly) bool suppressPendingPurchases;
@property (nonatomic, copy) NSURL *termsURL;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)_displayNameForCardType:(id)arg1;
+ (id)_inAppProvisioningURLWthScheme:(id)arg1 path:(id)arg2;
+ (void)_updateProduct:(id)arg1 withDebugConfigurationForState:(unsigned long long)arg2;
+ (id)partnerProductsFromArrayOfPartners:(id)arg1 andProducts:(id)arg2;
+ (id)productsFromBrowseableBankApps:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithDisplayName:(id)arg1 partnerDictionary:(id)arg2 productIdentifier:(id)arg3 paymentOptions:(id)arg4 termsURL:(id)arg5 provisioningMethods:(id)arg6 readerModeMetadata:(id)arg7 requiredFields:(id)arg8 imageAssets:(id)arg9 minimumOSVersion:(id)arg10 region:(id)arg11 hsa2Requirement:(id)arg12 suppressPendingPurchases:(id)arg13 onboardingItems:(id)arg14 actionBaseURL:(id)arg15 productState:(id)arg16;
- (long long)allSupportedProtocols;
- (id)appLaunchURL;
- (id)associatedStoreIdentifiers;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)featureApplications;
- (unsigned long long)flags;
- (bool)hasAccount;
- (long long)hsa2Requirement;
- (id)imageAssetURLs;
- (id)imageAssets;
- (id)initWithFeatureIdentifier:(unsigned long long)arg1;
- (id)initWithProductDictionary:(id)arg1;
- (id)minimumOSVersion;
- (id)onboardingItems;
- (id)partnerIdentifier;
- (id)partnerName;
- (id)paymentOptions;
- (id)productIdentifier;
- (id)provisioningMethodMetadataForType:(id)arg1;
- (id)provisioningMethodTypes;
- (id)rawDictionary;
- (id)readerModeMetadata;
- (id)regions;
- (id)requestedProvisioningMethods;
- (id)requiredFields;
- (id)searchTerms;
- (void)setAppLaunchURL:(id)arg1;
- (void)setAssociatedStoreIdentifiers:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFeatureApplications:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setHasAccount:(bool)arg1;
- (void)setHsa2Requirement:(long long)arg1;
- (void)setMinimumOSVersion:(id)arg1;
- (void)setOnboardingItems:(id)arg1;
- (void)setProvisioningMethodMetadata:(id)arg1 forType:(id)arg2;
- (void)setRawDictionary:(id)arg1;
- (void)setRegions:(id)arg1;
- (void)setRequestedProvisioningMethods:(id)arg1;
- (void)setRequiredFields:(id)arg1;
- (void)setSupportedProtocols:(id)arg1;
- (void)setSupportedProvisioningMethods:(long long)arg1;
- (void)setTermsURL:(id)arg1;
- (id)supportedCameraCaptureTypes;
- (id)supportedInAppTypes;
- (id)supportedProtocols;
- (long long)supportedProvisioningMethods;
- (id)supportedTransitNetworkIdentifiers;
- (bool)supportsDevice:(id)arg1;
- (bool)supportsOSVersion:(id)arg1 deviceClass:(id)arg2;
- (bool)suppressPendingPurchases;
- (id)termsURL;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)_commonCachedImageFromURL:(id)arg1 completion:(id /* block */)arg2;
- (id)_getCardImageUrlFromMetadata:(id)arg1 forScale:(double)arg2;
- (id)digitalCardCachedImage:(id /* block */)arg1;
- (id)logoCachedImage:(id /* block */)arg1;
- (id)plasticCardCachedImage:(id /* block */)arg1;
- (void)resetCache;
- (id)thumbnailCachedImageForSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;

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