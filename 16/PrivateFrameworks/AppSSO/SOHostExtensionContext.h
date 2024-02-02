//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

@class NSString, SOExtension;

__attribute__((visibility("hidden")))
@interface SOHostExtensionContext : NSExtensionContext
{
    SOExtension *_contextExtension;	// 8 = 0x8
}

+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x001000000001c136
+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x001000000001c0ca
- (void).cxx_destruct;	// IMP=0x000000000001c9c9
@property __weak SOExtension *contextExtension; // @synthesize contextExtension=_contextExtension;
- (void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2;	// IMP=0x000000000001c916
- (void)presentAuthorizationViewControllerWithHints:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c890
- (void)canOpenURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c699
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c349
- (id)remoteContextWithError:(id *)arg1;	// IMP=0x000000000001c1a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
