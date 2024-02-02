<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EKEventViewController.h</title>
    <meta name="viewport" content="width=device-width">
    <style>
    body { margin: 1em; }
    pre { font: 11pt/1.25 ui-monospace, "SF Mono", Menlo, monospace; }
    a { color: #af52de; }
    pre { white-space: pre-wrap; }
    header, footer { color: #8e8e93; }
    header { white-space: pre; }
    footer { max-width: 700px; }
    hr { border: 0; border-top: 1px solid #c6c6c8; }
    .download { text-decoration: none; }
    @media (prefers-color-scheme: dark) {
        body { background: black; color: white; }
        a { color: #bf5af2; }
        hr { border-top-color: #333335; }
    }
    </style>
</head>
<body>
<pre><header>
 ___          _   _             ___
| _ \_  _ _ _| |_(_)_ __  ___  | _ )_ _ _____ __ _____ ___ _ _
|   / || | ' \  _| | '  \/ -_) | _ \ '_/ _ \ V  V (_-// -_) '_|
|_|_\\_,_|_||_\__|_|_|_|_\___| |___/_| \___/\_/\_//__/\___|_|


</header><hr>

/Frameworks/EventKitUI.framework/EKEventViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI (1.0)
 */

@interface EKEventViewController : UIViewController <EKEventDetailNotesCellDelegate, EKEventTitleDetailItemDelegate, EKUIEventStatusButtonsViewDelegate, UIAlertViewDelegate, UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool  _ICSPreview;
    _UIAccessDeniedView * _accessDeniedView;
    EKEventEditViewController * _activeEventEditor;
    bool  _allowsEditing;
    bool  _allowsInviteResponses;
    bool  _allowsSubitems;
    bool  _autoPop;
    UIView * _blankFooterView;
    bool  _calendarPreviewIsInlineDayView;
    NSMutableDictionary * _cellHeights;
    UIViewController * _confirmationAlertPresentationSourceViewController;
    struct NSDictionary { Class x1; } * _context;
    bool  _countedAppearance;
    EKEventDetailItem * _currentEditItem;
    NSArray * _currentSections;
    EKCustomTitleView * _customTitle;
    bool  _dead;
    <EKEventViewDelegate> * _delegate;
    bool  _didAppear;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _disclosedTableRange;
    long long  _disclosedTableSection;
    int  _editorHideTransition;
    int  _editorShowTransition;
    EKEvent * _event;
    NSArray * _headerConstraints;
    UIView * _headerView;
    bool  _hidePreview;
    bool  _ignoreDBChanges;
    bool  _inlineDayViewRespectsSelectedCalendarsFilter;
    bool  _isLargeDayView;
    NSArray * _items;
    long long  _lastAuthorizationStatus;
    long long  _lastOrientation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _layoutMargins;
    bool  _minimalMode;
    bool  _needsReload;
    bool  _noninteractivePlatterMode;
    int  _pendingStatus;
    EKUIRecurrenceAlertController * _recurrenceAlertController;
    int  _scrollToSection;
    EKEventDetailItem * _selectedEditItem;
    bool  _showingBlankFooterView;
    bool  _showsAddToCalendarForICSPreview;
    bool  _showsConferenceItem;
    bool  _showsDelegateMessage;
    bool  _showsDelegatorMessage;
    bool  _showsDeleteForICSPreview;
    bool  _showsDoneButton;
    bool  _showsOutOfDateMessage;
    bool  _showsPreview;
    bool  _showsUpdateCalendarForICSPreview;
    SingleToolbarItemContainerView * _statusButtonsContainerView;
    EKUIEventStatusButtonsView * _statusButtonsView;
    double  _statusButtonsViewCachedFontSize;
    bool  _tableIsBeingEdited;
    UITableView * _tableView;
    NSArray * _tableViewTopConstraints;
    EKEventTitleDetailItem * _titleItem;
    bool  _trustsStatus;
    bool  _viewIsVisible;
}

@property (getter=isICSPreview, nonatomic) bool ICSPreview;
@property (nonatomic) bool allowsCalendarPreview;
@property (nonatomic) bool allowsEditing;
@property (nonatomic) bool allowsInviteResponses;
@property (nonatomic) bool allowsSubitems;
@property (nonatomic) bool calendarPreviewIsInlineDayView;
@property (nonatomic) UIViewController *confirmationAlertPresentationSourceViewController;
@property (nonatomic, retain) NSDictionary *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKEventViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int editorHideTransition;
@property (nonatomic) int editorShowTransition;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic, readonly) UIScrollView *eventDetailsScrollView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideCalendarPreview;
@property (nonatomic) bool inlineDayViewRespectsSelectedCalendarsFilter;
@property (nonatomic) bool isLargeDayView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } layoutMargins;
@property (nonatomic) bool minimalMode;
@property (nonatomic) bool noninteractivePlatterMode;
@property (nonatomic) int scrollToSection;
@property (nonatomic) bool showsAddToCalendarForICSPreview;
@property (nonatomic) bool showsConferenceItem;
@property (nonatomic) bool showsDelegateMessage;
@property (nonatomic) bool showsDelegatorMessage;
@property (nonatomic) bool showsDeleteForICSPreview;
@property (nonatomic) bool showsDoneButton;
@property (nonatomic) bool showsOutOfDateMessage;
@property (nonatomic) bool showsUpdateCalendarForICSPreview;
@property (readonly) Class superclass;
@property bool viewIsVisible;

+ (void)adjustLayoutForCell:(id)arg1 tableViewWidth:(double)arg2 numRowsInSection:(unsigned long long)arg3 cellRow:(unsigned long long)arg4 forceLayout:(bool)arg5;
+ (void)setDefaultDatesForEvent:(id)arg1;

- (void).cxx_destruct;
- (void)_addToCalendarClicked:(id)arg1;
- (bool)_backingEventAllowsEditing;
- (void)_clearCustomTitle;
- (void)_configureItemsForStoreConstraintsGivenCalendar:(id)arg1;
- (void)_deleteClicked:(id)arg1;
- (void)_deleteSuggestionTapped:(id)arg1;
- (void)_dismissEditor:(bool)arg1 deleted:(bool)arg2;
- (id)_footerLabelContainingText:(id)arg1;
- (struct CGSize { double x1; double x2; })_idealSize;
- (id)_indexPathForAttendeesDetailItem;
- (id)_indexPathForSection:(int)arg1;
- (bool)_isDisplayingDeletableEvent;
- (bool)_isDisplayingInvitation;
- (bool)_isDisplayingSuggestion;
- (void)_keyboardWasHidden:(id)arg1;
- (void)_keyboardWasShown:(id)arg1;
- (void)_localeChanged;
- (bool)_navigationBarShouldBeHidden;
- (void)_performDelete:(long long)arg1;
- (void)_performEditKeyCommand;
- (bool)_performSave:(long long)arg1 animated:(bool)arg2;
- (void)_pop;
- (void)_prepareEventForEdit;
- (void)_presentDetachSheet;
- (void)_presentValidationAlert:(id)arg1;
- (void)_refreshEventAndReload;
- (void)_reloadIfNeeded;
- (void)_saveStatus:(long long)arg1;
- (void)_saveStatus:(long long)arg1 span:(long long)arg2;
- (unsigned long long)_sectionForDetailItem:(id)arg1;
- (id)_sectionsForTableView:(id)arg1;
- (void)_setObservesKeyboardNotifications:(bool)arg1;
- (void)_setUpForEvent;
- (void)_setUpkeyCommands;
- (bool)_shouldDisplayDelegateOrOutOfDateMessage;
- (bool)_shouldDisplayDoneButton;
- (bool)_shouldDisplayStatusButtons;
- (bool)_shouldPopSelf;
- (bool)_shouldShowEditButton;
- (id)_statusButtons;
- (id)_statusButtonsContainerView;
- (id)_statusButtonsForOrb:(bool)arg1;
- (id)_statusButtonsView;
- (void)_storeChanged:(id)arg1;
- (void)_teardownTableView;
- (void)_updateHeaderAndFooterIfNeeded;
- (void)_updateNavBarAnimated:(bool)arg1;
- (void)_updateResponse;
- (void)_updateResponseVisibility;
- (void)_updateStatusButtonsActions;
- (void)_updateTableContentForSizeCategoryChange:(id)arg1;
- (void)_updateTableContentInsetForKeyboard:(id)arg1;
- (id)_viewControllerForEditorPresentation;
- (id)accessDeniedView;
- (id)activeEventEditor;
- (bool)allowContextProvider:(id)arg1;
- (bool)allowsCalendarPreview;
- (bool)allowsEditing;
- (bool)allowsInviteResponses;
- (bool)allowsSubitems;
- (bool)calendarPreviewIsInlineDayView;
- (bool)canBecomeFirstResponder;
- (void)completeWithAction:(long long)arg1;
- (id)confirmationAlertPresentationSourceViewController;
- (struct NSDictionary { Class x1; }*)context;
- (void)dealloc;
- (id)delegate;
- (void)detailItem:(id)arg1 performActionsOnCellAtIndexPath:(id)arg2 actions:(id /* block */)arg3;
- (void)detailItem:(id)arg1 wantsIndexPathsScrolledToVisible:(id)arg2;
- (void)detailItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
- (void)detailItem:(id)arg1 wantsRowReload:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)doneButtonPressed;
- (void)editButtonPressed;
- (void)editEvent;
- (int)editorHideTransition;
- (int)editorShowTransition;
- (id)event;
- (void)eventDetailItemWantsRefeshForHeightChange;
- (id)eventDetailsScrollView;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventItemDidEndEditing:(id)arg1;
- (void)eventItemDidSave:(id)arg1;
- (void)eventItemDidStartEditing:(id)arg1;
- (void)eventStatusButtonsView:(id)arg1 calculatedFontSizeToFit:(double)arg2;
- (void)eventStatusButtonsView:(id)arg1 didSelectAction:(long long)arg2;
- (double)eventStatusButtonsViewButtonFontSize:(id)arg1;
- (id)getCurrentContext;
- (bool)hideCalendarPreview;
- (id)initWithContext:(struct NSDictionary { Class x1; }*)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)inlineDayViewRespectsSelectedCalendarsFilter;
- (void)invokeAction:(long long)arg1;
- (bool)isICSPreview;
- (bool)isLargeDayView;
- (id)items;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutMargins;
- (void)loadView;
- (bool)minimalMode;
- (bool)noninteractivePlatterMode;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)openAttendeesDetailItem;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)presentEditorAnimated:(bool)arg1;
- (id)previewActionItems;
- (void)reloadedData;
- (int)scrollToSection;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setActiveEventEditor:(id)arg1;
- (void)setAllowsCalendarPreview:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setAllowsInviteResponses:(bool)arg1;
- (void)setAllowsSubitems:(bool)arg1;
- (void)setCalendarPreviewIsInlineDayView:(bool)arg1;
- (void)setConfirmationAlertPresentationSourceViewController:(id)arg1;
- (void)setContext:(struct NSDictionary { Class x1; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditorHideTransition:(int)arg1;
- (void)setEditorShowTransition:(int)arg1;
- (void)setEvent:(id)arg1;
- (void)setHideCalendarPreview:(bool)arg1;
- (void)setICSPreview:(bool)arg1;
- (void)setInlineDayViewRespectsSelectedCalendarsFilter:(bool)arg1;
- (void)setIsLargeDayView:(bool)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMinimalMode:(bool)arg1;
- (void)setNeedsReload;
- (void)setNoninteractivePlatterMode:(bool)arg1;
- (void)setScrollToSection:(int)arg1;
- (void)setShowsAddToCalendarForICSPreview:(bool)arg1;
- (void)setShowsConferenceItem:(bool)arg1;
- (void)setShowsDelegateMessage:(bool)arg1;
- (void)setShowsDelegatorMessage:(bool)arg1;
- (void)setShowsDeleteForICSPreview:(bool)arg1;
- (void)setShowsDoneButton:(bool)arg1;
- (void)setShowsOutOfDateMessage:(bool)arg1;
- (void)setShowsUpdateCalendarForICSPreview:(bool)arg1;
- (void)setTopInset:(double)arg1;
- (void)setViewIsVisible:(bool)arg1;
- (bool)shouldShowEditButtonInline;
- (bool)showsAddToCalendarForICSPreview;
- (bool)showsConferenceItem;
- (bool)showsDelegateMessage;
- (bool)showsDelegatorMessage;
- (bool)showsDeleteForICSPreview;
- (bool)showsDoneButton;
- (bool)showsOutOfDateMessage;
- (bool)showsUpdateCalendarForICSPreview;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)topInset;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTitleWithScrollView:(id)arg1 animation:(bool)arg2;
- (id)viewControllerForEventItem:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (bool)viewIsVisible;
- (void)viewLayoutMarginsDidChange;
- (id)viewTitle;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end


<hr><footer>
Source code: <a href="https://github.com/hbang/RuntimeBrowser">https://github.com/hbang/RuntimeBrowser</a>

Authors:
  Ezra Epstein (eepstein@prajna.com)
  Nicolas Seriot (nicolas@seriot.ch)
  HASHBANG Productions

Copyright &copy; 2002 by Prajna IT Consulting
Copyright &copy; 2015 by <a href="http://www.seriot.ch">Nicolas Seriot</a>
Copyright &copy; 2021 by <a href="https://hashbang.productions">HASHBANG Productions</a>

THIS PROGRAM AND THIS CODE COME WITH ABSOLUTELY NO WARRANTY. THIS CODE HAS BEEN PROVIDED "AS IS" AND THE RESPONSIBILITY FOR ITS OPERATIONS IS 100% YOURS.

RuntimeBrowser is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version.

RuntimeBrowser is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with RuntimeBrowser (in a file called "COPYING.txt"); if not, write to the Free Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA</footer></pre>
</body>
</html>