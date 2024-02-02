//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ApplePushService/NSCopying-Protocol.h>
#import <ApplePushService/NSObject-Protocol.h>
#import <ApplePushService/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString;

@protocol APSTokenInfo <NSObject, NSSecureCoding, NSCopying>
@property(readonly, nonatomic) NSData *vapidPublicKey;
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *topic;
@property(readonly, nonatomic) long long type;
- (NSDictionary *)dictionaryRepresentation;
- (id)initWithDictionary:(NSDictionary *)arg1;
@end
