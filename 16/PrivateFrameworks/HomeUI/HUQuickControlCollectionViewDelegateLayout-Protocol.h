//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/UICollectionViewDelegate-Protocol.h>

@class HUIntrinsicSizeDescriptor, NSIndexPath;

@protocol HUQuickControlCollectionViewDelegateLayout <UICollectionViewDelegate>
- (double)heightForSupplementaryViewAtIndexPath:(NSIndexPath *)arg1;
- (HUIntrinsicSizeDescriptor *)intrinsicSizeDescriptorForItemAtIndexPath:(NSIndexPath *)arg1 itemSize:(unsigned long long)arg2;
@end
