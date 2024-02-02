<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKOperationGroup.h</title>
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

/Frameworks/CloudKit.framework/CKOperationGroup.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit (736.235)
 */

@interface CKOperationGroup : NSObject <NSSecureCoding> {
    NSString * _authPromptReason;
    CKOperationConfiguration * _defaultConfiguration;
    long long  _expectedReceiveSize;
    long long  _expectedSendSize;
    NSString * _name;
    NSString * _operationGroupID;
    NSNumber * _quantityNumber;
    CKOperationGroupSystemImposedInfo * _systemImposedInfo;
}

@property (nonatomic, readonly) long long approximateReceiveBytes;
@property (nonatomic, readonly) long long approximateSendBytes;
@property (copy) NSString *authPromptReason;
@property (copy) CKOperationConfiguration *defaultConfiguration;
@property long long expectedReceiveSize;
@property long long expectedSendSize;
@property (copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *operationGroupID;
@property unsigned long long quantity;
@property (nonatomic, copy) NSNumber *quantityNumber;
@property (nonatomic, retain) CKOperationGroupSystemImposedInfo *systemImposedInfo;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (long long)_approximateBytesForTransferSize:(long long)arg1;
- (long long)approximateReceiveBytes;
- (long long)approximateSendBytes;
- (id)authPromptReason;
- (id)defaultConfiguration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedReceiveSize;
- (long long)expectedSendSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)operationGroupID;
- (unsigned long long)quantity;
- (id)quantityNumber;
- (unsigned long long)resolvedNetworkServiceTypeForConfig:(id)arg1;
- (void)setAuthPromptReason:(id)arg1;
- (void)setDefaultConfiguration:(id)arg1;
- (void)setExpectedReceiveSize:(long long)arg1;
- (void)setExpectedSendSize:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setQuantity:(unsigned long long)arg1;
- (void)setQuantityNumber:(id)arg1;
- (void)setSystemImposedInfo:(id)arg1;
- (id)systemImposedInfo;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)br_downloadConflictingVersions;
+ (id)br_downloadOpportunistic;
+ (id)br_downloadOptimizeStorageOff;
+ (id)br_downloadThumbnails;
+ (id)br_downloadThumbnailsUserInitiated;
+ (id)br_downloadUpdatedDocuments;
+ (id)br_downloadUserInitiated;
+ (id)br_fetchIdentityXPC;
+ (id)br_fetchNonLocalVersions;
+ (id)br_publishingRequest;
+ (id)br_purge;
+ (id)br_quotaUpdateUploader;
+ (id)br_quotaUpdateXPC;
+ (id)br_sharingMisc;
+ (id)br_syncDown;
+ (id)br_syncDownAppLaunch;
+ (id)br_syncDownAppLibraryMetadata;
+ (id)br_syncDownInitial;
+ (id)br_syncDownPeriodic;
+ (id)br_syncDownPushTriggered;
+ (id)br_syncDownZoneHealth;
+ (id)br_syncUp;
+ (id)br_syncUpAndDownShareDB;
+ (id)br_syncUpAppLibraryMetadata;
+ (id)br_syncUpZoneHealth;
+ (id)br_upload;
+ (id)br_zoneConsolidation;
+ (id)br_zoneConsolidationManual;
+ (id)br_zoneHealthSimulation;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)pk_operationGroupWithName:(id)arg1;
+ (id)pk_operationGroupWithName:(id)arg1 suffix:(id)arg2;

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