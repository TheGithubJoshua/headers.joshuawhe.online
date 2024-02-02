//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSPredicate;

__attribute__((visibility("hidden")))
@interface _OSLogPredicateMapper : NSObject
{
    int _pass;	// 8 = 0x8
    NSMutableArray *_validationErrors;	// 16 = 0x10
    unsigned long long _flags;	// 24 = 0x18
    NSPredicate *_predicate;	// 32 = 0x20
    NSMutableArray *_stack;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000020706
@property(readonly, nonatomic) NSArray *validationErrors; // @synthesize validationErrors=_validationErrors;
@property(retain, nonatomic) NSMutableArray *stack; // @synthesize stack=_stack;
@property(readonly, nonatomic) NSPredicate *mappedPredicate; // @synthesize mappedPredicate=_predicate;
@property(readonly, nonatomic) unsigned long long flags; // @synthesize flags=_flags;
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x0000000000020699
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x000000000002067e
- (void)validateExpression:(id)arg1;	// IMP=0x0000000000020463
- (void)processCompoundPredicate:(id)arg1;	// IMP=0x000000000002030b
- (void)processComparisonPredicate:(id)arg1;	// IMP=0x00000000000201c1
- (void)mapLeftExpression:(id *)arg1 andRightExpression:(id *)arg2;	// IMP=0x000000000001fe5c
- (id)mapSignpostTypeExpression:(id)arg1;	// IMP=0x000000000001fde1
- (id)mapSignpostScopeExpression:(id)arg1;	// IMP=0x000000000001fd66
- (id)mapMessageTypeExpression:(id)arg1;	// IMP=0x000000000001fceb
- (id)mapEventTypeExpression:(id)arg1;	// IMP=0x000000000001fc70
- (id)mapKeywordToConstantExpression:(id)arg1 keywordMap:(id)arg2;	// IMP=0x000000000001f9ee
@property(readonly, nonatomic) NSMutableSet *validKeyPaths;
- (void)visitPredicate:(id)arg1;	// IMP=0x000000000001f935
- (id)initWithPredicate:(id)arg1;	// IMP=0x000000000001f923
- (id)initWithPredicate:(id)arg1 andValidate:(_Bool)arg2;	// IMP=0x000000000001f80c

@end
