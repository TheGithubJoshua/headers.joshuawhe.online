//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

@class HKCategorySample, NSMutableArray;
@protocol HKDataMetadataViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WDAtrialFibrillationEventMetadataViewController : HKTableViewController
{
    _Bool _firstViewDidLayoutSubviews;	// 8 = 0x8
    HKCategorySample *_event;	// 16 = 0x10
    NSMutableArray *_sections;	// 24 = 0x18
    id <HKDataMetadataViewControllerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000536ea
@property(nonatomic) __weak id <HKDataMetadataViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) HKCategorySample *event; // @synthesize event=_event;
@property(nonatomic) _Bool firstViewDidLayoutSubviews; // @synthesize firstViewDidLayoutSubviews=_firstViewDidLayoutSubviews;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000053568
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000053474
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000005339a
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000053326
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x00000000000532a6
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000053226
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000531e2
- (void)heartbeatSequecesListQueryComplete:(id)arg1;	// IMP=0x0000000000053142
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000005306a
- (id)_atrialFibrillationEducationContainerView;	// IMP=0x0000000000052fca
- (void)_reloadAtrialFibrillationEducationTableHeaderView;	// IMP=0x0000000000052d1d
- (id)_shortVersionNumberFromString:(id)arg1;	// IMP=0x0000000000052cde
- (void)_loadSections;	// IMP=0x0000000000052777
- (_Bool)_addSectionIfNonNull:(id)arg1;	// IMP=0x00000000000526f8
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000052619
- (void)viewDidLoad;	// IMP=0x000000000005247c
- (id)initWithEvent:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000000523a9

@end
