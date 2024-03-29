<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDHealthService.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDHealthService.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDHealthService : NSObject <HDHSCharacteristicsDelegate> {
    bool  _characteristicsDiscovered;
    NSObject<OS_dispatch_queue> * _dataQueue;
    bool  _deliverData;
    HDDeviceEntity * _deviceEntity;
    int  _deviceInformationLoaded;
    HDHealthPeripheral * _healthPeripheral;
    NSMutableArray * _pendingCharacteristicBuffer;
    NSMutableArray * _pendingObjectBuffer;
    NSMutableArray * _pendingWrites;
    NSUUID * _peripheralUUID;
    HDProfile * _profile;
    NSString * _serviceId;
    HDHealthServiceManager * _serviceManager;
    NSMutableDictionary * _writableCharacteristics;
    NSObject<OS_dispatch_queue> * _writeQueue;
}

@property (nonatomic, readonly) bool characteristicsDiscovered;
@property bool deliverData;
@property (nonatomic) int deviceInformationLoaded;
@property (nonatomic, readonly) HDHealthPeripheral *healthPeripheral;
@property (nonatomic, retain) NSMutableArray *pendingWrites;
@property (nonatomic, readonly) NSUUID *peripheralUUID;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSString *serviceId;
@property (nonatomic, retain) HDHealthServiceManager *serviceManager;
@property (nonatomic, retain) NSMutableDictionary *writableCharacteristics;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *writeQueue;

+ (id)implementedProperties;
+ (long long)serviceType;
+ (id)serviceUUID;

- (void).cxx_destruct;
- (void)_bufferCharacteristicToBeNotified:(id)arg1;
- (void)_bufferObjectToBePersisted:(id)arg1;
- (void)_dataQueue_deliverDataIfPossible;
- (id)_dataQueue_deviceEntity;
- (void)_dataQueue_notifyCharacteristic:(id)arg1;
- (void)_dataQueue_persistData:(id)arg1;
- (bool)_shouldNotifyReceivedData;
- (void)characteristicDataReceived:(id)arg1;
- (bool)characteristicsDiscovered;
- (bool)deliverData;
- (id)description;
- (void)deviceDisconnecting;
- (int)deviceInformationLoaded;
- (void)deviceInformationSetOnPeripheral;
- (void)executeFirstWrite;
- (id)healthPeripheral;
- (id)initWithServiceManager:(id)arg1 peripheral:(id)arg2 advertisementData:(id)arg3 profile:(id)arg4;
- (void)markCharacteristicsDiscovered;
- (void)mfaSucceededOnPeripheral;
- (id)pendingWrites;
- (void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverCharacteristics:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (id)peripheralUUID;
- (bool)processAdvertisementData:(id)arg1;
- (id)profile;
- (void)readProperty:(id)arg1;
- (void)respondFirstWriteWithData:(id)arg1 error:(id)arg2;
- (void)serviceDataReceived:(id)arg1;
- (id)serviceId;
- (id)serviceManager;
- (id)servicesInProfile;
- (void)setDeliverData:(bool)arg1;
- (void)setDeviceInformationLoaded:(int)arg1;
- (void)setPendingWrites:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setServiceId:(id)arg1;
- (void)setServiceManager:(id)arg1;
- (void)setWritableCharacteristic:(id)arg1;
- (void)setWritableCharacteristics:(id)arg1;
- (void)setWriteQueue:(id)arg1;
- (bool)supportsOperation:(id)arg1;
- (bool)supportsWritingCharacteristic:(id)arg1;
- (id)writableCharacteristics;
- (void)writeCharacteristic:(id)arg1 expectResponse:(bool)arg2 completion:(id /* block */)arg3;
- (id)writeQueue;

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
