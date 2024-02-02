<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDCameraProfile.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDCameraProfile.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDCameraProfile : HMDAccessoryProfile <HMDCameraSettingProactiveReaderDelegate> {
    NSSet * _cameraStreamManagers;
    bool  _microphonePresent;
    HMFNetMonitor * _networkMonitor;
    HMDCameraResidentMessageHandler * _residentMessageHandler;
    NSMutableArray * _settingProactiveReaders;
    HMDCameraSnapshotManager * _snapshotManager;
    bool  _speakerPresent;
    HMDCameraStreamSnapshotHandler * _streamSnapshotHandler;
}

@property (nonatomic, readonly) NSSet *cameraStreamManagers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMicrophonePresent, nonatomic, readonly) bool microphonePresent;
@property (nonatomic, retain) HMFNetMonitor *networkMonitor;
@property (nonatomic, readonly) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (nonatomic, readonly) NSMutableArray *settingProactiveReaders;
@property (nonatomic, readonly) HMDCameraSnapshotManager *snapshotManager;
@property (getter=isSpeakerPresent, nonatomic, readonly) bool speakerPresent;
@property (nonatomic, readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (readonly) Class superclass;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_createCameraManagers:(id)arg1;
- (void)_handleNegotiateStreamRequest:(id)arg1;
- (void)_handleStreamControlRequest:(id)arg1;
- (void)_setControlSupport;
- (void)cameraSettingProactiveReaderDidCompleteRead:(id)arg1 negotiateStreamMessageWasHandled:(bool)arg2;
- (id)cameraStreamManagers;
- (void)dealloc;
- (id)description;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccessory:(id)arg1 services:(id)arg2 msgDispatcher:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isMicrophonePresent;
- (bool)isSpeakerPresent;
- (id)logIdentifier;
- (id)messageReceiverChildren;
- (void)monitorForEventsForServices:(id)arg1;
- (id)networkMonitor;
- (void)registerForMessages;
- (id)residentMessageHandler;
- (void)setNetworkMonitor:(id)arg1;
- (id)settingProactiveReaders;
- (id)snapshotManager;
- (id)streamSnapshotHandler;

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