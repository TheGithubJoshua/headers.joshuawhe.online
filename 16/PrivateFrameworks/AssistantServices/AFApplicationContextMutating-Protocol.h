//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/NSObject-Protocol.h>

@class AFBulletin, AceObject, NSArray, NSDictionary, NSString;

@protocol AFApplicationContextMutating <NSObject>
- (void)setAceContexts:(NSArray *)arg1;
- (void)setContextDictionary:(NSDictionary *)arg1;
- (void)setAceContext:(AceObject *)arg1;
- (void)setBulletin:(AFBulletin *)arg1;
- (void)setAssociatedBundleIdentifier:(NSString *)arg1;
@end
