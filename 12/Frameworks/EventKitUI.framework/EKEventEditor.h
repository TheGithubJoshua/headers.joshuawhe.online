<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EKEventEditor.h</title>
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

/Frameworks/EventKitUI.framework/EKEventEditor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI (1.0)
 */

@interface EKEventEditor : EKCalendarItemEditor <EKEventAutocompleteResultsEditItemDelegate> {
    EKCalendarItemAlarmEditItem * _alarmEditItem;
    EKEventAttendeesEditItem * _attendeesEditItem;
    EKEventAutocompleteResultsEditItem * _autocompleteEditItem;
    EKUIAutocompletePETTracker * _autocompletePETTracker;
    bool  _autocompleteResultsVisible;
    NSString * _autocompleteSearchString;
    NSTimer * _autocompleteTimer;
    UIColor * _backgroundColor;
    EKCalendarItemCalendarEditItem * _calendarEditItem;
    EKEventDateEditItem * _dateItem;
    unsigned long long  _focusOnAppearanceTarget;
    bool  _hasShownNaturalLanguageResult;
    bool  _hasShownZeroKeywordResult;
    bool  _isTransitioning;
    EKCalendarItemLocationInlineEditItem * _locationInlineEditItem;
    EKUIAutocompleteSearchResult * _naturalLanguageResult;
    EKEventURLAndNotesInlineEditItem * _notesEditItem;
    <EKUIAutocompletePendingSearchProtocol> * _pendingSearch;
    bool  _selectOnFocus;
    EKUIAutocompleteSearchResult * _selectedAutocompleteResult;
    unsigned long long  _selectedAutocompleteResultIndex;
    bool  _shouldAutocomplete;
    bool  _showAttachments;
    NSString * _suggestionKey;
    EKCalendarItemTitleInlineEditItem * _titleInlineEditItem;
    EKUIAutocompleteSearchResult * _zeroKeywordResult;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showAttachments;
@property (nonatomic, retain) NSString *suggestionKey;
@property (readonly) Class superclass;

+ (Class)_SGSuggestionsServiceClass;
+ (void)_applyTimeToAutocompleteResults:(id)arg1 usingCurrentStartDate:(id)arg2 currentEndDate:(id)arg3 timeImplicitlySet:(bool)arg4;
+ (id)_copyAlarmsForAutocompleteFromResult:(id)arg1;
+ (id)_copyAttendeesForAutocompleteFromResult:(id)arg1;
+ (void)_modifyCurrentEvent:(id)arg1 withAutocompleteResult:(id)arg2;
+ (id)_now;
+ (id)defaultTitleForCalendarItem;

- (void).cxx_destruct;
- (void)_beginAutocompleteSearch:(id)arg1;
- (id)_calendarItemIndexSet;
- (void)_cancelPendingAutocompleteAndCleanup;
- (void)_copyEventForPossibleRevert;
- (id)_editItems;
- (void)_focusAppearanceTarget;
- (void)_hideAndCancelAutocompleteResults;
- (id)_nameForDeleteButton;
- (id)_orderedEditItems;
- (void)_revertEvent;
- (void)_scheduleAutocompleteSearchWithString:(id)arg1;
- (void)_scheduleAutocompleteTimerIfNeeded;
- (void)_setAutocompleteResultsVisible:(bool)arg1;
- (void)_setEventTitleForTestingAutocomplete:(id)arg1;
- (void)_showAutocompleteResults;
- (void)_updateTitleEditItemSeparatorVisibility;
- (id)_viewForSheet;
- (void)autocompleteResultsEditItem:(id)arg1 resultSelected:(id)arg2;
- (void)autocompleteResultsEditItemDidHideResults:(id)arg1;
- (void)autocompleteResultsEditItemDidShowResults:(id)arg1;
- (id)backgroundColor;
- (id)defaultAlertTitle;
- (void)editItemDidStartEditing:(id)arg1;
- (void)editItemTextChanged:(id)arg1;
- (unsigned long long)entityType;
- (id)event;
- (void)focus:(unsigned long long)arg1 select:(bool)arg2;
- (void)loadView;
- (id)notificationNamesForLocaleChange;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)preferredTitle;
- (void)prepareEditItems;
- (void)refreshInvitees;
- (void)refreshLocation;
- (void)refreshStartAndEndDates;
- (bool)saveCalendarItemWithSpan:(long long)arg1 error:(id*)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setShowAttachments:(bool)arg1;
- (void)setSuggestionKey:(id)arg1;
- (void)setupDeleteButton;
- (bool)shouldAutorotate;
- (bool)showAttachments;
- (id)suggestionKey;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

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
