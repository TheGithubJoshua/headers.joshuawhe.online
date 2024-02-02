<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ACHActivityAwardingDataProvider.h</title>
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

/PrivateFrameworks/ActivityAchievements.framework/ACHActivityAwardingDataProvider.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements (1)
 */

@interface ACHActivityAwardingDataProvider : NSObject <NSCopying> {
    long long  _lastCheckedIndexForAllGoals;
    long long  _lastCheckedIndexForDistance;
    long long  _lastCheckedIndexForExercise;
    long long  _lastCheckedIndexForMove;
    long long  _lastCheckedIndexForStand;
    HKQuantity * _lastProcessedTodayExerciseValue;
    HKQuantity * _lastProcessedTodayMoveValue;
    HKQuantity * _lastProcessedTodayStandValue;
    HKQuantity * _lastTodayDistanceValue;
    HKQuantity * _lastTodayExerciseGoal;
    HKQuantity * _lastTodayMoveGoal;
    HKQuantity * _lastTodayStandGoal;
    HKQuantity * _previousProcessedTodayExerciseValue;
    HKQuantity * _previousProcessedTodayMoveValue;
    HKQuantity * _previousProcessedTodayStandValue;
    ACHDataStoreActivityProperties * _properties;
    HKActivitySummary * _todayActivitySummary;
    HKQuantity * _todayDistanceValue;
    HKActivitySummary * _yesterdayActivitySummary;
}

@property (nonatomic) long long lastCheckedIndexForAllGoals;
@property (nonatomic) long long lastCheckedIndexForDistance;
@property (nonatomic) long long lastCheckedIndexForExercise;
@property (nonatomic) long long lastCheckedIndexForMove;
@property (nonatomic) long long lastCheckedIndexForStand;
@property (nonatomic, retain) HKQuantity *lastProcessedTodayExerciseValue;
@property (nonatomic, retain) HKQuantity *lastProcessedTodayMoveValue;
@property (nonatomic, retain) HKQuantity *lastProcessedTodayStandValue;
@property (nonatomic, retain) HKQuantity *lastTodayDistanceValue;
@property (nonatomic, retain) HKQuantity *lastTodayExerciseGoal;
@property (nonatomic, retain) HKQuantity *lastTodayMoveGoal;
@property (nonatomic, retain) HKQuantity *lastTodayStandGoal;
@property (nonatomic, retain) HKQuantity *previousProcessedTodayExerciseValue;
@property (nonatomic, retain) HKQuantity *previousProcessedTodayMoveValue;
@property (nonatomic, retain) HKQuantity *previousProcessedTodayStandValue;
@property (nonatomic, readonly) ACHDataStoreActivityProperties *properties;
@property (nonatomic, retain) HKActivitySummary *todayActivitySummary;
@property (nonatomic, readonly) HKQuantity *todayDistanceValue;
@property (nonatomic, readonly) HKQuantity *todayExerciseGoal;
@property (nonatomic, readonly) HKQuantity *todayExerciseValue;
@property (nonatomic, readonly) long long todayIndex;
@property (nonatomic, readonly) HKQuantity *todayMoveGoal;
@property (nonatomic, readonly) HKQuantity *todayMoveValue;
@property (nonatomic, readonly) HKQuantity *todayStandGoal;
@property (nonatomic, readonly) HKQuantity *todayStandValue;
@property (nonatomic, retain) HKActivitySummary *yesterdayActivitySummary;
@property (nonatomic, readonly) HKQuantity *yesterdayExerciseGoal;
@property (nonatomic, readonly) HKQuantity *yesterdayExerciseValue;
@property (nonatomic, readonly) HKQuantity *yesterdayMoveGoal;
@property (nonatomic, readonly) HKQuantity *yesterdayMoveValue;
@property (nonatomic, readonly) HKQuantity *yesterdayStandGoal;
@property (nonatomic, readonly) HKQuantity *yesterdayStandValue;

- (void).cxx_destruct;
- (bool)allGoalsMetToday;
- (void)clearAllProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; long long x8; long long x9; long long x10; long long x11; double x12; double x13; bool x14; bool x15; double x16; })currentExerciseState;
- (struct { long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; long long x8; long long x9; long long x10; long long x11; double x12; double x13; bool x14; bool x15; double x16; })currentMoveState;
- (struct { long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; long long x8; long long x9; long long x10; long long x11; double x12; double x13; bool x14; bool x15; double x16; })currentStandState;
- (struct { long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; long long x8; long long x9; long long x10; long long x11; double x12; double x13; bool x14; bool x15; double x16; })currentStateForGoalType:(long long)arg1;
- (id)init;
- (long long)lastCheckedIndexForAllGoals;
- (long long)lastCheckedIndexForDistance;
- (long long)lastCheckedIndexForExercise;
- (long long)lastCheckedIndexForMove;
- (long long)lastCheckedIndexForStand;
- (id)lastProcessedTodayExerciseValue;
- (id)lastProcessedTodayMoveValue;
- (id)lastProcessedTodayStandValue;
- (id)lastTodayDistanceValue;
- (id)lastTodayExerciseGoal;
- (id)lastTodayMoveGoal;
- (id)lastTodayStandGoal;
- (id)previousProcessedTodayExerciseValue;
- (id)previousProcessedTodayMoveValue;
- (id)previousProcessedTodayStandValue;
- (id)properties;
- (void)setLastCheckedIndex:(long long)arg1;
- (void)setLastCheckedIndexForAllGoals:(long long)arg1;
- (void)setLastCheckedIndexForDistance:(long long)arg1;
- (void)setLastCheckedIndexForExercise:(long long)arg1;
- (void)setLastCheckedIndexForMove:(long long)arg1;
- (void)setLastCheckedIndexForStand:(long long)arg1;
- (void)setLastProcessedTodayExerciseValue:(id)arg1;
- (void)setLastProcessedTodayMoveValue:(id)arg1;
- (void)setLastProcessedTodayStandValue:(id)arg1;
- (void)setLastTodayDistanceValue:(id)arg1;
- (void)setLastTodayExerciseGoal:(id)arg1;
- (void)setLastTodayMoveGoal:(id)arg1;
- (void)setLastTodayStandGoal:(id)arg1;
- (void)setNewExerciseState:(struct { long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; long long x8; long long x9; long long x10; long long x11; double x12; double x13; bool x14; bool x15; double x16; })arg1;
- (void)setNewMoveState:(struct { long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; long long x8; long long x9; long long x10; long long x11; double x12; double x13; bool x14; bool x15; double x16; })arg1;
- (void)setNewStandState:(struct { long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; long long x8; long long x9; long long x10; long long x11; double x12; double x13; bool x14; bool x15; double x16; })arg1;
- (void)setNewState:(struct { long long x1; long long x2; double x3; double x4; double x5; double x6; double x7; long long x8; long long x9; long long x10; long long x11; double x12; double x13; bool x14; bool x15; double x16; })arg1 forGoalType:(long long)arg2;
- (void)setPreviousProcessedTodayExerciseValue:(id)arg1;
- (void)setPreviousProcessedTodayMoveValue:(id)arg1;
- (void)setPreviousProcessedTodayStandValue:(id)arg1;
- (void)setTodayActivitySummary:(id)arg1;
- (void)setYesterdayActivitySummary:(id)arg1;
- (id)todayActivitySummary;
- (id)todayDistanceValue;
- (id)todayExerciseGoal;
- (id)todayExerciseValue;
- (long long)todayIndex;
- (id)todayMoveGoal;
- (id)todayMoveValue;
- (id)todayStandGoal;
- (id)todayStandValue;
- (void)updatePreviousPropertiesWithCurrentProperties;
- (id)yesterdayActivitySummary;
- (id)yesterdayExerciseGoal;
- (id)yesterdayExerciseValue;
- (id)yesterdayMoveGoal;
- (id)yesterdayMoveValue;
- (id)yesterdayStandGoal;
- (id)yesterdayStandValue;

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