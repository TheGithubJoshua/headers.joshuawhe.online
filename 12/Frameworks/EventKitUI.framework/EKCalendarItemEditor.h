<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EKCalendarItemEditor.h</title>
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

/Frameworks/EventKitUI.framework/EKCalendarItemEditor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI (1.0)
 */

@interface EKCalendarItemEditor : UITableViewController <EKCalendarItemEditItemDelegate, UIActionSheetDelegate, UIAlertViewDelegate> {
    _UIAccessDeniedView * _accessDeniedView;
    EKCalendarItem * _calendarItem;
    bool  _canHideDoneAndCancelButtons;
    UIBarButtonItem * _cancelButton;
    EKCalendarItemEditItem * _currentEditItem;
    NSArray * _currentItems;
    UIBarButtonItem * _doneButton;
    int  _editItemVisibility;
    NSArray * _editItems;
    NSMutableSet * _editItemsDisablingDoneButton;
    <EKCalendarItemEditorDelegate> * _editorDelegate;
    bool  _giveTitleCellKeyboardFocus;
    bool  _hasAppeared;
    bool  _isIgnoringCellHeightChange;
    long long  _lastAuthorizationStatus;
    double  _leftButtonSpace;
    UIBarButtonItem * _leftButtonSpacer;
    bool  _needsCellHeightChange;
    NSArray * _orderedEditItems;
    EKUIRecurrenceAlertController * _recurrenceAlertController;
    UIResponder * _responderToRestoreOnAppearence;
    id  _revertState;
    double  _rightButtonSpace;
    UIBarButtonItem * _rightButtonSpacer;
    bool  _scrollToNotes;
    bool  _showsTimeZone;
    EKEventStore * _store;
    bool  _timeImplicitlySet;
    unsigned long long  _visibleSectionToRestoreOnAppearence;
}

@property (nonatomic, retain) _UIAccessDeniedView *accessDeniedView;
@property (nonatomic, retain) EKCalendarItem *calendarItem;
@property (nonatomic) bool canHideDoneAndCancelButtons;
@property (readonly) EKCalendarItemEditItem *currentEditItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <EKCalendarItemEditorDelegate> *editorDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) double navBarLeftContentInset;
@property (nonatomic) double navBarRightContentInset;
@property (nonatomic, retain) UIResponder *responderToRestoreOnAppearence;
@property (nonatomic) bool scrollToNotes;
@property (nonatomic) bool showsTimeZone;
@property (nonatomic, retain) EKEventStore *store;
@property (readonly) Class superclass;
@property (nonatomic) bool timeImplicitlySet;
@property (nonatomic) unsigned long long visibleSectionToRestoreOnAppearence;

+ (id)_addLocalizedString;
+ (id)_doneLocalizedString;
+ (id)defaultTitleForCalendarItem;

- (void).cxx_destruct;
- (bool)_canEnableDoneButton;
- (void)_completeWithAction:(long long)arg1 animated:(bool)arg2 notify:(bool)arg3;
- (void)_configureVisibleItems;
- (void)_copyEventForPossibleRevert;
- (id)_editItemAtIndexPath:(id)arg1 firstRowIndex:(long long*)arg2;
- (id)_editItems;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardWillHide;
- (void)_localeChanged;
- (id)_nameForDeleteButton;
- (id)_orderedEditItems;
- (void)_performCloseKeyCommand;
- (void)_performDelete:(long long)arg1;
- (bool)_performSave:(long long)arg1 animated:(bool)arg2;
- (void)_pinKeyboard:(bool)arg1;
- (void)_presentDetachSheet;
- (void)_reallyHandleCellHeightChange;
- (void)_revertEvent;
- (void)_setCalendarItemOnEditItems;
- (void)_setDoneAndCancelButtonVisible:(bool)arg1;
- (void)_setShowingAccessDeniedView:(bool)arg1 showSettingsInstructions:(bool)arg2;
- (void)_setUpKeyCommands;
- (void)_setWantsToEnableDoneButton:(bool)arg1;
- (void)_tableViewDidUpdateHeights;
- (void)_tableViewWillUpdateHeights;
- (void)_updateCurrentEditItemsFromVisibility:(int)arg1 toVisibility:(int)arg2 animated:(bool)arg3;
- (void)_updateDoneButtonState;
- (id)_viewForSheet;
- (id)accessDeniedView;
- (void)applicationDidResume;
- (id)calendarItem;
- (bool)canBecomeFirstResponder;
- (bool)canHideDoneAndCancelButtons;
- (void)cancel:(id)arg1;
- (void)cancelEditingWithDelegateNotification:(bool)arg1;
- (id)cellWithReuseIdentifier:(id)arg1 forEditItem:(id)arg2;
- (void)completeAndSave;
- (void)completeWithAction:(long long)arg1 animated:(bool)arg2;
- (id)currentEditItem;
- (void)customizeActionSheet:(id)arg1;
- (void)dealloc;
- (id)defaultAlertTitle;
- (id)defaultAlertTitleForEditItem:(id)arg1;
- (void)deleteClicked:(id)arg1;
- (void)done:(id)arg1;
- (void)editItem:(id)arg1 didSaveFromDetailViewController:(bool)arg2;
- (void)editItem:(id)arg1 performActionsOnCellAtSubitem:(unsigned long long)arg2 actions:(id /* block */)arg3;
- (void)editItem:(id)arg1 textViewShouldReturn:(id)arg2;
- (void)editItem:(id)arg1 wantsDoneButtonDisabled:(bool)arg2;
- (void)editItem:(id)arg1 wantsKeyboardPinned:(bool)arg2;
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3;
- (void)editItem:(id)arg1 wantsRowInsertions:(id)arg2 rowDeletions:(id)arg3 rowReloads:(id)arg4;
- (void)editItem:(id)arg1 wantsRowReload:(id)arg2;
- (void)editItem:(id)arg1 wantsRowsScrolledToVisible:(id)arg2;
- (void)editItemDidEndEditing:(id)arg1;
- (void)editItemDidStartEditing:(id)arg1;
- (void)editItemRequiresHeightChange:(id)arg1;
- (void)editItemRequiresPopoverSizeUpdate:(id)arg1;
- (void)editItemTextChanged:(id)arg1;
- (int)editItemVisibility;
- (void)editItemVisibilityChanged:(id)arg1;
- (void)editItemWantsInjectableViewControllerToBeShown:(id)arg1;
- (id)editorDelegate;
- (unsigned long long)entityType;
- (long long)firstTableRowForEditItem:(id)arg1;
- (void)focus:(unsigned long long)arg1 select:(bool)arg2;
- (void)handleTapOutside;
- (bool)hasUnsavedChanges;
- (id)init;
- (void)loadView;
- (double)navBarLeftContentInset;
- (double)navBarRightContentInset;
- (id)notificationNamesForLocaleChange;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)preferredTitle;
- (void)prepareEditItems;
- (void)refreshInvitees;
- (void)refreshLocation;
- (void)refreshStartAndEndDates;
- (id)responderToRestoreOnAppearence;
- (long long)rowNumberForEditItem:(id)arg1;
- (bool)saveCalendarItemWithSpan:(long long)arg1 error:(id*)arg2;
- (bool)saveWithSpan:(long long)arg1 animated:(bool)arg2;
- (bool)scrollToNotes;
- (void)setAccessDeniedView:(id)arg1;
- (void)setCalendarItem:(id)arg1;
- (void)setCanHideDoneAndCancelButtons:(bool)arg1;
- (void)setEditItemVisibility:(int)arg1 animated:(bool)arg2;
- (void)setEditorDelegate:(id)arg1;
- (void)setNavBarLeftContentInset:(double)arg1;
- (void)setNavBarRightContentInset:(double)arg1;
- (void)setResponderToRestoreOnAppearence:(id)arg1;
- (void)setScrollToNotes:(bool)arg1;
- (void)setShowsTimeZone:(bool)arg1;
- (void)setStore:(id)arg1;
- (void)setTimeImplicitlySet:(bool)arg1;
- (void)setVisibleSectionToRestoreOnAppearence:(unsigned long long)arg1;
- (void)setupDeleteButton;
- (void)setupForEvent;
- (bool)shouldDisplayEditItem:(id)arg1 withVisibility:(int)arg2;
- (bool)showsTimeZone;
- (id)store;
- (void)storeChanged:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)tableSectionForEditItem:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)tableViewDidStartReload:(id)arg1;
- (bool)timeImplicitlySet;
- (void)updateNavButtonsWithSpacing;
- (id)viewControllerForEditItem:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (unsigned long long)visibleSectionToRestoreOnAppearence;
- (bool)willPresentDialogOnSave;

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