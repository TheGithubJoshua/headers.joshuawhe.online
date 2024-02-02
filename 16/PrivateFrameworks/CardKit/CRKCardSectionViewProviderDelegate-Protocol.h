//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CardKit/NSObject-Protocol.h>

@protocol CRKCardSectionViewProviding, CRKFeedbackDelegate;

@protocol CRKCardSectionViewProviderDelegate <NSObject>

@optional
- (double)boundingWidthForProvider:(id <CRKCardSectionViewProviding>)arg1;
- (_Bool)cardSectionDisplayRequiresUserConsentForProvider:(id <CRKCardSectionViewProviding>)arg1;
- (id <CRKFeedbackDelegate>)defaultFeedbackDelegateForProvider:(id <CRKCardSectionViewProviding>)arg1;
@end
