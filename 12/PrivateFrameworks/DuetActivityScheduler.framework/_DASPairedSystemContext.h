<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_DASPairedSystemContext.h</title>
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

/PrivateFrameworks/DuetActivityScheduler.framework/_DASPairedSystemContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler (1)
 */

@interface _DASPairedSystemContext : NSObject {
    NSObject<OS_dispatch_source> * _appUsageRefreshTimer;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <_CDContext> * _context;
    NSString * _foregroundWatchApp;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    NSString * _identifier;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    NSMutableDictionary * _launchedAppCount;
    NSObject<OS_os_log> * _log;
    id /* block */  _onApplicationStateChange;
    id /* block */  _onConditionsChange;
    NSUserDefaults * _persistence;
    double  _previousBatteryLevel;
    double  _previousDefaultThreshold;
    NSArray * _previousExclusiveIdentifiers;
    NSMutableSet * _previousForegroundApps;
    int  _previousMaxThermalPressure;
    bool  _previousPluginStatus;
    double  _previousSyncThreshold;
    int  _recentTrafficSyncRequests;
    NSMutableDictionary * _recentlyBackgroundedApps;
    NSDictionary * _remoteAppLaunchCount;
    int  _remoteForecastDeletionToken;
    NSMutableDictionary * _watchKitAppStatus;
}

@property (nonatomic, retain) NSObject<OS_dispatch_source> *appUsageRefreshTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) <_CDContext> *context;
@property (retain) NSString *foregroundWatchApp;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlerQueue;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *knowledgeStore;
@property (retain) NSMutableDictionary *launchedAppCount;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, copy) id /* block */ onApplicationStateChange;
@property (nonatomic, copy) id /* block */ onConditionsChange;
@property (nonatomic, retain) NSUserDefaults *persistence;
@property (nonatomic) double previousBatteryLevel;
@property (nonatomic) double previousDefaultThreshold;
@property (retain) NSArray *previousExclusiveIdentifiers;
@property (nonatomic, retain) NSMutableSet *previousForegroundApps;
@property (nonatomic) int previousMaxThermalPressure;
@property (nonatomic) bool previousPluginStatus;
@property (nonatomic) double previousSyncThreshold;
@property (nonatomic) int recentTrafficSyncRequests;
@property (nonatomic, retain) NSMutableDictionary *recentlyBackgroundedApps;
@property (retain) NSDictionary *remoteAppLaunchCount;
@property (nonatomic) int remoteForecastDeletionToken;
@property (nonatomic, retain) NSMutableDictionary *watchKitAppStatus;

+ (id)contextWithClientIdentifier:(id)arg1 callbackQueue:(id)arg2 systemConditionChangeCallback:(id /* block */)arg3 trafficCancelationHandler:(id /* block */)arg4;
+ (void)initialize;
+ (id)stringForPriority:(unsigned long long)arg1;
+ (id)stringForThermalLevel:(int)arg1;

- (void).cxx_destruct;
- (bool)allowSyncTrafficForRecentlyBackgroundedApp;
- (bool)allowsSendingTrafficeForServiceIdentifiers:(id)arg1 atPriorityLevel:(unsigned long long)arg2 isReunionOrInitialSync:(bool)arg3 responseValidityDuration:(double*)arg4;
- (id)appUsageRefreshTimer;
- (bool)batteryLevelsAllowSendingTrafficeForServiceIdentifiers:(id)arg1 atPriorityLevel:(unsigned long long)arg2;
- (id)callbackQueue;
- (id)context;
- (void)deleteRemoteHistogram;
- (bool)didHandleExclusiveAppChange;
- (bool)foregroundApplicationsAllowSendingTrafficForServiceIdentifiers:(id)arg1 atPriorityLevel:(unsigned long long)arg2 furtherChecksNecessary:(bool*)arg3;
- (id)foregroundWatchApp;
- (void)handleAppStateChange;
- (void)handleConditionChange;
- (void)handleWatchAppBackgrounded;
- (id)handlerQueue;
- (id)identifier;
- (id)initWithClientIdentifier:(id)arg1 context:(id)arg2 knowledgeStore:(id)arg3 callbackQueue:(id)arg4 systemConditionChangeCallback:(id /* block */)arg5 trafficCancelationHander:(id /* block */)arg6;
- (bool)isAnyThirdPartyApp:(id)arg1;
- (bool)isWatchPluggedIn;
- (id)knowledgeStore;
- (id)launchedAppCount;
- (id)log;
- (id /* block */)onApplicationStateChange;
- (id /* block */)onConditionsChange;
- (id)pairedDeviceStream;
- (id)persistence;
- (double)previousBatteryLevel;
- (double)previousDefaultThreshold;
- (id)previousExclusiveIdentifiers;
- (id)previousForegroundApps;
- (int)previousMaxThermalPressure;
- (bool)previousPluginStatus;
- (double)previousSyncThreshold;
- (void)readBudgetForRecentlyBackgroundedAppSyncTraffic;
- (int)recentTrafficSyncRequests;
- (id)recentlyBackgroundedApps;
- (void)registerForContextChanges;
- (id)remoteAppLaunchCount;
- (int)remoteForecastDeletionToken;
- (void)resetBudgetForRecentlyBackgroundedAppSyncTraffic;
- (void)setAppUsageRefreshTimer:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setForegroundWatchApp:(id)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKnowledgeStore:(id)arg1;
- (void)setLaunchedAppCount:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setOnApplicationStateChange:(id /* block */)arg1;
- (void)setOnConditionsChange:(id /* block */)arg1;
- (void)setPersistence:(id)arg1;
- (void)setPreviousBatteryLevel:(double)arg1;
- (void)setPreviousDefaultThreshold:(double)arg1;
- (void)setPreviousExclusiveIdentifiers:(id)arg1;
- (void)setPreviousForegroundApps:(id)arg1;
- (void)setPreviousMaxThermalPressure:(int)arg1;
- (void)setPreviousPluginStatus:(bool)arg1;
- (void)setPreviousSyncThreshold:(double)arg1;
- (void)setRecentTrafficSyncRequests:(int)arg1;
- (void)setRecentlyBackgroundedApps:(id)arg1;
- (void)setRemoteAppLaunchCount:(id)arg1;
- (void)setRemoteForecastDeletionToken:(int)arg1;
- (void)setWatchKitAppStatus:(id)arg1;
- (void)setWatchKitStatus:(bool)arg1 forApplication:(id)arg2;
- (bool)shouldBypassApplicationUsage:(id)arg1;
- (bool)thermalLevelsAllowSendingTrafficeForServiceIdentifiers:(id)arg1 atPriorityLevel:(unsigned long long)arg2;
- (bool)thirdPartyAppPolicyAllowsSendingTrafficForServiceIdentifiers:(id)arg1 atPriorityLevel:(unsigned long long)arg2 furtherChecksNecessary:(bool*)arg3;
- (void)updateAppUsageHistory;
- (double)usageLikelihoodForApplication:(id)arg1;
- (double)usageThresholdForPriority:(unsigned long long)arg1 batteryLevel:(int)arg2 isPluggedIn:(bool)arg3;
- (int)watchBatteryLevel;
- (id)watchKitAppStatus;

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
