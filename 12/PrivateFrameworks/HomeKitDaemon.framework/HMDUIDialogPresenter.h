<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDUIDialogPresenter.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDUIDialogPresenter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDUIDialogPresenter : HMFObject {
    id  _currentContext;
    struct __CFUserNotification { } * _currentNotification;
    NSObject<OS_dispatch_semaphore> * _notificationSem;
    bool  _peerDeviceAcceptedSelection;
    NSMutableArray * _pendingContexts;
    bool  _selectedByPeerDevice;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) id currentContext;
@property (nonatomic) struct __CFUserNotification { }*currentNotification;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *notificationSem;
@property (nonatomic) bool peerDeviceAcceptedSelection;
@property (nonatomic, retain) NSMutableArray *pendingContexts;
@property (nonatomic) bool selectedByPeerDevice;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedUIDialogPresenter;

- (void).cxx_destruct;
- (bool)_addCurrentNotification:(struct __CFUserNotification { }*)arg1 withContext:(id)arg2;
- (bool)_addToPendingContext:(id)arg1;
- (void)_displayInternalErrorWithContext:(id)arg1 message:(id)arg2;
- (void)_displayKeychainSyncForHome:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_displayUpgradeNeededWithContext:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_displayiCloudSwitchWithContext:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)_isPendingContext:(id)arg1;
- (bool)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 targetResponse:(unsigned long long)arg3 textField:(id*)arg4 withContext:(id)arg5;
- (bool)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 targetResponse:(unsigned long long)arg3 textField:(id*)arg4 withContext:(id)arg5 selectedByPeerDevice:(bool*)arg6 timeout:(double)arg7;
- (bool)_presentDialogWithInfo:(id)arg1 options:(unsigned long long)arg2 textField:(id*)arg3 withContext:(id)arg4;
- (bool)_removeCurrentNotification:(struct __CFUserNotification { }*)arg1 currentSelection:(bool)arg2 selectedByPeerDevice:(bool*)arg3 andContext:(id)arg4;
- (void)_requestPairingPasswordForAccessory:(id)arg1 home:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_requestUserPermissionForLegacyWACAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_requestUserPermissionWithAccessoryPPIDInfo:(id)arg1 name:(id)arg2 category:(id)arg3 withContext:(id)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_showUserDialogForIncompatibleAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 withContext:(id)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)confirmReportAccessory:(id)arg1 context:(id)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)currentContext;
- (struct __CFUserNotification { }*)currentNotification;
- (void)dealloc;
- (void)dismissPendingDialogDueToPeerDeviceSelection:(bool)arg1 context:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)dismissPendingDialogWithContext:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)displayExecutionErrorOfTrigger:(id)arg1 partialSuccess:(bool)arg2 context:(id)arg3 completionQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)displayInternalErrorWithContext:(id)arg1 message:(id)arg2;
- (void)displayKeychainSyncForHome:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)displayUpgradeNeededWithContext:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)displayiCloudSwitchWithContext:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)notificationSem;
- (bool)peerDeviceAcceptedSelection;
- (id)pendingContexts;
- (void)requestPairingPasswordForAccessory:(id)arg1 home:(id)arg2 withContext:(id)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)requestUserPermissionForLegacyWACAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)requestUserPermissionWithAccessoryPPIDInfo:(id)arg1 name:(id)arg2 category:(id)arg3 withContext:(id)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
- (bool)selectedByPeerDevice;
- (void)setCurrentContext:(id)arg1;
- (void)setCurrentNotification:(struct __CFUserNotification { }*)arg1;
- (void)setNotificationSem:(id)arg1;
- (void)setPeerDeviceAcceptedSelection:(bool)arg1;
- (void)setPendingContexts:(id)arg1;
- (void)setSelectedByPeerDevice:(bool)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)showUserDialogForIncompatibleAccessory:(id)arg1 name:(id)arg2 category:(id)arg3 withContext:(id)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
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
