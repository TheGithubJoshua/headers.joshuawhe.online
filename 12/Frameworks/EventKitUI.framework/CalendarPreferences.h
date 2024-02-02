<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CalendarPreferences.h</title>
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

/Frameworks/EventKitUI.framework/CalendarPreferences.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI (1.0)
 */

@interface CalendarPreferences : NSObject {
    bool  _drawDebugViewColors;
    CalPreferences * _preferences;
}

@property (nonatomic, retain) NSArray *calendarUUIDsExcludedFromNotifications;
@property (nonatomic, retain) NSNumber *dayViewHourScale;
@property (nonatomic) unsigned long long debugOccurrenceViewIconOverload;
@property (nonatomic, retain) NSArray *deselectedCalendarSyncHashes;
@property (nonatomic) bool disableContinuity;
@property (nonatomic) bool disableTodayPushes;
@property (nonatomic) bool drawDebugViewColors;
@property (nonatomic) bool enableAvatars;
@property (nonatomic) bool eventAutocompleteEnabled;
@property (nonatomic) bool hideInlineDayViewInEventDetails;
@property (nonatomic) bool immediateAlarmCreation;
@property (nonatomic) bool largeListViewDisclosingEventDetails;
@property (nonatomic, retain) NSNumber *lastSuspendTime;
@property (nonatomic, retain) NSNumber *lastViewMode;
@property (nonatomic, retain) NSNumber *lastViewedDate;
@property (nonatomic, retain) NSNumber *locationSearchResultLimit;
@property (nonatomic, retain) NSString *overlayCalendarID;
@property (nonatomic) unsigned long long promptForCommentWhenDeclining;
@property (nonatomic) bool requestSyncOnApplicationLaunch;
@property (nonatomic, retain) NSString *searchString;
@property (getter=isShortResumeToTodayTimeout, nonatomic) bool shortResumeToTodayTimeout;
@property (nonatomic) bool showDetailedListView;
@property (nonatomic) bool showEventsInPhoneMonthView;
@property (nonatomic) bool showExperimentalUI;
@property (nonatomic) bool showListView;
@property (nonatomic) bool showMonthDividedListView;
@property (nonatomic) bool showWeekNumbers;
@property (nonatomic) bool showWindowDebugButton;
@property (nonatomic, retain) NSDate *simulatedCurrentDate;
@property (nonatomic) bool swipeToDeleteEnabled;
@property (nonatomic, retain) NSString *upNextColor;
@property (nonatomic) double upNextDuration;
@property (nonatomic, retain) NSString *upNextLocation;
@property (nonatomic) bool upNextSimpleModeEnabled;
@property (nonatomic, retain) NSDate *upNextStartTime;
@property (nonatomic, retain) NSString *upNextTitle;
@property (nonatomic) bool viewedTimeZoneAutomatic;
@property (nonatomic, retain) NSNumber *weekStart;
@property (nonatomic, retain) NSNumber *weekViewHourScale;

+ (id)sharedPreferences;

- (void).cxx_destruct;
- (id)calendarUUIDsExcludedFromNotifications;
- (id)dayViewHourScale;
- (unsigned long long)debugOccurrenceViewIconOverload;
- (id)deselectedCalendarSyncHashes;
- (bool)disableContinuity;
- (bool)disableTodayPushes;
- (bool)drawDebugViewColors;
- (bool)enableAvatars;
- (bool)eventAutocompleteEnabled;
- (bool)hideInlineDayViewInEventDetails;
- (bool)immediateAlarmCreation;
- (id)init;
- (bool)isShortResumeToTodayTimeout;
- (bool)largeListViewDisclosingEventDetails;
- (id)lastSuspendTime;
- (id)lastViewMode;
- (id)lastViewedDate;
- (id)locationSearchResultLimit;
- (id)overlayCalendarID;
- (unsigned long long)promptForCommentWhenDeclining;
- (bool)requestSyncOnApplicationLaunch;
- (id)searchString;
- (void)setCalendarUUIDsExcludedFromNotifications:(id)arg1;
- (void)setDayViewHourScale:(id)arg1;
- (void)setDebugOccurrenceViewIconOverload:(unsigned long long)arg1;
- (void)setDeselectedCalendarSyncHashes:(id)arg1;
- (void)setDisableContinuity:(bool)arg1;
- (void)setDisableTodayPushes:(bool)arg1;
- (void)setDrawDebugViewColors:(bool)arg1;
- (void)setEnableAvatars:(bool)arg1;
- (void)setEventAutocompleteEnabled:(bool)arg1;
- (void)setHideInlineDayViewInEventDetails:(bool)arg1;
- (void)setImmediateAlarmCreation:(bool)arg1;
- (void)setLargeListViewDisclosingEventDetails:(bool)arg1;
- (void)setLastSuspendTime:(id)arg1;
- (void)setLastViewMode:(id)arg1;
- (void)setLastViewedDate:(id)arg1;
- (void)setLocationSearchResultLimit:(id)arg1;
- (void)setOverlayCalendarID:(id)arg1;
- (void)setPromptForCommentWhenDeclining:(unsigned long long)arg1;
- (void)setRequestSyncOnApplicationLaunch:(bool)arg1;
- (void)setSearchString:(id)arg1;
- (void)setShortResumeToTodayTimeout:(bool)arg1;
- (void)setShowDetailedListView:(bool)arg1;
- (void)setShowEventsInPhoneMonthView:(bool)arg1;
- (void)setShowExperimentalUI:(bool)arg1;
- (void)setShowListView:(bool)arg1;
- (void)setShowMonthDividedListView:(bool)arg1;
- (void)setShowWeekNumbers:(bool)arg1;
- (void)setShowWindowDebugButton:(bool)arg1;
- (void)setSimulatedCurrentDate:(id)arg1;
- (void)setSwipeToDeleteEnabled:(bool)arg1;
- (void)setUpNextColor:(id)arg1;
- (void)setUpNextDuration:(double)arg1;
- (void)setUpNextLocation:(id)arg1;
- (void)setUpNextSimpleModeEnabled:(bool)arg1;
- (void)setUpNextStartTime:(id)arg1;
- (void)setUpNextTitle:(id)arg1;
- (void)setViewedTimeZoneAutomatic:(bool)arg1;
- (void)setWeekStart:(id)arg1;
- (void)setWeekViewHourScale:(id)arg1;
- (bool)showDetailedListView;
- (bool)showEventsInPhoneMonthView;
- (bool)showExperimentalUI;
- (bool)showListView;
- (bool)showMonthDividedListView;
- (bool)showWeekNumbers;
- (bool)showWindowDebugButton;
- (id)simulatedCurrentDate;
- (bool)swipeToDeleteEnabled;
- (id)upNextColor;
- (double)upNextDuration;
- (id)upNextLocation;
- (bool)upNextSimpleModeEnabled;
- (id)upNextStartTime;
- (id)upNextTitle;
- (bool)viewedTimeZoneAutomatic;
- (id)weekStart;
- (id)weekViewHourScale;

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