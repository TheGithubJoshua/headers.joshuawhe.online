//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NLModel, NSString;

@interface CVNLPCommSafetyTextAnalyzerModel : NSObject
{
    NLModel *_model;	// 8 = 0x8
    NSString *_className;	// 16 = 0x10
    double _threshold;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000092540
- (_Bool)detectSensitivityForString:(id)arg1;	// IMP=0x0000000000092480
- (id)description;	// IMP=0x00000000000923d0
- (id)initWithModel:(id)arg1 className:(id)arg2 threshold:(double)arg3;	// IMP=0x00000000000922e0

@end
