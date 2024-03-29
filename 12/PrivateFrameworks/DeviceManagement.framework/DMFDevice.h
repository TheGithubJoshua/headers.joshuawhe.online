<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DMFDevice.h</title>
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

/PrivateFrameworks/DeviceManagement.framework/DMFDevice.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement (25.9)
 */

@interface DMFDevice : NSObject {
    NSString * _EASIdentifier;
    NSString * _ICCID;
    NSString * _IMEI;
    NSString * _MEID;
    NSArray * _activeManagedUsers;
    NSArray * _autoSetupAdminAccounts;
    NSNumber * _availableCapacity;
    NSNumber * _batteryLevel;
    NSString * _bluetoothAddress;
    NSString * _buildVersion;
    NSNumber * _capacity;
    NSString * _carrierSettingsVersion;
    NSNumber * _cellularTechnology;
    NSString * _currentCarrierNetwork;
    NSString * _currentMCC;
    NSString * _currentMNC;
    NSString * _destinationIdentifier;
    NSString * _deviceName;
    NSNumber * _deviceType;
    NSNumber * _enforcedSoftwareUpdateDelay;
    NSDictionary * _errorsForKeys;
    NSString * _hostName;
    NSString * _iTunesStoreAccountHash;
    NSNumber * _iTunesStoreAccountIsActive;
    NSDictionary * _installedExtensions;
    NSNumber * _isActivationLockEnabled;
    NSNumber * _isAppAnalyticsEnabled;
    NSNumber * _isAppleInternal;
    NSNumber * _isAwaitingConfiguration;
    NSNumber * _isCloudBackupEnabled;
    NSNumber * _isDataRoamingEnabled;
    NSNumber * _isDeviceLocatorServiceEnabled;
    NSNumber * _isDiagnosticSubmissionEnabled;
    NSNumber * _isDoNotDisturbInEffect;
    NSNumber * _isEphemeralMultiUser;
    NSNumber * _isInSingleAppMode;
    NSNumber * _isLostModeEnabled;
    NSNumber * _isNetworkTethered;
    NSNumber * _isPersonalHotspotEnabled;
    NSNumber * _isRoaming;
    NSNumber * _isSupervised;
    NSNumber * _isSystemIntegrityProtectionEnabled;
    NSNumber * _isVoiceRoamingEnabled;
    NSDate * _lastCloudBackupDate;
    NSString * _localHostName;
    NSString * _marketingName;
    NSNumber * _maximumResidentUsers;
    NSString * _model;
    NSString * _modelName;
    NSString * _modemFirmwareVersion;
    NSDictionary * _osUpdateSettings;
    NSString * _osVersion;
    NSString * _phoneNumber;
    NSString * _productName;
    NSString * _serialNumber;
    NSDictionary * _serviceSubscriptions;
    NSArray * _skippedSetupPanes;
    NSString * _subscriberCarrierNetwork;
    NSString * _subscriberMCC;
    NSString * _subscriberMNC;
    NSString * _uniqueIdentifier;
    NSString * _wifiAddress;
    NSDictionary * _xsanConfiguration;
}

@property (nonatomic, readonly) NSString *EASIdentifier;
@property (nonatomic, readonly) NSString *ICCID;
@property (nonatomic, readonly) NSString *IMEI;
@property (nonatomic, readonly) NSString *MEID;
@property (nonatomic, readonly) NSArray *activeManagedUsers;
@property (nonatomic, readonly) NSArray *autoSetupAdminAccounts;
@property (nonatomic, readonly) NSNumber *availableCapacity;
@property (nonatomic, readonly) NSNumber *batteryLevel;
@property (nonatomic, readonly) NSString *bluetoothAddress;
@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, readonly) NSNumber *capacity;
@property (nonatomic, readonly) NSString *carrierSettingsVersion;
@property (nonatomic, readonly) NSNumber *cellularTechnology;
@property (nonatomic, readonly) NSString *currentCarrierNetwork;
@property (nonatomic, readonly) NSString *currentMCC;
@property (nonatomic, readonly) NSString *currentMNC;
@property (nonatomic, readonly) NSString *destinationIdentifier;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSNumber *deviceType;
@property (nonatomic, readonly) NSNumber *enforcedSoftwareUpdateDelay;
@property (nonatomic, copy) NSDictionary *errorsForKeys;
@property (nonatomic, readonly) NSString *hostName;
@property (nonatomic, readonly) NSString *iTunesStoreAccountHash;
@property (nonatomic, readonly) NSNumber *iTunesStoreAccountIsActive;
@property (nonatomic, readonly) NSDictionary *installedExtensions;
@property (nonatomic, readonly) NSNumber *isActivationLockEnabled;
@property (nonatomic, readonly) NSNumber *isAppAnalyticsEnabled;
@property (nonatomic, readonly) NSNumber *isAppleInternal;
@property (nonatomic, readonly) NSNumber *isAwaitingConfiguration;
@property (nonatomic, readonly) NSNumber *isCloudBackupEnabled;
@property (nonatomic, readonly) NSNumber *isDataRoamingEnabled;
@property (nonatomic, readonly) NSNumber *isDeviceLocatorServiceEnabled;
@property (nonatomic, readonly) NSNumber *isDiagnosticSubmissionEnabled;
@property (nonatomic, readonly) NSNumber *isDoNotDisturbInEffect;
@property (nonatomic, readonly) NSNumber *isEphemeralMultiUser;
@property (nonatomic, readonly) NSNumber *isInSingleAppMode;
@property (nonatomic, readonly) NSNumber *isLostModeEnabled;
@property (nonatomic, readonly) NSNumber *isNetworkTethered;
@property (nonatomic, readonly) NSNumber *isPersonalHotspotEnabled;
@property (nonatomic, readonly) NSNumber *isRoaming;
@property (nonatomic, readonly) NSNumber *isSupervised;
@property (nonatomic, readonly) NSNumber *isSystemIntegrityProtectionEnabled;
@property (nonatomic, readonly) NSNumber *isVoiceRoamingEnabled;
@property (nonatomic, readonly) NSDate *lastCloudBackupDate;
@property (nonatomic, readonly) NSString *localHostName;
@property (nonatomic, readonly) NSString *marketingName;
@property (nonatomic, readonly) NSNumber *maximumResidentUsers;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSString *modemFirmwareVersion;
@property (nonatomic, readonly) NSDictionary *osUpdateSettings;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) NSDictionary *serviceSubscriptions;
@property (nonatomic, readonly) NSArray *skippedSetupPanes;
@property (nonatomic, readonly) NSString *subscriberCarrierNetwork;
@property (nonatomic, readonly) NSString *subscriberMCC;
@property (nonatomic, readonly) NSString *subscriberMNC;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) NSString *wifiAddress;
@property (nonatomic, readonly) NSDictionary *xsanConfiguration;

+ (id)_sanitizedDeviceKey:(id)arg1;
+ (id)propertyNameForKey:(id)arg1;

- (void).cxx_destruct;
- (id)EASIdentifier;
- (id)ICCID;
- (id)IMEI;
- (id)MEID;
- (id)activeManagedUsers;
- (id)autoSetupAdminAccounts;
- (id)availableCapacity;
- (id)batteryLevel;
- (id)bluetoothAddress;
- (id)buildVersion;
- (id)capacity;
- (id)carrierSettingsVersion;
- (id)cellularTechnology;
- (id)currentCarrierNetwork;
- (id)currentMCC;
- (id)currentMNC;
- (id)destinationIdentifier;
- (id)deviceName;
- (id)deviceType;
- (id)enforcedSoftwareUpdateDelay;
- (id)errorsForKeys;
- (id)hostName;
- (id)iTunesStoreAccountHash;
- (id)iTunesStoreAccountIsActive;
- (id)initPrivate;
- (id)installedExtensions;
- (id)isActivationLockEnabled;
- (id)isAppAnalyticsEnabled;
- (id)isAppleInternal;
- (id)isAwaitingConfiguration;
- (id)isCloudBackupEnabled;
- (id)isDataRoamingEnabled;
- (id)isDeviceLocatorServiceEnabled;
- (id)isDiagnosticSubmissionEnabled;
- (id)isDoNotDisturbInEffect;
- (id)isEphemeralMultiUser;
- (id)isInSingleAppMode;
- (id)isLostModeEnabled;
- (id)isNetworkTethered;
- (id)isPersonalHotspotEnabled;
- (id)isRoaming;
- (id)isSupervised;
- (id)isSystemIntegrityProtectionEnabled;
- (id)isVoiceRoamingEnabled;
- (id)lastCloudBackupDate;
- (id)localHostName;
- (id)marketingName;
- (id)maximumResidentUsers;
- (id)model;
- (id)modelName;
- (id)modemFirmwareVersion;
- (id)osUpdateSettings;
- (id)osVersion;
- (id)phoneNumber;
- (id)productName;
- (id)serialNumber;
- (id)serviceSubscriptions;
- (void)setErrorsForKeys:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)skippedSetupPanes;
- (id)subscriberCarrierNetwork;
- (id)subscriberMCC;
- (id)subscriberMNC;
- (id)uniqueIdentifier;
- (id)valueForKey:(id)arg1 error:(id*)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)wifiAddress;
- (id)xsanConfiguration;

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
