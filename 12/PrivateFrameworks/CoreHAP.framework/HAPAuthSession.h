<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HAPAuthSession.h</title>
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

/PrivateFrameworks/CoreHAP.framework/HAPAuthSession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP (484.7.17.1)
 */

@interface HAPAuthSession : HMFObject <HMFLogging> {
    unsigned long long  _currentState;
    unsigned char  _currentTID;
    <HAPAuthSessionDelegate> * _delegate;
    NSNumber * _instanceId;
    NSUUID * _provisionUUID;
    long long  _role;
    NSData * _token1;
    NSData * _token2;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) unsigned long long currentState;
@property (nonatomic) unsigned char currentTID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HAPAuthSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *instanceId;
@property (nonatomic, retain) NSUUID *provisionUUID;
@property (nonatomic, readonly) long long role;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *token1;
@property (nonatomic, retain) NSData *token2;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleAuthExchangeData:(id)arg1 withHeader:(bool)arg2;
- (void)_handleTokenResponse:(id)arg1 withHeader:(bool)arg2;
- (void)_handleTokenUpdateResponse:(id)arg1 withHeader:(bool)arg2;
- (void)_reportAuthFailure;
- (void)_resetSession;
- (void)_sendTokenRequest;
- (void)_sendTokenUpdateRequest:(id)arg1;
- (void)continueAuthAfterValidation:(bool)arg1;
- (unsigned long long)currentState;
- (unsigned char)currentTID;
- (id)delegate;
- (bool)getToken:(id*)arg1 uuid:(id*)arg2;
- (void)handleAuthExchangeData:(id)arg1 withHeader:(bool)arg2;
- (id)initWithRole:(long long)arg1 instanceId:(id)arg2 delegate:(id)arg3;
- (id)instanceId;
- (id)provisionUUID;
- (void)resetSession;
- (long long)role;
- (void)sendTokenUpdateRequest:(id)arg1;
- (void)setCurrentState:(unsigned long long)arg1;
- (void)setCurrentTID:(unsigned char)arg1;
- (void)setInstanceId:(id)arg1;
- (void)setProvisionUUID:(id)arg1;
- (void)setToken1:(id)arg1;
- (void)setToken2:(id)arg1;
- (id)token1;
- (id)token2;
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
