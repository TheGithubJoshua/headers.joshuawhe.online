<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MBBehaviorOptions.h</title>
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

/PrivateFrameworks/MobileBackup.framework/MBBehaviorOptions.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup (1659.46)
 */

@interface MBBehaviorOptions : NSObject {
    NSMutableDictionary * _cachedPrefs;
    NSObject<OS_dispatch_queue> * _cachedPrefsQueue;
    MBConnection * _conn;
    bool  _flushLogMessages;
    bool  _warnForLateiTunesBackups;
}

@property (nonatomic) bool backupFromLocalSnapshot;
@property (nonatomic, retain) NSMutableDictionary *cachedPrefs;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cachedPrefsQueue;
@property (nonatomic, copy) NSString *cloudKitContainerName;
@property (nonatomic, retain) MBConnection *conn;
@property (nonatomic) bool flushLogMessages;
@property (nonatomic) bool keepDailySnapshots;
@property (nonatomic) long long manifestPageSize;
@property (nonatomic) long long maxBatchCount;
@property (nonatomic, readonly) long long maxBatchFetchAssetSize;
@property (nonatomic, readonly) long long maxBatchSaveAssetSize;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic) long long maxDomainsToBackup;
@property (nonatomic, copy) NSString *minimumBuildVersionForFullBackup;
@property (nonatomic) long long recordSaveAttempts;
@property (nonatomic) bool snapshotAfterForegroundRestore;
@property (nonatomic) long long sqlBatchCount;
@property (nonatomic) double sqlBatchTime;
@property (nonatomic) bool sqlTrace;
@property (nonatomic) bool useABC;
@property (nonatomic) bool useBackgroundOperationsForBackup;
@property (nonatomic, readonly) bool usePowerLog;
@property (nonatomic) bool warnForLateiTunesBackups;

+ (id)sharedOptions;

- (void).cxx_destruct;
- (double)SQLiteSpaceSavingsThresholdWithDefaultValue:(double)arg1;
- (id)_behaviorContainerOptionForKey:(id)arg1;
- (id)_behaviorOptionForKey:(id)arg1;
- (id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (bool)_getBoolOptionForKey:(id)arg1 defaultValue:(bool)arg2;
- (double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2;
- (int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2;
- (id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2;
- (void)_setPref:(id)arg1 forKey:(id)arg2;
- (void)_startListeningForNotifications;
- (bool)backupFromLocalSnapshot;
- (id)cachedPrefs;
- (id)cachedPrefsQueue;
- (id)cloudKitContainerName;
- (id)conn;
- (bool)enableSQLiteArchivingWithDefaultValue:(bool)arg1;
- (bool)fixOwnershipOnFileScanWithDefaultValue:(bool)arg1;
- (bool)flushLogMessages;
- (id)init;
- (bool)keepDailySnapshots;
- (long long)manifestPageSize;
- (long long)maxBatchCount;
- (int)maxBatchDeleteConcurrentModifyRecordsOperationsWithDefaultValue:(int)arg1;
- (long long)maxBatchFetchAssetSize;
- (int)maxBatchFetchConcurrentFetchRecordsOperationsWithDefaultValue:(int)arg1;
- (long long)maxBatchSaveAssetSize;
- (int)maxBatchSaveConcurrentModifyRecordsOperationsWithDefaultValue:(int)arg1;
- (long long)maxBatchSize;
- (long long)maxDomainsToBackup;
- (id)minimumBuildVersionForFullBackup;
- (long long)recordSaveAttempts;
- (void)setBackupFromLocalSnapshot:(bool)arg1;
- (void)setCachedPrefs:(id)arg1;
- (void)setCachedPrefsQueue:(id)arg1;
- (void)setCloudKitContainerName:(id)arg1;
- (void)setConn:(id)arg1;
- (void)setFlushLogMessages:(bool)arg1;
- (void)setKeepDailySnapshots:(bool)arg1;
- (void)setManifestPageSize:(long long)arg1;
- (void)setMaxBatchCount:(long long)arg1;
- (void)setMaxBatchSize:(long long)arg1;
- (void)setMaxDomainsToBackup:(long long)arg1;
- (void)setMinimumBuildVersionForFullBackup:(id)arg1;
- (void)setRecordSaveAttempts:(long long)arg1;
- (void)setSQLTrace:(bool)arg1;
- (void)setSnapshotAfterForegroundRestore:(bool)arg1;
- (void)setSqlBatchCount:(long long)arg1;
- (void)setSqlBatchTime:(double)arg1;
- (void)setUseABC:(bool)arg1;
- (void)setUseBackgroundOperationsForBackup:(bool)arg1;
- (void)setUsePowerLog:(bool)arg1;
- (void)setWarnForLateiTunesBackups:(bool)arg1;
- (void)setmaxBatchFetchAssetSize:(long long)arg1;
- (void)setmaxBatchSaveAssetSize:(long long)arg1;
- (bool)snapshotAfterForegroundRestore;
- (long long)sqlBatchCount;
- (double)sqlBatchTime;
- (bool)sqlTrace;
- (bool)useABC;
- (bool)useBackgroundOperationsForBackup;
- (bool)usePowerLog;
- (int)validateFileEncodingWithDefaultValue:(int)arg1;
- (bool)validateSignatureOnRestoreWithDefaultValue:(bool)arg1;
- (bool)warnForLateiTunesBackups;

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
