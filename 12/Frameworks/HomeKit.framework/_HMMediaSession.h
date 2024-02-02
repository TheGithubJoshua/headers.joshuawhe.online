<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_HMMediaSession.h</title>
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

/Frameworks/HomeKit.framework/_HMMediaSession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit (484.7.17.1)
 */

@interface _HMMediaSession : NSObject <HMFMessageReceiver, HMObjectMerge> {
    _HMContext * _context;
    <_HMMediaSessionDelegate> * _delegate;
    HMFUnfairLock * _lock;
    NSUUID * _messageTargetUUID;
    long long  _playbackState;
    NSString * _routeUID;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_HMMediaSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, retain) NSUUID *messageTargetUUID;
@property (readonly) long long playbackState;
@property (nonatomic, readonly) NSString *routeUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (void)_handleSessionPlaybackUpdated:(id)arg1;
- (void)_handleSessionRouteUIDUpdated:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_notifyDelegateOfUpdatedPlaybackState:(long long)arg1;
- (void)_notifyDelegateOfUpdatedRouteUID:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_updatePlaybackState:(id)arg1 completion:(id /* block */)arg2;
- (id)context;
- (id)delegate;
- (unsigned long long)hash;
- (id)initWithUUID:(id)arg1 routeUID:(id)arg2 playbackState:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (long long)playbackState;
- (void)refreshPlaybackStateWithCompletionHandler:(id /* block */)arg1;
- (id)routeUID;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMessageTargetUUID:(id)arg1;
- (void)setPlaybackState:(long long)arg1;
- (void)setPlaybackState:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setRouteUID:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uniqueIdentifier;
- (void)updatePlaybackState:(id)arg1;
- (id)uuid;

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