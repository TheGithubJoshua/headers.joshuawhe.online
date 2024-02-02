//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKTableViewController.h>

@class HKDisplayType, NSMutableArray, NSString, UIFont, WDDocumentListDataProvider, WDProfile;

__attribute__((visibility("hidden")))
@interface WDDocumentOverviewViewController : HKTableViewController
{
    HKDisplayType *_displayType;	// 8 = 0x8
    WDProfile *_profile;	// 16 = 0x10
    WDDocumentListDataProvider *_dataProvider;	// 24 = 0x18
    NSMutableArray *_sectionTypes;	// 32 = 0x20
    NSMutableArray *_reportRowTypes;	// 40 = 0x28
    long long _totalReportCount;	// 48 = 0x30
    UIFont *_bodyFont;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000452ae
@property(retain, nonatomic) UIFont *bodyFont; // @synthesize bodyFont=_bodyFont;
@property(nonatomic) long long totalReportCount; // @synthesize totalReportCount=_totalReportCount;
@property(retain, nonatomic) NSMutableArray *reportRowTypes; // @synthesize reportRowTypes=_reportRowTypes;
@property(retain, nonatomic) NSMutableArray *sectionTypes; // @synthesize sectionTypes=_sectionTypes;
@property(readonly, nonatomic) WDDocumentListDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, nonatomic) WDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) HKDisplayType *displayType; // @synthesize displayType=_displayType;
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x0000000000045193
- (void)_updateActivityForViewDidAppear;	// IMP=0x0000000000045112
- (id)applyTransitionActivity:(id)arg1;	// IMP=0x0000000000045109
- (void)applyChangeActivity:(id)arg1;	// IMP=0x0000000000045103
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000004509d
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000044fc4
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000044ef4
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000044e2c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000044d27
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000044c9d
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000000044c93
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0000000000044c15
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000044bf8
- (double)_reportSectionEstimatedRowHeight:(long long)arg1;	// IMP=0x0000000000044b63
- (double)_reportSectionRowHeight:(long long)arg1;	// IMP=0x0000000000044acb
- (void)_selectReportRowForIndexPath:(id)arg1;	// IMP=0x0000000000044a15
- (void)_pushAccessViewController;	// IMP=0x00000000000448ab
- (void)_pushShowAllViewController;	// IMP=0x000000000004477b
- (void)_pushReportDetailViewControllerForIndexPath:(id)arg1;	// IMP=0x00000000000446c3
- (id)_descriptionSectionCellForTableView:(id)arg1 row:(long long)arg2;	// IMP=0x0000000000044679
- (id)_reportSectionCellForTableView:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x000000000004457a
- (id)_reportItemCellForTableView:(id)arg1 row:(long long)arg2;	// IMP=0x00000000000444b2
- (id)_reportAccessCellForTableView:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x000000000004437d
- (id)_reportShowAllCellForTableView:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x00000000000440ef
- (void)_installSections;	// IMP=0x000000000004402b
- (void)_reloadAllData;	// IMP=0x0000000000043f14
- (void)_recomputeTotalReportCount;	// IMP=0x0000000000043c7f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000043b82
- (void)dealloc;	// IMP=0x0000000000043b0d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000043ac5
- (void)viewDidLoad;	// IMP=0x0000000000043873
- (id)initWithDisplayTypes:(id)arg1 profile:(id)arg2 title:(id)arg3 category:(id)arg4;	// IMP=0x0000000000043712

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
