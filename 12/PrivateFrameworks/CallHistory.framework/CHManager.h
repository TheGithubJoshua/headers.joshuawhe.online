<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CHManager.h</title>
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

/PrivateFrameworks/CallHistory.framework/CHManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory (870.6)
 */

@interface CHManager : CHSynchronizedLoggable {
    bool  _cacheIsDirty;
    NSString * _coalescingStrategy;
    bool  _generateSyncTransactions;
    NSArray * _limitingCallKinds;
    unsigned int  _limitingCallTypes;
    NSDate * _limitingEndDate;
    NSDate * _limitingStartDate;
    long long  _numberOfUnseenMissedCalls;
    NSPredicate * _postFetchingPredicate;
    bool  _reCoalesce;
    NSArray * _recentCalls;
    bool  _showsFaceTimeAudioCalls;
    bool  _showsFaceTimeVideoCalls;
    bool  _showsTelephonyCalls;
    <SyncManagerProtocol> * _syncManager;
    NSArray * _uncoalescedRecentCalls;
    NSArray * _uncoalescedUnFilteredRecentCalls;
    NSNumber * _unreadCallCount;
}

@property bool cacheIsDirty;
@property (nonatomic, copy) NSString *coalescingStrategy;
@property bool generateSyncTransactions;
@property (nonatomic, copy) NSArray *limitingCallKinds;
@property (nonatomic) unsigned int limitingCallTypes;
@property (nonatomic, copy) NSDate *limitingEndDate;
@property (nonatomic, copy) NSDate *limitingStartDate;
@property long long numberOfUnseenMissedCalls;
@property (nonatomic, copy) NSPredicate *postFetchingPredicate;
@property bool reCoalesce;
@property (nonatomic, retain) NSArray *recentCalls;
@property (nonatomic) bool showsFaceTimeAudioCalls;
@property (nonatomic) bool showsFaceTimeVideoCalls;
@property (nonatomic) bool showsTelephonyCalls;
@property (retain) <SyncManagerProtocol> *syncManager;
@property (getter=uncoalescedRecentCallsSync, nonatomic, retain) NSArray *uncoalescedRecentCalls;
@property (retain) NSArray *uncoalescedUnFilteredRecentCalls;
@property (retain) NSNumber *unreadCallCount;

+ (unsigned int)CHCallStatusForCallWithDuration:(double)arg1 isOriginated:(bool)arg2 isAnswered:(bool)arg3;
+ (id)limitingCallKindsForCallType:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)addMultipleCallsToCallHistory:(id)arg1;
- (void)addToCallHistory:(id)arg1;
- (void)addressBookChanged:(id)arg1;
- (id)applyPredicate:(id)arg1 toCalls:(id)arg2;
- (bool)cacheIsDirty;
- (double)callTimersGetIncoming;
- (double)callTimersGetLifetime;
- (double)callTimersGetOutgoing;
- (void)callTimersReset;
- (void)clearDatabase;
- (id)coalesceCalls:(id)arg1;
- (id)coalescingStrategy;
- (unsigned long long)countCallsWithPredicate:(id)arg1;
- (unsigned long long)countCallsWithPredicateSync:(id)arg1;
- (void)currentLocaleChanged:(id)arg1;
- (void)databaseChanged:(id)arg1;
- (void)dealloc;
- (void)deleteAllCalls;
- (void)deleteAllCallsSync;
- (void)deleteCall:(id)arg1;
- (void)deleteCallAtIndex:(unsigned long long)arg1;
- (void)deleteCallsWithPredicate:(id)arg1;
- (void)deleteTheseCalls:(id)arg1;
- (void)deleteTheseCallsSync:(id)arg1;
- (id)fetchRecentCallsSyncWithCoalescing:(bool)arg1;
- (unsigned long long)fetchUnreadCallsCount;
- (void)flush;
- (bool)generateSyncTransactions;
- (id)getLimitsDictionary;
- (id)init;
- (id)initWithFetchingLimitsDictionary:(id)arg1 andCoalescingStrategy:(id)arg2 andPostFetchingPredicate:(id)arg3 withQueue:(id)arg4;
- (id)latestRecentCallMatchingPredicate:(id)arg1;
- (id)latestTelephonyCallMatchingNormalizedRemoteParticipantHandleValues:(id)arg1;
- (id)limitingCallKinds;
- (unsigned int)limitingCallTypes;
- (id)limitingEndDate;
- (id)limitingStartDate;
- (void)markAllCallsAsReadWithPredicate:(id)arg1;
- (long long)numberOfUnseenMissedCalls;
- (id)postFetchingPredicate;
- (bool)reCoalesce;
- (id)recentCalls;
- (id)recentCallsWithPredicate:(id)arg1;
- (void)registerForNotifications;
- (void)setCacheIsDirty:(bool)arg1;
- (void)setCoalescingStrategy:(id)arg1;
- (void)setDefaultInitValues;
- (void)setGenerateSyncTransactions:(bool)arg1;
- (void)setInitialLimitingCallKinds:(id)arg1;
- (void)setLimitingCallKinds:(id)arg1;
- (void)setLimitingCallKindsSync:(id)arg1;
- (void)setLimitingCallTypes:(unsigned int)arg1;
- (void)setLimitingCallTypesSync:(unsigned int)arg1;
- (void)setLimitingEndDate:(id)arg1;
- (void)setLimitingStartDate:(id)arg1;
- (void)setNumberOfUnseenMissedCalls:(long long)arg1;
- (void)setOutgoingLocalParticipantUUID:(id)arg1 forRecentCallsMatchingPredicate:(id)arg2;
- (void)setPostFetchingPredicate:(id)arg1;
- (void)setReCoalesce:(bool)arg1;
- (void)setRecentCalls:(id)arg1;
- (void)setShowsFaceTimeAudioCalls:(bool)arg1;
- (void)setShowsFaceTimeVideoCalls:(bool)arg1;
- (void)setShowsTelephonyCalls:(bool)arg1;
- (void)setSyncManager:(id)arg1;
- (void)setUncoalescedRecentCalls:(id)arg1;
- (void)setUncoalescedUnFilteredRecentCalls:(id)arg1;
- (void)setUnreadCallCount:(id)arg1;
- (bool)showsFaceTimeAudioCalls;
- (bool)showsFaceTimeVideoCalls;
- (bool)showsTelephonyCalls;
- (id)syncManager;
- (id)unCoalesceCall:(id)arg1;
- (id)uncoalescedRecentCallsSync;
- (id)uncoalescedUnFilteredRecentCalls;
- (id)unreadCallCount;
- (void)updateBytesOfDataUsedFor:(id)arg1 with:(id)arg2;

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
