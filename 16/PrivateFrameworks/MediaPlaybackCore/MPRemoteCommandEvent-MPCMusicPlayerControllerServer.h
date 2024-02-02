//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class ICUserIdentity, NSString;

@interface MPRemoteCommandEvent (MPCMusicPlayerControllerServer)
+ (id)payloadValueFromJSONValue:(id)arg1;	// IMP=0x00100000001836c0
- (id)serverCopy;	// IMP=0x001000000006ed19
- (id)mpc_jsonValue;	// IMP=0x0010000000181657
@property(readonly, nonatomic) ICUserIdentity *userIdentity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
