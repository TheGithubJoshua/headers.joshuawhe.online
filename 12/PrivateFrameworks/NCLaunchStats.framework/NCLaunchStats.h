<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NCLaunchStats.h</title>
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

/PrivateFrameworks/NCLaunchStats.framework/NCLaunchStats.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NCLaunchStats.framework/NCLaunchStats (1)
 */

@interface NCLaunchStats : NSObject {
    NSMutableDictionary * _appUpdateTimes;
    NSMutableDictionary * _appsRequestingRefresh;
    id /* block */  _asyncRecommendHandler;
    _DASActivity * _historyDeletionActivity;
    NSObject<OS_os_log> * _ncLog;
    _DKPredictionTimeline * _predictionTimeline;
    _DASActivity * _predictionUpdateActivity;
    _DKPredictor * _predictor;
    <_DASActivityScheduler> * _scheduler;
    <_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> * _store;
    NSObject<OS_dispatch_queue> * _syncQueue;
    _DASActivity * _widgetPrewarmActivity;
    _DKEventStream * _widgetStream;
    NSMutableDictionary * _widgetViewTime;
    int  appSpecificTriggerToken;
    bool  backgroundAppRefreshSwitchedOn;
    CDAttribute * bundleAttr;
    int  classCLockedToken;
    int  generatePredictionToken;
    bool  isClassCLocked;
    double  kTimeGuardBand;
    NSMutableDictionary * launchTracker;
    long long  numPrewarmedLaunches;
    long long  numRepeatedPrewarms;
    int  predictedWidgetsToken;
    NSMutableDictionary * prewarmDurationTracker;
    NSMutableDictionary * prewarmTimeTracker;
    NSMutableDictionary * seqTracker;
    CDSession * sessionDuet;
}

@property (nonatomic, retain) NSMutableDictionary *appUpdateTimes;
@property (nonatomic, retain) NSMutableDictionary *appsRequestingRefresh;
@property (nonatomic, copy) id /* block */ asyncRecommendHandler;
@property (nonatomic, retain) _DASActivity *historyDeletionActivity;
@property (nonatomic, retain) NSObject<OS_os_log> *ncLog;
@property (nonatomic, retain) _DKPredictionTimeline *predictionTimeline;
@property (nonatomic, retain) _DASActivity *predictionUpdateActivity;
@property (nonatomic, retain) _DKPredictor *predictor;
@property (nonatomic, retain) <_DASActivityScheduler> *scheduler;
@property (nonatomic, retain) <_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeQuerying> *store;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, retain) _DASActivity *widgetPrewarmActivity;
@property (nonatomic, retain) _DKEventStream *widgetStream;
@property (nonatomic, retain) NSMutableDictionary *widgetViewTime;

// Image: /System/Library/PrivateFrameworks/NCLaunchStats.framework/NCLaunchStats

+ (double)minTimeBetweenRefreshes;
+ (void)scheduleDeletionActivity:(id)arg1 store:(id)arg2 stream:(id)arg3;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)appUpdateTimes;
- (id)appsRequestingRefresh;
- (id /* block */)asyncRecommendHandler;
- (bool)canUpdateWidgetsUnsafe;
- (void)cancelRequestedRefreshForWidget:(id)arg1;
- (void)dealloc;
- (id)earliestRequestedRefresh:(id)arg1 atDate:(id)arg2;
- (void)endEvent:(id)arg1;
- (id)historyDeletionActivity;
- (bool)immediateUpdatesAllowedForWidgetUnsafe:(id)arg1;
- (id)init;
- (void)initAfterClassCUnlocked;
- (id)initWithKnowledgeStore:(id)arg1;
- (id)ncLog;
- (id)nextPredictedRefreshDate:(id)arg1 afterDate:(id)arg2;
- (void)preWarmHasEnded:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (void)preWarmHasStarted:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (id)predictedWidgetUsage;
- (id)predictedWidgetsForDate:(id)arg1 withTimeline:(id)arg2;
- (id)predictionTimeline;
- (id)predictionUpdateActivity;
- (id)predictor;
- (void)recordPrewarmStatisticsRaw:(id)arg1;
- (void)requestRefreshForWidget:(id)arg1 afterDate:(id)arg2;
- (void)schedulePredictionUpdateBeforeDate:(id)arg1;
- (void)scheduleWidgetRefresh:(id)arg1 withRequestedRefreshes:(id)arg2;
- (void)scheduleWidgetRefresh:(id)arg1 withRequestedRefreshes:(id)arg2 cancelExisting:(bool)arg3;
- (id)scheduler;
- (void)setAppUpdateTimes:(id)arg1;
- (void)setAppsRequestingRefresh:(id)arg1;
- (void)setAsyncRecommendHandler:(id /* block */)arg1;
- (void)setHistoryDeletionActivity:(id)arg1;
- (void)setNCLaunchRecommendationHandler:(id /* block */)arg1;
- (void)setNCLaunchRecommendationHandlerWithCompletion:(id /* block */)arg1;
- (void)setNcLog:(id)arg1;
- (void)setPredictionTimeline:(id)arg1;
- (void)setPredictionUpdateActivity:(id)arg1;
- (void)setPredictor:(id)arg1;
- (void)setScheduler:(id)arg1;
- (void)setStore:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setWidgetPrewarmActivity:(id)arg1;
- (void)setWidgetStream:(id)arg1;
- (void)setWidgetViewTime:(id)arg1;
- (void)startEvent:(id)arg1;
- (id)store;
- (id)syncQueue;
- (void)unprotectedRemoveAllRequestsBeforeDate:(id)arg1;
- (void)unprotectedRemoveRequestsForWidget:(id)arg1 beforeDate:(id)arg2;
- (void)updateBARSwitch;
- (void)updateWidgetsAtDate:(id)arg1 withTimeline:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)widgetPrewarmActivity;
- (id)widgetStream;
- (id)widgetViewTime;
- (id)widgetsToRefreshAtDate:(id)arg1 withTimeline:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets

+ (void)wg_configureSharedInstanceWithRecommendationHandler:(id /* block */)arg1;
+ (id)wg_sharedInstance;

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