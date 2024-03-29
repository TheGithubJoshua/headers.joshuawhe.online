<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IDSDaemonListener.h</title>
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

/PrivateFrameworks/IDS.framework/IDSDaemonListener.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS (1000)
 */

@interface IDSDaemonListener : NSObject <IDSDaemonListenerProtocol> {
    NSMutableDictionary * _accountToActiveDeviceUniqueID;
    NSMutableDictionary * _accountToDevices;
    bool  _connectionComplete;
    NSString * _deviceIdentifier;
    NSHashTable * _handlers;
    bool  _hidingDisconnect;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    bool  _postedSetupComplete;
    NSProtocolChecker * _protocol;
    bool  _setupComplete;
    bool  _setupInfoComplete;
    NSMutableDictionary * _topicToAccountDictionaries;
    NSMutableDictionary * _topicToEnabledAccounts;
}

@property (setter=_setHidingDisconnect:, nonatomic) bool _hidingDisconnect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) bool hasPostedSetupComplete;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSetupComplete;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__postSetupComplete;
- (void)_callHandlersAsyncWithBlock:(id /* block */)arg1;
- (void)_callHandlersWithBlock:(id /* block */)arg1;
- (void)_callHandlersWithBlockOnIvarQueue:(id /* block */)arg1;
- (void)_callHandlersWithBlockOnIvarQueue:(id /* block */)arg1 cleanup:(id /* block */)arg2;
- (bool)_hidingDisconnect;
- (void)_internalDidSwitchActivePairedDevice:(id)arg1 forService:(id)arg2;
- (void)_internalSwitchActivePairedDevice:(id)arg1 forAccount:(id)arg2;
- (void)_noteDisconnected;
- (void)_performSyncBlock:(id /* block */)arg1;
- (void)_removeAccountOnIvarQueue:(id)arg1;
- (void)_setHidingDisconnect:(bool)arg1;
- (id)_uniqueIDForDevice:(id)arg1;
- (void)account:(id)arg1 accountInfoChanged:(id)arg2;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 dependentDevicesUpdated:(id)arg2;
- (void)account:(id)arg1 displayNameChanged:(id)arg2;
- (void)account:(id)arg1 localDeviceAdded:(id)arg2;
- (void)account:(id)arg1 localDeviceRemoved:(id)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (void)account:(id)arg1 profileChanged:(id)arg2;
- (void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
- (void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
- (void)accountAdded:(id)arg1;
- (id)accountDictionariesForService:(id)arg1;
- (void)accountDisabled:(id)arg1 onService:(id)arg2;
- (void)accountEnabled:(id)arg1 onService:(id)arg2;
- (void)accountRemoved:(id)arg1;
- (void)addHandler:(id)arg1;
- (void)connectionComplete:(bool)arg1;
- (void)continuityDidConnectToPeer:(id)arg1 withError:(id)arg2;
- (void)continuityDidDisconnectFromPeer:(id)arg1 withError:(id)arg2;
- (void)continuityDidDiscoverPeerWithData:(id)arg1 fromPeer:(id)arg2;
- (void)continuityDidDiscoverType:(long long)arg1 withData:(id)arg2 fromPeer:(id)arg3;
- (void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidLosePeer:(id)arg1;
- (void)continuityDidStartAdvertisingOfType:(long long)arg1;
- (void)continuityDidStartScanningForType:(long long)arg1;
- (void)continuityDidStopAdvertisingOfType:(long long)arg1;
- (void)continuityDidStopScanningForType:(long long)arg1;
- (void)continuityDidUpdateState:(long long)arg1;
- (void)deactivatePairedDevices;
- (id)dependentDevicesForAccount:(id)arg1;
- (void)device:(id)arg1 nsuuidChanged:(id)arg2;
- (id)deviceIdentifier;
- (void)deviceIdentifierDidChange:(id)arg1;
- (void)didGetIdentities:(id)arg1 error:(id)arg2;
- (void)didSwitchActivePairedDevice:(id)arg1;
- (id)enabledAccountsForService:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (bool)hasPostedSetupComplete;
- (id)init;
- (bool)isSetupComplete;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)registrationFailedForAccount:(id)arg1 needsDeletion:(id)arg2;
- (void)removeHandler:(id)arg1;
- (void)setupCompleteWithInfo:(id)arg1;
- (void)switchActivePairedDevice:(id)arg1 forAccount:(id)arg2;
- (void)xpcObject:(id)arg1 objectContext:(id)arg2;

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
