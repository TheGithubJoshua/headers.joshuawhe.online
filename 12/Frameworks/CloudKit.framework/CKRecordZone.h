<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKRecordZone.h</title>
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

/Frameworks/CloudKit.framework/CKRecordZone.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit (736.235)
 */

@interface CKRecordZone : NSObject <NSCopying, NSSecureCoding> {
    long long  _assetQuotaUsage;
    unsigned long long  _capabilities;
    NSData * _clientChangeToken;
    CKContainerID * _containerID;
    CKServerChangeToken * _currentServerChangeToken;
    int  _deviceCount;
    CKEncryptedDate * _encryptedLastZoneishPCSRollDate;
    long long  _metadataQuotaUsage;
    bool  _needsZoneishPCSRolled;
    NSData * _pcsKeyID;
    NSString * _previousProtectionEtag;
    NSData * _protectionData;
    NSString * _protectionEtag;
    bool  _serializeProtectionData;
    CKRecordZoneID * _zoneID;
    bool  _zoneKeyRollAllowed;
    NSString * _zonePCSLastModifierDevice;
    NSDate * _zonePCSModificationDate;
    NSData * _zoneishKeyID;
    NSData * _zoneishProtectionData;
}

@property (nonatomic) long long assetQuotaUsage;
@property (nonatomic) unsigned long long capabilities;
@property (nonatomic, retain) NSData *clientChangeToken;
@property (nonatomic, copy) CKContainerID *containerID;
@property (nonatomic, retain) CKServerChangeToken *currentServerChangeToken;
@property (nonatomic, readonly) NSData *currentServerContinuationToken;
@property (nonatomic) int deviceCount;
@property (nonatomic, retain) CKEncryptedDate *encryptedLastZoneishPCSRollDate;
@property (nonatomic) long long metadataQuotaUsage;
@property (nonatomic) bool needsZoneishPCSRolled;
@property (nonatomic, retain) NSData *pcsKeyID;
@property (nonatomic, retain) NSString *previousProtectionEtag;
@property (nonatomic, retain) NSData *protectionData;
@property (nonatomic, retain) NSString *protectionEtag;
@property (nonatomic) bool serializeProtectionData;
@property (nonatomic, retain) CKRecordZoneID *zoneID;
@property (nonatomic) bool zoneKeyRollAllowed;
@property (nonatomic) struct _OpaquePCSShareProtection { }*zonePCS;
@property (nonatomic, retain) NSString *zonePCSLastModifierDevice;
@property (nonatomic, retain) NSDate *zonePCSModificationDate;
@property (nonatomic, retain) NSData *zoneishKeyID;
@property (nonatomic) struct _OpaquePCSShareProtection { }*zoneishPCS;
@property (nonatomic, retain) NSData *zoneishProtectionData;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)defaultRecordZone;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKPropertiesDescription;
- (id)_initZoneWithIdentifier:(id)arg1 capabilities:(unsigned long long)arg2;
- (long long)assetQuotaUsage;
- (unsigned long long)capabilities;
- (id)clientChangeToken;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentServerChangeToken;
- (id)currentServerContinuationToken;
- (id)description;
- (int)deviceCount;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedLastZoneishPCSRollDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneID:(id)arg1;
- (id)initWithZoneName:(id)arg1;
- (long long)metadataQuotaUsage;
- (bool)needsZoneishPCSRolled;
- (id)pcsKeyID;
- (id)previousProtectionEtag;
- (id)protectionData;
- (id)protectionEtag;
- (bool)serializeProtectionData;
- (void)setAssetQuotaUsage:(long long)arg1;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setClientChangeToken:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setCurrentServerChangeToken:(id)arg1;
- (void)setDeviceCount:(int)arg1;
- (void)setEncryptedLastZoneishPCSRollDate:(id)arg1;
- (void)setMetadataQuotaUsage:(long long)arg1;
- (void)setNeedsZoneishPCSRolled:(bool)arg1;
- (void)setPcsKeyID:(id)arg1;
- (void)setPreviousProtectionEtag:(id)arg1;
- (void)setProtectionData:(id)arg1;
- (void)setProtectionEtag:(id)arg1;
- (void)setSerializeProtectionData:(bool)arg1;
- (void)setZoneID:(id)arg1;
- (void)setZoneKeyRollAllowed:(bool)arg1;
- (void)setZonePCSLastModifierDevice:(id)arg1;
- (void)setZonePCSModificationDate:(id)arg1;
- (void)setZoneishKeyID:(id)arg1;
- (void)setZoneishProtectionData:(id)arg1;
- (id)zoneID;
- (bool)zoneKeyRollAllowed;
- (id)zonePCSLastModifierDevice;
- (id)zonePCSModificationDate;
- (id)zoneishKeyID;
- (id)zoneishProtectionData;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)fillOutPCSMetadataInfo;
- (void)setZonePCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setZoneishPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (struct _OpaquePCSShareProtection { }*)zonePCS;
- (struct _OpaquePCSShareProtection { }*)zoneishPCS;

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
