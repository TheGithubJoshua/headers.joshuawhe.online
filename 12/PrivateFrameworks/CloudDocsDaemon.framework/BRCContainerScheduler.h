<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BRCContainerScheduler.h</title>
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

/PrivateFrameworks/CloudDocsDaemon.framework/BRCContainerScheduler.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon (575.504)
 */

@interface BRCContainerScheduler : NSObject <APSConnectionDelegate, BRCAppLibraryDelegate, BRCClientZoneDelegate> {
    BRCContainerMetadataSyncPersistedState * _containerMetadataPersistedState;
    struct _BRCOperation { Class x1; id x2; int x3; int x4; id x5; unsigned char x6[16]; } * _containerMetadataSyncOperation;
    BRCDeadlineSource * _containerMetadataSyncSource;
    unsigned int  _containerMetadataSyncState;
    NSString * _environmentName;
    NSObject<OS_dispatch_group> * _initialSyncDownGroup;
    bool  _isInSyncBubble;
    NSDate * _lastPeriodicSyncDate;
    BRCMigrateZonePCSOperation * _migrateZonePCSOperation;
    BRCDeadlineSource * _migrateZonePCSSource;
    NSMutableArray * _nextZoneHealthSyncDownBarriers;
    struct _BRCOperation { Class x1; id x2; int x3; int x4; id x5; unsigned char x6[16]; } * _periodicSyncOperation;
    APSConnection * _pushConnection;
    NSObject<OS_dispatch_queue> * _pushQueue;
    BRCFairSource * _pushSource;
    NSData * _pushToken;
    BRCAccountSession * _session;
    unsigned int  _sharedDBSyncState;
    struct _BRCOperation { Class x1; id x2; int x3; int x4; id x5; unsigned char x6[16]; } * _sharedDatabaseSyncOperation;
    BRCDeadlineSource * _sharedDatabaseSyncSource;
    NSObject<OS_dispatch_group> * _syncGroup;
    BRCDeadlineScheduler * _syncScheduler;
    BRCSyncBudgetThrottle * _syncUpBudget;
    BRCZoneHealthSyncPersistedState * _zoneHealthPersistedState;
    struct _BRCOperation { Class x1; id x2; int x3; int x4; id x5; unsigned char x6[16]; } * _zoneHealthSyncOperation;
    BRCDeadlineSource * _zoneHealthSyncSource;
    unsigned int  _zoneHealthSyncState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *initialSyncDownGroup;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *syncGroup;
@property (nonatomic, readonly) BRCDeadlineScheduler *syncScheduler;
@property (nonatomic, readonly) BRCSyncBudgetThrottle *syncUpBudget;
@property (nonatomic, readonly) BRCZoneHealthSyncPersistedState *zoneHealthSyncPersistedState;

- (void).cxx_destruct;
- (id)_newSyncDeadlineSourceWithName:(id)arg1;
- (void)_scheduleCrossZoneMovePCSPrep;
- (void)_scheduleUpdatePushTopicsRegistration;
- (void)_syncScheduleForContainersMetadata;
- (void)_syncScheduleForSharedDatabase;
- (void)_syncScheduleForZoneHealth;
- (void)_unscheduleClientZone:(id)arg1;
- (void)_updatePushTopicsRegistration;
- (void)close;
- (void)closeContainers;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)didChangeSyncStatusForContainerMetadataForContainer:(id)arg1;
- (void)didChangeSyncStatusForZoneHealthForContainer:(id)arg1;
- (void)didInitialSyncDownForClientZone:(id)arg1;
- (void)dumpToContext:(id)arg1 includeAllItems:(bool)arg2 db:(id)arg3;
- (void)finishedZoneHealthSyncDownWithRequestID:(unsigned long long)arg1 error:(id)arg2;
- (id)initWithAccountSession:(id)arg1;
- (id)initialSyncDownGroup;
- (void)notifyAfterNextZoneHealthSyncDown:(id /* block */)arg1;
- (void)receivedUpdatedZoneHealthServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2;
- (void)redoZonePCSPreperation;
- (void)refreshPushRegistrationAfterAppsListChanged;
- (void)resume;
- (void)schedulePeriodicSyncIfNecessaryInGroup:(id)arg1;
- (void)scheduleSyncDownForContainerMetadataWithGroup:(id)arg1;
- (void)scheduleSyncDownForSharedDatabaseImmediately:(bool)arg1;
- (void)scheduleSyncDownForZoneHealthWithGroup:(id)arg1;
- (id)session;
- (void)setup;
- (void)syncContextDidBecomeBackground:(id)arg1;
- (void)syncContextDidBecomeForeground:(id)arg1;
- (id)syncGroup;
- (id)syncScheduler;
- (id)syncUpBudget;
- (void)willInitialSyncDownForClientZone:(id)arg1;
- (id)zoneHealthSyncPersistedState;

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