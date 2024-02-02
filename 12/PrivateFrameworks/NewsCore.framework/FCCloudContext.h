<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FCCloudContext.h</title>
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

/PrivateFrameworks/NewsCore.framework/FCCloudContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore (2166)
 */

@interface FCCloudContext : NSObject <FCAssetKeyManagerDelegate, FCBundleSubscriptionChangeObserver, FCCKDatabaseEncryptionDelegate, FCCacheFlushing, FCContentContext, FCPrivateDataContext, FCTestingContext> {
    <FCAppActivityMonitor> * _appActivityMonitor;
    FCAccessChecker * _articleAccessChecker;
    <FCBackgroundTaskable> * _backgroundTaskable;
    <FCBundleSubscriptionManagerType> * _bundleSubscriptionManager;
    <FCContentContext> * _contentContext;
    <FCCurrentIssuesChecker> * _currentIssuesChecker;
    bool  _deviceIsiPad;
    FCCommandQueue * _endpointCommandQueue;
    FCClientEndpointConnection * _endpointConnection;
    FCFeedManager * _feedManager;
    <FCFlintHelper> * _flintHelper;
    <FCForYouMagazineFeedManaging> * _forYouMagazineFeedManager;
    FCAccessChecker * _issueAccessChecker;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    FCNotificationController * _notificationController;
    FCCommandQueue * _notificationsEndpointCommandQueue;
    FCNotificationsEndpointConnection * _notificationsEndpointConnection;
    long long  _options;
    <FCPaidAccessCheckerType> * _paidAccessChecker;
    <FCPPTContext> * _pptContext;
    <FCPrivateDataContext> * _privateDataContext;
    FCPurchaseController * _purchaseController;
    <FCPurchaseManagerType> * _purchaseManager;
    FCSubscriptionController * _subscriptionController;
    FCTranslationManager * _translationManager;
}

@property (nonatomic, retain) <FCAppActivityMonitor> *appActivityMonitor;
@property (nonatomic, readonly) <FCNewsAppConfigurationManager> *appConfigurationManager;
@property (nonatomic, retain) FCAccessChecker *articleAccessChecker;
@property (nonatomic, readonly) FCArticleController *articleController;
@property (nonatomic, readonly) NSURL *assetCacheDirectoryURL;
@property (nonatomic, readonly) FCAssetManager *assetManager;
@property (nonatomic) <FCBackgroundTaskable> *backgroundTaskable;
@property (nonatomic, readonly) <FCBundleSubscriptionManagerType> *bundleSubscriptionManager;
@property (nonatomic, readonly) <FCCoreConfigurationManager> *configurationManager;
@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, readonly, copy) NSString *contentDirectory;
@property (nonatomic, readonly, copy) NSString *contentEnvironmentToken;
@property (nonatomic, readonly, copy) NSString *contentStoreFrontID;
@property (nonatomic, retain) <FCCurrentIssuesChecker> *currentIssuesChecker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool deviceIsiPad;
@property (nonatomic, readonly) FCCommandQueue *endpointCommandQueue;
@property (nonatomic, readonly) FCClientEndpointConnection *endpointConnection;
@property (nonatomic, readonly) FCFeedManager *feedManager;
@property (nonatomic, readonly) <FCFeedPersonalizing> *feedPersonalizer;
@property (nonatomic) <FCFlintHelper> *flintHelper;
@property (nonatomic, readonly) FCFlintResourceManager *flintResourceManager;
@property (nonatomic) <FCForYouMagazineFeedManaging> *forYouMagazineFeedManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FCContentContextInternal> *internalContentContext;
@property (nonatomic, readonly) <FCPrivateDataContextInternal> *internalPrivateDataContext;
@property (nonatomic, readonly) bool isPrivateDataEncryptionEnabled;
@property (nonatomic, readonly) bool isPrivateDatabaseOnline;
@property (nonatomic, readonly) bool isPrivateDatabaseStartingUp;
@property (nonatomic, readonly) bool isPrivateDatabaseTemporarilySuspended;
@property (nonatomic, retain) FCAccessChecker *issueAccessChecker;
@property (nonatomic, readonly) FCIssueReadingHistory *issueReadingHistory;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic, readonly) FCNotificationController *notificationController;
@property (nonatomic, readonly) FCCommandQueue *notificationsEndpointCommandQueue;
@property (nonatomic, readonly) FCNotificationsEndpointConnection *notificationsEndpointConnection;
@property (nonatomic) long long options;
@property (nonatomic, retain) <FCPaidAccessCheckerType> *paidAccessChecker;
@property (nonatomic, readonly) FCPersonalizationData *personalizationData;
@property (nonatomic, readonly) <FCPPTContext> *pptContext;
@property (nonatomic, readonly) long long preferredMediaQuality;
@property (nonatomic, readonly) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property (nonatomic, retain) <FCPrivateDataContext> *privateDataContext;
@property (nonatomic, readonly, copy) NSString *privateDataDirectory;
@property (getter=isPrivateDataSyncingEnabled, nonatomic, readonly) bool privateDataSyncingEnabled;
@property (nonatomic, readonly) <FCPushNotificationHandling> *privatePushNotificationHandler;
@property (nonatomic, readonly) FCPurchaseController *purchaseController;
@property (nonatomic, readonly) <FCPurchaseManagerType> *purchaseManager;
@property (nonatomic, readonly) FCReadingHistory *readingHistory;
@property (nonatomic, readonly) FCReadingList *readingList;
@property (nonatomic, readonly) FCSubscriptionController *subscriptionController;
@property (nonatomic, readonly) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *supportedContentStoreFrontID;
@property (nonatomic, readonly) FCTagController *tagController;
@property (nonatomic, readonly) FCTagSettings *tagSettings;
@property (nonatomic, retain) FCTranslationManager *translationManager;
@property (nonatomic, readonly) FCUserInfo *userInfo;
@property (nonatomic, readonly) NSURL *webArchiveCacheDirectoryURL;
@property (nonatomic, retain) <FCWebArchiveSource> *webArchiveSource;

+ (void)initialize;
+ (id)testingContext;
+ (id)testingContextWithDesiredHeadlineFieldOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_purchaseControllerDidAddALaCarteSubscription;
- (id)appActivityMonitor;
- (id)appConfigurationManager;
- (id)articleAccessChecker;
- (id)articleController;
- (id)assetCacheDirectoryURL;
- (id)assetManager;
- (id)backgroundTaskable;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (id)bundleSubscriptionManager;
- (id)configurationManager;
- (id)contentContext;
- (id)contentDirectory;
- (id)contentEnvironmentToken;
- (id)contentStoreFrontID;
- (id)currentIssuesChecker;
- (bool)deviceIsiPad;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (id)endpointCommandQueue;
- (id)endpointConnection;
- (id)feedManager;
- (id)feedPersonalizer;
- (void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg1 completion:(id /* block */)arg2;
- (id)flintHelper;
- (id)flintResourceManager;
- (id)forYouMagazineFeedManager;
- (id)init;
- (id)initForTesting;
- (id)initForTestingWithDesiredHeadlineFieldOptions:(unsigned long long)arg1;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 privateDataHostDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 appActivityMonitor:(id)arg7 desiredHeadlineFieldOptions:(unsigned long long)arg8 feedUsage:(long long)arg9 deviceIsiPad:(bool)arg10 backgroundTaskable:(id)arg11 privateDataSyncAvailability:(id)arg12 pptContext:(id)arg13 options:(long long)arg14;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 privateDataHostDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 appActivityMonitor:(id)arg7 desiredHeadlineFieldOptions:(unsigned long long)arg8 feedUsage:(long long)arg9 lockStoreFrontIfNeeded:(bool)arg10 deviceIsiPad:(bool)arg11 backgroundTaskable:(id)arg12 privateDataSyncAvailability:(id)arg13 pptContext:(id)arg14;
- (id)initWithContentContext:(id)arg1 privateDataContext:(id)arg2 networkBehaviorMonitor:(id)arg3 options:(long long)arg4;
- (id)insertTestArticle;
- (id)insertTestArticlesWithCount:(unsigned long long)arg1;
- (id)internalContentContext;
- (id)internalPrivateDataContext;
- (bool)isPrivateDataEncryptionEnabled;
- (bool)isPrivateDataSyncingEnabled;
- (bool)isPrivateDatabaseOnline;
- (bool)isPrivateDatabaseStartingUp;
- (bool)isPrivateDatabaseTemporarilySuspended;
- (id)issueAccessChecker;
- (id)issueReadingHistory;
- (id)magazinesConfigurationManager;
- (id)networkBehaviorMonitor;
- (id)news_core_ConfigurationManager;
- (id)notificationController;
- (id)notificationsController;
- (id)notificationsEndpointCommandQueue;
- (id)notificationsEndpointConnection;
- (long long)options;
- (id)paidAccessChecker;
- (id)personalizationData;
- (id)pptContext;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
- (long long)preferredMediaQuality;
- (id)privateChannelMembershipController;
- (id)privateDataContext;
- (id)privateDataDirectory;
- (id)privatePushNotificationHandler;
- (id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)purchaseController;
- (id)purchaseManager;
- (id)readingHistory;
- (id)readingList;
- (id)recordSourceWithSchema:(id)arg1;
- (id)recordTreeSourceWithRecordSources:(id)arg1;
- (void)setAppActivityMonitor:(id)arg1;
- (void)setArticleAccessChecker:(id)arg1;
- (void)setBackgroundTaskable:(id)arg1;
- (void)setContentContext:(id)arg1;
- (void)setCurrentIssuesChecker:(id)arg1;
- (void)setFlintHelper:(id)arg1;
- (void)setForYouMagazineFeedManager:(id)arg1;
- (void)setIssueAccessChecker:(id)arg1;
- (void)setOptions:(long long)arg1;
- (void)setPaidAccessChecker:(id)arg1;
- (void)setPrivateDataContext:(id)arg1;
- (void)setTranslationManager:(id)arg1;
- (void)setWebArchiveSource:(id)arg1;
- (bool)shouldAssetKeyManagerSimulateUnauthorizedAssetKeys:(id)arg1;
- (id)subscriptionController;
- (id)subscriptionList;
- (id)supportedContentStoreFrontID;
- (id)tagController;
- (id)tagSettings;
- (id)translationManager;
- (id)userInfo;
- (id)webArchiveCacheDirectoryURL;
- (id)webArchiveSource;

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