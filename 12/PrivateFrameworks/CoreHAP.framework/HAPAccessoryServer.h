<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HAPAccessoryServer.h</title>
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

/PrivateFrameworks/CoreHAP.framework/HAPAccessoryServer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP (484.7.17.1)
 */

@interface HAPAccessoryServer : HMFObject {
    NSArray * _accessories;
    unsigned long long  _authMethod;
    bool  _bleLinkConnected;
    NSNumber * _category;
    NSObject<OS_dispatch_queue> * _clientQueue;
    unsigned long long  _configNumber;
    <HAPAccessoryServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    bool  _hasPairings;
    NSString * _identifier;
    bool  _incompatibleUpdate;
    NSObject<OS_dispatch_queue> * _internalDelegateQueue;
    NSHashTable * _internalDelegates;
    <HAPKeyStore> * _keyStore;
    long long  _linkType;
    NSString * _name;
    unsigned long long  _pairSetupType;
    HAPAccessory * _primaryAccessory;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _reachable;
    bool  _securitySessionOpen;
    NSData * _setupHash;
    bool  _supportsTimedWrite;
    HMFVersion * _version;
}

@property (nonatomic, copy) NSArray *accessories;
@property (nonatomic) unsigned long long authMethod;
@property (getter=isBLELinkConnected, nonatomic, readonly) bool bleLinkConnected;
@property (nonatomic, copy) NSNumber *category;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) unsigned long long configNumber;
@property (readonly) <HAPAccessoryServerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) HAPDeviceID *deviceID;
@property (nonatomic) bool hasPairings;
@property (nonatomic, copy) NSString *identifier;
@property (getter=isIncompatibleUpdate, nonatomic) bool incompatibleUpdate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalDelegateQueue;
@property (nonatomic, readonly) NSHashTable *internalDelegates;
@property (nonatomic, readonly) <HAPKeyStore> *keyStore;
@property (nonatomic, readonly) long long linkType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long pairSetupType;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (nonatomic, retain) HAPAccessory *primaryAccessory;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isReachable, nonatomic) bool reachable;
@property (getter=isSecuritySessionOpen) bool securitySessionOpen;
@property (nonatomic, copy) NSData *setupHash;
@property (nonatomic) bool supportsTimedWrite;
@property (copy) HMFVersion *version;

+ (bool)isAccessoryServerWithIdentifierPaired:(id)arg1 keyStore:(id)arg2;

- (void).cxx_destruct;
- (id)accessories;
- (void)addInternalDelegate:(id)arg1;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)authMethod;
- (id)category;
- (id)clientQueue;
- (unsigned long long)configNumber;
- (void)continuePairingAfterAuthPrompt;
- (void)continuePairingUsingWAC;
- (id)delegate;
- (id)delegateQueue;
- (id)deviceID;
- (void)discoverAccessories;
- (void)enableEvents:(bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (void)enumerateInternalDelegatesUsingBlock:(id /* block */)arg1;
- (void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2;
- (bool)hasPairings;
- (id)identifier;
- (void)identifyWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithKeystore:(id)arg1;
- (id)internalDelegateQueue;
- (id)internalDelegates;
- (bool)isBLELinkConnected;
- (bool)isIncompatibleUpdate;
- (bool)isPaired;
- (bool)isReachable;
- (bool)isSecuritySessionOpen;
- (id)keyStore;
- (long long)linkType;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)matchesSetupID:(id)arg1;
- (id)name;
- (void)notifyDelegateUpdatedCategory:(id)arg1;
- (void)notifyDelegateUpdatedHasPairings:(bool)arg1;
- (void)notifyDelegateUpdatedName:(id)arg1;
- (unsigned long long)pairSetupType;
- (id)primaryAccessory;
- (id)propertyQueue;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)reconfirm;
- (void)removeInternalDelegate:(id)arg1;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (bool)requiresTimedWrite:(id)arg1;
- (void)setAccessories:(id)arg1;
- (void)setAuthMethod:(unsigned long long)arg1;
- (void)setCategory:(id)arg1;
- (void)setConfigNumber:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setHasPairings:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIncompatibleUpdate:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPairSetupType:(unsigned long long)arg1;
- (void)setPrimaryAccessory:(id)arg1;
- (void)setReachable:(bool)arg1;
- (void)setSecuritySessionOpen:(bool)arg1;
- (void)setSetupHash:(id)arg1;
- (void)setSupportsTimedWrite:(bool)arg1;
- (void)setVersion:(id)arg1;
- (id)setupHash;
- (void)startPairingWithConsentRequired:(bool)arg1;
- (bool)stopPairingWithError:(id*)arg1;
- (bool)supportsTimedWrite;
- (bool)tryPairingPassword:(id)arg1 error:(id*)arg2;
- (id)version;
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