//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@protocol GTDataProviderService
- (NSData *)getData:(unsigned long long)arg1;
- (void)uploadFragment:(NSData *)arg1 forHandle:(unsigned long long)arg2 completionHandler:(void (^)(void))arg3;
@end
