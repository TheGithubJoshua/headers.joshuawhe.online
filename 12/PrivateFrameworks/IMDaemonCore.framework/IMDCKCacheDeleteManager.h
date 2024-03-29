<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IMDCKCacheDeleteManager.h</title>
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

/PrivateFrameworks/IMDaemonCore.framework/IMDCKCacheDeleteManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore (1000)
 */

@interface IMDCKCacheDeleteManager : NSObject {
    bool  _allowsWritingToDisk;
    bool  _alreadyCapturedErrorWithAutoBugCapture;
    bool  _deviceLowOnDiskSpace;
    bool  _isUpdatingAttachmentFileSizes;
}

@property (nonatomic) bool allowsWritingToDisk;
@property (nonatomic) bool alreadyCapturedErrorWithAutoBugCapture;
@property (getter=isDeviceLowOnDiskSpace, nonatomic) bool deviceLowOnDiskSpace;
@property bool isUpdatingAttachmentFileSizes;

+ (id)sharedInstance;

- (id)__wrapperAroundCacheDeletePurgeableCallback:(id)arg1 urgency:(int)arg2;
- (id)__wrapperAroundCacheDeletePurgingCallback:(id)arg1 urgency:(int)arg2;
- (id)_cacheDeleteRequestCacheableSpaceGuidanceWithID:(id)arg1 diskVolume:(id)arg2 urgency:(int)arg3 requestedSize:(unsigned long long)arg4;
- (void)_cacheDeleteSetUp;
- (id)_ckUtilitiesSharedInstance;
- (long long)_deleteAttachmentsAndReturnBytesDeleted:(int)arg1;
- (long long)_deleteFilesOnDiskAndUpdateTransfers:(id)arg1;
- (bool)_deviceConditionsAllowsAttachmentFileSizeUpdateForActivity:(id)arg1;
- (void)_fetchTransfersFromCloudKit:(id)arg1;
- (void)_fetchTransfersFromCloudKit:(id)arg1 indexOfTransfers:(unsigned long long)arg2 numberOfBatchesToFetch:(unsigned long long)arg3 withCompletion:(id /* block */)arg4;
- (id)_fileTransfersToDelete:(struct __CFArray { }*)arg1;
- (id)_fileTransfersToValidate:(struct __CFArray { }*)arg1;
- (id)_getIndexSetForBatch:(id)arg1 indexOfTransfers:(unsigned long long)arg2;
- (unsigned long long)_indexOfNextBatch:(id)arg1 totalTransfers:(id)arg2 indexOfTransfers:(unsigned long long)arg3;
- (void)_postTransferInfoOfDeletedTransfers:(id)arg1;
- (long long)_purgeableSpaceGivenUrgency:(int)arg1;
- (bool)_shouldFetchNextBatch:(unsigned long long)arg1 totalTransfers:(id)arg2;
- (bool)allowsWritingToDisk;
- (bool)alreadyCapturedErrorWithAutoBugCapture;
- (bool)canWriteFileOfEstimatedSize:(unsigned long long)arg1 refreshCachedValue:(bool)arg2;
- (id)createDictionaryForNotDeletingAnyAttachments:(id)arg1 urgency:(int)arg2;
- (id)deleteAttachmentsAndReturnBytesDeleted:(id)arg1 urgency:(int)arg2;
- (id)init;
- (bool)isDeviceLowOnDiskSpace;
- (bool)isUpdatingAttachmentFileSizes;
- (void)metricAttachmentsToPurge:(long long)arg1;
- (long long)purgeAttachments:(long long)arg1;
- (long long)purgeableAttachmentSize;
- (void)registerWithCacheDelete;
- (id)reportAvailableSpaceToBeDeleted:(id)arg1 urgency:(int)arg2;
- (void)setAllowsWritingToDisk:(bool)arg1;
- (void)setAlreadyCapturedErrorWithAutoBugCapture:(bool)arg1;
- (void)setDeviceLowOnDiskSpace:(bool)arg1;
- (void)setIsUpdatingAttachmentFileSizes:(bool)arg1;
- (bool)shouldDownloadAssetsOfSize:(unsigned long long)arg1 refreshCachedValue:(bool)arg2;
- (void)updateAttachmentFileSizesWithActivity:(id)arg1;

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
