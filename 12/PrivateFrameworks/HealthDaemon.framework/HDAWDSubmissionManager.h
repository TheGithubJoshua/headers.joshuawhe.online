<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDAWDSubmissionManager.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDAWDSubmissionManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDAWDSubmissionManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    NSMutableArray * _actions;
    _HDAWDPeriodicAction * _fitnessDailyAction;
    int  _fitnessDailyCollectionEnabledNotifyToken;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _serverConnectionsByComponentId;
    bool  _started;
    id /* block */  _testHandler;
}

@property (nonatomic, readonly) double activitySummaryQueryTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ testHandler;

- (void).cxx_destruct;
- (long long)_CDACountWithDatabase:(id)arg1 error:(id*)arg2;
- (id)_aFibSamplesBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)_actions;
- (bool)_activitySummaryForActivitySummaryIndex:(long long)arg1 activitySummaryOut:(id*)arg2 error:(id*)arg3;
- (bool)_addRowCountDeltaToEvent:(id)arg1 profile:(id)arg2 currentDate:(id)arg3;
- (bool)_computeAndSubmitDatabaseStatsMetric:(bool)arg1;
- (bool)_computeAndSubmitFitnessDailyReportWithAction:(id)arg1 force:(bool)arg2;
- (bool)_computeAndSubmitHealthTypesDifferentialPrivacyMetric;
- (bool)_computeAndSubmitHeartDailyAnalyticsWithAction:(id)arg1 force:(bool)arg2;
- (bool)_computeAndSubmitSleepAlarmDailyReportWithAction:(id)arg1 force:(bool)arg2;
- (bool)_computeAndSubmitSleepAlarmStatistics:(bool)arg1;
- (long long)_countOfObjectsWithSQLQuery:(id)arg1 database:(id)arg2 error:(id*)arg3 bindingHandler:(id /* block */)arg4;
- (long long)_deletedRowCountWithDatabase:(id)arg1 error:(id*)arg2;
- (id)_ecgClassificationsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (bool)_enumerateAppleStandHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (id)_exerciseMinuteHoursFromDate:(id)arg1 toDate:(id)arg2 error:(id*)arg3;
- (id)_generateHeartDailyAnalyticsWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)_hasWatchSourcesWithDatabase:(id)arg1 error:(id*)arg2;
- (id)_hourlyStatisticsCollectionForStartDate:(id)arg1 endDate:(id)arg2 quantityType:(id)arg3 statisticsOptions:(unsigned long long)arg4 error:(id*)arg5;
- (long long)_int64ForKeyPrefix:(id)arg1 profile:(id)arg2 date:(id*)arg3 error:(id*)arg4;
- (long long)_manuallyEnteredTypesCountWithDatabase:(id)arg1 error:(id*)arg2;
- (id)_newActivitySummaryQueryHelperWithFilter:(id)arg1 initialResultsHandler:(id /* block */)arg2;
- (long long)_nonAppleSourcesCountWithDatabase:(id)arg1 error:(id*)arg2;
- (long long)_nonAppleSourcesWithDataSince:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (long long)_objectRowCountWithDatabase:(id)arg1 afterRowId:(long long)arg2 error:(id*)arg3;
- (void)_queue_start;
- (void)_queue_updateFitnessDailyCollectionEnabled;
- (void)_registerForFitnessDailyCollection;
- (id)_serverConnectionForComponentId:(unsigned int)arg1;
- (bool)_setInt64:(long long)arg1 keyPrefix:(id)arg2 profile:(id)arg3 date:(id)arg4 error:(id*)arg5;
- (id)_sleepConsistencyEventForMonthPriorToDate:(id)arg1 calendar:(id)arg2;
- (id)_sleepNightEventFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4;
- (id)_sleepSamplesBeforeDate:(id)arg1 days:(long long)arg2 startDate:(id*)arg3 endDate:(id*)arg4 calendar:(id)arg5;
- (id)_statisticsForTimeDeltas:(id)arg1;
- (bool)_submitMetric:(id)arg1 container:(id)arg2 connection:(id)arg3 force:(bool)arg4;
- (bool)_updateDatabaseStatsEvent:(id)arg1 withSizeFromDatabase:(id)arg2 profile:(id)arg3 currentDate:(id)arg4;
- (id)_updateMonthDeltaToInt64:(long long)arg1 forKey:(id)arg2 profile:(id)arg3 currentDate:(id)arg4 error:(id*)arg5;
- (double)activitySummaryQueryTimeout;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (bool)isFitnessDailyCollectionEnabled;
- (id)motionToken;
- (id)profile;
- (void)resetTask:(id)arg1;
- (bool)runTask:(id)arg1 error:(id*)arg2;
- (void)setTestHandler:(id /* block */)arg1;
- (id /* block */)testHandler;
- (void)updateFitnessDailyCollectionEnabled;

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
