//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UITableView;
@protocol AKToolsListViewControllerDelegate;

@interface AKToolsListViewController : UIViewController
{
    _Bool _supportsOpacityEditing;	// 8 = 0x8
    _Bool _supportsImageDescriptionEditing;	// 9 = 0x9
    _Bool _isDeviceLocked;	// 10 = 0xa
    id <AKToolsListViewControllerDelegate> _delegate;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    NSArray *_cellItemTypes;	// 32 = 0x20
}

+ (id)defaultCellItemTypes;	// IMP=0x001000000004ad60
- (void).cxx_destruct;	// IMP=0x000000000004c7b8
@property(nonatomic) _Bool isDeviceLocked; // @synthesize isDeviceLocked=_isDeviceLocked;
@property(copy, nonatomic) NSArray *cellItemTypes; // @synthesize cellItemTypes=_cellItemTypes;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool supportsImageDescriptionEditing; // @synthesize supportsImageDescriptionEditing=_supportsImageDescriptionEditing;
@property(nonatomic) _Bool supportsOpacityEditing; // @synthesize supportsOpacityEditing=_supportsOpacityEditing;
@property(nonatomic) __weak id <AKToolsListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_shapesCellIndexRow;	// IMP=0x000000000004c673
- (void)_reloadCellItemTypes;	// IMP=0x000000000004c4cb
- (id)_buttonViewWithImage:(id)arg1 title:(id)arg2 tintColor:(id)arg3;	// IMP=0x000000000004c28e
- (void)addRowView:(id)arg1 toCellView:(id)arg2;	// IMP=0x000000000004c1d4
- (id)_buttonViewForOpacity;	// IMP=0x000000000004c0e7
- (id)_buttonViewForShapes;	// IMP=0x000000000004c06c
- (id)_buttonViewForLoupe;	// IMP=0x000000000004bf80
- (id)_buttonViewForSignature;	// IMP=0x000000000004be94
- (id)_buttonViewForText;	// IMP=0x000000000004bda8
- (id)_buttonViewForImageDescription;	// IMP=0x000000000004bbc6
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000004bb84
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000004bb34
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000004baa0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000004b53c
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000004b4f8
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000004b387
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000004b37f
- (void)_shapeButtonPressed:(id)arg1;	// IMP=0x000000000004b302
- (void)_updateDeviceLocked;	// IMP=0x000000000004b2fc
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000004b1fe
- (void)viewDidLoad;	// IMP=0x000000000004ae3f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004adfb
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000004ad6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
