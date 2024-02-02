<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDRelayStream.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDRelayStream.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDRelayStream : HAPRelayStream <HMDRelayManagerDelegate, HMFLogging, IDSServiceDelegateHomeKit> {
    NSData * _accessToken;
    NSString * _accessoryIdentifier;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSString * _controllerIdentifier;
    IDSService * _idsService;
    bool  _opened;
    NSMutableArray * _pendingSentMessageIdentifiers;
    HMDRelayManager * _relayManger;
    bool  _suspended;
}

@property (nonatomic, readonly, copy) NSData *accessToken;
@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly, copy) NSString *controllerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSService *idsService;
@property (getter=isOpened, nonatomic) bool opened;
@property (nonatomic, readonly) NSMutableArray *pendingSentMessageIdentifiers;
@property (nonatomic, readonly) HMDRelayManager *relayManger;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) bool suspended;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (id)accessToken;
- (id)accessoryIdentifier;
- (id)clientQueue;
- (void)close;
- (id)controllerIdentifier;
- (id)idsService;
- (id)initWithRelayManager:(id)arg1 idsService:(id)arg2 accessoryIdentifier:(id)arg3 accessToken:(id)arg4;
- (bool)isOpened;
- (bool)isSuspended;
- (id)logIdentifier;
- (unsigned long long)mtu;
- (void)open;
- (id)pendingSentMessageIdentifiers;
- (void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2;
- (id)relayManger;
- (void)resume;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingAccessoryData:(id)arg3 fromAccessoryID:(id)arg4 context:(id)arg5;
- (void)setClientQueue:(id)arg1;
- (void)setIdsService:(id)arg1;
- (void)setOpened:(bool)arg1;
- (void)setSuspended:(bool)arg1;
- (void)suspend;
- (id)writeData:(id)arg1 error:(id*)arg2;

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