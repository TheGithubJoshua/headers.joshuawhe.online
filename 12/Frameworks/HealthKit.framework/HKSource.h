<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HKSource.h</title>
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

/Frameworks/HealthKit.framework/HKSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit (1)
 */

@interface HKSource : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    bool  _localDevice;
    NSString * _name;
    unsigned long long  _options;
    NSString * _productType;
    NSNumber * _sourceID;
}

@property (readonly) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_isLocalDevice, setter=_setLocalDevice:, nonatomic) bool localDevice;
@property (readonly) NSString *name;
@property (getter=_options, setter=_setOptions:, nonatomic) unsigned long long options;
@property (getter=_productType, setter=_setProductType:, nonatomic, retain) NSString *productType;
@property (getter=_sourceID, setter=_setSourceID:, nonatomic, retain) NSNumber *sourceID;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_connectedGymSource;
+ (id)_currentSourceProductType:(bool)arg1;
+ (id)_generateIdentifierForAppleDevice;
+ (id)_generateIdentifierForAppleDeviceWithUUID:(id)arg1;
+ (bool)_isPlaceholderBundleIdentifier:(id)arg1;
+ (id)_localDeviceSource;
+ (id)_privateSourceForClinicalAccountIdentifier:(id)arg1 name:(id)arg2;
+ (id)_publicSourceForGatewayExternalIdentifier:(id)arg1 name:(id)arg2;
+ (bool)_representsCurrentDeviceWithBundleIdentifier:(id)arg1;
+ (id)_sourceBundleIdentifierWithEntitlements:(id)arg1 processBundleIdentifier:(id)arg2 isExtension:(bool)arg3;
+ (id)_sourceNameWithRepresentsCurrentDevice:(bool)arg1 defaultSource:(bool)arg2;
+ (id)_sourceWithBundleIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 options:(unsigned long long)arg4;
+ (id)defaultSource;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_deducedClinicalAccountIdentifier;
- (bool)_hasFirstPartyBundleID;
- (id)_init;
- (bool)_isAppleDevice;
- (bool)_isAppleWatch;
- (bool)_isApplication;
- (bool)_isClinicalSource;
- (bool)_isConnectedGymBundleID;
- (bool)_isConnectedGymSource;
- (bool)_isHidden;
- (bool)_isLocalDevice;
- (bool)_isPreferredSource;
- (unsigned long long)_options;
- (id)_productType;
- (bool)_requiresAuthorization;
- (void)_setBundleIdentifier:(id)arg1;
- (void)_setLocalDevice:(bool)arg1;
- (void)_setName:(id)arg1;
- (void)_setOptions:(unsigned long long)arg1;
- (void)_setProductType:(id)arg1;
- (void)_setSourceID:(id)arg1;
- (id)_sourceID;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)hkui_fetchAppBundleWithError:(out id*)arg1;

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
