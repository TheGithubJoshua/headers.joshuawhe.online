<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>LSBundleProxy.h</title>
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

/Frameworks/CoreServices.framework/LSBundleProxy.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices (947)
 */

@interface LSBundleProxy : LSResourceProxy <NSSecureCoding> {
    bool  _UPPValidated;
    _LSLazyPropertyList * __entitlements;
    _LSLazyPropertyList * __environmentVariables;
    _LSLazyPropertyList * __groupContainers;
    _LSLazyPropertyList * __infoDictionary;
    _LSBundleIDValidationToken * __validationToken;
    NSString * _bundleExecutable;
    unsigned long long  _bundleFlags;
    NSString * _bundleType;
    NSURL * _bundleURL;
    NSString * _bundleVersion;
    NSUUID * _cacheGUID;
    unsigned long long  _compatibilityState;
    bool  _containerized;
    bool  _foundBackingBundle;
    unsigned char  _iconFlags;
    NSString * _localizedShortName;
    NSArray * _machOUUIDs;
    unsigned int  _plistContentFlags;
    bool  _profileValidated;
    NSString * _sdkVersion;
    unsigned long long  _sequenceNumber;
    NSString * _signerIdentity;
    NSString * _signerOrganization;
}

@property (nonatomic, readonly) bool UPPValidated;
@property (setter=_setEntitlements:, nonatomic, copy) _LSLazyPropertyList *_entitlements;
@property (setter=_setEnvironmentVariables:, nonatomic, copy) _LSLazyPropertyList *_environmentVariables;
@property (setter=_setGroupContainers:, nonatomic, copy) _LSLazyPropertyList *_groupContainers;
@property (readonly) LSApplicationProxy *_inf_containingAppProxy;
@property (readonly) bool _inf_isSystem;
@property (readonly) bool _inf_isWatchKitAppExtension;
@property (setter=_setInfoDictionary:, nonatomic, copy) _LSLazyPropertyList *_infoDictionary;
@property (setter=_setValidationToken:, nonatomic, retain) _LSBundleIDValidationToken *_validationToken;
@property (nonatomic, readonly) NSURL *appStoreReceiptURL;
@property (nonatomic, readonly) NSURL *bundleContainerURL;
@property (nonatomic, readonly) NSString *bundleExecutable;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleType;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSUUID *cacheGUID;
@property (nonatomic, readonly) NSString *canonicalExecutablePath;
@property (setter=_setCompatibilityState:, nonatomic) unsigned long long compatibilityState;
@property (nonatomic, readonly) NSURL *containerURL;
@property (getter=isContainerized, nonatomic, readonly) bool containerized;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) NSDictionary *environmentVariables;
@property (nonatomic, readonly) bool foundBackingBundle;
@property (nonatomic, readonly) NSDictionary *groupContainerURLs;
@property (nonatomic, readonly) NSString *localizedShortName;
@property (nonatomic, copy) NSArray *machOUUIDs;
@property (nonatomic, readonly) bool profileValidated;
@property (setter=setSDKVersion:, nonatomic, copy) NSString *sdkVersion;
@property (nonatomic, readonly) unsigned long long sequenceNumber;
@property (nonatomic, readonly) NSString *signerIdentity;
@property (nonatomic, readonly) NSString *signerOrganization;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)bundleProxyForCurrentProcess;
+ (bool)bundleProxyForCurrentProcessNeedsUpdate:(id)arg1;
+ (id)bundleProxyForIdentifier:(id)arg1;
+ (id)bundleProxyForURL:(id)arg1;
+ (bool)canInstantiateFromDatabase;
+ (bool)supportsSecureCoding;

- (bool)UPPValidated;
- (unsigned long long)_containerClassForLSBundleType:(id)arg1;
- (id)_dataContainerURLFromContainerManager;
- (id)_entitlements;
- (id)_environmentVariables;
- (id)_environmentVariablesFromContainerManager;
- (id)_groupContainerURLsFromContainerManager;
- (id)_groupContainers;
- (id)_infoDictionary;
- (id)_initWithBundleUnit:(unsigned int)arg1 context:(struct LSContext { struct LSDatabase {} *x1; }*)arg2 bundleType:(unsigned long long)arg3 bundleID:(id)arg4 localizedName:(id)arg5 bundleContainerURL:(id)arg6 dataContainerURL:(id)arg7 resourcesDirectoryURL:(id)arg8 iconsDictionary:(id)arg9 iconFileNames:(id)arg10 version:(id)arg11;
- (void)_setCompatibilityState:(unsigned long long)arg1;
- (void)_setEntitlements:(id)arg1;
- (void)_setEnvironmentVariables:(id)arg1;
- (void)_setGroupContainers:(id)arg1;
- (void)_setInfoDictionary:(id)arg1;
- (void)_setValidationToken:(id)arg1;
- (id)_validationToken;
- (id)_valueForEqualityTesting;
- (id)appStoreReceiptName;
- (id)appStoreReceiptURL;
- (id)bundleContainerURL;
- (id)bundleExecutable;
- (id)bundleIdentifier;
- (id)bundleType;
- (id)bundleURL;
- (id)bundleVersion;
- (id)cacheGUID;
- (id)canonicalExecutablePath;
- (unsigned long long)compatibilityState;
- (id)containerURL;
- (id)dataContainerURL;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2;
- (id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)entitlementValuesForKeys:(id)arg1;
- (id)entitlements;
- (id)environmentVariables;
- (bool)foundBackingBundle;
- (id)groupContainerURLs;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isContainerized;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (id)localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(bool)arg2;
- (id)localizedShortName;
- (id)localizedValuesForKeys:(id)arg1 fromTable:(id)arg2;
- (id)machOUUIDs;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3;
- (id)objectsForInfoDictionaryKeys:(id)arg1;
- (bool)profileValidated;
- (id)sdkVersion;
- (unsigned long long)sequenceNumber;
- (void)setMachOUUIDs:(id)arg1;
- (void)setSDKVersion:(id)arg1;
- (id)signerIdentity;
- (id)signerOrganization;
- (id)uniqueIdentifier;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

+ (id)cls_appExtensionContainerBundleProxyForConnection:(id)arg1;
+ (id)cls_appExtensionContainerBundleProxyForCurrentTask;
+ (id)cls_appExtensionContainerBundleProxyWithProperties:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_hk_appExtensionContainerBundleProxyWithProperties:(id)arg1;
+ (id)hk_appExtensionContainerBundleForConnection:(id)arg1;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (id)un_applicationBundleIdentifier;
- (id)un_applicationBundleURL;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_icon;

// Image: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation

- (id)_inf_containingAppProxy;
- (bool)_inf_isSystem;
- (bool)_inf_isWatchKitAppExtension;

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
