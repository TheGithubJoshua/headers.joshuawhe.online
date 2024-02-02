<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HAPAccessoryServerIP.h</title>
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

/PrivateFrameworks/CoreHAP.framework/HAPAccessoryServerIP.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP (484.7.17.1)
 */

@interface HAPAccessoryServerIP : HAPAccessoryServer <HAPAuthSessionDelegate, HAPHTTPClientDebugDelegate, HAPHTTPClientDelegate, HMFNetMonitorDelegate, HMFTimerDelegate> {
    HAPAuthSession * _authSession;
    bool  _authenticated;
    HAPAccessoryProtocolInfo * _authenticatedProtocolInfo;
    HMFMACAddress * _bluetoothAddress;
    NSDictionary * _bonjourDeviceInfo;
    HMFTimer * _bonjourEventTimer;
    HAPAccessoryServerBrowserIP * _browser;
    NSOperationQueue * _clientOperationQueue;
    bool  _continuingLegacyWACpairing;
    NSString * _controllerUsername;
    bool  _econnresetRetryInProgress;
    bool  _establishingSecureConnection;
    unsigned long long  _featureFlags;
    bool  _hasStartedPairing;
    bool  _hasTunnelService;
    HAPHTTPClient * _httpClient;
    NSArray * _ipServices;
    NSString * _model;
    id /* block */  _netServiceResolveCompletionBlock;
    HMFNetMonitor * _networkMonitor;
    HMFBlockOperation * _pairOperation;
    HAPWACClient * _pairUsingWAC;
    id /* block */  _pairVerifyCompletionBlock;
    struct PairingSessionPrivate { } * _pairingSession;
    bool  _postSoftAuthWacStarted;
    bool  _preSoftAuthWacStarted;
    HAPAccessory * _primaryAccessoryForServer;
    NSMutableArray * _queuedOperations;
    NSMutableSet * _resolvers;
    NSString * _sourceVersion;
    unsigned long long  _statusFlags;
    NSData * _token;
    bool  _tokenRequestPending;
    bool  _tokenValidationPending;
    bool  _wacComplete;
    NSDictionary * _wacDeviceInfo;
    bool  _wacLegacy;
    bool  _wacSoftToken;
    bool  _wacStarted;
}

@property (nonatomic, readonly) HAPAuthSession *authSession;
@property (nonatomic) bool authenticated;
@property (nonatomic, retain) HAPAccessoryProtocolInfo *authenticatedProtocolInfo;
@property (nonatomic, copy) HMFMACAddress *bluetoothAddress;
@property (nonatomic, retain) NSDictionary *bonjourDeviceInfo;
@property (nonatomic, retain) HMFTimer *bonjourEventTimer;
@property (nonatomic) HAPAccessoryServerBrowserIP *browser;
@property (nonatomic, readonly) NSOperationQueue *clientOperationQueue;
@property (getter=isContinuingLegacyWACpairing, nonatomic) bool continuingLegacyWACpairing;
@property (nonatomic, retain) NSString *controllerUsername;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool econnresetRetryInProgress;
@property bool establishingSecureConnection;
@property (nonatomic) bool hasStartedPairing;
@property (nonatomic) bool hasTunnelService;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPHTTPClient *httpClient;
@property (nonatomic, retain) NSArray *ipServices;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) id /* block */ netServiceResolveCompletionBlock;
@property (nonatomic, readonly) HMFNetMonitor *networkMonitor;
@property (nonatomic, retain) HMFBlockOperation *pairOperation;
@property (nonatomic, retain) HAPWACClient *pairUsingWAC;
@property (nonatomic, copy) id /* block */ pairVerifyCompletionBlock;
@property (getter=isPostSoftAuthWacStarted, nonatomic) bool postSoftAuthWacStarted;
@property (getter=isPreSoftAuthWacStarted, nonatomic) bool preSoftAuthWacStarted;
@property (nonatomic, retain) HAPAccessory *primaryAccessoryForServer;
@property (nonatomic, retain) NSMutableArray *queuedOperations;
@property (nonatomic, retain) NSMutableSet *resolvers;
@property (nonatomic, copy) NSString *sourceVersion;
@property (nonatomic) unsigned long long statusFlags;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *token;
@property (getter=isTokenRequestPending, nonatomic) bool tokenRequestPending;
@property (getter=isTokenValidationPending, nonatomic) bool tokenValidationPending;
@property (getter=isWacAccessory, nonatomic, readonly) bool wacAccessory;
@property (getter=isWacComplete, nonatomic) bool wacComplete;
@property (nonatomic, readonly, copy) NSDictionary *wacDeviceInfo;
@property (getter=isWacLegacy, nonatomic) bool wacLegacy;
@property (getter=isWacSoftToken, nonatomic) bool wacSoftToken;
@property (getter=isWacStarted, nonatomic) bool wacStarted;

+ (id)sharedPairOperationQueue;

- (void).cxx_destruct;
- (void)__registerForInternalCharacteristicNotifications;
- (int)_continuePairingAfterAuthPrompt;
- (void)_continuePairingAfterConfirmingSecureWAC;
- (void)_continuePairingAfterConfirmingSoftAuthWAC;
- (void)_continuePairingAfterMFiCertValidation;
- (void)_continuePairingAfterWAC:(id)arg1;
- (void)_continuePairingUsingWAC;
- (int)_continuePairingWithSetupCode:(id)arg1;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)_enableEvents:(bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (int)_ensureHTTPClientSetUp;
- (int)_ensurePairingSessionIsInitializedWithType:(unsigned int)arg1;
- (void)_error:(id)arg1 forReadCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_error:(id)arg1 forWriteCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_establishSecureConnectionAndFetchAttributeDatabase;
- (void)_establishSecureSession;
- (void)_establishSecureSessionAndRemovePairing:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)_getAttributeDatabase;
- (void)_handleEventResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 requestedEventState:(bool)arg6 completion:(id /* block */)arg7 queue:(id)arg8;
- (void)_handleHTTPClientErrors;
- (void)_handleListPairingsResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 httpError:(id)arg4 completionQueue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_handleMFiCertValidation;
- (int)_handlePairSetupCompletionWithData:(id)arg1;
- (int)_handlePairVerifyCompletionWithData:(id)arg1;
- (void)_handlePairingsResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 httpError:(id)arg4 removeRequest:(bool)arg5 completionQueue:(id)arg6 completionBlock:(id /* block */)arg7;
- (void)_handlePrepareWriteResponseObject:(id)arg1 type:(unsigned long long)arg2 prepareIdentifier:(id)arg3 httpStatus:(int)arg4 error:(id)arg5 requestTuples:(id)arg6 timeout:(double)arg7 queue:(id)arg8 completion:(id /* block */)arg9;
- (void)_handleReadECONNRESETError:(id)arg1 readCharacteristics:(id)arg2 responses:(id)arg3 timeout:(double)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_handleReadResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 queue:(id)arg6 completion:(id /* block */)arg7;
- (void)_handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2;
- (void)_handleWriteECONNResetError:(id)arg1 writeRequests:(id)arg2 responses:(id)arg3 timeout:(double)arg4 queue:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)_handleWriteResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 requestTuples:(id)arg5 queue:(id)arg6 completion:(id /* block */)arg7;
- (bool)_hasBonjourDeviceInfo;
- (void)_insertReadCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_insertWriteCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_invalidateWAC;
- (void)_invokePairVerifyCompletionBlock:(id)arg1;
- (void)_isAccessoryPublicKeyPresent:(bool*)arg1 registeredWithHomeKit:(bool*)arg2;
- (bool)_isSessionEstablished;
- (void)_listPairingsWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)_mergeExistingAccessory:(id)arg1 withNewAccessory:(id)arg2;
- (bool)_mergeExistingService:(id)arg1 withNewService:(id)arg2;
- (void)_notifyDelegatesOfAddAccessoryFailure;
- (void)_notifyDelegatesPairingStopped:(id)arg1;
- (void)_pairSetupContinueWAC;
- (void)_pairSetupStartWAC;
- (int)_pairSetupStartWithConsentRequired:(bool)arg1;
- (int)_pairSetupTryPassword:(id)arg1;
- (void)_pairVerifyContinueWAC;
- (int)_pairVerifyStart;
- (void)_pairVerifyStartWAC;
- (bool)_parseAndValidateTXTRecord;
- (void)_parseAttributeDatabase:(id)arg1 transaction:(id)arg2;
- (bool)_parseTXTRecordDictionary:(id)arg1;
- (void)_performExecuteWriteValues:(id)arg1 prepareIdentifier:(id)arg2 timeout:(double)arg3 queue:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)_performTimedWriteValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_performWriteValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)_processEvent:(id)arg1 matchedCharacteristic:(id*)arg2;
- (void)_processQueuedOperationsWithError:(id)arg1;
- (void)_queueAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(bool)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)_queueEnableEvents:(bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (void)_queueListPairingWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_queueReadCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_queueWriteCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (id /* block */)_queuedReadOperationBlock:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id /* block */)_queuedWriteOperationBlock:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_readCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)_requestResource:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_reset;
- (void)_sendRemovePairingWithData:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)_startAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(bool)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)_tearDownSession;
- (void)_tearDownWAC;
- (bool)_updateAccessories:(id)arg1;
- (void)_updateProtocolVersionFromPrimaryAccessory:(id)arg1;
- (void)_updateWithBonjourDeviceInfo:(id)arg1;
- (bool)_validateProtocolInfo:(id)arg1;
- (void)_writeCharacteristicValues:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)authSession;
- (void)authSession:(id)arg1 authComplete:(id)arg2;
- (void)authSession:(id)arg1 authenticateUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 confirmUUID:(id)arg2 token:(id)arg3;
- (void)authSession:(id)arg1 sendAuthExchangeData:(id)arg2;
- (void)authSession:(id)arg1 validateUUID:(id)arg2 token:(id)arg3;
- (void)authenticateAccessory;
- (bool)authenticated;
- (id)authenticatedProtocolInfo;
- (id)bluetoothAddress;
- (id)bonjourDeviceInfo;
- (id)bonjourEventTimer;
- (id)browser;
- (id)clientOperationQueue;
- (void)continueAuthAfterValidation:(bool)arg1;
- (void)continuePairingAfterAuthPrompt;
- (void)continuePairingUsingWAC;
- (id)controllerUsername;
- (void)createKeysForDataStreamWithKeySalt:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)description;
- (void)discoverAccessories;
- (bool)econnresetRetryInProgress;
- (void)enableEvents:(bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (bool)establishingSecureConnection;
- (void)getAccessoryInfo:(id /* block */)arg1;
- (void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2;
- (bool)hasBonjourDeviceInfo;
- (bool)hasStartedPairing;
- (bool)hasTunnelService;
- (id)httpClient;
- (void)httpClient:(id)arg1 didReceiveEvent:(id)arg2;
- (void)httpClient:(id)arg1 didReceiveHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (void)httpClient:(id)arg1 willSendHTTPMessageWithHeaders:(id)arg2 body:(id)arg3;
- (void)httpClientDidCloseConnectionDueToServer:(id)arg1;
- (void)identifyWithCompletion:(id /* block */)arg1;
- (id)initCommon:(id)arg1 browser:(id)arg2;
- (id)initWithBonjourDeviceInfo:(id)arg1 keyStore:(id)arg2 browser:(id)arg3;
- (id)initWithWACDeviceDictionary:(id)arg1 keyStore:(id)arg2 browser:(id)arg3;
- (void)invalidateWithCompletionHandler:(id /* block */)arg1;
- (void)invokePairVerifyCompletionBlock:(id)arg1;
- (id)ipServices;
- (bool)isContinuingLegacyWACpairing;
- (bool)isPostSoftAuthWacStarted;
- (bool)isPreSoftAuthWacStarted;
- (bool)isSessionEstablised;
- (bool)isTokenRequestPending;
- (bool)isTokenValidationPending;
- (bool)isWacAccessory;
- (bool)isWacComplete;
- (bool)isWacLegacy;
- (bool)isWacSoftToken;
- (bool)isWacStarted;
- (long long)linkType;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)model;
- (id /* block */)netServiceResolveCompletionBlock;
- (id)networkMonitor;
- (void)networkMonitorIsReachable:(id)arg1;
- (void)networkMonitorIsUnreachable:(id)arg1;
- (id)pairOperation;
- (void)pairSetupStartSoftAuthWAC;
- (id)pairUsingWAC;
- (id /* block */)pairVerifyCompletionBlock;
- (id)primaryAccessory;
- (id)primaryAccessoryForServer;
- (void)provisionToken:(id)arg1;
- (id)queuedOperations;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)reconfirm;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)requestResource:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)resolveLocalHostnameWithCompletionHandler:(id /* block */)arg1;
- (id)resolvers;
- (id)services;
- (void)setAuthenticated:(bool)arg1;
- (void)setAuthenticatedProtocolInfo:(id)arg1;
- (void)setBluetoothAddress:(id)arg1;
- (void)setBonjourDeviceInfo:(id)arg1;
- (void)setBonjourEventTimer:(id)arg1;
- (void)setBrowser:(id)arg1;
- (void)setContinuingLegacyWACpairing:(bool)arg1;
- (void)setControllerUsername:(id)arg1;
- (void)setEconnresetRetryInProgress:(bool)arg1;
- (void)setEstablishingSecureConnection:(bool)arg1;
- (void)setHasStartedPairing:(bool)arg1;
- (void)setHasTunnelService:(bool)arg1;
- (void)setHttpClient:(id)arg1;
- (void)setIpServices:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setNetServiceResolveCompletionBlock:(id /* block */)arg1;
- (void)setPairOperation:(id)arg1;
- (void)setPairUsingWAC:(id)arg1;
- (void)setPairVerifyCompletionBlock:(id /* block */)arg1;
- (void)setPostSoftAuthWacStarted:(bool)arg1;
- (void)setPreSoftAuthWacStarted:(bool)arg1;
- (void)setPrimaryAccessoryForServer:(id)arg1;
- (void)setQueuedOperations:(id)arg1;
- (void)setResolvers:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (void)setStatusFlags:(unsigned long long)arg1;
- (void)setToken:(id)arg1;
- (void)setTokenRequestPending:(bool)arg1;
- (void)setTokenValidationPending:(bool)arg1;
- (void)setWacComplete:(bool)arg1;
- (void)setWacLegacy:(bool)arg1;
- (void)setWacSoftToken:(bool)arg1;
- (void)setWacStarted:(bool)arg1;
- (id)sourceVersion;
- (void)startPairingWithConsentRequired:(bool)arg1;
- (void)startReprovisioning;
- (unsigned long long)statusFlags;
- (bool)stopPairingWithError:(id*)arg1;
- (void)tearDownSessionOnAuthCompletion;
- (void)timerDidFire:(id)arg1;
- (id)token;
- (bool)tryPairingPassword:(id)arg1 error:(id*)arg2;
- (void)updateWithBonjourDeviceInfo:(id)arg1;
- (void)updateWithWACDevice:(id)arg1;
- (id)wacDeviceInfo;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;

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