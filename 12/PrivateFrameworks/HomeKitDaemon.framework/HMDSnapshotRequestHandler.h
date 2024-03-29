<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDSnapshotRequestHandler.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDSnapshotRequestHandler.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDSnapshotRequestHandler : HMFObject <HMDCameraStreamSnapshotHandlerDelegate, HMDSnapshotRequestHandlerProtocol, HMFLogging, HMFTimerDelegate> {
    HMDAccessory * _accessory;
    NSString * _imageCacheDirectory;
    NSString * _logString;
    HMDSnapshotFile * _mostRecentSnapshot;
    HMFTimer * _mostRecentSnapshotInvalidationTimer;
    NSMutableArray * _pendingRequests;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
    NSArray * _supportedVideoResolutions;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *imageCacheDirectory;
@property (nonatomic, readonly) NSString *logString;
@property (nonatomic, retain) HMDSnapshotFile *mostRecentSnapshot;
@property (nonatomic, retain) HMFTimer *mostRecentSnapshotInvalidationTimer;
@property (nonatomic, readonly) NSMutableArray *pendingRequests;
@property (nonatomic, readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *supportedVideoResolutions;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_addSupportedResolutionsFrom:(id)arg1 to:(id)arg2;
- (id)_getOptionsForRequestToAccessory:(id)arg1 forResolution:(id)arg2;
- (void)_getSupportedVideoResolutions:(id)arg1 streamingTierType:(unsigned long long)arg2;
- (void)_handleImageResourceData:(id)arg1 error:(id)arg2 requestedResolution:(id)arg3 snapshotDataTrasaction:(id)arg4;
- (void)_handleSupportedParameters:(id)arg1 sessionID:(id)arg2 streamingTierType:(unsigned long long)arg3;
- (id)_prepareResolutionPreference:(id)arg1;
- (id)_resolutionToRequest:(unsigned long long)arg1;
- (id)_saveSnapshotFile:(id)arg1;
- (void)_sendSnapshotRequest:(id)arg1 streamingTierType:(unsigned long long)arg2;
- (id)accessory;
- (id)imageCacheDirectory;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 imageCacheDirectory:(id)arg4 logID:(id)arg5;
- (id)logIdentifier;
- (id)logString;
- (id)mostRecentSnapshot;
- (id)mostRecentSnapshotInvalidationTimer;
- (id)pendingRequests;
- (void)requestSnapshot:(id)arg1 streamingTierType:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)setMostRecentSnapshot:(id)arg1;
- (void)setMostRecentSnapshotInvalidationTimer:(id)arg1;
- (void)setSupportedVideoResolutions:(id)arg1;
- (id)streamSnapshotHandler;
- (void)streamSnapshotHandler:(id)arg1 didGetLastSnapshot:(id)arg2;
- (void)streamSnapshotHandler:(id)arg1 didGetNewSnapshot:(id)arg2;
- (id)supportedVideoResolutions;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

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
