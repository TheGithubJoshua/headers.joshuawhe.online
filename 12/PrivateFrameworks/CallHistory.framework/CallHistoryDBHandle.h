<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CallHistoryDBHandle.h</title>
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

/PrivateFrameworks/CallHistory.framework/CallHistoryDBHandle.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory (870.6)
 */

@interface CallHistoryDBHandle : CHLogger {
    id  _dataStoreAddedRef;
    id  _moveCallRecordsFromTempStoreRef;
    id  _observerCallDBPropRef;
    id  _observerCallRecordRef;
    CallDBManager * callDBManager;
    NSManagedObjectContext * fCallDBPropertiesContext;
    NSManagedObjectContext * fCallRecordContext;
    NSString * objectId;
}

@property (nonatomic, readonly) CallDBManager *callDBManager;
@property (nonatomic, readonly) NSString *objectId;

+ (id)createForClient;
+ (id)createForServer;
+ (id)createWithDBManager:(id)arg1;

- (void).cxx_destruct;
- (id)callDBManager;
- (id)callDBProperties;
- (id)callRecordContext;
- (id)createCallRecord;
- (void)dealloc;
- (void)deleteAll;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (id)deleteWithPredicate:(id)arg1;
- (id)fetchAll;
- (id)fetchAllNoLimit;
- (id)fetchAllObjectsWithUniqueId:(id)arg1;
- (id)fetchManagedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2;
- (id)fetchWithPredicate:(id)arg1 forEntity:(id)arg2 withLimit:(bool)arg3;
- (id)getArrayForCallTypeMask:(unsigned int)arg1;
- (void)handleCallDBPropContextDidSaveNotification:(id)arg1;
- (void)handleCallRecordContextDidSaveNotification:(id)arg1;
- (void)handlePersistentStoreChangedNotification:(id)arg1;
- (bool)handleSaveForCallRecordContext:(id)arg1 error:(id*)arg2;
- (id)initWithDBManager:(id)arg1;
- (void)mergeCallDBPropChangesFromRemoteAppSave;
- (void)mergeCallRecordChangesFromRemoteAppSave;
- (bool)moveCallRecordsFromDatabaseAtURL:(id)arg1;
- (id)objectId;
- (bool)performSaveWithBackgroundTaskAssertion:(id)arg1 error:(id*)arg2;
- (void)postTimersChangedNotification;
- (void)registerForNotifications:(id)arg1;
- (bool)resetAllTimers;
- (void)resetTimers;
- (bool)save:(id*)arg1;
- (bool)saveTimers:(id /* block */)arg1;
- (id)timerIncoming;
- (id)timerLastReset;
- (id)timerLifetime;
- (id)timerOutgoing;
- (void)unRegisterForNotifications;
- (void)updateCallDBProperties;

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
