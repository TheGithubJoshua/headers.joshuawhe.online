//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class NSString;

@interface UINavigationController (GKAdditions)
- (void)makeNavigationBarBackgroundTranslucent;	// IMP=0x002000000000eaf7
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x002000000000ea7a
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x002000000000ea02
- (void)_gkHandleURLPathComponents:(id)arg1 query:(id)arg2;	// IMP=0x002000000000e8e9
- (void)_gkForceNextContentUpdate;	// IMP=0x002000000000e7c5
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(CDUnknownBlockType)arg1;	// IMP=0x002000000000e796
- (void)_gkResetContents;	// IMP=0x002000000000e6b0
- (void)_gkSetContentsNeedUpdateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x002000000000e2aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
