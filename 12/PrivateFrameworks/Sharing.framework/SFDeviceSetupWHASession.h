<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SFDeviceSetupWHASession.h</title>
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

/PrivateFrameworks/Sharing.framework/SFDeviceSetupWHASession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing (1288.66)
 */

@interface SFDeviceSetupWHASession : NSObject {
    bool  _activateCalled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    int  _finishState;
    bool  _homeKitDoFullSetup;
    SFDeviceOperationHomeKitSetup * _homeKitSetup;
    int  _homeKitState;
    int  _infoExchangeState;
    bool  _invalidateCalled;
    int  _pairSetupState;
    int  _pairVerifyState;
    SFDevice * _peerDevice;
    UIViewController * _presentingViewController;
    id /* block */  _progressHandler;
    id /* block */  _promptForHomeHandler;
    id /* block */  _promptForPINHandler;
    id /* block */  _promptForRoomHandler;
    bool  _sessionSecured;
    SFSession * _sfSession;
    int  _sfSessionState;
    bool  _trAuthenticationEnabled;
    int  _trAuthenticationState;
    TROperationQueue * _trOperationQueue;
    NSMutableArray * _trOperations;
    TRSession * _trSession;
    int  _trSessionState;
    bool  _trSetupConfigurationEnabled;
    int  _trSetupConfigurationState;
    NSSet * _trUnauthServices;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, copy) id /* block */ promptForHomeHandler;
@property (nonatomic, copy) id /* block */ promptForPINHandler;
@property (nonatomic, copy) id /* block */ promptForRoomHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_reportError:(id)arg1;
- (void)_run;
- (int)_runFinish;
- (int)_runHomeKitSetup;
- (int)_runInfoExchange;
- (void)_runInfoExchangeRequest;
- (void)_runInfoExchangeResponse:(id)arg1 error:(id)arg2;
- (int)_runPairSetup;
- (int)_runPairVerify;
- (int)_runSFSessionStart;
- (int)_runTRAuthentication;
- (int)_runTRSessionStart;
- (int)_runTRSetupConfiguration;
- (bool)_verifyiCloudMatch:(unsigned long long)arg1 error:(id*)arg2;
- (void)activate;
- (void)dealloc;
- (id)dispatchQueue;
- (void)homeKitSelectHome:(id)arg1;
- (void)homeKitSelectRoom:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)pairSetupTryPIN:(id)arg1;
- (id)peerDevice;
- (id)presentingViewController;
- (id /* block */)progressHandler;
- (id /* block */)promptForHomeHandler;
- (id /* block */)promptForPINHandler;
- (id /* block */)promptForRoomHandler;
- (void)setDispatchQueue:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setPromptForHomeHandler:(id /* block */)arg1;
- (void)setPromptForPINHandler:(id /* block */)arg1;
- (void)setPromptForRoomHandler:(id /* block */)arg1;

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
