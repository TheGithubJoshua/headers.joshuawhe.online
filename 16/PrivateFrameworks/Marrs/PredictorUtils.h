//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PredictorUtils : NSObject
{
}

+ (id)getPredictStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3;	// IMP=0x00800000000174a6
+ (id)getInitStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3;	// IMP=0x008000000001732c
+ (void)reportPredictStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3 locale:(id)arg4;	// IMP=0x0080000000017111
+ (void)reportInitStatusWithPredictorName:(id)arg1 domain:(id)arg2 code:(long long)arg3 locale:(id)arg4;	// IMP=0x0080000000016ed8
+ (long long)handlePredictException:(struct exception_ptr)arg1;	// IMP=0x0080000000016d7b
+ (long long)handleInitException:(struct exception_ptr)arg1;	// IMP=0x0080000000016c60

@end
