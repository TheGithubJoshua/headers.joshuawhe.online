//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HDIDSMessagePersistentContext : NSObject
{
    _Bool _fromRequest;	// 8 = 0x8
    unsigned short _messageID;	// 10 = 0xa
    NSString *_idsIdentifier;	// 16 = 0x10
    NSString *_deviceIdentifier;	// 24 = 0x18
    NSDictionary *_userInfo;	// 32 = 0x20
    NSDate *_date;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000068741
- (void).cxx_destruct;	// IMP=0x000000000004e68c
- (id)description;	// IMP=0x0000000000772e42
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004e4b6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004eb97

@end
