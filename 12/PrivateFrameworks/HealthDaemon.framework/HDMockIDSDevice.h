<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDMockIDSDevice.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDMockIDSDevice.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDMockIDSDevice : NSObject <NSCopying> {
    NSString * _backgroundAtrialFibrillationVersion;
    NSString * _buildType;
    NSString * _electrocardiogramVersion;
    bool  _isActive;
    NSString * _modelNumber;
    NSString * _name;
    NSUUID * _nanoRegistryPairingID;
    NSUUID * _nsuuid;
    NSString * _productBuildVersion;
    NSString * _productType;
    NSString * _regionCode;
    NSString * _service;
    bool  _supportsCinnamonAntimonyGloryF;
    bool  _supportsCinnamonHW;
    NSString * _systemVersion;
    NSString * _uniqueIDOverride;
}

@property (nonatomic, copy) NSString *backgroundAtrialFibrillationVersion;
@property (nonatomic, copy) NSString *buildType;
@property (nonatomic, copy) NSString *electrocardiogramVersion;
@property (nonatomic) bool isActive;
@property (nonatomic, readonly) bool isDefaultPairedDevice;
@property (nonatomic, readonly) bool isLocallyPaired;
@property (nonatomic, copy) NSString *modelNumber;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSUUID *nanoRegistryPairingID;
@property (nonatomic, retain) NSUUID *nsuuid;
@property (nonatomic, copy) NSString *productBuildVersion;
@property (nonatomic, copy) NSString *productType;
@property (nonatomic, copy) NSString *regionCode;
@property (nonatomic, copy) NSString *service;
@property (nonatomic) bool supportsCinnamonAntimonyGloryF;
@property (nonatomic) bool supportsCinnamonHW;
@property (nonatomic, copy) NSString *systemVersion;
@property (nonatomic, copy) NSString *uniqueIDOverride;

- (void).cxx_destruct;
- (id)backgroundAtrialFibrillationVersion;
- (id)buildType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)electrocardiogramVersion;
- (id)hd_destinationIdentifier;
- (id)hd_deviceIdentifier;
- (bool)hd_isEquivalentToDevice:(id)arg1;
- (id)hd_shortDescription;
- (bool)isActive;
- (bool)isDefaultPairedDevice;
- (bool)isLocallyPaired;
- (id)modelNumber;
- (id)name;
- (id)nanoRegistryPairingID;
- (id)nsuuid;
- (id)productBuildVersion;
- (id)productType;
- (id)regionCode;
- (id)service;
- (void)setBackgroundAtrialFibrillationVersion:(id)arg1;
- (void)setBuildType:(id)arg1;
- (void)setElectrocardiogramVersion:(id)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNanoRegistryPairingID:(id)arg1;
- (void)setNsuuid:(id)arg1;
- (void)setProductBuildVersion:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setRegionCode:(id)arg1;
- (void)setService:(id)arg1;
- (void)setSupportsCinnamonAntimonyGloryF:(bool)arg1;
- (void)setSupportsCinnamonHW:(bool)arg1;
- (void)setSystemVersion:(id)arg1;
- (void)setUniqueIDOverride:(id)arg1;
- (bool)supportsCinnamonAntimonyGloryF;
- (bool)supportsCinnamonHW;
- (id)systemVersion;
- (id)uniqueIDOverride;

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