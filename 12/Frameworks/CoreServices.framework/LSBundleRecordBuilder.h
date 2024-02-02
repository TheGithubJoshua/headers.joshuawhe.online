<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>LSBundleRecordBuilder.h</title>
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

/Frameworks/CoreServices.framework/LSBundleRecordBuilder.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices (947)
 */

@interface LSBundleRecordBuilder : LSRecordBuilder {
    NSArray * _URLClaims;
    NSArray * _activityTypes;
    NSArray * _alternateNames;
    NSString * _appStoreToolsBuildVersion;
    NSString * _appType;
    NSString * _appVariant;
    unsigned short  _archFlags;
    NSData * _bundleAlias;
    unsigned int  _bundleClass;
    NSURL * _bundleContainerURL;
    unsigned long long  _bundleFlags;
    NSString * _bundleName;
    bool  _canChange_eGPU;
    bool  _canDoHiResMode;
    bool  _canDoMagnifiedMode;
    bool  _canUse_eGPU;
    NSString * _categoryType;
    NSString * _codeInfoIdentifier;
    NSMutableDictionary * _commonInfoPlistEntries;
    NSString * _companionAppID;
    NSNumber * _compatibilityState;
    NSString * _complicationPrincipalClass;
    bool  _containerized;
    NSMutableSet * _counterpartAppIDs;
    NSURL * _dataContainerURL;
    NSArray * _deviceFamily;
    NSString * _displayName;
    NSArray * _documentClaims;
    NSNumber * _downloaderDSID;
    bool  _eGPUExplicit;
    NSDictionary * _entitlements;
    NSString * _execPath;
    NSArray * _exportedTypes;
    NSDictionary * _extensionSDK;
    NSNumber * _famlyID;
    NSString * _genre;
    NSNumber * _genreID;
    NSDictionary * _groupContainers;
    unsigned int  _hfsCreator;
    unsigned int  _hfsType;
    bool  _hiResExplicit;
    NSArray * _iconFileNames;
    unsigned char  _iconFlags;
    NSDictionary * _iconsDict;
    NSString * _identifier;
    NSArray * _importedTypes;
    unsigned long long  _inode;
    NSNumber * _installFailureReason;
    NSNumber * _installType;
    unsigned int  _installationType;
    unsigned int  _itemFlags;
    NSNumber * _itemID;
    NSString * _itemName;
    NSArray * _libraryItems;
    NSString * _libraryPath;
    NSArray * _machOUUIDs;
    NSString * _maxSystemVersion;
    NSString * _minSystemVersion;
    unsigned int  _plistContentFlags;
    NSMutableDictionary * _plistRarities;
    NSDictionary * _pluginMIDicts;
    NSDictionary * _pluginPlists;
    NSString * _primaryIconName;
    NSNumber * _purchaserDSID;
    NSString * _ratingLabel;
    NSNumber * _ratingRank;
    bool  _registerChildItemsTrusted;
    LSRegistrationInfo * _registrationInfo;
    unsigned char  _retries;
    NSDictionary * _sandboxEnvironmentVariables;
    NSArray * _schemesWhitelist;
    NSString * _sdkVersion;
    NSString * _secondCategoryType;
    unsigned long long  _sequenceNumber;
    NSArray * _services;
    NSString * _shortVersionString;
    NSString * _signerIdentity;
    NSString * _signerOrganization;
    NSDictionary * _siriActionDefinitionURLs;
    NSString * _sourceAppIdentifier;
    NSNumber * _staticDiskUsage;
    NSNumber * _storefront;
    NSArray * _supportedComplicationFamilies;
    NSString * _teamID;
    NSString * _vendorName;
    NSString * _version;
    NSNumber * _versionID;
    NSString * _watchKitVersion;
}

@property (nonatomic, readonly) NSArray *URLClaims;
@property (nonatomic, readonly) NSArray *activityTypes;
@property (nonatomic, readonly) NSArray *alternateNames;
@property (nonatomic, readonly) NSString *appStoreToolsBuildVersion;
@property (nonatomic, readonly) NSString *appType;
@property (nonatomic, readonly) NSString *appVariant;
@property (nonatomic, readonly) NSURL *bundleContainerURL;
@property (nonatomic, readonly) NSString *bundleName;
@property (nonatomic, readonly) NSString *categoryType;
@property (nonatomic, readonly) NSString *codeInfoIdentifier;
@property (nonatomic, readonly) NSString *companionAppID;
@property (nonatomic, readonly) NSNumber *compatibilityState;
@property (nonatomic, readonly) NSString *complicationPrincipalClass;
@property (nonatomic, readonly) bool containerized;
@property (nonatomic, readonly) NSMutableSet *counterpartAppIDs;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (nonatomic, readonly) NSArray *deviceFamily;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSArray *documentClaims;
@property (nonatomic, readonly) NSNumber *downloaderDSID;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) NSString *execPath;
@property (nonatomic, readonly) NSArray *exportedTypes;
@property (nonatomic, readonly) NSDictionary *extensionSDK;
@property (nonatomic, readonly) NSNumber *famlyID;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) NSNumber *genreID;
@property (nonatomic, readonly) NSDictionary *groupContainers;
@property (nonatomic, readonly) NSArray *iconFileNames;
@property (nonatomic, readonly) NSDictionary *iconsDict;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *importedTypes;
@property (nonatomic, readonly) NSNumber *installFailureReason;
@property (nonatomic, readonly) NSNumber *installType;
@property (nonatomic) unsigned int installationType;
@property (nonatomic, readonly) NSNumber *itemID;
@property (nonatomic, readonly) NSString *itemName;
@property (nonatomic, readonly) NSArray *libraryItems;
@property (nonatomic, readonly) NSString *libraryPath;
@property (nonatomic, readonly) NSArray *machOUUIDs;
@property (nonatomic, readonly) NSString *maxSystemVersion;
@property (nonatomic, readonly) NSString *minSystemVersion;
@property (nonatomic, readonly) NSDictionary *pluginMIDicts;
@property (nonatomic, readonly) NSDictionary *pluginPlists;
@property (nonatomic, readonly) NSString *primaryIconName;
@property (nonatomic, readonly) NSNumber *purchaserDSID;
@property (nonatomic, readonly) NSString *ratingLabel;
@property (nonatomic, readonly) NSNumber *ratingRank;
@property (nonatomic, readonly) bool registerChildItemsTrusted;
@property (nonatomic) unsigned char retries;
@property (nonatomic, readonly) NSDictionary *sandboxEnvironmentVariables;
@property (nonatomic, readonly) NSArray *schemesWhitelist;
@property (nonatomic, readonly) NSString *sdkVersion;
@property (nonatomic, readonly) NSString *secondCategoryType;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, readonly) NSArray *services;
@property (nonatomic, readonly) NSString *shortVersionString;
@property (nonatomic, readonly) NSString *signerIdentity;
@property (nonatomic, readonly) NSString *signerOrganization;
@property (nonatomic, readonly) NSDictionary *siriActionDefinitionURLs;
@property (nonatomic, readonly) NSString *sourceAppIdentifier;
@property (nonatomic, readonly) NSNumber *staticDiskUsage;
@property (nonatomic, readonly) NSNumber *storefront;
@property (nonatomic, readonly) NSArray *supportedComplicationFamilies;
@property (nonatomic, readonly) NSString *teamID;
@property (nonatomic, readonly) NSString *vendorName;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSNumber *versionID;
@property (nonatomic, readonly) NSString *watchKitVersion;

- (id)URLClaims;
- (id)_LSBundleFlagMap;
- (id)_LSKeyTypeMap;
- (id)_LSPlistRaritiesMap;
- (int)activateBindings:(struct LSDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct LSDBImpl {} *x2; struct __CSStore {} *x3; struct LSSchema { unsigned int x_4_1_1; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_8_2_1; } x_4_1_8; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_9_2_1; struct { /* ? */ } *x_9_2_2; struct { /* ? */ } *x_9_2_3; unsigned int x_9_2_4; unsigned char x_9_2_5; } x_4_1_9[12]; } x4; }*)arg1 unitID:(unsigned int)arg2 bundleData:(const struct LSBundleData { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned short x9; unsigned int x10; unsigned int x11; unsigned long long x12; unsigned long long x13; int x14; int x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned int x20; unsigned int x21[4]; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned long long x42; unsigned long long x43; unsigned long long x44; unsigned long long x45; unsigned int x46; unsigned int x47; unsigned long long x48; unsigned long long x49; unsigned long long x50; unsigned int x51; unsigned long long x52; }*)arg3;
- (id)activityTypes;
- (void)addArchitectureFlag:(unsigned short)arg1;
- (void)addBundleFlag:(unsigned long long)arg1;
- (void)addIconFlag:(unsigned char)arg1;
- (void)addItemInfoFlag:(unsigned int)arg1;
- (void)addPlistFlag:(unsigned int)arg1;
- (id)alternateNames;
- (id)appStoreToolsBuildVersion;
- (id)appType;
- (id)appVariant;
- (struct LSBundleData { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned short x9; unsigned int x10; unsigned int x11; unsigned long long x12; unsigned long long x13; int x14; int x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned int x20; unsigned int x21[4]; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned long long x42; unsigned long long x43; unsigned long long x44; unsigned long long x45; unsigned int x46; unsigned int x47; unsigned long long x48; unsigned long long x49; unsigned long long x50; unsigned int x51; unsigned long long x52; })buildBundleData:(struct LSDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct LSDBImpl {} *x2; struct __CSStore {} *x3; struct LSSchema { unsigned int x_4_1_1; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_8_2_1; } x_4_1_8; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_9_2_1; struct { /* ? */ } *x_9_2_2; struct { /* ? */ } *x_9_2_3; unsigned int x_9_2_4; unsigned char x_9_2_5; } x_4_1_9[12]; } x4; }*)arg1 error:(id*)arg2;
- (id)bundleContainerURL;
- (id)bundleName;
- (id)categoryType;
- (id)codeInfoIdentifier;
- (id)companionAppID;
- (id)compatibilityState;
- (id)complicationPrincipalClass;
- (bool)containerized;
- (id)counterpartAppIDs;
- (id)dataContainerURL;
- (void)dealloc;
- (id)deviceFamily;
- (id)displayName;
- (id)documentClaims;
- (id)downloaderDSID;
- (id)entitlements;
- (id)execPath;
- (id)exportedTypes;
- (id)extensionSDK;
- (id)famlyID;
- (id)genre;
- (id)genreID;
- (id)getIconsDictionaryFromDict:(id)arg1;
- (id)groupContainers;
- (id)iconFileNames;
- (id)iconsDict;
- (id)identifier;
- (id)importedTypes;
- (id)installFailureReason;
- (id)installType;
- (unsigned int)installationType;
- (id)itemID;
- (id)itemName;
- (id)libraryItems;
- (id)libraryPath;
- (id)machOUUIDs;
- (id)maxSystemVersion;
- (id)minSystemVersion;
- (void)parseActivityTypesFromDictionary:(id)arg1;
- (void)parseArchitecturesFromDict:(id)arg1;
- (void)parseDeviceFamilyFromDict:(id)arg1;
- (void)parseIconFilenamesFromDict:(id)arg1;
- (bool)parseInfoPlist:(id)arg1;
- (bool)parseInstallationInfo:(id)arg1;
- (void)parseNSExtensionSDKDefinitionsFromDictionary:(id)arg1;
- (void)parseURLClaimsFromDict:(id)arg1;
- (id)pluginMIDicts;
- (id)pluginPlists;
- (id)primaryIconName;
- (id)purchaserDSID;
- (id)ratingLabel;
- (id)ratingRank;
- (unsigned int)registerBundleRecord:(struct LSDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct LSDBImpl {} *x2; struct __CSStore {} *x3; struct LSSchema { unsigned int x_4_1_1; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_8_2_1; } x_4_1_8; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_9_2_1; struct { /* ? */ } *x_9_2_2; struct { /* ? */ } *x_9_2_3; unsigned int x_9_2_4; unsigned char x_9_2_5; } x_4_1_9[12]; } x4; }*)arg1 error:(id*)arg2;
- (bool)registerChildItemsTrusted;
- (int)registerSchemesWhitelist:(struct LSDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct LSDBImpl {} *x2; struct __CSStore {} *x3; struct LSSchema { unsigned int x_4_1_1; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; struct { unsigned int x_3_2_1; unsigned int x_3_2_2; } x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_8_2_1; } x_4_1_8; struct { struct CSMap { unsigned int x_1_3_1; struct CSMapCallbacks { int (*x_2_4_1)(); int (*x_2_4_2)(); int (*x_2_4_3)(); int (*x_2_4_4)(); int (*x_2_4_5)(); int (*x_2_4_6)(); } x_1_3_2; struct CSMapContext {} *x_1_3_3; struct os_unfair_lock_s { unsigned int x_4_4_1; } x_1_3_4; unsigned int x_1_3_5; struct _CSMapHeader {} *x_1_3_6; unsigned int *x_1_3_7; unsigned int *x_1_3_8; } x_9_2_1; struct { /* ? */ } *x_9_2_2; struct { /* ? */ } *x_9_2_3; unsigned int x_9_2_4; unsigned char x_9_2_5; } x_4_1_9[12]; } x4; }*)arg1 bundleData:(struct LSBundleData { unsigned int x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned short x9; unsigned int x10; unsigned int x11; unsigned long long x12; unsigned long long x13; int x14; int x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned int x20; unsigned int x21[4]; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned int x38; unsigned int x39; unsigned int x40; unsigned int x41; unsigned long long x42; unsigned long long x43; unsigned long long x44; unsigned long long x45; unsigned int x46; unsigned int x47; unsigned long long x48; unsigned long long x49; unsigned long long x50; unsigned int x51; unsigned long long x52; }*)arg2;
- (unsigned char)retries;
- (id)sandboxEnvironmentVariables;
- (id)schemesWhitelist;
- (id)sdkVersion;
- (id)secondCategoryType;
- (unsigned long long)sequenceNumber;
- (id)services;
- (void)setCommonInfoPlistKeysFromDictionary:(id)arg1;
- (void)setFlagsFromDictionary:(id)arg1;
- (void)setInstallationType:(unsigned int)arg1;
- (void)setRaritiesFromDictionary:(id)arg1;
- (void)setRegistrationInfo:(id)arg1 alias:(struct __CFData { }*)arg2;
- (void)setRetries:(unsigned char)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (id)shortVersionString;
- (id)signerIdentity;
- (id)signerOrganization;
- (id)siriActionDefinitionURLs;
- (id)sourceAppIdentifier;
- (id)staticDiskUsage;
- (id)storefront;
- (id)supportedComplicationFamilies;
- (id)teamID;
- (id)vendorName;
- (id)version;
- (id)versionID;
- (id)watchKitVersion;

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