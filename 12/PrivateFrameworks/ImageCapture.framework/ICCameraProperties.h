<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ICCameraProperties.h</title>
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

/PrivateFrameworks/ImageCapture.framework/ICCameraProperties.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture (1534.2)
 */

@interface ICCameraProperties : NSObject {
    bool  _accessRestrictedAppleDevice;
    bool  _allowsSyncingClock;
    bool  _applePTPCapable;
    NSMutableArray * _applePTPFiles;
    NSNumber * _applePTPObjectLimit;
    long long  _appleRelatedUUIDSupport;
    unsigned long long  _batteryLevel;
    bool  _batteryLevelAvailable;
    bool  _beingEjected;
    unsigned long long  _contentCatalogPercentCompleted;
    bool  _contentReceived;
    NSMutableArray * _contents;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _contentsLock;
    NSMutableArray * _convertedMediaFiles;
    NSObject<OS_dispatch_queue> * _deviceCommandQueue;
    unsigned int  _deviceFailureCount;
    NSObject<OS_dispatch_queue> * _deviceNotificationQueue;
    double  _downloadCancelTimestamp;
    bool  _ejectable;
    NSMutableIndexSet * _enumeratedObjectIndexes;
    long long  _enumerationOrder;
    unsigned long long  _estimatedNumberOfDownloadableItems;
    bool  _iCloudPhotosEnabled;
    NSMutableOrderedSet * _indexedCameraFileDates;
    NSMutableOrderedSet * _indexedCameraFileUUIDs;
    NSMutableOrderedSet * _indexedCameraFiles;
    NSMutableOrderedSet * _indexedCameraFolders;
    bool  _locked;
    NSMutableArray * _mediaFiles;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mediaFilesLock;
    unsigned long long  _mediaPresentation;
    unsigned long long  _numberOfDownloadableItems;
    NSMutableArray * _originalMediaFiles;
    double  _timeOffset;
    NSMutableArray * _toBeNotifiedAddedItems;
    NSMutableArray * _universalMediaFiles;
    NSString * _volumePath;
}

@property bool accessRestrictedAppleDevice;
@property bool allowsSyncingClock;
@property (nonatomic) bool applePTPCapable;
@property (retain) NSMutableArray *applePTPFiles;
@property (retain) NSNumber *applePTPObjectLimit;
@property long long appleRelatedUUIDSupport;
@property unsigned long long batteryLevel;
@property bool batteryLevelAvailable;
@property bool beingEjected;
@property unsigned long long contentCatalogPercentCompleted;
@property bool contentReceived;
@property (retain) NSMutableArray *contents;
@property struct os_unfair_lock_s { unsigned int x1; } contentsLock;
@property (retain) NSMutableArray *convertedMediaFiles;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *deviceCommandQueue;
@property unsigned int deviceFailureCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *deviceNotificationQueue;
@property double downloadCancelTimestamp;
@property bool ejectable;
@property (retain) NSMutableIndexSet *enumeratedObjectIndexes;
@property long long enumerationOrder;
@property unsigned long long estimatedNumberOfDownloadableItems;
@property bool iCloudPhotosEnabled;
@property (retain) NSMutableOrderedSet *indexedCameraFileDates;
@property (retain) NSMutableOrderedSet *indexedCameraFileUUIDs;
@property (retain) NSMutableOrderedSet *indexedCameraFiles;
@property (retain) NSMutableOrderedSet *indexedCameraFolders;
@property bool locked;
@property (retain) NSMutableArray *mediaFiles;
@property struct os_unfair_lock_s { unsigned int x1; } mediaFilesLock;
@property unsigned long long mediaPresentation;
@property unsigned long long numberOfDownloadableItems;
@property (retain) NSMutableArray *originalMediaFiles;
@property double timeOffset;
@property (retain) NSMutableArray *toBeNotifiedAddedItems;
@property (retain) NSMutableArray *universalMediaFiles;
@property (copy) NSString *volumePath;

- (bool)accessRestrictedAppleDevice;
- (bool)allowsSyncingClock;
- (bool)applePTPCapable;
- (id)applePTPFiles;
- (id)applePTPObjectLimit;
- (long long)appleRelatedUUIDSupport;
- (unsigned long long)batteryLevel;
- (bool)batteryLevelAvailable;
- (bool)beingEjected;
- (unsigned long long)contentCatalogPercentCompleted;
- (bool)contentReceived;
- (id)contents;
- (struct os_unfair_lock_s { unsigned int x1; })contentsLock;
- (id)convertedMediaFiles;
- (void)dealloc;
- (id)deviceCommandQueue;
- (unsigned int)deviceFailureCount;
- (id)deviceNotificationQueue;
- (double)downloadCancelTimestamp;
- (bool)ejectable;
- (id)enumeratedObjectIndexes;
- (long long)enumerationOrder;
- (unsigned long long)estimatedNumberOfDownloadableItems;
- (bool)iCloudPhotosEnabled;
- (unsigned int)incrementDeviceFailureCount;
- (id)indexedCameraFileDates;
- (id)indexedCameraFileUUIDs;
- (id)indexedCameraFiles;
- (id)indexedCameraFolders;
- (id)init;
- (void)lockContents;
- (void)lockMediaFiles;
- (bool)locked;
- (id)mediaFiles;
- (struct os_unfair_lock_s { unsigned int x1; })mediaFilesLock;
- (unsigned long long)mediaPresentation;
- (unsigned long long)numberOfDownloadableItems;
- (id)originalMediaFiles;
- (void)resetFailureCount;
- (void)setAccessRestrictedAppleDevice:(bool)arg1;
- (void)setAllowsSyncingClock:(bool)arg1;
- (void)setApplePTPCapable:(bool)arg1;
- (void)setApplePTPFiles:(id)arg1;
- (void)setApplePTPObjectLimit:(id)arg1;
- (void)setAppleRelatedUUIDSupport:(long long)arg1;
- (void)setBatteryLevel:(unsigned long long)arg1;
- (void)setBatteryLevelAvailable:(bool)arg1;
- (void)setBeingEjected:(bool)arg1;
- (void)setContentCatalogPercentCompleted:(unsigned long long)arg1;
- (void)setContentReceived:(bool)arg1;
- (void)setContents:(id)arg1;
- (void)setContentsLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setConvertedMediaFiles:(id)arg1;
- (void)setDeviceCommandQueue:(id)arg1;
- (void)setDeviceFailureCount:(unsigned int)arg1;
- (void)setDeviceNotificationQueue:(id)arg1;
- (void)setDownloadCancelTimestamp:(double)arg1;
- (void)setEjectable:(bool)arg1;
- (void)setEnumeratedObjectIndexes:(id)arg1;
- (void)setEnumerationOrder:(long long)arg1;
- (void)setEstimatedNumberOfDownloadableItems:(unsigned long long)arg1;
- (void)setICloudPhotosEnabled:(bool)arg1;
- (void)setIndexedCameraFileDates:(id)arg1;
- (void)setIndexedCameraFileUUIDs:(id)arg1;
- (void)setIndexedCameraFiles:(id)arg1;
- (void)setIndexedCameraFolders:(id)arg1;
- (void)setLocked:(bool)arg1;
- (void)setMediaFiles:(id)arg1;
- (void)setMediaFilesLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setMediaPresentation:(unsigned long long)arg1;
- (void)setNumberOfDownloadableItems:(unsigned long long)arg1;
- (void)setOriginalMediaFiles:(id)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setToBeNotifiedAddedItems:(id)arg1;
- (void)setUniversalMediaFiles:(id)arg1;
- (void)setVolumePath:(id)arg1;
- (double)timeOffset;
- (id)toBeNotifiedAddedItems;
- (id)universalMediaFiles;
- (void)unlockContents;
- (void)unlockMediaFiles;
- (id)volumePath;

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