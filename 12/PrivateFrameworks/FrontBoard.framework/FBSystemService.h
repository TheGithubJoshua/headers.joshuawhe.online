<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FBSystemService.h</title>
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

/PrivateFrameworks/FrontBoard.framework/FBSystemService.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard (486.52)
 */

@interface FBSystemService : NSObject {
    <FBSystemServiceDelegate> * _delegate;
    int  _pendingExit;
    FBSSerialQueue * _queue;
    FBServiceFacilityServer * _server;
}

@property (nonatomic) <FBSystemServiceDelegate> *delegate;
@property (getter=isPendingExit, readonly) bool pendingExit;
@property (nonatomic, readonly) FBSSerialQueue *queue;
@property (nonatomic, retain) FBServiceFacilityServer *server;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_activateApplication:(id)arg1 requestID:(unsigned int)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(id /* block */)arg6;
- (bool)_isTrustedRequestToOpenApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4;
- (bool)_isWhitelistedLaunchSuspendedApp:(id)arg1;
- (unsigned long long)_mapShutdownOptionsToOptions:(id)arg1;
- (void)_performExitTasksForRelaunch:(bool)arg1;
- (void)_reallyActivateApplication:(id)arg1 requestID:(unsigned int)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 isTrusted:(bool)arg6 sequenceNumber:(unsigned long long)arg7 cacheGUID:(id)arg8 ourSequenceNumber:(unsigned long long)arg9 ourCacheGUID:(id)arg10 withResult:(id /* block */)arg11;
- (bool)_requireEntitlementToOpenURL:(id)arg1 options:(id)arg2;
- (bool)_shouldPendRequestForClientSequenceNumber:(unsigned long long)arg1 clientCacheGUID:(id)arg2 ourSequenceNumber:(unsigned long long)arg3 ourCacheGUID:(id)arg4;
- (void)_shutdownWithFBSOptions:(id)arg1;
- (void)_terminateProcess:(id)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 completion:(id /* block */)arg5;
- (void)activateApplication:(id)arg1 requestID:(unsigned int)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(id /* block */)arg6;
- (void)canActivateApplication:(id)arg1 source:(id)arg2 withResult:(id /* block */)arg3;
- (void)dataReset:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)exitAndRelaunch:(bool)arg1;
- (void)exitAndRelaunch:(bool)arg1 withOptions:(unsigned long long)arg2;
- (void)handleActions:(id)arg1 source:(id)arg2 withResult:(id /* block */)arg3;
- (id)initWithQueue:(id)arg1;
- (void)isPasscodeLockedOrBlockedWithResult:(id /* block */)arg1;
- (bool)isPendingExit;
- (void)prepareDisplaysForExit;
- (void)prepareForExitAndRelaunch:(bool)arg1;
- (id)queue;
- (id)server;
- (void)setDelegate:(id)arg1;
- (void)setPendingExit:(bool)arg1;
- (void)setServer:(id)arg1;
- (void)setSystemIdleSleepDisabled:(bool)arg1 forReason:(id)arg2;
- (void)shutdownAndReboot:(bool)arg1;
- (void)shutdownWithOptions:(unsigned long long)arg1;
- (void)shutdownWithOptions:(unsigned long long)arg1 forSource:(long long)arg2;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(id /* block */)arg6;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 source:(id)arg5;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 source:(id)arg5 completion:(id /* block */)arg6;

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