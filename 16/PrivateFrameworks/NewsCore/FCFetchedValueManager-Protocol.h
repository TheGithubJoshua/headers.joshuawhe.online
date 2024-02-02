//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSObject-Protocol.h>

@protocol FCFetchedValueManagerObserving, NFCopying;

@protocol FCFetchedValueManager <NSObject>
@property(readonly, nonatomic) id <NFCopying> value;
- (void)removeObserver:(id <FCFetchedValueManagerObserving>)arg1;
- (void)addObserver:(id <FCFetchedValueManagerObserving>)arg1;
- (void)fetchValueWithCachePolicy:(unsigned long long)arg1 qualityOfService:(long long)arg2 completion:(void (^)(id <NFCopying>, NSError *))arg3;
- (void)fetchValueWithQualityOfService:(long long)arg1 completion:(void (^)(id <NFCopying>, NSError *))arg2;
@end
