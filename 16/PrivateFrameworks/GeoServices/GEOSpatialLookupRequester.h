//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOServiceRequester.h"

__attribute__((visibility("hidden")))
@interface GEOSpatialLookupRequester : GEOServiceRequester
{
}

+ (id)sharedInstance;	// IMP=0x0080000000834604
- (id)_validateResponse:(id)arg1;	// IMP=0x0000000000834be2
- (void)cancelRequest:(id)arg1;	// IMP=0x0000000000834bd0
- (void)startWithRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000834659

@end
