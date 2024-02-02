<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FBApplicationInfo.h</title>
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

/PrivateFrameworks/FrontBoard.framework/FBApplicationInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard (486.52)
 */

@interface FBApplicationInfo : FBBundleInfo <BSDescriptionProviding> {
    NSString * _appIDEntitlement;
    NSSet * _backgroundModes;
    bool  _beta;
    bool  _blocked;
    bool  _blockedForScreenTimeExpiration;
    NSURL * _bundleContainerURL;
    NSArray * _customMachServices;
    NSURL * _dataContainerURL;
    FBMutableApplicationDefaults * _defaults;
    NSArray * _deviceFamilies;
    NSNumber * _downloaderDSID;
    bool  _enabled;
    NSDictionary * _environmentVariables;
    NSURL * _executableURL;
    bool  _exitsOnSuspend;
    NSArray * _externalAccessoryProtocols;
    bool  _hasViewServicesEntitlement;
    bool  _initialized;
    bool  _installing;
    bool  _isManaged;
    NSNumber * _itemID;
    double  _lastModifiedDate;
    NSDictionary * _lazy_entitlements;
    NSString * _lazy_fallbackFolderName;
    NSArray * _lazy_folderNames;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    float  _minimumBrightnessLevel;
    bool  _newsstand;
    bool  _pendingUninstall;
    NSString * _preferenceDomain;
    FBProfileManager * _profileManager;
    bool  _provisioningProfileValidated;
    NSNumber * _purchaserDSID;
    long long  _ratingRank;
    NSArray * _requiredCapabilities;
    bool  _requiresPersistentWiFi;
    bool  _restricted;
    NSURL * _sandboxURL;
    NSString * _sdkVersion;
    NSString * _signerIdentity;
    unsigned long long  _supportedInterfaceOrientations;
    NSArray * _tags;
    unsigned long long  _type;
    bool  _uninstalling;
}

@property (getter=_appIDEntitlement, nonatomic, readonly, copy) NSString *appIDEntitlement;
@property (getter=isBeta, nonatomic, readonly) bool beta;
@property (getter=isBlocked, nonatomic, readonly) bool blocked;
@property (getter=isBlockedForScreenTimeExpiration, nonatomic, readonly) bool blockedForScreenTimeExpiration;
@property (nonatomic, readonly) NSURL *bundleContainerURL;
@property (nonatomic, retain) NSData *cachedCodeDirectoryHash;
@property (nonatomic) unsigned int cachedCodeDirectoryHashType;
@property (nonatomic, readonly) NSArray *customMachServices;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) FBApplicationDefaults *defaults;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *deviceFamilies;
@property (nonatomic, readonly) NSNumber *downloaderDSID;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) NSDictionary *environmentVariables;
@property (nonatomic, readonly) NSURL *executableURL;
@property (getter=isExitsOnSuspend, nonatomic, readonly) bool exitsOnSuspend;
@property (nonatomic, readonly) NSArray *externalAccessoryProtocols;
@property (nonatomic, readonly) NSString *fallbackFolderName;
@property (nonatomic, readonly) NSArray *folderNames;
@property (getter=hasFreeDeveloperProvisioningProfile, nonatomic, readonly) bool freeDeveloperProvisioningProfile;
@property (nonatomic, readonly) bool hasViewServicesEntitlement;
@property (readonly) unsigned long long hash;
@property (getter=_isInstalling, setter=_setInstalling:, nonatomic) bool installing;
@property (nonatomic, readonly) NSNumber *itemID;
@property (nonatomic, readonly) double lastModifiedDate;
@property (nonatomic, readonly) float minimumBrightnessLevel;
@property (getter=isNewsstand, nonatomic, readonly) bool newsstand;
@property (getter=_isPendingUninstall, setter=_setPendingUninstall:, nonatomic) bool pendingUninstall;
@property (nonatomic, readonly, copy) NSString *preferenceDomain;
@property (getter=_profileManager, setter=_setProfileManager:, nonatomic, retain) FBProfileManager *profileManager;
@property (getter=isProvisioningProfileValidated, nonatomic, readonly) bool provisioningProfileValidated;
@property (nonatomic, readonly) NSNumber *purchaserDSID;
@property (nonatomic, readonly) long long ratingRank;
@property (nonatomic, readonly) NSArray *requiredCapabilities;
@property (nonatomic, readonly) bool requiresPersistentWiFi;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (nonatomic, readonly) NSURL *sandboxURL;
@property (nonatomic, readonly, copy) NSString *sdkVersion;
@property (nonatomic, readonly) long long signatureState;
@property (nonatomic, readonly, copy) NSString *signerIdentity;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) unsigned long long type;
@property (getter=_isUninstalling, setter=_setUninstalling:, nonatomic) bool uninstalling;
@property (getter=hasUniversalProvisioningProfile, nonatomic, readonly) bool universalProvisioningProfile;

+ (unsigned long long)_applicationTypeForProxy:(id)arg1;
+ (void)_buildDefaults:(id)arg1 fromInfo:(id)arg2 entitlements:(id)arg3 appType:(unsigned long long)arg4 isOnOrAfterOkemo:(bool)arg5;
+ (unsigned long long)_computeSupportedInterfaceOrientationsWithInfo:(id)arg1 forDefaults:(id)arg2;
+ (id)_configureEnvironment:(id)arg1 withInfo:(id)arg2 isPreApex:(bool)arg3;
+ (id)_genreNameForID:(long long)arg1;

- (void).cxx_destruct;
- (id)_appIDEntitlement;
- (id)_applicationTrustData;
- (id)_initForProfileManagerTesting;
- (id)_initWithApplicationProxy:(id)arg1;
- (id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2;
- (id)_initWithBundleProxy:(id)arg1 overrideURL:(id)arg2;
- (bool)_isInstalling;
- (bool)_isPendingUninstall;
- (bool)_isUninstalling;
- (void)_loadFromProxy:(id)arg1;
- (void)_lock_loadFolderNamesIfNecessary;
- (long long)_mapSignatureStateFromTrustState:(unsigned long long)arg1;
- (void)_overrideTags:(id)arg1;
- (id)_profileManager;
- (void)_setInstalling:(bool)arg1;
- (void)_setPendingUninstall:(bool)arg1;
- (void)_setProfileManager:(id)arg1;
- (void)_setUninstalling:(bool)arg1;
- (void)_synchronize:(id /* block */)arg1;
- (void)acceptApplicationSignatureIdentity;
- (bool)builtOnOrAfterSDKVersion:(id)arg1;
- (id)bundleContainerURL;
- (id)cachedCodeDirectoryHash;
- (unsigned int)cachedCodeDirectoryHashType;
- (id)customMachServices;
- (id)dataContainerURL;
- (id)defaults;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)deviceFamilies;
- (id)downloaderDSID;
- (id)entitlements;
- (id)environmentVariables;
- (id)executableURL;
- (id)externalAccessoryProtocols;
- (id)fallbackFolderName;
- (id)folderNames;
- (bool)hasFreeDeveloperProvisioningProfile;
- (bool)hasUniversalProvisioningProfile;
- (bool)hasViewServicesEntitlement;
- (id)initWithApplicationProxy:(id)arg1;
- (bool)isBeta;
- (bool)isBlocked;
- (bool)isBlockedForScreenTimeExpiration;
- (bool)isEnabled;
- (bool)isExitsOnSuspend;
- (bool)isNewsstand;
- (bool)isProvisioningProfileValidated;
- (bool)isRestricted;
- (id)itemID;
- (double)lastModifiedDate;
- (float)minimumBrightnessLevel;
- (id)preferenceDomain;
- (id)purchaserDSID;
- (long long)ratingRank;
- (id)requiredCapabilities;
- (bool)requiresPersistentWiFi;
- (id)sandboxURL;
- (id)sdkVersion;
- (void)setCachedCodeDirectoryHash:(id)arg1;
- (void)setCachedCodeDirectoryHashType:(unsigned int)arg1;
- (long long)signatureState;
- (id)signerIdentity;
- (bool)statusBarHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2;
- (id)succinctDescriptionBuilder;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)supportsAllInterfaceOrientations;
- (bool)supportsBackgroundMode:(id)arg1;
- (bool)supportsDeviceFamily:(unsigned long long)arg1;
- (bool)supportsInterfaceOrientation:(long long)arg1;
- (id)tags;
- (unsigned long long)type;

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