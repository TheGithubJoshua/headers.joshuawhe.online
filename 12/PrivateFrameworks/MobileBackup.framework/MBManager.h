<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MBManager.h</title>
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

/PrivateFrameworks/MobileBackup.framework/MBManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup (1659.46)
 */

@interface MBManager : NSObject {
    id  _delegate;
}

@property (nonatomic) NSObject<MBManagerDelegate> *delegate;

- (id)_init;
- (bool)addFileToBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 fromPath:(id)arg5 error:(id*)arg6;
- (bool)allowiTunesBackup;
- (bool)archiveLogsTo:(id)arg1 error:(id*)arg2;
- (id)backgroundRestoreInfo;
- (id)backupDeviceUDID;
- (id)backupDeviceUUID;
- (id)backupList;
- (id)backupState;
- (void)cancel;
- (bool)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id*)arg2;
- (bool)cancelDeviceTransferWithTaskType:(long long)arg1 error:(id*)arg2;
- (void)cancelRestore;
- (void)clearRestoreSession;
- (bool)countCameraRollQuota;
- (bool)countCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2;
- (unsigned long long)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2;
- (id)dateOfLastBackup;
- (id)dateOfNextScheduledBackup;
- (id)delegate;
- (bool)deleteBackupUDID:(id)arg1 error:(id*)arg2;
- (bool)deleteItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 error:(id*)arg5;
- (bool)discountCameraRollQuota;
- (bool)discountCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2;
- (id)domainInfoForName:(id)arg1;
- (id)domainInfoList;
- (bool)extractItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 toPath:(id)arg5 error:(id*)arg6;
- (void)fetchiCloudRestoreIsCompleteWithCompletion:(id /* block */)arg1;
- (id)filesForSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3;
- (void)finishRestore;
- (id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 activeAppleID:(id*)arg3 error:(id*)arg4;
- (id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3;
- (id)getAppleIDsMapForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 activeAppleID:(id*)arg3 error:(id*)arg4;
- (id)getBackupListWithError:(id*)arg1;
- (id)getBackupListWithFiltering:(bool)arg1 error:(id*)arg2;
- (id)getBuddyDataStashForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3;
- (bool)inheritSnapshot:(id)arg1 fromDevice:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 eventQueue:(id)arg2;
- (void)insufficientFreeSpaceToRestore;
- (bool)isBackupEnabled;
- (bool)isBackupEnabledForDomainName:(id)arg1;
- (bool)isLocalBackupPasswordSetWithError:(id*)arg1;
- (id)journalForBackupUUID:(id)arg1 error:(id*)arg2;
- (id)journalLastModifiedForBackupUUID:(id)arg1 error:(id*)arg2;
- (bool)mergeSnapshots:(id)arg1 backupUUID:(id)arg2 error:(id*)arg3;
- (unsigned long long)nextBackupSize;
- (id)nextBackupSizeInfo;
- (bool)pinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3;
- (bool)prepareForBackgroundRestoreWithError:(id*)arg1;
- (void)prioritizeRestoreFileWithPath:(id)arg1;
- (void)rebootDevice;
- (bool)recordRestoreFailure:(id)arg1 error:(id*)arg2;
- (bool)removeDomainName:(id)arg1 error:(id*)arg2;
- (id)reservedBackupSizeListWithError:(id*)arg1;
- (bool)restoreApplicationWithBundleID:(id)arg1 failed:(bool)arg2 context:(id)arg3 error:(id*)arg4;
- (bool)restoreApplicationWithBundleID:(id)arg1 failed:(bool)arg2 error:(id*)arg3;
- (bool)restoreApplicationWithBundleID:(id)arg1 failed:(bool)arg2 withQOS:(long long)arg3 context:(id)arg4 error:(id*)arg5;
- (bool)restoreBookWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (bool)restoreBookWithPath:(id)arg1 error:(id*)arg2;
- (bool)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long*)arg2;
- (id)restoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)restoreFileExistsWithPath:(id)arg1;
- (void)restoreFileWithPath:(id)arg1;
- (bool)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (bool)restoreFileWithPath:(id)arg1 error:(id*)arg2;
- (id)restoreFilesForDomain:(id)arg1 error:(id*)arg2;
- (id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(bool)arg3 error:(id*)arg4;
- (id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(bool)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 error:(id*)arg5;
- (bool)restoreFilesWithPaths:(id)arg1 context:(id)arg2 error:(id*)arg3;
- (bool)restoreFilesWithPaths:(id)arg1 error:(id*)arg2;
- (id)restoreInfo;
- (id)restoreState;
- (bool)restoreSupportsBatching;
- (bool)resumeDeviceTransferWithTaskType:(long long)arg1 error:(id*)arg2;
- (bool)saveKeybagsForBackupUDID:(id)arg1 withError:(id*)arg2;
- (void)setAllowiTunesBackup:(bool)arg1;
- (void)setBackupEnabled:(bool)arg1;
- (void)setBackupEnabled:(bool)arg1 forDomainName:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setRestoreQualityOfService:(long long)arg1;
- (void)setRestoreQualityOfService:(long long)arg1 context:(id)arg2;
- (void)setRestoreSessionWithBackupUDID:(id)arg1 snapshotUUID:(id)arg2;
- (void)setSupportsiTunes:(bool)arg1;
- (bool)setupBackupWithPasscode:(id)arg1 error:(id*)arg2;
- (void)startBackup;
- (bool)startBackupWithError:(id*)arg1;
- (void)startDataTransferWithPreflightInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)startDeviceTransferWithTaskType:(long long)arg1 sessionInfo:(id)arg2 error:(id*)arg3;
- (void)startKeychainDataImportWithKeychainInfo:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startKeychainDataTransferWithCompletionHandler:(id /* block */)arg1;
- (void)startKeychainTransferWithCompletionHandler:(id /* block */)arg1;
- (void)startPreflightWithCompletionHandler:(id /* block */)arg1;
- (void)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2;
- (bool)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3;
- (bool)startScanForBundleIDs:(id)arg1 error:(id*)arg2;
- (bool)startScanWithError:(id*)arg1;
- (void)syncBackupEnabled;
- (bool)unpinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3;
- (bool)unsetLocalBackupPasswordWithError:(id*)arg1;

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
