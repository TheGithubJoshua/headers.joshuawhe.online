<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FCUserInfo.h</title>
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

/PrivateFrameworks/NewsCore.framework/FCUserInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore (2166)
 */

@interface FCUserInfo : FCPrivateDataController <FCTagSettingsDelegate> {
    bool  _iCloudAccountChanged;
    NSDictionary * _readOnlyUserInfo;
    FCTagSettings * _tagSettings;
    bool  _useParsecResults;
    FCMTWriterLock * _userInfoLock;
}

@property (nonatomic, copy) NSDate *aLaCarteSubscriptionMeteredCountLastResetDate;
@property (nonatomic, copy) NSDate *bundleSubscriptionMeteredCountLastResetDate;
@property (nonatomic, copy) NSString *canonicalLanguage;
@property (nonatomic, copy) NSDate *dateLastOpened;
@property (nonatomic, readonly) NSDate *dateLastViewedSaved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *editorialArticleVersion;
@property (nonatomic, copy) NSString *feldsparID;
@property (nonatomic) bool hasShownProgressivePersonalizationWelcomeBrick;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool iCloudAccountChanged;
@property (nonatomic) bool marketingNotificationsEnabled;
@property (nonatomic, readonly) bool mightNeedToUpdateOnboardingVersion;
@property (nonatomic, copy) NSNumber *monthlyALaCarteSubscriptionMeteredCount;
@property (nonatomic, copy) NSNumber *monthlyBundleSubscriptionMeteredCount;
@property (nonatomic) bool newIssueNotificationsEnabled;
@property (nonatomic, readonly, copy) NSString *notificationsUserID;
@property (nonatomic, copy) NSNumber *onboardingVersionNumber;
@property (nonatomic, readonly) unsigned long long progressivePersonalization;
@property (nonatomic, retain) NSDictionary *readOnlyUserInfo;
@property (nonatomic, readonly) bool shouldShowDefaultForYou;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCTagSettings *tagSettings;
@property (nonatomic, readonly) bool useParsecResults;
@property (nonatomic) bool userHasCompletedFavoritesSetup;
@property (nonatomic, retain) FCMTWriterLock *userInfoLock;
@property (nonatomic, copy) NSDate *userStartDate;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)backingRecordIDs;
+ (id)backingRecordZoneIDs;
+ (long long)commandQueueUrgency;
+ (id)commandStoreFileName;
+ (id)commandsToMergeLocalDataToCloud:(id)arg1;
+ (id)desiredKeys;
+ (id)iCloudDataKeys;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (id)overrideFeldsparID;
+ (bool)requiresBatchedSync;
+ (bool)requiresHighPriorityFirstSync;
+ (bool)requiresPushNotificationSupport;
+ (id)userInfoCKRecordFromUserInfoDictionary:(id)arg1;

- (void).cxx_destruct;
- (void)_modifyUserInfoWithBlock:(id /* block */)arg1;
- (void)_persistNotificationsUserID:(id)arg1;
- (void)_removeiCloudDataValues;
- (void)_setUserInfoValue:(id)arg1 forKey:(id)arg2;
- (id)_userInfoValueForKey:(id)arg1;
- (id)aLaCarteSubscriptionMeteredCountLastResetDate;
- (void)accessTokenDidChangeForTagID:(id)arg1;
- (void)accessTokenRemovedForTagID:(id)arg1 userInitiated:(bool)arg2;
- (void)addModifyTagSettingsCommandToCommandQueue:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)asCKRecord;
- (id)bundleSubscriptionMeteredCountLastResetDate;
- (bool)canHelpRestoreZoneName:(id)arg1;
- (id)canonicalLanguage;
- (id)dateLastOpened;
- (id)dateLastViewedSaved;
- (id)editorialArticleVersion;
- (id)feldsparID;
- (void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;
- (void)handleSyncWithUserInfoRecord:(id)arg1;
- (bool)hasShownProgressivePersonalizationWelcomeBrick;
- (bool)iCloudAccountChanged;
- (id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 iCloudAccountChanged:(bool)arg4;
- (void)loadLocalCachesFromStore;
- (void)markSavedAsViewed;
- (bool)marketingNotificationsEnabled;
- (void)maybeUpdateOnboardingVersion:(id /* block */)arg1;
- (bool)mightNeedToUpdateOnboardingVersion;
- (id)monthlyALaCarteSubscriptionMeteredCount;
- (id)monthlyBundleSubscriptionMeteredCount;
- (bool)newIssueNotificationsEnabled;
- (id)notificationsUserID;
- (id)onboardingVersionNumber;
- (void)prepareForUse;
- (unsigned long long)progressivePersonalization;
- (id)readOnlyUserInfo;
- (id)recordsForRestoringZoneName:(id)arg1;
- (void)refreshOnboardingVersion:(id /* block */)arg1;
- (void)removeObserver:(id)arg1;
- (void)setALaCarteSubscriptionMeteredCountLastResetDate:(id)arg1;
- (void)setBundleSubscriptionMeteredCountLastResetDate:(id)arg1;
- (void)setCanonicalLanguage:(id)arg1;
- (void)setDateLastOpened:(id)arg1;
- (void)setEditorialArticleVersion:(id)arg1;
- (void)setFeldsparID:(id)arg1;
- (void)setHasShownProgressivePersonalizationWelcomeBrick:(bool)arg1;
- (void)setICloudAccountChanged:(bool)arg1;
- (void)setMarketingNotificationsEnabled:(bool)arg1;
- (void)setMonthlyALaCarteSubscriptionMeteredCount:(id)arg1;
- (void)setMonthlyBundleSubscriptionMeteredCount:(id)arg1;
- (void)setNewIssueNotificationsEnabled:(bool)arg1;
- (void)setOnboardingVersionNumber:(id)arg1;
- (void)setReadOnlyUserInfo:(id)arg1;
- (void)setTagSettings:(id)arg1;
- (void)setUserHasCompletedFavoritesSetup:(bool)arg1;
- (void)setUserInfoLock:(id)arg1;
- (void)setUserStartDate:(id)arg1;
- (bool)shouldShowDefaultForYou;
- (void)syncLocalNotificationsUserID:(id)arg1 withRemoteNotificationsUserID:(id)arg2;
- (void)syncWithCompletion:(id /* block */)arg1;
- (id)tagSettings;
- (void)updateOnboardingVersion;
- (bool)useParsecResults;
- (bool)userHasCompletedFavoritesSetup;
- (id)userInfoLock;
- (id)userStartDate;

// Image: /System/Library/PrivateFrameworks/Stocks/StocksCore.framework/StocksCore

- (id)stocks_generateFeldsparIDIfNeeded;
- (id)stocks_resetFeldsparID;

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