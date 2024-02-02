<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>RPLegacySession.h</title>
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

/PrivateFrameworks/Rapport.framework/RPLegacySession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport (174.26)
 */

@interface RPLegacySession : NSObject {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    bool  _mdEnabled;
    CUMobileDeviceSession * _mdSession;
    int  _mdState;
    NSMutableArray * _messageSendQueue;
    bool  _messagingReady;
    int  _pairVerifyState;
    RPDevice * _peerDevice;
    id /* block */  _promptForPINHandler;
    bool  _secureReady;
    unsigned int  _securityFlags;
    NSString * _serviceType;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) RPDevice *peerDevice;
@property (nonatomic, copy) id /* block */ promptForPINHandler;
@property (nonatomic) unsigned int securityFlags;
@property (nonatomic, copy) NSString *serviceType;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)arg1;
- (void)_cleanup;
- (void)_invalidate;
- (void)_invalidated;
- (void)_pairSetupTryPIN:(id)arg1;
- (void)_pairSetupWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)_pairVerifyWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)_run;
- (int)_runMobileDeviceStart;
- (int)_runPairVerify;
- (void)_sendMessage:(id)arg1;
- (void)_sendQueuedMessages;
- (void)_unpairWithCompletion:(id /* block */)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)pairSetupTryPIN:(id)arg1;
- (void)pairSetupWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)pairVerifyWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (id)peerDevice;
- (id /* block */)promptForPINHandler;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(id /* block */)arg3;
- (void)requestSystemInfoWithCompletion:(id /* block */)arg1;
- (unsigned int)securityFlags;
- (void)sendRequestID:(id)arg1 options:(id)arg2 request:(id)arg3 responseHandler:(id /* block */)arg4;
- (id)serviceType;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;
- (void)setSecurityFlags:(unsigned int)arg1;
- (void)setServiceType:(id)arg1;
- (void)unpairWithCompletion:(id /* block */)arg1;

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