<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDHomeReprovisionHandler.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDHomeReprovisionHandler.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDHomeReprovisionHandler : HMFObject <HMDHomeMessageReceiver, HMFLogging, HMFTimerDelegate> {
    <HMDAccessoryBrowserProtocol> * _accessoryBrowser;
    HMFTimer * _disableReprovisionBrowsingTimer;
    HMDHome * _home;
    HMFMessageDispatcher * _msgDispatcher;
    NSMutableDictionary * _pendingReprovisionRequests;
    bool  _reprovisionBrowsingAllowed;
    bool  _reprovisionBrowsingPending;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) <HMDAccessoryBrowserProtocol> *accessoryBrowser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMFTimer *disableReprovisionBrowsingTimer;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (nonatomic, retain) NSMutableDictionary *pendingReprovisionRequests;
@property (getter=isReprovisionBrowsingAllowed, nonatomic) bool reprovisionBrowsingAllowed;
@property (getter=isReprovisionBrowsingPending, nonatomic) bool reprovisionBrowsingPending;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (bool)hasMessageReceiverChildren;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleDisableReprovisionBrowsingTimerFired;
- (void)_handleReprovisionAccessory:(id)arg1;
- (void)_handleRequestSearchForAccessoriesNeedingReprovisioning:(id)arg1;
- (void)_registerForMessages;
- (id)accessoryBrowser;
- (void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;
- (void)dealloc;
- (id)disableReprovisionBrowsingTimer;
- (void)handleFoundAccessoryNeedingReprovisioning:(id)arg1 error:(id)arg2;
- (void)handleReprovionedAccessory:(id)arg1 identifier:(id)arg2 error:(id)arg3;
- (id)home;
- (id)init;
- (bool)isReprovisionBrowsingAllowed;
- (bool)isReprovisionBrowsingPending;
- (id)logIdentifier;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)pendingReprovisionRequests;
- (void)setAccessoryBrowser:(id)arg1;
- (void)setDisableReprovisionBrowsingTimer:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setPendingReprovisionRequests:(id)arg1;
- (void)setReprovisionBrowsingAllowed:(bool)arg1;
- (void)setReprovisionBrowsingPending:(bool)arg1;
- (void)setWorkQueue:(id)arg1;
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
