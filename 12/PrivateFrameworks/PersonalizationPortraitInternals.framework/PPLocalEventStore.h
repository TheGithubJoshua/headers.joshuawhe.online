<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PPLocalEventStore.h</title>
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

/PrivateFrameworks/PersonalizationPortraitInternals.framework/PPLocalEventStore.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals (1)
 */

@interface PPLocalEventStore : NSObject {
    bool  _accessGranted;
    _PASNotificationToken * _assetUpdateNotificationToken;
    EKCalendarVisibilityManager * _calendarVisibilityManager;
    NSArray * _calendars;
    PPContactScorer * _contactScorer;
    PPEventCache * _eventCache;
    NSObject<OS_dispatch_queue> * _eventLoadingQueue;
    EKEventStore * _store;
}

+ (id)defaultStore;

- (void).cxx_destruct;
- (bool)_ekChangeIsEvent:(id)arg1;
- (id)_filterOutAllDayAndMultiDayEvents:(id)arg1;
- (bool)_inObservedCalendars:(id)arg1;
- (bool)_isAllDayOrMultiDay:(id)arg1;
- (id)_loadCalendars;
- (id)_makeEventCache;
- (id)_predicateForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_preloadEvents;
- (id)_recordForDeletedEKEventWithChangeIdentifier:(id)arg1;
- (id)_recordForEKEvent:(id)arg1;
- (void)_registerForNotifications;
- (id)_resolveEventFromEKChange:(id)arg1;
- (double)_scoreForSecondsRelativeToNow:(double)arg1;
- (void)_setupCalendarVisibilityManager;
- (void)askForEKAccess;
- (id)calendars;
- (void)clearCaches;
- (void)dealloc;
- (id)eventHighlightForEKEvent:(id)arg1 usingScorer:(id)arg2 date:(id)arg3 rankingOptions:(int)arg4;
- (id)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3;
- (id)eventMetaDataFromDate:(id)arg1 toDate:(id)arg2;
- (id)eventNameRecordsForClient:(id)arg1 error:(id*)arg2;
- (id)eventWithExternalID:(id)arg1;
- (id)eventsFromDate:(id)arg1 toDate:(id)arg2;
- (id)eventsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)getWeakStore;
- (id)init;
- (bool)iterEventNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (void)iterateEventsFrom:(id)arg1 to:(id)arg2 inChunks:(int)arg3 withBlock:(id /* block */)arg4;
- (void)refreshCacheWithChanges:(id)arg1;
- (id)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 error:(id*)arg3;

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