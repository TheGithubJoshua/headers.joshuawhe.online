<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AXElementFetcher.h</title>
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

/PrivateFrameworks/AXRuntime.framework/AXElementFetcher.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime (1)
 */

@interface AXElementFetcher : NSObject {
    unsigned long long  _activeFetchEvents;
    struct __AXObserver { } * _axRuntimeNotificationObserver;
    NSArray * _currentApps;
    NSArray * _customCurrentApps;
    <AXElementFetcherDelegate> * _delegate;
    bool  _didSendFakeScreenChangeOnLastFetch;
    NSObject<OS_dispatch_queue> * _elementAccessQueue;
    NSArray * _elementCache;
    NSObject<OS_dispatch_queue> * _elementFetchQueue;
    AXElementGroupPruner * _elementGroupPruner;
    long long  _elementGroupingHeuristics;
    bool  _enabled;
    NSObject<OS_dispatch_source> * _eventCoalesceTimer;
    bool  _eventManagementEnabled;
    NSMapTable * _fetchObservers;
    bool  _fetchingElements;
    NSObject<OS_dispatch_queue> * _filterAccessQueue;
    bool  _groupingEnabled;
    AXElementGroup * _keyboardGroupCache;
    NSMutableDictionary * _postFetchFilters;
    AXElementGroup * _rootGroupCache;
    unsigned long long  _scheduledFetchEvent;
    bool  _shouldIncludeNonScannerElements;
    AXVisualElementGrouper * _visualElementGrouper;
}

@property (nonatomic) unsigned long long activeFetchEvents;
@property (nonatomic, readonly) NSArray *availableElements;
@property (nonatomic, retain) NSArray *currentApps;
@property (nonatomic, retain) NSArray *customCurrentApps;
@property (nonatomic) <AXElementFetcherDelegate> *delegate;
@property (nonatomic) bool didSendFakeScreenChangeOnLastFetch;
@property (nonatomic, retain) NSArray *elementCache;
@property (nonatomic, readonly) AXElementGroupPruner *elementGroupPruner;
@property (nonatomic) long long elementGroupingHeuristics;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isEventManagementEnabled, nonatomic) bool eventManagementEnabled;
@property (nonatomic, retain) NSMapTable *fetchObservers;
@property (getter=isFetchingElements, nonatomic) bool fetchingElements;
@property (nonatomic, readonly) AXElementGroup *firstKeyboardRow;
@property (getter=isGroupingEnabled, nonatomic) bool groupingEnabled;
@property (nonatomic, readonly) AXElementGroup *keyboardGroup;
@property (nonatomic, retain) AXElementGroup *keyboardGroupCache;
@property (nonatomic, readonly) AXElementGroup *lastKeyboardRow;
@property (nonatomic, readonly) AXElement *nativeFocusElement;
@property (nonatomic, retain) NSMutableDictionary *postFetchFilters;
@property (nonatomic, readonly) AXElementGroup *rootGroup;
@property (nonatomic, retain) AXElementGroup *rootGroupCache;
@property (nonatomic) bool shouldIncludeNonScannerElements;
@property (nonatomic, retain) AXVisualElementGrouper *visualElementGrouper;
@property (nonatomic, readonly) bool willFetchElements;

+ (id)springBoardElement;
+ (id)systemWideElement;

- (void).cxx_destruct;
- (id)_axNotificationsForManagedEvents;
- (void)_debugLogElementCache;
- (id)_debugStringForFetchEvents:(unsigned long long)arg1;
- (double)_delayForFetchEvent:(unsigned long long)arg1;
- (bool)_fetchElements:(bool)arg1;
- (bool)_fetchEventCanBeManaged:(unsigned long long)arg1;
- (void)_fetchEventOccurred:(unsigned long long)arg1;
- (bool)_fetchGroups:(bool)arg1;
- (id)_fetchUnprocessedAppGroups;
- (id)_fetchUnprocessedElements;
- (id)_filterElements:(id)arg1 withFilter:(id /* block */)arg2;
- (id)_filterGroup:(id)arg1 withFilter:(id /* block */)arg2;
- (id)_findElementsMatchingBlock:(id /* block */)arg1 internalRequest:(bool)arg2;
- (id)_findGroupableMatchingBlock:(id /* block */)arg1 inElementGroup:(id)arg2;
- (id)_findGroupableMatchingGroupable:(id)arg1 inElementGroup:(id)arg2;
- (id)_groupWithDictionary:(id)arg1 currentPid:(int)arg2;
- (id)_groupWithItems:(id)arg1 groupTraits:(unsigned long long)arg2 scanningBehaviorTraits:(unsigned long long)arg3 label:(id)arg4 identifier:(id)arg5 currentPid:(int)arg6;
- (void)_handleApplicationWasActivated:(id)arg1;
- (void)_handleMediaDidBegin:(struct __CFData { }*)arg1;
- (void)_handleNativeFocusItemDidChange:(struct __CFData { }*)arg1;
- (void)_handleScreenWillChange:(struct __CFData { }*)arg1;
- (void)_handleUpdateElementVisuals:(struct __CFData { }*)arg1;
- (void)_notifyObserversApplicationWasActivated:(id)arg1;
- (void)_notifyObserversDidFetchElementsForEvent:(unsigned long long)arg1 foundNewElements:(bool)arg2;
- (void)_notifyObserversDidScheduleFetchEvent:(unsigned long long)arg1;
- (void)_notifyObserversMediaDidBegin:(struct __CFData { }*)arg1;
- (void)_notifyObserversNativeFocusElementDidChange:(id)arg1;
- (void)_notifyObserversScreenWillChange:(struct __CFData { }*)arg1;
- (void)_notifyObserversUpdateElementVisuals:(id)arg1;
- (void)_notifyObserversWillFetchElementsForEvent:(unsigned long long)arg1;
- (long long)_priorityForFetchEvent:(unsigned long long)arg1;
- (id)_processAppGroup:(id)arg1 keyboardGroup:(id*)arg2;
- (void)_scheduleFetchEvent:(unsigned long long)arg1;
- (void)_sendFakeScreenChangeIfNecessaryForGroups:(id)arg1 orElements:(id)arg2 appsDidChange:(bool)arg3;
- (void)_setCurrentApplications:(id)arg1;
- (bool)_shouldConsiderCacheAsInvalid;
- (id)_siblingOfGroupable:(id)arg1 forDirection:(bool)arg2 didWrap:(bool*)arg3;
- (void)_tearDownEventCoalesceTimer;
- (bool)_updateCurrentApps;
- (unsigned long long)activeFetchEvents;
- (void)addFetchEvents:(unsigned long long)arg1;
- (void)addPostFetchFilter:(id /* block */)arg1 withIdentifier:(id)arg2;
- (id)availableElements;
- (void)clearCache;
- (id)closestElementToElement:(id)arg1;
- (id)closestElementToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)currentApps;
- (id)customCurrentApps;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (bool)didSendFakeScreenChangeOnLastFetch;
- (void)disableEventManagement;
- (id)elementCache;
- (id)elementGroupPruner;
- (long long)elementGroupingHeuristics;
- (void)enableEventManagement;
- (void)fetchEventOccurred:(unsigned long long)arg1;
- (id)fetchObservers;
- (id)findElementMatchingBlock:(id /* block */)arg1;
- (id)findElementMatchingElement:(id)arg1;
- (id)findElementsMatchingBlock:(id /* block */)arg1;
- (id)findGroupableMatchingBlock:(id /* block */)arg1;
- (id)findGroupableMatchingGroupable:(id)arg1;
- (id)firstElement;
- (id)firstKeyboardRow;
- (id)initWithDelegate:(id)arg1 fetchEvents:(unsigned long long)arg2 enableEventManagement:(bool)arg3 enableGrouping:(bool)arg4 shouldIncludeNonScannerElements:(bool)arg5 beginEnabled:(bool)arg6;
- (bool)isEnabled;
- (bool)isEventManagementEnabled;
- (bool)isFetchingElements;
- (bool)isGroupingEnabled;
- (id)keyboardGroup;
- (id)keyboardGroupCache;
- (id)lastElement;
- (id)lastKeyboardRow;
- (id)nativeFocusElement;
- (id)nextSiblingOfElement:(id)arg1 didWrap:(bool*)arg2;
- (id)nextSiblingOfGroupable:(id)arg1 didWrap:(bool*)arg2;
- (id)postFetchFilters;
- (id)previousSiblingOfElement:(id)arg1 didWrap:(bool*)arg2;
- (id)previousSiblingOfGroupable:(id)arg1 didWrap:(bool*)arg2;
- (void)refresh;
- (void)registerFetchObserver:(id)arg1 targetQueue:(id)arg2;
- (void)removeAllPostFetchFilters;
- (void)removeFetchEvents:(unsigned long long)arg1;
- (void)removePostFetchFilterWithIdentifier:(id)arg1;
- (id)rootGroup;
- (id)rootGroupCache;
- (void)setActiveFetchEvents:(unsigned long long)arg1;
- (void)setCurrentApps:(id)arg1;
- (void)setCustomCurrentApps:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidSendFakeScreenChangeOnLastFetch:(bool)arg1;
- (void)setElementCache:(id)arg1;
- (void)setElementGroupingHeuristics:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEventManagementEnabled:(bool)arg1;
- (void)setFetchObservers:(id)arg1;
- (void)setFetchingElements:(bool)arg1;
- (void)setGroupingEnabled:(bool)arg1;
- (void)setKeyboardGroupCache:(id)arg1;
- (void)setPostFetchFilters:(id)arg1;
- (void)setRootGroupCache:(id)arg1;
- (void)setShouldIncludeNonScannerElements:(bool)arg1;
- (void)setVisualElementGrouper:(id)arg1;
- (bool)shouldIncludeNonScannerElements;
- (void)unregisterAllFetchObservers;
- (void)unregisterFetchObserver:(id)arg1;
- (id)visualElementGrouper;
- (bool)willFetchElements;

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