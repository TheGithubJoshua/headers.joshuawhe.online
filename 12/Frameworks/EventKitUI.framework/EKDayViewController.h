<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EKDayViewController.h</title>
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

/Frameworks/EventKitUI.framework/EKDayViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI (1.0)
 */

@interface EKDayViewController : UIViewController <BlockableScrollViewDelegate, EKDayOccurrenceViewDelegate, EKDayViewDataSource, EKDayViewDelegate, EKEventGestureControllerDelegate, UIScrollViewDelegate, UIViewControllerPreviewingDelegate> {
    bool  _adjustingForDeceleration;
    bool  _allowsDaySwitching;
    bool  _allowsSelection;
    bool  _alwaysAnimate;
    bool  _animateAllDayAreaHeight;
    NSCalendar * _calendar;
    UIView * _clipView;
    bool  _correctAfterScroll;
    EKDayView * _currentDay;
    EKDayViewWithGutters * _currentDayWithGutter;
    EKEventEditViewController * _currentEditor;
    <EKDayViewControllerDataSource> * _dataSource;
    double  _dayEnd;
    double  _dayStart;
    unsigned int  _decelerating;
    ScrollSpringFactory * _decelerationSpringFactory;
    <EKDayViewControllerDelegate> * _delegate;
    bool  _disableGestureDayChange;
    bool  _disableNotifyDateChangeDuringTracking;
    NSDateComponents * _displayDate;
    EKEventGestureController * _eventGestureController;
    bool  _fingerDown;
    UIView * _gestureOccurrenceSuperview;
    double  _gutterWidth;
    unsigned int  _hasPendingNextDate;
    unsigned int  _hasPendingPreviousDate;
    UIScrollView * _horizontalScrollingView;
    bool  _initialLoadHasOccurred;
    bool  _instigatedDateChange;
    bool  _needToCompleteDeceleration;
    bool  _needToCompleteScrollingAnimation;
    EKDayView * _nextDay;
    CalendarOccurrencesCollection * _nextDayOccurrences;
    EKDayViewWithGutters * _nextDayWithGutter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _normalizedContentOffset;
    bool  _notifyWhenTapOtherEventDuringDragging;
    CalendarOccurrencesCollection * _occurrences;
    NSDateComponents * _originalDisplayDate;
    NSDateComponents * _pendingNextDate;
    NSDateComponents * _pendingPreviousDate;
    bool  _preloadExtraDays;
    EKDayView * _previousDay;
    CalendarOccurrencesCollection * _previousDayOccurrences;
    EKDayViewWithGutters * _previousDayWithGutter;
    EKDayOccurrenceView * _proposedTimeView;
    NSObject<OS_dispatch_queue> * _protectionQueue;
    NSObject<OS_dispatch_queue> * _reloadQueue;
    bool  _resizing;
    unsigned int  _scrollViewAnimating;
    unsigned int  _settingDateFromScrolling;
    bool  _shouldAutoscrollAfterAppearance;
    NSTimer * _showNowTimer;
    bool  _showsBanner;
    int  _springAnimatedDecelerationsInProgress;
    NSDateComponents * _targetDateComponents;
    bool  _transitionedToSameDay;
    bool  _viewAppeared;
    <UIViewControllerPreviewing> * _viewControllerPreviewingRegistration;
}

@property (nonatomic) bool allowsDaySwitching;
@property (nonatomic) bool allowsSelection;
@property (nonatomic) bool alwaysAnimate;
@property (nonatomic) bool animateAllDayAreaHeight;
@property (nonatomic, copy) NSCalendar *calendar;
@property (nonatomic, readonly) UIView *currentAllDayView;
@property (nonatomic, readonly) bool currentDayContainsOccurrences;
@property (nonatomic, readonly) UIView *currentDayContentGridView;
@property (nonatomic, readonly) EKDayView *currentDayView;
@property (nonatomic, retain) EKEventEditViewController *currentEditor;
@property (nonatomic) <EKDayViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKDayViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableGestureDayChange;
@property (nonatomic) bool disableNotifyDateChangeDuringTracking;
@property (nonatomic, copy) NSDateComponents *displayDate;
@property (nonatomic, retain) UIView *gestureOccurrenceSuperview;
@property (nonatomic) double gutterWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGPoint { double x1; double x2; } normalizedContentOffset;
@property (nonatomic) bool notifyWhenTapOtherEventDuringDragging;
@property (nonatomic, copy) NSDateComponents *pendingNextDate;
@property (nonatomic, copy) NSDateComponents *pendingPreviousDate;
@property (nonatomic) bool preloadExtraDays;
@property (nonatomic) bool scrollEventsInToViewIgnoresVisibility;
@property (nonatomic) bool shouldAutoscrollAfterAppearance;
@property (nonatomic, retain) NSTimer *showNowTimer;
@property (nonatomic) bool showsBanner;
@property (readonly) Class superclass;
@property (nonatomic) bool transitionedToSameDay;

+ (bool)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (void)__cutLongCallbackTailForDecelerationFromUserInput;
- (void)__cutLongTailCallbackForScrollAnimationFromExternalSource;
- (bool)_canScrollToNow;
- (bool)_canShowNowAfterScrollViewDidEndDecelerating:(id)arg1;
- (void)_cancelAllLongTailCuttingCallbacks;
- (void)_cleanUpTargetDateComponents;
- (void)_completeDecelerationIfNeeded;
- (void)_completeScrollingAnimationIfNeeded;
- (id)_createGutterDayViewWithDayView:(id)arg1;
- (void)_cutAnimationTailAfterDelayForDecelerationFromUserInput;
- (void)_cutAnimationTailAfterDelayForScrollAnimationFromExternalSource;
- (void)_didRespondToApplicationDidBecomeActiveStateChange;
- (id)_eventGestureSuperview;
- (id)_eventsForDay:(id)arg1;
- (void)_highlightDayViewDate:(double)arg1 isAllDay:(bool)arg2;
- (bool)_isCalendarDate:(id)arg1 sameDayAsComponents:(id)arg2;
- (bool)_isCurrentDayToday;
- (bool)_isResizing;
- (bool)_isViewInVisibleRect:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_notifyDelegateOfSelectedDateChange;
- (id)_occurrencesForDayView:(id)arg1;
- (void)_relayoutDays;
- (void)_relayoutDaysDuringScrolling;
- (void)_relayoutDaysDuringScrollingAndPerformDayChanges:(bool)arg1;
- (void)_scrollDayViewAfterRelayoutDays;
- (void)_scrollToNowOnScrollViewDidEndScrollingAnimation:(id)arg1;
- (void)_scrollViewDidEndDecelerating:(id)arg1;
- (void)_setDayView:(id)arg1 toDate:(id)arg2;
- (void)_setDisplayDate:(id)arg1 forRepeat:(bool)arg2;
- (void)_setDisplayDate:(id)arg1 forRepeat:(bool)arg2 animate:(bool)arg3;
- (void)_setDisplayDateInternal:(id)arg1;
- (void)_setHorizontalContentOffsetUsingSpringAnimation:(struct CGPoint { double x1; double x2; })arg1;
- (void)_setNextAndPreviousFirstVisibleSecondToCurrent;
- (bool)_shouldEndGestureEditingOnTap;
- (bool)_shouldRespondToApplicationDidBecomeActiveStateChange;
- (bool)_shouldScrollToNow;
- (void)_showNowAfterScrollViewDidEndDecelerating:(id)arg1;
- (double)_showNowDelay;
- (void)_showNowTimerFired:(id)arg1;
- (void)_showWeekNumbersPreferenceChanged:(id)arg1;
- (void)_stopShowNowTimer;
- (void)_updateAllDayAreaHeight;
- (double)_weightedAllDayHeightForView:(id)arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)allowsDaySwitching;
- (bool)allowsSelection;
- (bool)alwaysAnimate;
- (bool)animateAllDayAreaHeight;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (bool)blockableScrollViewShouldAllowScrolling;
- (void)bringEventToFront:(id)arg1;
- (id)calendar;
- (void)cleanUpAfterGestureFailureForEventGestureController:(id)arg1;
- (id)createEventForEventGestureController:(id)arg1;
- (id)createOccurrenceViewForEventGestureController:(id)arg1;
- (id)currentAllDayView;
- (bool)currentDayContainsOccurrences;
- (id)currentDayContentGridView;
- (id)currentDayView;
- (id)currentEditor;
- (id)currentPresentationController;
- (id)dataSource;
- (void)dayView:(id)arg1 didCreateOccurrenceViews:(id)arg2;
- (void)dayView:(id)arg1 didScaleDayViewWithScale:(double)arg2;
- (void)dayView:(id)arg1 didSelectEvent:(id)arg2;
- (void)dayView:(id)arg1 didUpdateScrollPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3;
- (void)dayView:(id)arg1 firstVisibleSecondChanged:(unsigned long long)arg2;
- (void)dayView:(id)arg1 isPinchingDayViewWithScale:(double)arg2;
- (void)dayView:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
- (void)dayViewDidTapEmptySpace:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)didScrollWhenEventGestureController:(id)arg1 scrollTimerFiredToMoveLeft:(bool)arg2 right:(bool)arg3 vertically:(bool)arg4 towardPoint:(struct CGPoint { double x1; double x2; })arg5;
- (bool)disableGestureDayChange;
- (bool)disableNotifyDateChangeDuringTracking;
- (id)displayDate;
- (void)editorDidCancelEditingEvent:(id)arg1;
- (void)editorDidDeleteEvent:(id)arg1;
- (void)editorDidSaveEvent:(id)arg1;
- (bool)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg1;
- (void)eventGestureController:(id)arg1 addViewToScroller:(id)arg2 isAllDay:(bool)arg3;
- (void)eventGestureController:(id)arg1 adjustDraggingViewForAllDay:(bool)arg2;
- (double)eventGestureController:(id)arg1 dateAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)eventGestureController:(id)arg1 didCancelEditingOccurrence:(id)arg2 fadedOut:(bool)arg3;
- (bool)eventGestureController:(id)arg1 didCommitOccurrence:(id)arg2 toDate:(double)arg3 isAllDay:(bool)arg4 span:(long long)arg5;
- (void)eventGestureController:(id)arg1 didMoveToDate:(double)arg2 isAllDay:(bool)arg3;
- (void)eventGestureController:(id)arg1 didSetUpAtDate:(double)arg2 isAllDay:(bool)arg3;
- (void)eventGestureController:(id)arg1 didSingleTapOccurrence:(id)arg2;
- (double)eventGestureController:(id)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(bool)arg3;
- (bool)eventGestureController:(id)arg1 isAllDayAtPoint:(struct CGPoint { double x1; double x2; })arg2 requireInsistence:(bool)arg3;
- (id)eventGestureController:(id)arg1 occurrenceViewAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)eventGestureController:(id)arg1 occurrenceViewForOccurrence:(id)arg2;
- (struct CGPoint { double x1; double x2; })eventGestureController:(id)arg1 pointAtDate:(double)arg2 isAllDay:(bool)arg3;
- (void)eventGestureController:(id)arg1 requestsPresentationOfViewController:(id)arg2;
- (void)eventGestureController:(id)arg1 requestsShowEvent:(id)arg2;
- (double)eventGestureController:(id)arg1 widthForOccurrenceViewOfDays:(unsigned long long)arg2;
- (double)eventGestureController:(id)arg1 yPositionPerhapsMatchingAllDayOccurrence:(id)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)eventGestureControllerDidEndDragSession:(id)arg1;
- (bool)eventGestureControllerShouldAllowLongPress:(id)arg1;
- (id)eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (void)externallyEndedGestureDragging;
- (unsigned long long)firstVisibleSecond;
- (id)gestureController;
- (id)gestureOccurrenceSuperview;
- (double)gutterWidth;
- (double)horizontalOffsetForPagingForEventGestureController:(id)arg1;
- (id)horizontalScrollView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertViewForEvent:(id)arg1 belowViewForOtherEvent:(id)arg2;
- (void)layoutContainerView:(id)arg1;
- (void)loadView;
- (struct CGPoint { double x1; double x2; })normalizedContentOffset;
- (bool)notifyWhenTapOtherEventDuringDragging;
- (id)occurrenceViewForEvent:(id)arg1;
- (id)occurrenceViewForEvent:(id)arg1 includeNextAndPreviousDays:(bool)arg2;
- (id)occurrenceViewSuperviewForEventGestureController:(id)arg1;
- (id)pendingNextDate;
- (id)pendingPreviousDate;
- (id)preferredEventToSelectOnDate:(id)arg1;
- (bool)preloadExtraDays;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)reloadData;
- (void)reloadDataBetweenStart:(id)arg1 end:(id)arg2 completionForCurrentDayReload:(id /* block */)arg3;
- (void)reloadDataWithCompletion:(id /* block */)arg1;
- (void)scrollDayViewAppropriatelyWithAnimation:(bool)arg1;
- (void)scrollEventIntoView:(id)arg1 animated:(bool)arg2;
- (bool)scrollEventsInToViewIgnoresVisibility;
- (void)scrollEventsIntoViewAnimated:(bool)arg1;
- (void)scrollToNow:(bool)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setAllowsDaySwitching:(bool)arg1;
- (void)setAllowsSelection:(bool)arg1;
- (void)setAlwaysAnimate:(bool)arg1;
- (void)setAnimateAllDayAreaHeight:(bool)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCurrentEditor:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableGestureDayChange:(bool)arg1;
- (void)setDisableNotifyDateChangeDuringTracking:(bool)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 gutterWidth:(double)arg2;
- (void)setGestureOccurrenceSuperview:(id)arg1;
- (void)setGutterWidth:(double)arg1;
- (void)setNormalizedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNotifyWhenTapOtherEventDuringDragging:(bool)arg1;
- (void)setPendingNextDate:(id)arg1;
- (void)setPendingPreviousDate:(id)arg1;
- (void)setPreloadExtraDays:(bool)arg1;
- (void)setScrollEventsInToViewIgnoresVisibility:(bool)arg1;
- (void)setShouldAutoscrollAfterAppearance:(bool)arg1;
- (void)setShowNowTimer:(id)arg1;
- (void)setShowsBanner:(bool)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTransitionedToSameDay:(bool)arg1;
- (bool)shouldAutoscrollAfterAppearance;
- (id)showNowTimer;
- (bool)showsBanner;
- (void)significantTimeChangeOccurred;
- (double)timedRegionOriginForEventGestureController:(id)arg1;
- (id)touchTrackingViewForEventGestureController:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)transitionedToSameDay;
- (void)updateFrameForProposedTimeView;
- (void)validateInterfaceOrientation;
- (id)verticalScrollView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(bool)arg1;
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
