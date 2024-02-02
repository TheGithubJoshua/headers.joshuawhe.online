<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDKeyTransferAgentClient.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDKeyTransferAgentClient.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDKeyTransferAgentClient : HMDKeyTransferAgent <HMFNetMonitorDelegate, HMFNetServiceBrowserDelegate, HMFNetServiceDelegate, HMFTimerDelegate> {
    HMFExponentialBackoffTimer * _atHomeRetryTimer;
    NSMutableDictionary * _bonjourKeys;
    bool  _haveCulledPlist;
    NSMutableDictionary * _idsKeys;
    HMFNetMonitor * _netMonitor;
    NSString * _pairingWithUUID;
    unsigned long long  _residentProvisioningStatus;
    bool  _resolutionInProgress;
    HMFNetServiceBrowser * _serviceBrowser;
    NSMutableSet * _targetsToProcess;
    long long  _tfaState;
}

@property (nonatomic, retain) HMFExponentialBackoffTimer *atHomeRetryTimer;
@property (nonatomic, retain) NSMutableDictionary *bonjourKeys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool haveCulledPlist;
@property (nonatomic, retain) NSMutableDictionary *idsKeys;
@property (nonatomic, retain) HMFNetMonitor *netMonitor;
@property (nonatomic, retain) NSString *pairingWithUUID;
@property (nonatomic) unsigned long long residentProvisioningStatus;
@property (nonatomic) bool resolutionInProgress;
@property (nonatomic, retain) HMFNetServiceBrowser *serviceBrowser;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableSet *targetsToProcess;
@property (nonatomic) long long tfaState;

+ (id)logCategory;
+ (void)twoFactorAuthenticationEnabledForAccount:(id)arg1 altDSID:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)__accessoryIsReachable:(id)arg1;
- (void)__accountChanged:(id)arg1;
- (void)__deviceAddedToAccount:(id)arg1;
- (void)__deviceRemovedFromAccount:(id)arg1;
- (void)__deviceUpdated:(id)arg1;
- (void)_beginBonjourResolution:(bool)arg1;
- (void)_device:(id)arg1 addedToAccount:(id)arg2;
- (void)_device:(id)arg1 removedFromAccount:(id)arg2;
- (id)_deviceWithUUID:(id)arg1;
- (void)_endPairingWithError:(id)arg1 suspendingTimer:(bool)arg2;
- (void)_handleKeyTransferAgentMessage:(id)arg1;
- (void)_handleResidentProvisioningStatusChanged:(id)arg1;
- (void)_havePairVerifiedAccessoryWithKeyUUID:(id)arg1 forDevice:(id)arg2;
- (void)_haveVerifiedTwoFactorAuthenticationWithKeyUUID:(id)arg1 forTarget:(id)arg2;
- (bool)_newDeviceSeen:(id)arg1;
- (void)_reallyBeginBonjourResolution;
- (void)_restartKeyTransfer:(id)arg1;
- (void)_saveKeyPlist;
- (void)_sendATVPrivateKey:(id)arg1 withDevice:(id)arg2 retry:(unsigned long long)arg3;
- (void)_sendIOSPublicKey:(id)arg1 withDevice:(id)arg2;
- (void)_startBrowser;
- (void)_startPairingWithKeyUUID:(id)arg1 forTarget:(id)arg2;
- (void)_stopBrowser;
- (void)_tfaVerificationCompleteForKeyUUID:(id)arg1 forTarget:(id)arg2;
- (void)_tryPairingWithAccessories:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)atHomeRetryTimer;
- (id)bonjourKeys;
- (void)dealloc;
- (bool)haveCulledPlist;
- (id)idsKeys;
- (id)initWithHomeManager:(id)arg1;
- (id)logIdentifier;
- (id)netMonitor;
- (void)netService:(id)arg1 didUpdateTXTRecord:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didAddService:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didStopBrowsingWithError:(id)arg2;
- (void)networkMonitorIsReachable:(id)arg1;
- (id)pairingWithUUID;
- (void)queryPlistDevices;
- (void)receivedBonjourTXTFrom:(id)arg1 withUUIDData:(id)arg2;
- (void)resetConfig;
- (unsigned long long)residentProvisioningStatus;
- (bool)resolutionInProgress;
- (id)serviceBrowser;
- (void)setAtHomeRetryTimer:(id)arg1;
- (void)setBonjourKeys:(id)arg1;
- (void)setHaveCulledPlist:(bool)arg1;
- (void)setIdsKeys:(id)arg1;
- (void)setNetMonitor:(id)arg1;
- (void)setPairingWithUUID:(id)arg1;
- (void)setResidentProvisioningStatus:(unsigned long long)arg1;
- (void)setResolutionInProgress:(bool)arg1;
- (void)setServiceBrowser:(id)arg1;
- (void)setTargetsToProcess:(id)arg1;
- (void)setTfaState:(long long)arg1;
- (id)targetsToProcess;
- (long long)tfaState;
- (void)timerDidFire:(id)arg1;

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