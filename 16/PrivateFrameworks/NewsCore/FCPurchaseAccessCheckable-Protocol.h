//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NFCopying-Protocol.h>

@class NSString;
@protocol FCChannelProviding;

@protocol FCPurchaseAccessCheckable <NFCopying>
@property(readonly, copy, nonatomic) id <FCChannelProviding> sourceChannel;
@property(readonly, nonatomic, getter=isBundlePaid) _Bool bundlePaid;
@property(readonly, nonatomic, getter=isPaid) _Bool paid;
@property(readonly, copy, nonatomic) NSString *identifier;
@end
