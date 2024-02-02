<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CalendarEventLoader.h</title>
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

/Frameworks/EventKitUI.framework/CalendarEventLoader.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI (1.0)
 */

@interface CalendarEventLoader : NSObject {
    bool  _allowEventLocationPrediction;
    int  _cancelSeed;
    unsigned long long  _componentForExpandingPadding;
    unsigned long long  _componentForExpandingRequests;
    double  _currentlyLoadingEnd;
    double  _currentlyLoadingStart;
    unsigned int  _daysOfPadding;
    <CalendarEventLoaderDelegate> * _delegate;
    double  _lastRequestedEnd;
    double  _lastRequestedStart;
    NSObject<OS_dispatch_group> * _loadGroup;
    NSObject<OS_dispatch_queue> * _loadQueue;
    double  _loadedEnd;
    NSArray * _loadedOccurrences;
    bool  _loadedOccurrencesAreStale;
    NSArray * _loadedProposedTimeOccurrences;
    double  _loadedStart;
    unsigned int  _maxDaysToCache;
    NSMutableSet * _occurrencesAwaitingDeletion;
    NSMutableSet * _occurrencesAwaitingRefresh;
    NSObject<OS_dispatch_queue> * _occurrencesLock;
    double  _preferredReloadEnd;
    double  _preferredReloadStart;
    NSSet * _selectedCalendars;
    bool  _selectedCalendarsWereSet;
    EKEventStore * _store;
}

@property (nonatomic) bool allowEventLocationPrediction;
@property (nonatomic) <CalendarEventLoaderDelegate> *delegate;

- (void).cxx_destruct;
- (void)_enqueueLoadForRangeStart:(double)arg1 end:(double)arg2;
- (void)_eventStoreChanged:(id)arg1;
- (void)_getLoadStart:(double*)arg1 end:(double*)arg2 fromLoadedStart:(double)arg3 loadedEnd:(double)arg4 currentlyLoadingStart:(double)arg5 currentlyLoadingEnd:(double)arg6;
- (void)_getStart:(double)arg1 end:(double)arg2 expandedToComponents:(unsigned long long)arg3 withResultStart:(double*)arg4 resultEnd:(double*)arg5;
- (void)_getStart:(double)arg1 end:(double)arg2 paddedByDays:(int)arg3 inTimeZone:(id)arg4 resultStart:(double*)arg5 resultEnd:(double*)arg6;
- (void)_loadIfNeededBetweenStart:(double)arg1 end:(double)arg2 loadPaddingNow:(bool)arg3;
- (void)_pruneLoadedOccurrences;
- (void)_reload;
- (id)_uniqueEventsFromArray:(id)arg1;
- (void)addOccurrenceAwaitingDeletion:(id)arg1;
- (void)addOccurrenceAwaitingRefresh:(id)arg1;
- (bool)allowEventLocationPrediction;
- (void)cancelAllLoads;
- (void)dealloc;
- (id)delegate;
- (bool)firstLoadBegan;
- (id)initWithEventStore:(id)arg1;
- (void)loadIfNeeded;
- (bool)loadIsComplete;
- (id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 preSorted:(bool)arg3 waitForLoad:(bool)arg4;
- (void)setAllowEventLocationPrediction:(bool)arg1;
- (void)setCacheLimit:(unsigned int)arg1;
- (void)setComponentForExpandingPadding:(unsigned long long)arg1;
- (void)setComponentForExpandingRequests:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPadding:(unsigned int)arg1;
- (void)setPreferredReloadStartDate:(id)arg1 endDate:(id)arg2;
- (void)setSelectedCalendars:(id)arg1;
- (void)timeZoneChanged;
- (void)waitForBackgroundLoad;

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