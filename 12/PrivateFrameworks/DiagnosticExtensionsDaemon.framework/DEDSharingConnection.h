<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DEDSharingConnection.h</title>
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

/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DEDSharingConnection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon (1)
 */

@interface DEDSharingConnection : NSObject {
    NSObject<OS_dispatch_semaphore> * _bluetoothSessionSemaphore;
    DEDController * _controller;
    NSMutableDictionary * _deviceSessions;
    id /* block */  _deviceStatusCallback;
    NSMutableDictionary * _discoveredDevices;
    DEDSharingInbound * _inbound;
    bool  _listenForClients;
    NSObject<OS_os_log> * _log;
    SFDeviceDiscovery * _pingDiscovery;
    SFService * _pingService;
    SFDeviceDiscovery * _pongDiscovery;
    NSMutableDictionary * _pongingDevices;
    NSObject<OS_dispatch_queue> * _run_queue;
    bool  _started;
    NSMutableSet * _visiblePingUUIDs;
    SFService * _workerService;
}

@property (retain) NSObject<OS_dispatch_semaphore> *bluetoothSessionSemaphore;
@property DEDController *controller;
@property (retain) NSMutableDictionary *deviceSessions;
@property (copy) id /* block */ deviceStatusCallback;
@property (retain) NSMutableDictionary *discoveredDevices;
@property (retain) DEDSharingInbound *inbound;
@property bool listenForClients;
@property (retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) SFDeviceDiscovery *pingDiscovery;
@property (nonatomic, retain) SFService *pingService;
@property (nonatomic, retain) SFDeviceDiscovery *pongDiscovery;
@property (retain) NSMutableDictionary *pongingDevices;
@property (retain) NSObject<OS_dispatch_queue> *run_queue;
@property bool started;
@property (retain) NSMutableSet *visiblePingUUIDs;
@property (nonatomic, retain) SFService *workerService;

+ (void)checkIn;

- (void).cxx_destruct;
- (void)_configureService:(id)arg1 withLabel:(id)arg2 needsSetup:(bool)arg3 actionType:(unsigned char)arg4 completion:(id /* block */)arg5;
- (id)_existingSharingSessionForDevice:(id)arg1;
- (void)_handleIncomingPingingDevice:(id)arg1;
- (void)_handleIncomingPongingDevice:(id)arg1;
- (void)_saveDevice:(id)arg1;
- (void)_verifyPairingForSession:(id)arg1 holdForPIN:(bool)arg2 completion:(id /* block */)arg3;
- (void)addIncomingSFSession:(id)arg1 forIdentifier:(id)arg2;
- (id)blockingSharingSessionForDevice:(id)arg1;
- (id)bluetoothSessionSemaphore;
- (void)checkReadinessForSFDevice:(id)arg1 session:(id)arg2;
- (void)configureListenForClients:(bool)arg1;
- (void)configureSharingInbound:(id)arg1;
- (id)controller;
- (void)createSharingSessionForSFDevice:(id)arg1 holdForPIN:(bool)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)deviceSessions;
- (id /* block */)deviceStatusCallback;
- (void)didStartBugSessionWithInfo:(id)arg1 forCaller:(id)arg2;
- (void)discoverDevicesWithCompletion:(id /* block */)arg1;
- (id)discoveredDevices;
- (void)getSystemInfoForDevice:(id)arg1;
- (id)inbound;
- (id)initWithController:(id)arg1;
- (bool)listenForClients;
- (id)log;
- (id)pingDiscovery;
- (id)pingService;
- (id)pongDiscovery;
- (id)pongingDevices;
- (id)run_queue;
- (void)setBluetoothSessionSemaphore:(id)arg1;
- (void)setController:(id)arg1;
- (void)setDeviceDiscoveryCallback:(id /* block */)arg1;
- (void)setDeviceSessions:(id)arg1;
- (void)setDeviceStatusCallback:(id /* block */)arg1;
- (void)setDiscoveredDevices:(id)arg1;
- (void)setInbound:(id)arg1;
- (void)setListenForClients:(bool)arg1;
- (void)setLog:(id)arg1;
- (void)setPingDiscovery:(id)arg1;
- (void)setPingService:(id)arg1;
- (void)setPongDiscovery:(id)arg1;
- (void)setPongingDevices:(id)arg1;
- (void)setRun_queue:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setVisiblePingUUIDs:(id)arg1;
- (void)setWorkerService:(id)arg1;
- (id)sharingOutboundForBugSessionIdentifier:(id)arg1 device:(id)arg2;
- (void)start;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;
- (void)startPairSetupForDevice:(id)arg1;
- (void)startPingDiscovery;
- (void)startPingServiceWithCompletion:(id /* block */)arg1;
- (void)startPongAdvertisement;
- (void)startPongDiscovery;
- (void)startWorkerService;
- (bool)started;
- (void)stopDiscovery;
- (void)stopPingDiscovery;
- (void)stopPingService;
- (void)stopPongAdvertisement;
- (void)stopPongDiscovery;
- (void)stopSession:(id)arg1;
- (void)tryPIN:(id)arg1 forDevice:(id)arg2;
- (void)trySessionWithFoundDevice:(id)arg1;
- (void)updateControllerWithDevice:(id)arg1 andStatus:(long long)arg2;
- (void)updatePongAdvertisement;
- (id)visiblePingUUIDs;
- (id)workerService;

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
