//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOSimpleRoutePreloadCamera : NSObject
{
}

- (id)implicateAssetMetadataTilesForCoordinate:(CDStruct_c3b9c2ee)arg1 size:(double)arg2;	// IMP=0x000000000135651b
- (void)implicateTilesForCoordinate:(CDStruct_c3b9c2ee)arg1 route:(id)arg2 nearestRoutePointIdx:(double)arg3 stepNearManeuever:(_Bool)arg4 into:(id)arg5 stepSize:(double)arg6 maneuverSize:(double)arg7 tileSetStyles:(id)arg8;	// IMP=0x0000000001355d0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
