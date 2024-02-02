<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTKWellnessEntryModel.h</title>
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

/PrivateFrameworks/NanoTimeKitCompanion.framework/NTKWellnessEntryModel.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion (1)
 */

@interface NTKWellnessEntryModel : NTKTimelineEntryModel <CLKTimelineEntry, NSCopying> {
    HKQuantity * _activeEnergyGoal;
    HKQuantity * _activeEnergyTotal;
    double  _briskMinutesGoal;
    double  _briskMinutesTotal;
    bool  _databaseLoading;
    bool  _deviceLocked;
    NSArray * _exerciseChartData;
    NSArray * _moveChartData;
    NSArray * _standChartData;
    long long  _standHoursGoal;
    long long  _standHoursTotal;
}

@property (nonatomic, retain) HKQuantity *activeEnergyGoal;
@property (nonatomic, retain) HKQuantity *activeEnergyTotal;
@property (nonatomic) double briskMinutesGoal;
@property (nonatomic) double briskMinutesTotal;
@property (nonatomic) bool databaseLoading;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool deviceLocked;
@property (nonatomic, retain) NSArray *exerciseChartData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *moveChartData;
@property (nonatomic, retain) NSArray *standChartData;
@property (nonatomic) long long standHoursGoal;
@property (nonatomic) long long standHoursTotal;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool userHasDoneActivitySetup;

+ (id)_LocalizedStringWithActiveEnergy:(id)arg1;
+ (id)_activityTemplateWithFamily:(long long)arg1 entryModel:(id)arg2;
+ (id)_signatureBezelFromModel:(id)arg1;
+ (id)_signatureCornerFromModel:(id)arg1;
+ (id)_signatureRectangleFromModel:(id)arg1;
+ (id)formattingManager;
+ (id)idealizedEntryModel;
+ (id)largeModular:(id)arg1;
+ (id)largeUtility:(id)arg1;
+ (id)lockedEntryModel;

- (void).cxx_destruct;
- (id)activeEnergyGoal;
- (double)activeEnergyGoalCompletionPercentage;
- (id)activeEnergyTotal;
- (long long)availabilityState;
- (double)briskMinuteGoalCompletionPercentage;
- (double)briskMinutesGoal;
- (double)briskMinutesTotal;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)databaseLoading;
- (id)date;
- (id)debugDescription;
- (id)description;
- (bool)deviceLocked;
- (id)exerciseChartData;
- (id)moveChartData;
- (void)setActiveEnergyGoal:(id)arg1;
- (void)setActiveEnergyTotal:(id)arg1;
- (void)setBriskMinutesGoal:(double)arg1;
- (void)setBriskMinutesTotal:(double)arg1;
- (void)setDatabaseLoading:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setExerciseChartData:(id)arg1;
- (void)setMoveChartData:(id)arg1;
- (void)setStandChartData:(id)arg1;
- (void)setStandHoursGoal:(long long)arg1;
- (void)setStandHoursTotal:(long long)arg1;
- (id)standChartData;
- (double)standHourGoalCompletionPercentage;
- (long long)standHoursGoal;
- (long long)standHoursTotal;
- (id)templateForComplicationFamily:(long long)arg1;
- (bool)userHasDoneActivitySetup;

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