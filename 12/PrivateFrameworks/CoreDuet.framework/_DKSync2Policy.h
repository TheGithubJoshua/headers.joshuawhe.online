<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_DKSync2Policy.h</title>
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

/PrivateFrameworks/CoreDuet.framework/_DKSync2Policy.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet (1)
 */

@interface _DKSync2Policy : NSObject {
    unsigned long long  _maxBatchesPerSync;
    unsigned long long  _maxSyncDownIntervalInDays;
    unsigned long long  _maxSyncPeriodInDays;
    unsigned long long  _maxSyncsPerDay;
    unsigned long long  _minSyncIntervalInSeconds;
    unsigned long long  _minSyncWindowInSeconds;
    unsigned long long  _minSyncsPerDay;
    NSString * _name;
    unsigned long long  _numChangesTriggeringSync;
    unsigned long long  _policyDownloadIntervalInDays;
    bool  _pushTriggersSync;
    bool  _requireCharging;
    unsigned long long  _singleDeviceSyncIntervalInDays;
    NSArray * _streamNamesToAlwaysSync;
    NSDictionary * _streamNamesToSync;
    NSArray * _streamNamesWithAdditionsTriggeringSync;
    NSArray * _streamNamesWithDeletionsTriggeringSync;
    unsigned long long  _syncBatchSizeInEvents;
    bool  _syncDisabled;
    unsigned long long  _syncTimeoutInSeconds;
    unsigned long long  _triggeredSyncDelayInSeconds;
    NSNumber * _version;
}

@property (nonatomic) unsigned long long maxBatchesPerSync;
@property (nonatomic) unsigned long long maxSyncDownIntervalInDays;
@property (nonatomic) unsigned long long maxSyncPeriodInDays;
@property (nonatomic) unsigned long long maxSyncsPerDay;
@property (nonatomic) unsigned long long minSyncIntervalInSeconds;
@property (nonatomic) unsigned long long minSyncWindowInSeconds;
@property (nonatomic) unsigned long long minSyncsPerDay;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long numChangesTriggeringSync;
@property (nonatomic) unsigned long long policyDownloadIntervalInDays;
@property (nonatomic) bool pushTriggersSync;
@property (nonatomic) bool requireCharging;
@property (nonatomic) unsigned long long singleDeviceSyncIntervalInDays;
@property (nonatomic, retain) NSArray *streamNamesToAlwaysSync;
@property (nonatomic, retain) NSDictionary *streamNamesToSync;
@property (nonatomic, retain) NSArray *streamNamesWithAdditionsTriggeringSync;
@property (nonatomic, retain) NSArray *streamNamesWithDeletionsTriggeringSync;
@property (nonatomic) unsigned long long syncBatchSizeInEvents;
@property (nonatomic) bool syncDisabled;
@property (nonatomic) unsigned long long syncTimeoutInSeconds;
@property (nonatomic) unsigned long long triggeredSyncDelayInSeconds;
@property (nonatomic, retain) NSNumber *version;

+ (id)_policyForSyncTransportType:(long long)arg1;
+ (bool)cloudSyncDisabled;
+ (id)configurationPlistForFilename:(id)arg1;
+ (id)disabledFeaturesForSyncType:(id)arg1 transports:(long long)arg2;
+ (void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
+ (id)policyCache;
+ (id)policyForSyncTransportType:(long long)arg1;
+ (id)policyFromDictionary:(id)arg1;
+ (void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1;
+ (id)productVersion;
+ (bool)rapportSyncDisabled;
+ (void)setOkToDownloadPolicyUpdates:(bool)arg1;
+ (id)syncPolicyConfigPathForFilename:(id)arg1;
+ (id)userDefaults;

- (void).cxx_destruct;
- (bool)canDeferSyncOperationWithSyncType:(id)arg1;
- (bool)canPerformSyncOperationWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 isCharging:(bool)arg4;
- (id)description;
- (bool)highPriorityForSyncDownWithSyncType:(id)arg1;
- (bool)highPriorityForSyncUpWithSyncType:(id)arg1 lastSyncDate:(id)arg2;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(bool)arg1;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(bool)arg1 urgency:(unsigned long long)arg2;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)maxBatchesPerSync;
- (unsigned long long)maxSyncDownIntervalInDays;
- (unsigned long long)maxSyncPeriodInDays;
- (unsigned long long)maxSyncsPerDay;
- (unsigned long long)minSyncIntervalInSeconds;
- (unsigned long long)minSyncWindowInSeconds;
- (unsigned long long)minSyncsPerDay;
- (id)name;
- (unsigned long long)numChangesTriggeringSync;
- (unsigned long long)policyDownloadIntervalInDays;
- (bool)pushTriggersSync;
- (id)queryStartDateWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3;
- (id)queryStartDateWithSyncType:(id)arg1 lastSyncDate:(id)arg2 lastDaySyncCount:(unsigned long long)arg3 previousHighWaterMark:(id)arg4;
- (id)queryStartDateWithSyncType:(id)arg1 previousHighWaterMark:(id)arg2;
- (bool)requireCharging;
- (void)setMaxBatchesPerSync:(unsigned long long)arg1;
- (void)setMaxSyncDownIntervalInDays:(unsigned long long)arg1;
- (void)setMaxSyncPeriodInDays:(unsigned long long)arg1;
- (void)setMaxSyncsPerDay:(unsigned long long)arg1;
- (void)setMinSyncIntervalInSeconds:(unsigned long long)arg1;
- (void)setMinSyncWindowInSeconds:(unsigned long long)arg1;
- (void)setMinSyncsPerDay:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setNumChangesTriggeringSync:(unsigned long long)arg1;
- (void)setPolicyDownloadIntervalInDays:(unsigned long long)arg1;
- (void)setPushTriggersSync:(bool)arg1;
- (void)setRequireCharging:(bool)arg1;
- (void)setSingleDeviceSyncIntervalInDays:(unsigned long long)arg1;
- (void)setStreamNamesToAlwaysSync:(id)arg1;
- (void)setStreamNamesToSync:(id)arg1;
- (void)setStreamNamesWithAdditionsTriggeringSync:(id)arg1;
- (void)setStreamNamesWithDeletionsTriggeringSync:(id)arg1;
- (void)setSyncBatchSizeInEvents:(unsigned long long)arg1;
- (void)setSyncDisabled:(bool)arg1;
- (void)setSyncTimeoutInSeconds:(unsigned long long)arg1;
- (void)setTriggeredSyncDelayInSeconds:(unsigned long long)arg1;
- (void)setVersion:(id)arg1;
- (unsigned long long)singleDeviceSyncIntervalInDays;
- (id)streamNamesToAlwaysSync;
- (id)streamNamesToSync;
- (id)streamNamesToSyncWithDisabledFeatures:(id)arg1;
- (id)streamNamesToSyncWithSyncType:(id)arg1 transportType:(long long)arg2;
- (id)streamNamesWithAdditionsTriggeringSync;
- (id)streamNamesWithDeletionsTriggeringSync;
- (unsigned long long)syncBatchSizeInEvents;
- (bool)syncDisabled;
- (unsigned long long)syncTimeoutInSeconds;
- (unsigned long long)triggeredSyncDelayInSeconds;
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