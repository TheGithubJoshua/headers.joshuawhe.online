<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DMFApp.h</title>
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

/PrivateFrameworks/DeviceManagement.framework/DMFApp.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement (25.9)
 */

@interface DMFApp : NSObject <NSCopying, NSSecureCoding> {
    NSString * _VPNUUIDString;
    NSString * _bundleIdentifier;
    NSDictionary * _configuration;
    NSString * _displayName;
    NSNumber * _dynamicUsage;
    NSNumber * _externalVersionIdentifier;
    NSDictionary * _feedback;
    bool  _hasUpdateAvailable;
    unsigned long long  _installationState;
    bool  _isAdHocCodeSigned;
    bool  _isAppStoreVendable;
    bool  _isBetaApp;
    bool  _isBlocked;
    bool  _isDeviceBasedVPP;
    bool  _isLicenseExpired;
    bool  _isLicenseRevoked;
    bool  _isPlaceholder;
    bool  _isRestricted;
    bool  _isUPP;
    bool  _isUserBasedVPP;
    bool  _isValidated;
    DMFAppManagementInformation * _managementInformation;
    NSNumber * _onDemandResourcesUsage;
    NSNumber * _sharedUsage;
    NSString * _shortVersion;
    NSNumber * _staticUsage;
    NSNumber * _storeItemIdentifier;
    unsigned long long  _type;
    NSString * _version;
}

@property (nonatomic, copy) NSString *VPNUUIDString;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDictionary *configuration;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSNumber *dynamicUsage;
@property (nonatomic, copy) NSNumber *externalVersionIdentifier;
@property (nonatomic, copy) NSDictionary *feedback;
@property (nonatomic) bool hasUpdateAvailable;
@property (nonatomic) unsigned long long installationState;
@property (nonatomic) bool isAdHocCodeSigned;
@property (nonatomic) bool isAppStoreVendable;
@property (nonatomic) bool isBetaApp;
@property (nonatomic) bool isBlocked;
@property (nonatomic) bool isDeviceBasedVPP;
@property (nonatomic) bool isLicenseExpired;
@property (nonatomic) bool isLicenseRevoked;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic) bool isRestricted;
@property (nonatomic) bool isUPP;
@property (nonatomic) bool isUserBasedVPP;
@property (nonatomic) bool isValidated;
@property (nonatomic, copy) DMFAppManagementInformation *managementInformation;
@property (nonatomic, copy) NSNumber *onDemandResourcesUsage;
@property (nonatomic, copy) NSNumber *sharedUsage;
@property (nonatomic, copy) NSString *shortVersion;
@property (nonatomic, copy) NSNumber *staticUsage;
@property (nonatomic, copy) NSNumber *storeItemIdentifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic, copy) NSString *version;

+ (id)stringForInstallationState:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)VPNUUIDString;
- (id)_stringForType:(unsigned long long)arg1;
- (id)bundleIdentifier;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)dynamicUsage;
- (void)encodeWithCoder:(id)arg1;
- (id)externalVersionIdentifier;
- (id)feedback;
- (bool)hasUpdateAvailable;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)installationState;
- (bool)isAdHocCodeSigned;
- (bool)isAppStoreVendable;
- (bool)isBetaApp;
- (bool)isBlocked;
- (bool)isDeviceBasedVPP;
- (bool)isEqual:(id)arg1;
- (bool)isLicenseExpired;
- (bool)isLicenseRevoked;
- (bool)isPlaceholder;
- (bool)isRestricted;
- (bool)isUPP;
- (bool)isUserBasedVPP;
- (bool)isValidated;
- (id)managementInformation;
- (id)onDemandResourcesUsage;
- (void)setBundleIdentifier:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDynamicUsage:(id)arg1;
- (void)setExternalVersionIdentifier:(id)arg1;
- (void)setFeedback:(id)arg1;
- (void)setHasUpdateAvailable:(bool)arg1;
- (void)setInstallationState:(unsigned long long)arg1;
- (void)setIsAdHocCodeSigned:(bool)arg1;
- (void)setIsAppStoreVendable:(bool)arg1;
- (void)setIsBetaApp:(bool)arg1;
- (void)setIsBlocked:(bool)arg1;
- (void)setIsDeviceBasedVPP:(bool)arg1;
- (void)setIsLicenseExpired:(bool)arg1;
- (void)setIsLicenseRevoked:(bool)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setIsRestricted:(bool)arg1;
- (void)setIsUPP:(bool)arg1;
- (void)setIsUserBasedVPP:(bool)arg1;
- (void)setIsValidated:(bool)arg1;
- (void)setManagementInformation:(id)arg1;
- (void)setOnDemandResourcesUsage:(id)arg1;
- (void)setSharedUsage:(id)arg1;
- (void)setShortVersion:(id)arg1;
- (void)setStaticUsage:(id)arg1;
- (void)setStoreItemIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setVPNUUIDString:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)sharedUsage;
- (id)shortVersion;
- (id)staticUsage;
- (id)storeItemIdentifier;
- (unsigned long long)type;
- (id)version;

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
