//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _IDSCurrentServerTimeProvider : NSObject
{
    id _apsConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000018d12a
@property(readonly, nonatomic) id apsConnection; // @synthesize apsConnection=_apsConnection;
- (unsigned long long)serverTimeInNanoSeconds;	// IMP=0x000000000018d045
- (_Bool)isAccurate;	// IMP=0x000000000018d02f
- (id)init;	// IMP=0x000000000018cee3

@end
