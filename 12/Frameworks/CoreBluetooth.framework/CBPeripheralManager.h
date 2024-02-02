<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CBPeripheralManager.h</title>
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

/Frameworks/CoreBluetooth.framework/CBPeripheralManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth (1)
 */

@interface CBPeripheralManager : CBManager {
    unsigned long long  _attributeIDGenerator;
    NSMapTable * _centrals;
    NSMutableDictionary * _characteristicIDs;
    <CBPeripheralManagerDelegate> * _delegate;
    struct { 
        unsigned int willRestoreState : 1; 
        unsigned int didAddService : 1; 
        unsigned int didReceiveReadRequest : 1; 
        unsigned int didReceiveWriteRequests : 1; 
        unsigned int centralDidSubscribeToCharacteristic : 1; 
        unsigned int centralDidUnsubscribeFromCharacteristic : 1; 
        unsigned int didStartAdvertising : 1; 
        unsigned int isReadyToUpdate : 1; 
        unsigned int centralDidConnect : 1; 
        unsigned int centralDidUpdateConnectionParameters : 1; 
        unsigned int didPublishL2CAPChannel : 1; 
        unsigned int didUnpublishL2CAPChannel : 1; 
        unsigned int didOpenL2CAPChannel : 1; 
    }  _delegateFlags;
    bool  _isAdvertising;
    NSHashTable * _l2capChannels;
    NSNumber * _multipleAdvertisingSupported;
    bool  _readyForUpdates;
    NSMutableArray * _services;
    NSLock * _updateLock;
    bool  _waitingForReady;
}

@property unsigned long long attributeIDGenerator;
@property (nonatomic, readonly, retain) NSMapTable *centrals;
@property (nonatomic, readonly, retain) NSMutableDictionary *characteristicIDs;
@property (nonatomic) <CBPeripheralManagerDelegate> *delegate;
@property (nonatomic) bool isAdvertising;
@property (getter=supportsMultipleAdvertising, nonatomic, readonly) bool isSupportingMultipleAdvertising;
@property (nonatomic, readonly, retain) NSHashTable *l2capChannels;
@property (nonatomic, retain) NSNumber *multipleAdvertisingSupported;
@property (nonatomic, readonly) bool readyForUpdates;
@property (nonatomic, readonly, retain) NSMutableArray *services;
@property (nonatomic, readonly, retain) NSLock *updateLock;
@property (nonatomic, readonly) bool waitingForReady;

+ (long long)authorizationStatus;

- (void).cxx_destruct;
- (void)addService:(id)arg1;
- (unsigned long long)attributeIDGenerator;
- (id)centralWithInfo:(id)arg1;
- (id)centrals;
- (id)characteristicIDs;
- (void)dealloc;
- (id)delegate;
- (void)forEachCentral:(id /* block */)arg1;
- (void)handleAdvertisingAddressChanged:(id)arg1;
- (void)handleAdvertisingStarted:(id)arg1;
- (void)handleAdvertisingStopped:(id)arg1;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleGetAttributeValue:(id)arg1;
- (void)handleL2CAPChannelClosed:(id)arg1;
- (void)handleL2CAPChannelOpened:(id)arg1;
- (void)handleL2CAPChannelPublished:(id)arg1;
- (void)handleL2CAPChannelUnpublished:(id)arg1;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handleNotificationAdded:(id)arg1;
- (void)handleNotificationRemoved:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleServiceAdded:(id)arg1;
- (void)handleSetAttributeValues:(id)arg1;
- (void)handleSolicitedServicesFound:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (bool)isAdvertising;
- (bool)isMsgAllowedAlways:(unsigned short)arg1;
- (bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (id)l2capChannelForPeer:(id)arg1 withPsm:(unsigned short)arg2;
- (id)l2capChannels;
- (id)multipleAdvertisingSupported;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)overrideLocalLeAddress:(id)arg1;
- (id)peerWithInfo:(id)arg1;
- (void)publishL2CAPChannel:(unsigned short)arg1 requiresEncryption:(bool)arg2;
- (void)publishL2CAPChannel:(unsigned short)arg1 requiresEncryption:(bool)arg2 options:(id)arg3;
- (void)publishL2CAPChannelWithEncryption:(bool)arg1;
- (bool)readyForUpdates;
- (void)removeAllL2CAPChannels;
- (void)removeAllServices;
- (void)removeService:(id)arg1;
- (void)respondToRequest:(id)arg1 withResult:(long long)arg2;
- (void)respondToTransaction:(id)arg1 value:(id)arg2 attributeID:(id)arg3 result:(long long)arg4;
- (id)services;
- (void)setAttributeIDGenerator:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredConnectionLatency:(long long)arg1 forCentral:(id)arg2;
- (void)setIsAdvertising:(bool)arg1;
- (void)setMultipleAdvertisingSupported:(id)arg1;
- (void)startAdvertising:(id)arg1;
- (void)stopAdvertising;
- (bool)supportsMultipleAdvertising;
- (void)unpublishL2CAPChannel:(unsigned short)arg1;
- (id)updateLock;
- (bool)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3;
- (bool)waitingForReady;

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