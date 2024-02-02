//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookUtility/NSObject-Protocol.h>

@protocol BURestrictionsObserving;

@protocol BURestrictionsProviding <NSObject>
- (void)removeObserver:(id <BURestrictionsObserving>)arg1;
- (void)addObserver:(id <BURestrictionsObserving>)arg1;
- (_Bool)isAccountModificationAllowed;
- (_Bool)isExplicitContentAllowed;
- (_Bool)isBookStoreAllowed;
@end
