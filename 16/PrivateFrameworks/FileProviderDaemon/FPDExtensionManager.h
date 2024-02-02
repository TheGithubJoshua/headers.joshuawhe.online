//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDPushConnection, FPDServer, NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDExtensionManager : NSObject
{
    NSMutableDictionary *_providersByIdentifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_providersLoadedGroup;	// 24 = 0x18
    id _matchingContext;	// 32 = 0x20
    NSMutableDictionary *_alternateContentsURLDictionary;	// 40 = 0x28
    NSMapTable *_sessionQueueForExtensionIdentifier;	// 48 = 0x30
    FPDPushConnection *_pushConnection;	// 56 = 0x38
    CDUnknownBlockType _updateHandler;	// 64 = 0x40
    FPDServer *_server;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000091b3c
@property(readonly, nonatomic) FPDPushConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(nonatomic) __weak FPDServer *server; // @synthesize server=_server;
- (id)clouddocsExtensionIdentifier;	// IMP=0x0000000000091936
- (void)dropLegacyDaemonCoreSpotlightIndexIfNeeded;	// IMP=0x00000000000916db
- (id)allProviders;	// IMP=0x0000000000091667
- (id)_deserializedAlternateContentsDictionary;	// IMP=0x0000000000090d5c
- (void)_serializeAlternateContentsURLDictionary:(id)arg1;	// IMP=0x00000000000906a6
- (void)_loadAlternateContentsDictionary;	// IMP=0x0000000000090628
- (id)alternateContentsDictionaryForProviderIdentifier:(id)arg1;	// IMP=0x00000000000904e5
- (id)alternateContentsURLForItemID:(id)arg1;	// IMP=0x000000000009036e
- (void)setAlternateContentsURL:(id)arg1 forItemID:(id)arg2;	// IMP=0x0000000000090162
- (id)providersWithGroupContainers:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000000008fe8b
- (id)defaultProviderWithTopLevelBundleIdentifier:(id)arg1;	// IMP=0x000000000008fd96
- (id)providersWithTopLevelBundleIdentifier:(id)arg1;	// IMP=0x000000000008fa33
- (id)domainsForAppBundleIdentifier:(id)arg1;	// IMP=0x000000000008f649
- (id)domainForActionOperationLocator:(id)arg1;	// IMP=0x000000000008f54d
- (id)_domainForURL:(id)arg1;	// IMP=0x000000000008f1ce
- (id)domainForURL:(id)arg1;	// IMP=0x000000000008efee
- (id)domainFromItemID:(id)arg1;	// IMP=0x000000000008eeee
- (id)domainWithID:(id)arg1;	// IMP=0x000000000008edee
- (id)providerWithIdentifier:(id)arg1;	// IMP=0x000000000008ed63
- (id)providerDomainsByID;	// IMP=0x000000000008ecd0
- (id)nonEvictableSizeByProviderDomain;	// IMP=0x000000000008e89b
- (id)providerDomainsByIDFromExtensionsByID:(id)arg1;	// IMP=0x000000000008e2c8
- (void)_updateProviderListForMatchingExtensions:(id)arg1 allExtensionStartedHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000008d4c0
- (id)uniquedExtensions:(id)arg1;	// IMP=0x000000000008cad2
- (id)extensionsByID:(id)arg1;	// IMP=0x000000000008c219
- (void)migrateEnabledStateIfNecessary:(id)arg1;	// IMP=0x000000000008bfc4
- (void)forceSynchronousProviderUpdate;	// IMP=0x000000000008be51
- (void)accountsChanged;	// IMP=0x000000000008bcbb
- (void)purge:(id)arg1;	// IMP=0x000000000008bb3c
- (void)loadProvidersAndMonitor;	// IMP=0x000000000008b626
- (id)_matchingAttributes;	// IMP=0x000000000008b5ad
- (void)_updateWithMatchingExtensions:(id)arg1;	// IMP=0x000000000008b3c1
- (void)_garbageCollectRemovedProvidersForInstalledProviderIdentifiers:(id)arg1;	// IMP=0x000000000008a692
- (void)garbageCollectDomainsWithIdentifiers:(id)arg1 fromDirectory:(id)arg2 isUserData:(_Bool)arg3;	// IMP=0x000000000008a15e
- (void)afterFirstDiscovery;	// IMP=0x000000000008a100
- (id)initWithServer:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000089f52

@end
