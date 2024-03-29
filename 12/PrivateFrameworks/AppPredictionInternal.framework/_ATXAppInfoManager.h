<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_ATXAppInfoManager.h</title>
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

/PrivateFrameworks/AppPredictionInternal.framework/_ATXAppInfoManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal (1)
 */

@interface _ATXAppInfoManager : NSObject {
    NSMutableDictionary * _appInfo;
    _ATXDataStore * _dataStore;
    NSMutableArray * _installDeltaLog;
    _ATXInternalInstallNotification * _installNotificationListener;
    NSString * _lastAppActionLaunch;
    NSDate * _lastAppActionLaunchDate;
    NSString * _lastEnded;
    NSString * _lastLaunch;
    NSDate * _lastLaunchDate;
    NSDate * _lastUnlockDate;
    long long  _launchCount;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwlock;
    long long  _spotlightLaunchCount;
    _ATXInternalUninstallNotification * _uninstallNotificationListener;
}

+ (id)sharedInstance;
+ (id)sortArrayAndComputeMedian:(id)arg1;

- (void).cxx_destruct;
- (void)_addLaunchInfoForBundle:(id)arg1 date:(id)arg2 updateLaunchBlock:(id /* block */)arg3;
- (id)_getInfoOrCreateForBundleId:(id)arg1;
- (bool)_hasBeenLaunchedForBundleId:(id)arg1;
- (void)_setupInMemoryCacheWithAppInfoMapLocked:(id)arg1;
- (void)addAverageSecondsBetweenAppActionsForActionKey:(id)arg1 average:(id)arg2;
- (void)addAverageSecondsBetweenLaunchesForBundleId:(id)arg1 average:(id)arg2;
- (void)addExtensionLaunchForBundleId:(id)arg1 date:(id)arg2;
- (void)addInstallForBundleId:(id)arg1 date:(id)arg2;
- (void)addInstallForBundleInfoMap:(id)arg1;
- (void)addLaunchForAppAction:(id)arg1 date:(id)arg2;
- (void)addLaunchForBundleId:(id)arg1 date:(id)arg2;
- (void)addMedianSecondsBetweenAppActionsForActionKey:(id)arg1 median:(id)arg2;
- (void)addMedianSecondsBetweenLaunchesForBundleId:(id)arg1 median:(id)arg2;
- (void)addScreenLockAtDate:(id)arg1;
- (void)addSpotlightLaunchForBundleId:(id)arg1 date:(id)arg2;
- (id)allActionKeys;
- (id)allApps;
- (id)allAppsWithInstallDate;
- (id)app2VecClusterForBundleId:(id)arg1;
- (id)appInfoForBundleId:(id)arg1;
- (id)averageSecondsBetweenAppActionsForActionKey:(id)arg1;
- (id)averageSecondsBetweenLaunchesForBundleId:(id)arg1;
- (void)clearAppInstallInfo;
- (void)clearAppLaunchInfo;
- (void)computeAverageAndMedianSecondsBetweenAppActions;
- (void)computeAverageAndMedianSecondsBetweenAppActionsWithDuetHelper:(id)arg1;
- (void)computeAverageAndMedianSecondsBetweenAppLaunches;
- (void)computeAverageAndMedianSecondsBetweenAppLaunchesWithDuetHelper:(id)arg1;
- (void)dealloc;
- (id)genreIdForBundleId:(id)arg1;
- (id)genreIdsForBundleId:(id)arg1;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)initWithInMemoryStore;
- (id)lastAppActionLaunch;
- (id)lastAppActionLaunchDate;
- (id)lastAppActionLaunchDateForActionKey:(id)arg1;
- (id)lastAppEnded;
- (id)lastAppLaunch;
- (id)lastAppLaunchDate;
- (id)lastAppLaunchWithHistory:(id)arg1;
- (id)lastLaunchDateForBundleId:(id)arg1;
- (id)lastUnlockDate;
- (long long)launchedAppCount;
- (id)medianSecondsBetweenAppActionsForActionKey:(id)arg1;
- (id)medianSecondsBetweenLaunchesForBundleId:(id)arg1;
- (void)removeActionDataForBundleId:(id)arg1;
- (void)removeAppInfoForBundleId:(id)arg1;
- (void)removeAppInfoForBundleIds:(id)arg1;
- (void)removeAppLaunchesForBundleId:(id)arg1;
- (void)removeInfoForAppAction:(id)arg1;
- (void)removeInfoForAppActions:(id)arg1;
- (void)startInstallDeltaRecording;
- (id)stopInstallDeltaRecording;
- (id)subGenreIdsForBundleId:(id)arg1;
- (id)totalSlotsInDatastore;
- (void)train;
- (void)updateApp2VecClusterForBundleId:(id)arg1 app2VecCluster:(id)arg2;
- (void)updateApp2VecClustersForAllApps;
- (void)updateGenreIdsForAllApps;
- (void)updateGenreIdsForBundleId:(id)arg1 genreId:(id)arg2 subGenreIds:(id)arg3;

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
