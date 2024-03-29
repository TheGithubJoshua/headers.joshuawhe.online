<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDCurrentActivitySummaryHelper.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDCurrentActivitySummaryHelper.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDCurrentActivitySummaryHelper : NSObject {
    NSDate * _dateOverride;
    bool  _hasLoadedActivitySummaries;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    HDProfile * _profile;
    HDActivitySummaryQueryHelper * _queryHelper;
    NSObject<OS_dispatch_queue> * _queue;
    NSTimeZone * _timezoneOverride;
    long long  _todayIndex;
    HKActivitySummary * _todaySummary;
    NSArray * _typesForDataCollection;
    long long  _yesterdayIndex;
    HKActivitySummary * _yesterdaySummary;
}

@property (readonly) bool hasLoadedActivitySummaries;
@property (readonly) HKActivitySummary *todayActivitySummary;
@property (readonly) HKActivitySummary *yesterdayActivitySummary;

- (void).cxx_destruct;
- (unsigned long long)_changedFieldsBetweenPreviousActivitySummary:(id)arg1 andNewActivitySummary:(id)arg2;
- (id)_createEmptyActivitySummaryForIndex:(long long)arg1;
- (void)_generateCacheIndexesWithTodayIndex:(long long*)arg1 yesterdayIndex:(long long*)arg2;
- (void)_handleSignificantTimeChangeNotification:(id)arg1;
- (void)_queue_alertObserversTodaySummaryUpdated:(id)arg1 changedFields:(unsigned long long)arg2;
- (void)_queue_alertObserversYesterdaySummaryUpdated:(id)arg1 changedFields:(unsigned long long)arg2;
- (bool)_queue_dateHasChanged;
- (id)_queue_gregorianCalendar;
- (void)_queue_resetQueryHelper;
- (void)_queue_setUpActivityQueryHelper;
- (void)_queue_updateActivitySummaries:(id)arg1;
- (void)_queue_updateTodayActivitySummary:(id)arg1;
- (void)_queue_updateYesterdayActivitySummary:(id)arg1;
- (void)_registerForSignificantTimeChangeNotification;
- (void)addObserver:(id)arg1;
- (id)dateOverride;
- (void)dealloc;
- (bool)hasLoadedActivitySummaries;
- (id)initWithProfile:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setDateOverride:(id)arg1;
- (void)setTimezoneOverride:(id)arg1;
- (id)timezoneOverride;
- (id)todayActivitySummary;
- (id)yesterdayActivitySummary;

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
