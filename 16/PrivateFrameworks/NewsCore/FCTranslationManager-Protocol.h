//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol FCTranslationProvider;

@protocol FCTranslationManager
@property(readonly, nonatomic) id <FCTranslationProvider> possiblyUnfetchedTranslationProvider;
- (void)fetchTranslationProvider:(void (^)(id <FCTranslationProvider>, NSError *))arg1;
@end
