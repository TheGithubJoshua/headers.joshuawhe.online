<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PBBridgeCompanionController.h</title>
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

/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeCompanionController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport (1)
 */

@interface PBBridgeCompanionController : PBBridgeIDSServiceDelegate <IDSServiceDelegate, NSURLConnectionDelegate, PBBridgeCompanionProtocol, RUILoaderDelegate> {
    NSURLConnection * _activationConnection;
    NSMutableData * _activationData;
    NSMutableURLRequest * _activationRequest;
    int  _activationRetries;
    int  _activationState;
    NSTimer * _activationTimeout;
    NSDictionary * _allHeaders;
    bool  _allowAnyHTTPSCertificate;
    bool  _awaitingCustomResponse;
    bool  _connectionFailed;
    NSString * _contentType;
    <PBBridgeConnectionDelegate> * _delegate;
    unsigned short  _granularActivationState;
    id /* block */  _initialSyncPrepCompletion;
    NSString * _internalLastSendMessageID;
    bool  _isEstablishingPairing;
    id /* block */  _languageLocaleCompletion;
    id /* block */  _lockedOnAnimationCompletion;
    bool  _nonSilentActivation;
    bool  _passcodeSet;
    id /* block */  _prepareWatchForForcedSUCompletion;
    NSString * _remoteActivationUserAgent;
    RUIStyle * _remoteUIStyle;
    NSMutableDictionary * _reportMapping;
    <RUILoaderDelegate> * _ruiDelegate;
    RUILoader * _ruiLoader;
    bool  _selectedPairedUnlock;
    bool  _sentActivationRequest;
    bool  _sentSessionRequest;
    struct __MKBAssertion { } * _unlockPairingAssertion;
}

@property (nonatomic, retain) NSURLConnection *activationConnection;
@property (nonatomic, retain) NSMutableData *activationData;
@property (nonatomic, retain) NSMutableURLRequest *activationRequest;
@property (nonatomic) int activationRetries;
@property (nonatomic) int activationState;
@property (nonatomic, retain) NSTimer *activationTimeout;
@property (nonatomic, retain) NSDictionary *allHeaders;
@property (nonatomic) bool allowAnyHTTPSCertificate;
@property (nonatomic) bool awaitingCustomResponse;
@property (nonatomic) bool connectionFailed;
@property (nonatomic, copy) NSString *contentType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBBridgeConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short granularActivationState;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ initialSyncPrepCompletion;
@property (nonatomic, retain) NSString *internalLastSendMessageID;
@property (nonatomic) bool isEstablishingPairing;
@property (nonatomic, copy) id /* block */ languageLocaleCompletion;
@property (nonatomic, copy) id /* block */ lockedOnAnimationCompletion;
@property (nonatomic) bool nonSilentActivation;
@property (nonatomic) bool passcodeSet;
@property (nonatomic, copy) id /* block */ prepareWatchForForcedSUCompletion;
@property (nonatomic, copy) NSString *remoteActivationUserAgent;
@property (nonatomic, retain) RUIStyle *remoteUIStyle;
@property (nonatomic, retain) NSMutableDictionary *reportMapping;
@property (nonatomic) <RUILoaderDelegate> *ruiDelegate;
@property (nonatomic, retain) RUILoader *ruiLoader;
@property (nonatomic) bool selectedPairedUnlock;
@property (nonatomic) bool sentActivationRequest;
@property (nonatomic) bool sentSessionRequest;
@property (readonly) Class superclass;

+ (id)displayNameWithFirstName:(id)arg1 lastName:(id)arg2;
+ (void)iCloudFirstName:(id*)arg1 lastName:(id*)arg2;
+ (void)meCardFirstName:(id*)arg1 lastName:(id*)arg2;

- (void).cxx_destruct;
- (void)_cleanup;
- (id)_connectionWithRequest:(id)arg1;
- (bool)_dumpActivationResquests;
- (bool)_sendRemoteCommandWithMessageID:(unsigned short)arg1 withArguments:(id)arg2;
- (bool)_sendResponseToMessage:(id)arg1 withResponseMessageID:(unsigned short)arg2 withArguments:(id)arg3;
- (unsigned short)_testActivationResponseType;
- (id)activationConnection;
- (id)activationData;
- (id)activationRequest;
- (int)activationRetries;
- (int)activationState;
- (id)activationTimeout;
- (void)activationTimeout:(id)arg1;
- (id)allHeaders;
- (bool)allowAnyHTTPSCertificate;
- (bool)awaitingCustomResponse;
- (void)beganWaitingForPresentationOfActivationEvent;
- (void)beganWaitingForUserResponseToActivationEvent;
- (void)beginSetupTransaction;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (bool)connectionFailed;
- (id)contentType;
- (id)customDescriptionOfMessageType:(unsigned short)arg1;
- (id)delegate;
- (void)enableSiriForGizmo:(id)arg1;
- (void)endSetupTransaction;
- (void)getCompanionLanguage:(id)arg1;
- (void)getCompanionRegion:(id)arg1;
- (void)getSiriState:(id)arg1;
- (void)gizmoActivationFailed:(id)arg1;
- (void)gizmoBecameAvailableWantsConfirmation:(id)arg1;
- (void)gizmoDidBeginActivating:(id)arg1;
- (void)gizmoDidBeginUnlockPairing:(id)arg1;
- (void)gizmoDidEndPasscodeCreation:(id)arg1;
- (void)gizmoDidEndUnlockPairing:(id)arg1;
- (void)gizmoDidFinishActivating:(id)arg1;
- (void)gizmoFailedToCreatePasscode:(id)arg1;
- (unsigned short)granularActivationState;
- (void)handleOfflineTermsResponse:(id)arg1;
- (void)handlePerformanceResults:(id)arg1;
- (void)handleRemoteActivationDetails:(id)arg1;
- (void)handleWarrantySentinelResponse:(id)arg1;
- (id)init;
- (id /* block */)initialSyncPrepCompletion;
- (id)internalLastSendMessageID;
- (void)invalidateTimeoutTimer;
- (bool)isEstablishingPairing;
- (id /* block */)languageLocaleCompletion;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (id /* block */)lockedOnAnimationCompletion;
- (bool)nonSilentActivation;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (double)offsetEventTime;
- (bool)passcodeSet;
- (id /* block */)prepareWatchForForcedSUCompletion;
- (void)queryGizmoForOfflineTerms;
- (void)queryGizmoForShowWarrantySentinelAndRestoreDeviceName:(id)arg1;
- (void)refreshTimeoutTimer;
- (id)remoteActivationUserAgent;
- (id)remoteUIStyle;
- (id)reportMapping;
- (id)reporterForConnection:(id)arg1;
- (id)ruiDelegate;
- (id)ruiLoader;
- (bool)selectedPairedUnlock;
- (void)sendDemoWatchWirelessCredentials;
- (void)sendGizmoPasscodeRestrictions;
- (void)sendProxyActivationRequest:(id)arg1;
- (void)sendProxyActivationWithCustomRequest:(id)arg1;
- (bool)sentActivationRequest;
- (bool)sentSessionRequest;
- (id)serviceIdentifier;
- (void)setActivationConnection:(id)arg1;
- (void)setActivationData:(id)arg1;
- (void)setActivationRequest:(id)arg1;
- (void)setActivationRetries:(int)arg1;
- (void)setActivationState:(int)arg1;
- (void)setActivationTimeout:(id)arg1;
- (void)setAllHeaders:(id)arg1;
- (void)setAllowAnyHTTPSCertificate:(bool)arg1;
- (void)setAwaitingCustomResponse:(bool)arg1;
- (void)setConnectionFailed:(bool)arg1;
- (void)setContentType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGranularActivationState:(unsigned short)arg1;
- (void)setInitialSyncPrepCompletion:(id /* block */)arg1;
- (void)setInternalLastSendMessageID:(id)arg1;
- (void)setIsEstablishingPairing:(bool)arg1;
- (void)setLanguageLocaleCompletion:(id /* block */)arg1;
- (void)setLockedOnAnimationCompletion:(id /* block */)arg1;
- (void)setNonSilentActivation:(bool)arg1;
- (void)setPasscodeSet:(bool)arg1;
- (void)setPrepareWatchForForcedSUCompletion:(id /* block */)arg1;
- (void)setRemoteActivationUserAgent:(id)arg1;
- (void)setRemoteUIStyle:(id)arg1;
- (void)setReportMapping:(id)arg1;
- (void)setReporter:(id)arg1 forConnection:(id)arg2;
- (void)setRuiDelegate:(id)arg1;
- (void)setRuiLoader:(id)arg1;
- (void)setSelectedPairedUnlock:(bool)arg1;
- (void)setSentActivationRequest:(bool)arg1;
- (void)setSentSessionRequest:(bool)arg1;
- (void)setupServiceMessageSelectorMappings;
- (void)startEstablishingPairing;
- (void)tellGizmoToBeginActivation;
- (void)tellGizmoToDeleteWarrantySentinel;
- (void)tellGizmoToKeepAliveForActivationEvent;
- (void)tellGizmoToPopToControllerType:(unsigned long long)arg1;
- (void)tellGizmoToPrepareForInitialSyncWithCompletion:(id /* block */)arg1;
- (void)tellGizmoToPushControllerType:(unsigned long long)arg1;
- (void)tellGizmoToRetryActivation;
- (void)tellGizmoToSeCrownOrientationRight:(bool)arg1;
- (void)tellGizmoToSetDiagnosticsEnabled:(bool)arg1;
- (void)tellGizmoToSetLocationEnabled:(bool)arg1;
- (void)tellGizmoToShowLockedOnAnimationTimeToFlash:(double)arg1 animationCompletion:(id /* block */)arg2;
- (void)tellGizmoToUpdateSyncProgressTo:(double)arg1 withState:(long long)arg2;
- (void)tellWatchLanguagesAndLocaleWithCompletion:(id /* block */)arg1;
- (void)tellWatchToPrepareForForcedSUWithCompletion:(id /* block */)arg1;
- (void)transportBecameReachable;
- (void)transportBecameUnreachable;
- (id)viewControllerForAlertPresentation;
- (void)watchDidIngestWirelessCredentials:(id)arg1;
- (void)watchDidPrepareForForcedSU:(id)arg1;
- (void)watchDidPrepareForInitialSync:(id)arg1;
- (void)watchDidRespondWithLanguageAndLocaleStatus:(id)arg1;

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
