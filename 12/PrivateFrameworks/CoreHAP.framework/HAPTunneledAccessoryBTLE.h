<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HAPTunneledAccessoryBTLE.h</title>
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

/PrivateFrameworks/CoreHAP.framework/HAPTunneledAccessoryBTLE.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP (484.7.17.1)
 */

@interface HAPTunneledAccessoryBTLE : HAPAccessory <HAPAccessoryServerInternalDelegate, HAPBTLEControlOutputStreamDelegate, HAPSecuritySessionDelegate, HMFTimerDelegate> {
    HAPCharacteristic * _advertisingCharacteristic;
    NSOperationQueue * _clientOperationQueue;
    HMFTimer * _connectionIdleTimer;
    <HAPKeyStore> * _keyStore;
    HAPCharacteristic * _pairVerifyCharacteristic;
    NSOperationQueue * _pairVerifyOperationQueue;
    HAPService * _pairingService;
    HAPCharacteristic * _pairingsCharacteristic;
    NSMutableArray * _pendingRequests;
    NSMutableArray * _pendingResponses;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSOperationQueue * _requestOperationQueue;
    HAPSecuritySession * _securitySession;
    bool  _securitySessionOpen;
    bool  _securitySessionOpening;
    NSNumber * _sessionLifetimeTimeout;
    NSNumber * _stateNumber;
    HAPService * _tunneledBTLEAccessoryService;
    HMFExponentialBackoffTimer * _verificationBackoffTimer;
    bool  _verified;
    bool  _verifying;
}

@property (nonatomic) HAPCharacteristic *advertisingCharacteristic;
@property (nonatomic, readonly) NSOperationQueue *clientOperationQueue;
@property (nonatomic, retain) HMFTimer *connectionIdleTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HAPKeyStore> *keyStore;
@property (nonatomic) HAPCharacteristic *pairVerifyCharacteristic;
@property (nonatomic, readonly) NSOperationQueue *pairVerifyOperationQueue;
@property (nonatomic) HAPService *pairingService;
@property (nonatomic) HAPCharacteristic *pairingsCharacteristic;
@property (nonatomic, readonly) NSMutableArray *pendingRequests;
@property (nonatomic, readonly) NSMutableArray *pendingResponses;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly) NSOperationQueue *requestOperationQueue;
@property (nonatomic, retain) HAPSecuritySession *securitySession;
@property (getter=isSecuritySessionOpen, nonatomic) bool securitySessionOpen;
@property (getter=isSecuritySessionOpening, nonatomic) bool securitySessionOpening;
@property (nonatomic, retain) NSNumber *sessionLifetimeTimeout;
@property (nonatomic, copy) NSNumber *stateNumber;
@property (readonly) Class superclass;
@property (nonatomic) HAPService *tunneledBTLEAccessoryService;
@property (nonatomic, retain) HMFExponentialBackoffTimer *verificationBackoffTimer;
@property (getter=isVerified, nonatomic) bool verified;
@property (getter=isVerifying, nonatomic) bool verifying;

+ (bool)shouldVerifyCharacteristic:(id)arg1;

- (void).cxx_destruct;
- (bool)__isAdvertising;
- (void)_cancelAllQueuedOperationsWithError:(id)arg1;
- (id)_decryptData:(id)arg1 error:(id*)arg2;
- (id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id*)arg2;
- (void)_enqueueRequest:(id)arg1;
- (bool)_establishSecureSessionWithError:(id*)arg1;
- (void)_handleConnectionIdleTimeout;
- (void)_handleSecuritySession:(id)arg1 setupExchangeData:(id)arg2;
- (void)_kickConnectionIdleTimer;
- (void)_markNotifyingCharacteristicUpdatedForCharacteristic:(id)arg1;
- (unsigned long long)_outstandingRequests;
- (bool)_parsePairingService:(id)arg1;
- (bool)_parseServices;
- (bool)_parseTunneledBTLEAccessoryService:(id)arg1;
- (id)_pendingRequestForCharacteristic:(id)arg1;
- (id)_pendingResponseForRequest:(id)arg1;
- (void)_performTimedWriteExecuteForCharacteristic:(id)arg1 value:(id)arg2 options:(long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_performTimedWritePrepareWithValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)_performTimedWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)_performWriteValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)_readUpdatedCharacteristics:(id)arg1 queue:(id)arg2;
- (void)_readValueForCharacteristic:(id)arg1 options:(long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_reallySendRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_registerForTunnelCharacteristicNotifications;
- (void)_requestResponseForRequest:(id)arg1;
- (void)_resumeAllOperations;
- (void)_resumeConnectionIdleTimer;
- (void)_sanitizeAllTunneledCharacteristics;
- (void)_sendControlPacket:(id)arg1 forRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_sendPairingRequestData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_sendRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_suspendAllOperations;
- (void)_suspendConnectionIdleTimer;
- (void)_tearDownSessionWithError:(id)arg1;
- (void)_updateOnStateNumberChange;
- (void)_verifyCharacteristicSignature:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_verifyServiceSignature:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_writeValue:(id)arg1 toCharacteristic:(id)arg2 authorizationData:(id)arg3 options:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)advertisingCharacteristic;
- (id)clientOperationQueue;
- (id)connectionIdleTimer;
- (void)controlOutputStream:(id)arg1 didCloseWithError:(id)arg2;
- (void)controlOutputStream:(id)arg1 didReceiveRequestToSendControlPacket:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)controlOutputStreamDidComplete:(id)arg1;
- (void)controlOutputStreamDidOpen:(id)arg1;
- (id)getLocalPairingIdentityAndAllowCreation:(bool)arg1 error:(id*)arg2;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 keyStore:(id)arg4;
- (void)invalidate;
- (bool)isPaired;
- (bool)isSecuritySessionOpen;
- (bool)isSecuritySessionOpening;
- (bool)isVerified;
- (bool)isVerifying;
- (id)keyStore;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)mergeObject:(id)arg1;
- (id)pairVerifyCharacteristic;
- (id)pairVerifyOperationQueue;
- (id)pairingService;
- (id)pairingsCharacteristic;
- (id)pendingRequests;
- (id)pendingResponses;
- (id)propertyQueue;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)readValueForCharacteristic:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removePairingForCurrentControllerWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requestOperationQueue;
- (id)securitySession;
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id*)arg2;
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id*)arg3;
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;
- (void)securitySessionDidOpen:(id)arg1;
- (void)securitySessionIsOpening:(id)arg1;
- (id)sessionLifetimeTimeout;
- (void)setAdvertisingCharacteristic:(id)arg1;
- (void)setConnectionIdleTimer:(id)arg1;
- (void)setKeyStore:(id)arg1;
- (void)setPairVerifyCharacteristic:(id)arg1;
- (void)setPairingService:(id)arg1;
- (void)setPairingsCharacteristic:(id)arg1;
- (void)setReachable:(bool)arg1;
- (void)setSecuritySession:(id)arg1;
- (void)setSecuritySessionOpen:(bool)arg1;
- (void)setSecuritySessionOpening:(bool)arg1;
- (void)setSessionLifetimeTimeout:(id)arg1;
- (void)setStateNumber:(id)arg1;
- (void)setTunneledBTLEAccessoryService:(id)arg1;
- (void)setVerificationBackoffTimer:(id)arg1;
- (void)setVerified:(bool)arg1;
- (void)setVerifying:(bool)arg1;
- (id)shortDescription;
- (id)stateNumber;
- (void)timerDidFire:(id)arg1;
- (id)tunneledBTLEAccessoryService;
- (id)uniqueIdentifier;
- (id)verificationBackoffTimer;
- (void)verify;
- (void)writeCharacteristicValue:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
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
