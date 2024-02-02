//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BacklightServicesHost/NSObject-Protocol.h>

@class BLSHEngineRenderFlipbookSession, BLSHPresentationDateSpecifier, NSArray, NSError;

@protocol BLSHEngineRenderFlipbookSessionDelegate <NSObject>
@property(readonly, nonatomic, getter=isUsingPseudoFlipbook) _Bool usePseudoFlipbook;
- (void)renderFramesSession:(BLSHEngineRenderFlipbookSession *)arg1 failedToRenderSpecifier:(BLSHPresentationDateSpecifier *)arg2 error:(NSError *)arg3 timedOutEnvironments:(NSArray *)arg4;
- (void)renderFramesSession:(BLSHEngineRenderFlipbookSession *)arg1 didRenderSpecifier:(BLSHPresentationDateSpecifier *)arg2 timedOutEnvironments:(NSArray *)arg3;
@end
