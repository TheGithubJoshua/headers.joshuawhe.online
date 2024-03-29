<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FIUIModel.h</title>
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

/PrivateFrameworks/FitnessUI.framework/FIUIModel.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI (1)
 */

@interface FIUIModel : NSObject {
    NSObject<OS_dispatch_queue> * _activityQueryClientQueue;
    NSMutableDictionary * _currentActivityCacheQueryClients;
    NSMutableDictionary * _currentActivitySummaryQueryClients;
    NSDictionary * _currentActivitySummaryQueryCollectionIntervalOverrides;
    HKHealthStore * _healthStore;
    NSHashTable * _observers;
    long long  _queue_activityCacheQueryRetries;
    long long  _queue_activitySummaryQueryRetries;
    HKActivityCache * _queue_currentActivityCacheForClients;
    HKCurrentActivityCacheQuery * _queue_currentActivityCacheQuery;
    HKActivitySummary * _queue_currentActivitySummaryForClients;
    _HKCurrentActivitySummaryQuery * _queue_currentActivitySummaryQuery;
    NSArray * _queue_currentExerciseResults;
    NSArray * _queue_currentMoveResults;
    NSArray * _queue_currentStandResults;
    NSPredicate * _sourcesPredicate;
    NSObject<OS_dispatch_queue> * _sourcesQueue;
    FIUIWeeklyGoalModel * _weeklyGoalModel;
}

@property (nonatomic, retain) NSDictionary *currentActivitySummaryQueryCollectionIntervalOverrides;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) NSPredicate *sourcesPredicate;
@property (nonatomic, readonly) FIUIWeeklyGoalModel *weeklyGoalModel;

+ (id)_dailyTotalsQueryFromDate:(id)arg1 toDate:(id)arg2 dataType:(id)arg3 predicate:(id)arg4 sendUpdates:(bool)arg5 handler:(id /* block */)arg6;
+ (id)activityChartQueryForStartDate:(id)arg1 endDate:(id)arg2 moveintervalSize:(id)arg3 exerciseIntervalSize:(id)arg4 handler:(id /* block */)arg5;
+ (id)dailyTotalQueryForDate:(id)arg1 dataType:(id)arg2 predicate:(id)arg3 sendUpdates:(bool)arg4 handler:(id /* block */)arg5;
+ (bool)isWheelchairUser;

- (void).cxx_destruct;
- (id)_createCurrentActivityCacheQuery;
- (id)_createCurrentActivitySummaryQuery;
- (void)_printStatisticsCollection:(id)arg1;
- (void)_printUpdatedStatistics:(id)arg1;
- (void)_queue_restartCurrentActivityCacheQueryAfterError;
- (void)_queue_restartCurrentActivitySummaryQueryAfterError;
- (void)_setKnownSources:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)basalEnergyBurnTotalForDate:(id)arg1 completion:(id /* block */)arg2;
- (void)basalMetabolicRateForDate:(id)arg1 completion:(id /* block */)arg2;
- (id)currentActivitySummaryQueryCollectionIntervalOverrides;
- (void)executeQuery:(id)arg1;
- (id)healthStore;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCurrentActivitySummaryQueryCollectionIntervalOverrides:(id)arg1;
- (id)sourcesPredicate;
- (id)startCurrentActivityCacheWithChartsQueryWithHandler:(id /* block */)arg1;
- (id)startCurrentActivitySummaryQueryWithHandler:(id /* block */)arg1;
- (void)stopCurrentActivityCacheWithGraphsQueryForClientToken:(id)arg1;
- (void)stopCurrentActivitySummaryQueryForClientToken:(id)arg1;
- (void)stopQuery:(id)arg1;
- (id)weeklyGoalModel;
- (void)weeklySummaryInfoForDate:(id)arg1 withCompletion:(id /* block */)arg2;

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
