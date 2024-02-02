<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMRemoteLoginHandler.h</title>
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

/Frameworks/HomeKit.framework/HMRemoteLoginHandler.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit (484.7.17.1)
 */

@interface HMRemoteLoginHandler : NSObject <HFStateDumpBuildable, HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    HMAccessory * _accessory;
    HMRemoteLoginAnisetteDataProvider * _anisetteDataProvider;
    _HMContext * _context;
    NSString * _currentSessionID;
    HMFUnfairLock * _lock;
    ACAccount * _loggedInAccount;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMRemoteLoginAnisetteDataProvider *anisetteDataProvider;
@property (nonatomic, retain) _HMContext *context;
@property (getter=isControllable, readonly) bool controllable;
@property (nonatomic, retain) NSString *currentSessionID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ACAccount *loggedInAccount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (getter=isSessionInProgress, nonatomic, readonly) bool sessionInProgress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_callAccountUpdateDelegate:(id)arg1;
- (void)_companionLoginWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_configureWithContext:(id)arg1;
- (void)_handleLoginResponse:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleQueryProxiedDeviceResponse:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleRemoteLoginAccountUpdated:(id)arg1;
- (void)_handleRemoteLoginSignoutResponse:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_proxyLoginWithAuthResults:(id)arg1 completion:(id /* block */)arg2;
- (void)_queryProxiedDevice:(id /* block */)arg1;
- (void)_signout:(id /* block */)arg1;
- (id)accessory;
- (id)anisetteDataProvider;
- (void)companionLoginWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)context;
- (id)currentSessionID;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isControllable;
- (bool)isSessionInProgress;
- (id)loggedInAccount;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)proxyLoginWithAuthResults:(id)arg1 completion:(id /* block */)arg2;
- (void)queryProxiedDevice:(id /* block */)arg1;
- (void)registerForMessages;
- (void)setContext:(id)arg1;
- (void)setCurrentSessionID:(id)arg1;
- (void)setLoggedInAccount:(id)arg1;
- (void)signout:(id /* block */)arg1;
- (id)uniqueIdentifier;
- (void)updateLoggedInAccount:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_appleMusicInAppAuthenticationContext;

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