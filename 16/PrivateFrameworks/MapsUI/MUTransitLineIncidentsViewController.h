//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class MKTransitItemIncidentsController, MKTransitItemReferenceDateUpdater, NSDate, NSString;
@protocol GEOTransitLineItem, MUTransitLineIncidentsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MUTransitLineIncidentsViewController : UITableViewController
{
    MKTransitItemIncidentsController *_incidentsController;	// 8 = 0x8
    NSDate *_referenceDate;	// 16 = 0x10
    id <MUTransitLineIncidentsViewControllerDelegate> _incidentsDelegate;	// 24 = 0x18
    id <GEOTransitLineItem> _lineItem;	// 32 = 0x20
    MKTransitItemReferenceDateUpdater *_itemUpdater;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000cffc2
@property(readonly, nonatomic) MKTransitItemReferenceDateUpdater *itemUpdater; // @synthesize itemUpdater=_itemUpdater;
@property(readonly, nonatomic) id <GEOTransitLineItem> lineItem; // @synthesize lineItem=_lineItem;
@property(nonatomic) __weak id <MUTransitLineIncidentsViewControllerDelegate> incidentsDelegate; // @synthesize incidentsDelegate=_incidentsDelegate;
- (void)transitItemReferenceDateUpdater:(id)arg1 didUpdateToReferenceDate:(id)arg2;	// IMP=0x00000000000cfed5
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000000cfe5b
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000000cfde5
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000cfdd7
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000cfda3
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000cfd5f
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000cfd18
- (void)_showIncidentDetails;	// IMP=0x00000000000cfca7
- (id)_incidentCellForRow:(long long)arg1;	// IMP=0x00000000000cf99c
- (id)_incidents;	// IMP=0x00000000000cf935
@property(readonly, copy, nonatomic) NSDate *referenceDate; // @synthesize referenceDate=_referenceDate;
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000cf869
- (void)transitUIReferenceTimeUpdated:(id)arg1;	// IMP=0x00000000000cf7e0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000cf774
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000cf705
- (void)updateTransitLineItemIfNeeded;	// IMP=0x00000000000cf238
- (void)viewDidLoad;	// IMP=0x00000000000cf11e
- (id)initWithLineItem:(id)arg1;	// IMP=0x00000000000cef82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
