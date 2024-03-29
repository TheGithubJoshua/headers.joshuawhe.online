<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_HKFitnessFriendActivitySnapshot.h</title>
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

/Frameworks/HealthKit.framework/_HKFitnessFriendActivitySnapshot.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit (1)
 */

@interface _HKFitnessFriendActivitySnapshot : HKSample <ASCloudKitCodable, HDCoding, NSCopying> {
    double  _activeHours;
    double  _activeHoursGoal;
    double  _briskMinutes;
    double  _briskMinutesGoal;
    double  _energyBurned;
    double  _energyBurnedGoal;
    NSUUID * _friendUUID;
    bool  _hasCarriedForwardGoals;
    double  _pushCount;
    long long  _snapshotIndex;
    NSDate * _snapshotUploadedDate;
    NSUUID * _sourceUUID;
    double  _stepCount;
    NSNumber * _timeZoneOffsetFromUTCForNoon;
    double  _walkingAndRunningDistance;
    long long  _wheelchairUse;
}

@property (nonatomic) double activeHours;
@property (nonatomic) double activeHoursGoal;
@property (nonatomic, readonly) double activeHoursGoalPercentage;
@property (nonatomic) double briskMinutes;
@property (nonatomic) double briskMinutesGoal;
@property (nonatomic, readonly) double briskMinutesGoalPercentage;
@property (nonatomic, readonly) ASCodableCloudKitActivitySnapshot *codableSnapshot;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double energyBurned;
@property (nonatomic) double energyBurnedGoal;
@property (nonatomic, readonly) double energyBurnedGoalPercentage;
@property (nonatomic, retain) NSUUID *friendUUID;
@property (nonatomic) bool hasCarriedForwardGoals;
@property (readonly) unsigned long long hash;
@property (nonatomic) double pushCount;
@property (nonatomic) long long snapshotIndex;
@property (nonatomic, retain) NSDate *snapshotUploadedDate;
@property (nonatomic, retain) NSUUID *sourceUUID;
@property (nonatomic) double stepCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, retain) NSNumber *timeZoneOffsetFromUTCForNoon;
@property (nonatomic) double walkingAndRunningDistance;
@property (nonatomic) long long wheelchairUse;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_fitnessFriendActivitySnapshotWithFriendUUID:(id)arg1 sourceUUID:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 snapshotIndex:(long long)arg5 snapshotUploadedDate:(id)arg6;
+ (id)_fitnessFriendActivitySnapshotWithSnapshotIndex:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 sourceUUID:(id)arg4;
+ (id)_mostSignificantSnapshotAmongSnapshots:(id)arg1;
+ (id)snapshotWithActivitySummary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)activeHours;
- (double)activeHoursGoal;
- (double)activeHoursGoalPercentage;
- (id)activitySummary;
- (double)briskMinutes;
- (double)briskMinutesGoal;
- (double)briskMinutesGoalPercentage;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)energyBurned;
- (double)energyBurnedGoal;
- (double)energyBurnedGoalPercentage;
- (id)friendUUID;
- (bool)hasCarriedForwardGoals;
- (id)initWithCoder:(id)arg1;
- (double)pushCount;
- (void)setActiveHours:(double)arg1;
- (void)setActiveHoursGoal:(double)arg1;
- (void)setBriskMinutes:(double)arg1;
- (void)setBriskMinutesGoal:(double)arg1;
- (void)setEnergyBurned:(double)arg1;
- (void)setEnergyBurnedGoal:(double)arg1;
- (void)setFriendUUID:(id)arg1;
- (void)setHasCarriedForwardGoals:(bool)arg1;
- (void)setPushCount:(double)arg1;
- (void)setSnapshotIndex:(long long)arg1;
- (void)setSnapshotUploadedDate:(id)arg1;
- (void)setSourceUUID:(id)arg1;
- (void)setStepCount:(double)arg1;
- (void)setTimeZoneOffsetFromUTCForNoon:(id)arg1;
- (void)setWalkingAndRunningDistance:(double)arg1;
- (void)setWheelchairUse:(long long)arg1;
- (long long)snapshotIndex;
- (id)snapshotUploadedDate;
- (id)sourceUUID;
- (double)stepCount;
- (id)timeZone;
- (id)timeZoneOffsetFromUTCForNoon;
- (double)walkingAndRunningDistance;
- (long long)wheelchairUse;

// Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing

+ (id)_fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2 uploadedDate:(id)arg3;
+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1;
+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2;
+ (id)fitnessFriendActivitySnapshotWithCodableSnapshot:(id)arg1 friendUUID:(id)arg2 uploadedDate:(id)arg3;
+ (struct _HKFitnessFriendActivitySnapshot { Class x1; }*)fitnessFriendActivitySnapshotWithRecord:(id)arg1 friendUUID:(id)arg2;

- (id)codableSnapshot;
- (id)recordWithZoneID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

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
