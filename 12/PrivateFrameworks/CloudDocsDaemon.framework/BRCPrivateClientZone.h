<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BRCPrivateClientZone.h</title>
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

/PrivateFrameworks/CloudDocsDaemon.framework/BRCPrivateClientZone.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon (575.504)
 */

@interface BRCPrivateClientZone : BRCClientZone {
    NSMutableSet * _appLibraries;
    BRCAppLibrary * _defaultAppLibrary;
    NSMutableArray * _faultsLiveBarriers;
    BRCProblemReport * _problemReport;
    NSMutableArray * _syncBarriers;
    BRCServerZoneHealthState * _zoneHealthState;
}

@property (nonatomic, readonly) NSSet *appLibraries;
@property (nonatomic, readonly) NSSet *appLibraryIDs;
@property (nonatomic, readonly) BRCAppLibrary *defaultAppLibrary;
@property (nonatomic, readonly) bool hasDefaultAppLibrary;
@property (nonatomic, readonly) bool isDocumentScopePublic;
@property (nonatomic, readonly) bool isPrivateZone;
@property (nonatomic, readonly) bool isSharedZone;
@property (nonatomic, readonly) BRCPrivateServerZone *privateServerZone;
@property (nonatomic, readonly) bool zoneHealthNeedsSyncUp;
@property (nonatomic, readonly) BRCServerZoneHealthState *zoneHealthState;

- (void).cxx_destruct;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg2 reason:(id)arg3 result:(bool*)arg4;
- (void)addAppLibrary:(id)arg1;
- (id)appLibraries;
- (id)appLibraryIDs;
- (id)asPrivateClientZone;
- (void)clearProblemReport;
- (id)defaultAppLibrary;
- (bool)dumpActivityToContext:(id)arg1 includeExpensiveActivity:(bool)arg2 error:(id*)arg3;
- (bool)dumpTablesToContext:(id)arg1 includeAllItems:(bool)arg2 error:(id*)arg3;
- (struct BRCDirectoryItem { Class x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; unsigned int x11; id x12; unsigned long long x13; id x14; bool x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; }*)fetchZoneRootItemInDB:(id)arg1;
- (bool)hasDefaultAppLibrary;
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 plist:(id)arg4 session:(id)arg5 initialCreation:(bool)arg6;
- (bool)isDocumentScopePublic;
- (bool)isItemIDMarkedChained:(id)arg1;
- (bool)isPrivateZone;
- (void)notifyClient:(id)arg1 whenFaultingIsDone:(id /* block */)arg2;
- (bool)parentIDHasLiveUnchainedChildren:(id)arg1;
- (void)performBlock:(id /* block */)arg1 whenSyncDownCompletesLookingForAliasWithBookmarkData:(id)arg2;
- (id)plist;
- (id)prepareProblemReportForSyncWithRequestID:(long long)arg1;
- (id)privateServerZone;
- (bool)recomputeAppSyncBlockState;
- (void)removeAppLibrary:(id)arg1;
- (bool)removeSyncDownForAliasData:(id)arg1;
- (struct PQLResultSet { Class x1; }*)reparentedItemsNeedingChaining;
- (void)reportProblemWithType:(int)arg1 recordName:(id)arg2;
- (id)resolveClashOfAlias:(id)arg1 atPath:(id)arg2 withAlias:(id)arg3 atPath:(id)arg4;
- (void)resume;
- (id)rootItemID;
- (id)serverAliasByUnsaltedBookmarkData:(id)arg1;
- (void)setServerZone:(id)arg1;
- (void)signalFaultingWatchersWithError:(id)arg1;
- (void)syncedDownZoneHealthRequestID:(long long)arg1;
- (void)syncedDownZoneHealthState:(id)arg1;
- (struct PQLResultSet { Class x1; }*)unchainedItemInfoInServerTruthEnumeratorParentedTo:(id)arg1;
- (void)updateWithPlist:(id)arg1;
- (bool)validateItemsLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (bool)validateStructureLoggingToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1 db:(id)arg2;
- (bool)zoneHealthNeedsSyncUp;
- (id)zoneHealthState;
- (void)zoneHealthWasReset;

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