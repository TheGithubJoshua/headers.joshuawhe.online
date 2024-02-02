<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SUDescriptor.h</title>
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

/PrivateFrameworks/SoftwareUpdateServices.framework/SUDescriptor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices (1)
 */

@interface SUDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _assetID;
    bool  _autoDownloadAllowableForCellular;
    bool  _autoUpdateEnabled;
    NSString * _criticalDownloadPolicy;
    bool  _criticalOutOfBoxOnly;
    bool  _disableAppDemotion;
    bool  _disableCDLevel4;
    bool  _disableIntallTonight;
    bool  _disableSiriVoiceDeletion;
    SUDocumentation * _documentation;
    bool  _downloadAllowableForCellular;
    unsigned long long  _downloadSize;
    bool  _downloadable;
    bool  _downloadableOverCellular;
    NSString * _humanReadableUpdateName;
    unsigned long long  _installationSize;
    unsigned long long  _mdmDelayInterval;
    unsigned long long  _minimumSystemPartitionSize;
    unsigned long long  _msuPrepareSize;
    NSString * _productBuildVersion;
    NSString * _productSystemName;
    NSString * _productVersion;
    NSString * _publisher;
    bool  _rampEnabled;
    NSDate * _releaseDate;
    NSString * _releaseType;
    NSData * _rsepDigest;
    NSData * _sepDigest;
    NSString * _setupCritical;
    bool  _streamingZipCapable;
    NSDictionary * _systemPartitionPadding;
    unsigned long long  _unarchiveSize;
    int  _updateType;
}

@property (nonatomic, retain) NSString *assetID;
@property (nonatomic) bool autoDownloadAllowableForCellular;
@property (nonatomic) bool autoUpdateEnabled;
@property (nonatomic, retain) NSString *criticalDownloadPolicy;
@property (nonatomic) bool criticalOutOfBoxOnly;
@property (getter=appDemotionDisabled, setter=_setDisableAppDemotion:, nonatomic) bool disableAppDemotion;
@property (getter=cdLevel4Disabled, setter=_setDisableCDLevel4:, nonatomic) bool disableCDLevel4;
@property (getter=installTonightDisabled, setter=_setDisableInstallTonight:, nonatomic) bool disableInstallTonight;
@property (getter=siriVoiceDeletionDisabled, setter=_setDisableSiriVoiceDeletion:, nonatomic) bool disableSiriVoiceDeletion;
@property (nonatomic, retain) SUDocumentation *documentation;
@property (nonatomic) unsigned long long downloadSize;
@property (getter=isDownloadable, nonatomic) bool downloadable;
@property (getter=isDownloadableOverCellular, nonatomic) bool downloadableOverCellular;
@property (nonatomic) unsigned long long installationSize;
@property (nonatomic) unsigned long long mdmDelayInterval;
@property (nonatomic) unsigned long long minimumSystemPartitionSize;
@property (getter=_msuPrepareSize, setter=_setMsuPrepareSize:, nonatomic) unsigned long long msuPrepareSize;
@property (nonatomic, retain) NSString *productBuildVersion;
@property (nonatomic, retain) NSString *productSystemName;
@property (nonatomic, retain) NSString *productVersion;
@property (nonatomic, retain) NSString *publisher;
@property (nonatomic) bool rampEnabled;
@property (nonatomic, retain) NSDate *releaseDate;
@property (nonatomic, retain) NSString *releaseType;
@property (setter=setRSEPDigest:, nonatomic, retain) NSData *rsepDigest;
@property (setter=setSEPDigest:, nonatomic, retain) NSData *sepDigest;
@property (nonatomic, retain) NSString *setupCritical;
@property (getter=_isStreamingZipCapable, setter=_setStreamingZipCapable:, nonatomic) bool streamingZipCapable;
@property (nonatomic, retain) NSDictionary *systemPartitionPadding;
@property (getter=_unarchiveSize, setter=_setUnarchiveSize:, nonatomic) unsigned long long unarchiveSize;
@property (nonatomic) int updateType;

+ (bool)supportsSecureCoding;

- (id)_buildCompareKey;
- (bool)_hasValue:(id)arg1;
- (bool)_isStreamingZipCapable;
- (unsigned long long)_msuPrepareSize;
- (void)_setDisableAppDemotion:(bool)arg1;
- (void)_setDisableCDLevel4:(bool)arg1;
- (void)_setDisableInstallTonight:(bool)arg1;
- (void)_setDisableSiriVoiceDeletion:(bool)arg1;
- (void)_setMsuPrepareSize:(unsigned long long)arg1;
- (void)_setStreamingZipCapable:(bool)arg1;
- (void)_setUnarchiveSize:(unsigned long long)arg1;
- (unsigned long long)_unarchiveSize;
- (bool)appDemotionDisabled;
- (id)assetID;
- (bool)autoDownloadAllowableForCellular;
- (bool)autoUpdateEnabled;
- (bool)cdLevel4Disabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criticalDownloadPolicy;
- (bool)criticalOutOfBoxOnly;
- (void)dealloc;
- (id)description;
- (id)documentation;
- (unsigned long long)downloadSize;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)humanReadableUpdateName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)installTonightDisabled;
- (unsigned long long)installationSize;
- (bool)isDownloadable;
- (bool)isDownloadableOverCellular;
- (bool)isEmergencyOrCritical;
- (bool)isEqual:(id)arg1;
- (bool)isValidDescriptor;
- (unsigned long long)mdmDelayInterval;
- (unsigned long long)minimumSystemPartitionSize;
- (unsigned long long)preparationSize;
- (id)productBuildVersion;
- (id)productSystemName;
- (id)productVersion;
- (id)publisher;
- (bool)rampEnabled;
- (id)releaseDate;
- (id)releaseType;
- (id)rsepDigest;
- (id)sepDigest;
- (void)setAssetID:(id)arg1;
- (void)setAutoDownloadAllowableForCellular:(bool)arg1;
- (void)setAutoUpdateEnabled:(bool)arg1;
- (void)setCriticalDownloadPolicy:(id)arg1;
- (void)setCriticalOutOfBoxOnly:(bool)arg1;
- (void)setDocumentation:(id)arg1;
- (void)setDownloadSize:(unsigned long long)arg1;
- (void)setDownloadable:(bool)arg1;
- (void)setDownloadableOverCellular:(bool)arg1;
- (void)setInstallationSize:(unsigned long long)arg1;
- (void)setMdmDelayInterval:(unsigned long long)arg1;
- (void)setMinimumSystemPartitionSize:(unsigned long long)arg1;
- (void)setProductBuildVersion:(id)arg1;
- (void)setProductSystemName:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setPublisher:(id)arg1;
- (void)setRSEPDigest:(id)arg1;
- (void)setRampEnabled:(bool)arg1;
- (void)setReleaseDate:(id)arg1;
- (void)setReleaseType:(id)arg1;
- (void)setSEPDigest:(id)arg1;
- (void)setSetupCritical:(id)arg1;
- (void)setSystemPartitionPadding:(id)arg1;
- (void)setUpdateType:(int)arg1;
- (id)setupCritical;
- (bool)siriVoiceDeletionDisabled;
- (id)systemPartitionPadding;
- (unsigned long long)totalRequiredFreeSpace;
- (int)updateType;
- (id)updateTypeName;

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