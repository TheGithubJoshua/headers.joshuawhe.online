<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SFBLEClient.h</title>
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

/PrivateFrameworks/Sharing.framework/SFBLEClient.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing (1288.66)
 */

@interface SFBLEClient : NSObject <WPAWDLDelegate, WPNearbyDelegate, WPPairingDelegate> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    WPAWDL * _wpAirDrop;
    NSMutableSet * _wpAirDropDelegates;
    WPNearby * _wpNearby;
    NSMutableSet * _wpNearbyDelegates;
    WPPairing * _wpPairing;
    NSMutableSet * _wpPairingDelegates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)addAirDropDelegate:(id)arg1;
- (id)addNearbyDelegate:(id)arg1;
- (id)addPairingDelegate:(id)arg1;
- (void)awdl:(id)arg1 failedToStartAdvertisingWithError:(id)arg2;
- (void)awdl:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)awdl:(id)arg1 foundDevice:(id)arg2 rssi:(id)arg3;
- (void)awdlAdvertisingPending:(id)arg1;
- (void)awdlDidUpdateState:(id)arg1;
- (void)awdlStartedAdvertising:(id)arg1;
- (void)awdlStartedScanning:(id)arg1;
- (id)init;
- (void)nearby:(id)arg1 didConnectToPeer:(id)arg2 transport:(long long)arg3 error:(id)arg4;
- (void)nearby:(id)arg1 didDeferAdvertisingType:(long long)arg2;
- (void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;
- (void)nearby:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4 peerInfo:(id)arg5;
- (void)nearby:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3;
- (void)nearby:(id)arg1 didFailToStartScanningForType:(long long)arg2 WithError:(id)arg3;
- (void)nearby:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3;
- (void)nearby:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)nearby:(id)arg1 didSendData:(id)arg2 toPeer:(id)arg3 error:(id)arg4;
- (void)nearby:(id)arg1 didStartAdvertisingType:(long long)arg2;
- (void)nearby:(id)arg1 didStartScanningForType:(long long)arg2;
- (void)nearbyDidChangeBluetoothBandwidthState:(id)arg1;
- (void)nearbyDidUpdateState:(id)arg1;
- (void)pairing:(id)arg1 failedToStartScanningWithError:(id)arg2;
- (void)pairing:(id)arg1 foundDevice:(id)arg2 payload:(id)arg3 rssi:(id)arg4 peerInfo:(id)arg5;
- (void)pairingDidUpdateState:(id)arg1;
- (void)pairingStartedScanning:(id)arg1;
- (void)pairingStoppedScanning:(id)arg1;
- (void)removeAirDropDelegate:(id)arg1;
- (void)removeNearbyDelegate:(id)arg1;
- (void)removePairingDelegate:(id)arg1;

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
