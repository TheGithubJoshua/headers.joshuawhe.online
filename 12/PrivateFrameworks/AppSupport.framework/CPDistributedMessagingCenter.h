<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CPDistributedMessagingCenter.h</title>
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

/PrivateFrameworks/AppSupport.framework/CPDistributedMessagingCenter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport (29)
 */

@interface CPDistributedMessagingCenter : NSObject {
    NSOperationQueue * _asyncQueue;
    NSMutableDictionary * _callouts;
    NSString * _centerName;
    CPDistributedMessagingCallout * _currentCallout;
    bool  _delayedReply;
    NSLock * _lock;
    unsigned int  _parkedServerPort;
    bool  _portPassing;
    unsigned int  _replyPort;
    bool  _requireLookupByPID;
    NSString * _requiredEntitlement;
    unsigned int  _sendPort;
    struct __CFRunLoopSource { } * _serverSource;
    int  _targetPID;
}

+ (id)_centerNamed:(id)arg1 requireLookupByPID:(bool)arg2;
+ (id)centerNamed:(id)arg1;
+ (id)pidRestrictedCenterNamed:(id)arg1;

- (void)_dispatchMessageNamed:(id)arg1 userInfo:(id)arg2 reply:(id*)arg3 auditToken:(struct { unsigned int x1[8]; }*)arg4;
- (id)_initAnonymousServer;
- (id)_initClientWithPort:(unsigned int)arg1;
- (id)_initWithServerName:(id)arg1;
- (id)_initWithServerName:(id)arg1 requireLookupByPID:(bool)arg2;
- (bool)_isTaskEntitled:(struct { unsigned int x1[8]; }*)arg1;
- (id)_requiredEntitlement;
- (bool)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id*)arg3 error:(id*)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void*)arg7;
- (bool)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id*)arg3 error:(id*)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void*)arg7 nonBlocking:(bool)arg8;
- (bool)_sendMessage:(id)arg1 userInfoData:(id)arg2 oolKey:(id)arg3 oolData:(id)arg4 makeServer:(bool)arg5 receiveReply:(id*)arg6 nonBlocking:(bool)arg7 error:(id*)arg8;
- (unsigned int)_sendPort;
- (void)_sendReplyMessage:(id)arg1 portPassing:(bool)arg2 onMachPort:(unsigned int)arg3;
- (unsigned int)_serverPort;
- (void)_setSendPort:(unsigned int)arg1;
- (void)_setupInvalidationSource;
- (void)dealloc;
- (id)delayReply;
- (bool)doesServerExist;
- (id)name;
- (void)registerForMessageName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)runServerOnCurrentThread;
- (void)runServerOnCurrentThreadProtectedByEntitlement:(id)arg1;
- (void)sendDelayedReply:(id)arg1 dictionary:(id)arg2;
- (id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2;
- (id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 error:(id*)arg3;
- (void)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 toTarget:(id)arg3 selector:(SEL)arg4 context:(void*)arg5;
- (bool)sendMessageName:(id)arg1 userInfo:(id)arg2;
- (bool)sendNonBlockingMessageName:(id)arg1 userInfo:(id)arg2;
- (void)setTargetPID:(int)arg1;
- (void)stopServer;
- (void)unregisterForMessageName:(id)arg1;

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
