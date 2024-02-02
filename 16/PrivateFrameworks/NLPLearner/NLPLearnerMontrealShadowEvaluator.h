//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NLPLearnerShadowEvaluator.h"

__attribute__((visibility("hidden")))
@interface NLPLearnerMontrealShadowEvaluator : NLPLearnerShadowEvaluator
{
}

+ (_Bool)isInTopKPredictions:(unsigned long long)arg1 scores:(float *)arg2 total:(unsigned long long)arg3 topK:(unsigned long long)arg4;	// IMP=0x008000000000587a
+ (void)initialize;	// IMP=0x00800000000050c0
- (id)evaluateModel:(struct MontrealNeuralNetwork *)arg1 onData:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000599b
- (id)evaluateModel:(id)arg1 onRecords:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x000000000000543c
- (id)prepareDataFromRecords:(id)arg1 modelBundle:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000510e

@end
