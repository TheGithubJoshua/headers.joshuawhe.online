<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HAPAccessoryServerBrowserIP.h</title>
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

/PrivateFrameworks/CoreHAP.framework/HAPAccessoryServerBrowserIP.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP (484.7.17.1)
 */

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser <HAPWACScanControlDelegate, HMFTimerDelegate> {
    struct BonjourBrowser { } * _bonjourBrowser;
    HMFTimer * _bonjourEventTimer;
    <HAPAccessoryServerBrowserDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSMutableSet * _discoveredAccessoryServers;
    NSMutableSet * _pendingBonjourEvents;
    HAPWACScanInstance * _scanInstance;
    NSArray * _scanResults;
}

@property (nonatomic, retain) HMFTimer *bonjourEventTimer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAPAccessoryServerBrowserDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *discoveredAccessoryServers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *pendingBonjourEvents;
@property (nonatomic, retain) HAPWACScanInstance *scanInstance;
@property (nonatomic, copy) NSArray *scanResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addDevice:(id)arg1;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1;
- (void)_handleBonjourBrowserEvent:(unsigned int)arg1 eventInfo:(id)arg2;
- (void)_handleBonjourRemoveWithEventInfo:(id)arg1;
- (int)_initializeAndStartBonjourBrowser;
- (void)_invalidateAccessoryServers:(bool)arg1;
- (void)_invalidateAndRemoveAccessoryServer:(id)arg1;
- (void)_invalidateWACServers;
- (void)_matchAccessoryServerWithSetupID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_pendBonjourEvent:(id)arg1;
- (void)_pendBonjourRemoveEvent:(id)arg1;
- (void)_processPendingBonjourEvent:(id)arg1;
- (int)_purgePendingBonjourEvents:(id)arg1 withProcessing:(bool)arg2;
- (void)_removeDevice:(id)arg1;
- (void)_reprovisionDevice:(id)arg1;
- (int)_server:(id*)arg1 forBonjourDevice:(id)arg2;
- (int)_server:(id*)arg1 forWACDevice:(id)arg2;
- (void)_setReachability:(bool)arg1 forServer:(id)arg2;
- (void)_timerDidExpire:(id)arg1;
- (id)bonjourEventTimer;
- (id)delegate;
- (id)delegateQueue;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (id)discoveredAccessoryServers;
- (id)initWithQueue:(id)arg1;
- (long long)linkType;
- (void)matchAccessoryServerWithSetupID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)mergeScanResults:(id)arg1;
- (void)notifyDelegatesOfWACCompletionWithIdentifier:(id)arg1 error:(id)arg2;
- (id)pendingBonjourEvents;
- (void)processPendingBonjourRemoveEvents:(id)arg1;
- (id)scanInstance;
- (id)scanResults;
- (void)setBonjourEventTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setDiscoveredAccessoryServers:(id)arg1;
- (void)setPendingBonjourEvents:(id)arg1;
- (void)setScanInstance:(id)arg1;
- (void)setScanResults:(id)arg1;
- (void)startDiscoveringAccessoryServers;
- (void)startDiscoveringWACAccessoryServerWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startDiscoveringWACAccessoryServers;
- (void)startWACScanWithIdentifier:(id)arg1;
- (void)stopDiscoveringAccessoryServers;
- (void)stopDiscoveringWACAccessoryServers;
- (void)stopWACScan;
- (void)timerDidFire:(id)arg1;
- (void)updateWACAccessoryServerAgeOut:(long long)arg1;

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