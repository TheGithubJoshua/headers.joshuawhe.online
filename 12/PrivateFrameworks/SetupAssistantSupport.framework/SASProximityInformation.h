<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SASProximityInformation.h</title>
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

/PrivateFrameworks/SetupAssistantSupport.framework/SASProximityInformation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport (105.11)
 */

@interface SASProximityInformation : NSObject <NSSecureCoding> {
    NSNumber * _appAnalyticsOptIn;
    NSString * _appleID;
    bool  _automaticTimeZoneEnabled;
    bool  _backupEnabled;
    NSData * _backupMetadata;
    NSString * _backupUUID;
    NSNumber * _connectedToWiFi;
    NSDate * _dateOfLastBackup;
    NSNumber * _deviceAnalyticsOptIn;
    NSString * _deviceClass;
    NSString * _deviceModel;
    NSString * _deviceName;
    NSNumber * _deviceTermsIdentifier;
    NSNumber * _deviceToDeviceMigrationVersion;
    NSNumber * _findMyDeviceOptIn;
    NSString * _firstName;
    NSArray * _keyboards;
    NSDictionary * _localePreferences;
    bool  _locationServicesOptIn;
    NSSet * _nearbyNetworks;
    NSObject<OS_dispatch_semaphore> * _nearbyNetworksSemaphore;
    NSArray * _networkPasswords;
    NSArray * _networks;
    NSString * _productVersion;
    bool  _restoring;
    NSNumber * _siriOptIn;
    NSData * _siriVoiceProfileAvailabilityMetadata;
    NSNumber * _storageAvailable;
    NSNumber * _storageCapacity;
    NSNumber * _storageUsedByAppContainers;
    NSNumber * _supportsDeviceToDeviceMigration;
    NSString * _timeZone;
    bool  _usesSameAccountForiTunes;
}

@property (retain) NSNumber *appAnalyticsOptIn;
@property (copy) NSString *appleID;
@property bool automaticTimeZoneEnabled;
@property (getter=isBackupEnabled, nonatomic) bool backupEnabled;
@property (retain) NSData *backupMetadata;
@property (copy) NSString *backupUUID;
@property (retain) NSNumber *connectedToWiFi;
@property (copy) NSDate *dateOfLastBackup;
@property (retain) NSNumber *deviceAnalyticsOptIn;
@property (copy) NSString *deviceClass;
@property (copy) NSString *deviceModel;
@property (copy) NSString *deviceName;
@property (retain) NSNumber *deviceTermsIdentifier;
@property (retain) NSNumber *deviceToDeviceMigrationVersion;
@property (retain) NSNumber *findMyDeviceOptIn;
@property (copy) NSString *firstName;
@property (copy) NSArray *keyboards;
@property (copy) NSDictionary *localePreferences;
@property bool locationServicesOptIn;
@property (retain) NSSet *nearbyNetworks;
@property (retain) NSObject<OS_dispatch_semaphore> *nearbyNetworksSemaphore;
@property (copy) NSArray *networkPasswords;
@property (copy) NSArray *networks;
@property (retain) NSString *productVersion;
@property (getter=isRestoring) bool restoring;
@property (retain) NSNumber *siriOptIn;
@property (retain) NSData *siriVoiceProfileAvailabilityMetadata;
@property (retain) NSNumber *storageAvailable;
@property (retain) NSNumber *storageCapacity;
@property (retain) NSNumber *storageUsedByAppContainers;
@property (retain) NSNumber *supportsDeviceToDeviceMigration;
@property (copy) NSString *timeZone;
@property bool usesSameAccountForiTunes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_getFindMyDeviceOptIn;
- (id)appAnalyticsOptIn;
- (id)appleID;
- (bool)automaticTimeZoneEnabled;
- (id)backupMetadata;
- (id)backupUUID;
- (id)connectedToWiFi;
- (id)dateOfLastBackup;
- (id)deviceAnalyticsOptIn;
- (id)deviceClass;
- (id)deviceModel;
- (id)deviceName;
- (id)deviceTermsIdentifier;
- (id)deviceToDeviceMigrationVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)findMyDeviceOptIn;
- (id)firstName;
- (id)initWithCoder:(id)arg1;
- (bool)isBackupEnabled;
- (bool)isNetworkTransferrable:(struct __WiFiNetwork { }*)arg1;
- (bool)isRestoring;
- (id)keyboards;
- (void)loadInformation;
- (id)localePreferences;
- (bool)locationServicesOptIn;
- (id)nearbyNetworks;
- (id)nearbyNetworksSemaphore;
- (id)networkPasswords;
- (id)networks;
- (id)numberFromMCUserBoolSetting:(id)arg1;
- (id)productVersion;
- (void)setAppAnalyticsOptIn:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setAutomaticTimeZoneEnabled:(bool)arg1;
- (void)setBackupEnabled:(bool)arg1;
- (void)setBackupMetadata:(id)arg1;
- (void)setBackupUUID:(id)arg1;
- (void)setConnectedToWiFi:(id)arg1;
- (void)setDateOfLastBackup:(id)arg1;
- (void)setDeviceAnalyticsOptIn:(id)arg1;
- (void)setDeviceClass:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceTermsIdentifier:(id)arg1;
- (void)setDeviceToDeviceMigrationVersion:(id)arg1;
- (void)setFindMyDeviceOptIn:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setKeyboards:(id)arg1;
- (void)setLocalePreferences:(id)arg1;
- (void)setLocationServicesOptIn:(bool)arg1;
- (void)setNearbyNetworks:(id)arg1;
- (void)setNearbyNetworksSemaphore:(id)arg1;
- (void)setNetworkPasswords:(id)arg1;
- (void)setNetworks:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setRestoring:(bool)arg1;
- (void)setSiriOptIn:(id)arg1;
- (void)setSiriVoiceProfileAvailabilityMetadata:(id)arg1;
- (void)setStorageAvailable:(id)arg1;
- (void)setStorageCapacity:(id)arg1;
- (void)setStorageUsedByAppContainers:(id)arg1;
- (void)setSupportsDeviceToDeviceMigration:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setUsesSameAccountForiTunes:(bool)arg1;
- (id)siriOptIn;
- (id)siriVoiceProfileAvailabilityMetadata;
- (id)storageAvailable;
- (id)storageCapacity;
- (id)storageUsedByAppContainers;
- (id)supportsDeviceToDeviceMigration;
- (id)timeZone;
- (bool)usesSameAccountForiTunes;
- (void)wirelessScanComplete:(id)arg1 error:(int)arg2;

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