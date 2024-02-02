//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class NSArray, NSItemProvider, NSURL, SFStartPageCustomizationViewController;

@protocol SFStartPageCustomizationDataSource <NSObject>
@property(readonly, nonatomic) _Bool isActiveTabGroupSyncable;
@property(readonly, nonatomic) _Bool isCloudSyncEnabled;
- (void)startPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1 didSelectBuiltInBackgroundImageAtURL:(NSURL *)arg2 precomputedLuminance:(double)arg3;
- (void)startPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1 didSelectCustomBackgroundImage:(NSItemProvider *)arg2;
- (void)startPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1 didModifyBackgroundImageEnabled:(_Bool)arg2;
- (NSItemProvider *)backgroundImageForStartPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1;
- (_Bool)isBackgroundImageEnabledForStartPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1;
- (void)startPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1 didCustomizeSections:(NSArray *)arg2;
- (NSArray *)customizationItemsForStartPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1;

@optional
- (void)startPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1 willModifyBackgroundImageEnabled:(_Bool)arg2;
- (void)didReorderSectionIdentifiersForStartPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1;
- (void)startPageCustomizationViewController:(SFStartPageCustomizationViewController *)arg1 willModifySectionWithIdentifier:(id)arg2 enabled:(_Bool)arg3;
@end
