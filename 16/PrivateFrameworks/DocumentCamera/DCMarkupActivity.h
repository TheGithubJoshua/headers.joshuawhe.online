//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class ICDocCamDocumentInfo, ICDocCamImageCache, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface DCMarkupActivity : UIActivity
{
    unsigned long long _inkStyle;	// 8 = 0x8
    UIView *_fromView;	// 16 = 0x10
    UIViewController *_presentingViewController;	// 24 = 0x18
    ICDocCamDocumentInfo *_documentInfo;	// 32 = 0x20
    ICDocCamImageCache *_imageCache;	// 40 = 0x28
    CDUnknownBlockType _frameBlock;	// 48 = 0x30
    CDUnknownBlockType _completionBlock;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000004dd3f
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType frameBlock; // @synthesize frameBlock=_frameBlock;
@property(retain, nonatomic) ICDocCamImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) ICDocCamDocumentInfo *documentInfo; // @synthesize documentInfo=_documentInfo;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak UIView *fromView; // @synthesize fromView=_fromView;
@property(nonatomic) unsigned long long inkStyle; // @synthesize inkStyle=_inkStyle;
- (void)performActivity;	// IMP=0x000000000004dab6
- (void)prepareWithActivityItems:(id)arg1;	// IMP=0x000000000004d8ff
- (_Bool)canPerformWithActivityItems:(id)arg1;	// IMP=0x000000000004d7d2
- (id)activityImage;	// IMP=0x000000000004d6bf
- (id)activityTitle;	// IMP=0x000000000004d695
- (id)activityType;	// IMP=0x000000000004d688
- (id)initFromView:(id)arg1 presentingViewController:(id)arg2 frameBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000004d588

@end
