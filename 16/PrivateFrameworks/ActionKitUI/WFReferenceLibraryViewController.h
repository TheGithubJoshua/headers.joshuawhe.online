//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIReferenceLibraryViewController.h>

@protocol WFReferenceLibraryViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFReferenceLibraryViewController : UIReferenceLibraryViewController
{
    id <WFReferenceLibraryViewControllerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005a0bb
@property(nonatomic) __weak id <WFReferenceLibraryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000005a01d

@end
