<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SUStoreController.h</title>
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

/PrivateFrameworks/iTunesStoreUI.framework/SUStoreController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI (1)
 */

@interface SUStoreController : NSObject <MFMailComposeViewControllerDelegate, SUClientDelegate, SUPurchaseManagerDelegate, SUTabBarControllerDelegate, UIApplicationDelegate> {
    SUClient * _client;
    SUSectionsResponse * _lastBackgroundSectionsResponse;
    SUSectionsResponse * _lastSectionsResponse;
    NSURL * _launchURL;
    ISOperation * _loadSectionsOperation;
    NSString * _localStoreFrontAtLastSuspend;
    id  _locationObserver;
    MFMailComposeViewController * _mailComposeViewController;
    NSArray * _overlayConfigurations;
    bool  _reloadForStorefrontChangeAfterAccountSetup;
    bool  _reloadSectionsOnNextLaunch;
    NSDictionary * _storeFrontLanguages;
    NSString * _synchedStoreFrontAtLastSuspend;
    SUTabBarController * _tabBarController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultPNGNameForSuspend;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *launchURL;
@property (getter=isStoreEnabled, nonatomic, readonly) bool storeEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SUTabBarController *tabBarController;
@property (getter=isTabBarControllerLoaded, nonatomic, readonly) bool tabBarControllerLoaded;
@property (nonatomic, readonly) UINavigationController *topNavigationController;
@property (nonatomic, retain) UIWindow *window;

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void)_accountControllerDisappearedNotification:(id)arg1;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)_cancelLoadSectionsOperation;
- (void)_cancelSuspendAfterDialogsDismissed;
- (void)_defaultHandleApplicationURLRequestProperties:(id)arg1;
- (void)_dialogDidFinishNotification:(id)arg1;
- (void)_handleAccountURL:(id)arg1;
- (void)_handleFinishedBackgroundLoadSectionsOperation:(id)arg1;
- (void)_handleFinishedLoadSectionsOperation:(id)arg1;
- (void)_handleSearchURL:(id)arg1;
- (void)_handleSectionsLoadFailedWithError:(id)arg1;
- (bool)_isAccountViewControllerVisible;
- (bool)_loadSectionsAllowingCache:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_mainThreadStoreFrontChangedNotification:(id)arg1;
- (void)_presentSectionFetchUI;
- (void)_reloadForNetworkTypeChange:(id)arg1;
- (bool)_reloadForStorefrontChange;
- (void)_reloadOverlayConfigurations;
- (void)_reloadWithSectionsResponse:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (id)_resumableViewController;
- (void)_retrySectionsAfterNetworkTransition;
- (void)_saveArchivedNavigationPath;
- (void)_selectFooterSectionNotification:(id)arg1;
- (bool)_showWildcatAccountViewController:(id)arg1 animated:(bool)arg2;
- (void)_storeFrontChangedNotification:(id)arg1;
- (bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)beginPurchaseBatch;
- (void)cancelAllOperations;
- (bool)client:(id)arg1 openInternalURL:(id)arg2;
- (bool)client:(id)arg1 presentAccountViewController:(id)arg2 animated:(bool)arg3;
- (bool)client:(id)arg1 presentModalViewController:(id)arg2 animated:(bool)arg3;
- (void)composeEmailByRestoringAutosavedMessage;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)connect;
- (id)copySuspendSettings;
- (void)dealloc;
- (double)defaultImageSnapshotExpiration;
- (id)defaultPNGNameForSuspend;
- (void)dismissMailComposeViewControllerAnimated:(bool)arg1;
- (void)dismissOverlayBackgroundViewController;
- (id)downloadQueueForClient:(id)arg1 downloadKinds:(id)arg2;
- (void)endPurchaseBatch;
- (void)exitStoreAfterDialogsDismiss;
- (void)exitStoreWithReason:(long long)arg1;
- (void)handleApplicationURL:(id)arg1;
- (id)init;
- (bool)isComposingEmail;
- (bool)isStoreEnabled;
- (bool)isTabBarControllerLoaded;
- (id)launchURL;
- (bool)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (bool)matchesClientApplication:(id)arg1;
- (id)newScriptInterface;
- (id)overlayBackgroundViewController;
- (id)overlayConfigurationForStorePage:(id)arg1;
- (void)prepareForSuspend;
- (void)presentExternalURLViewController:(id)arg1;
- (void)presentMailComposeViewController:(id)arg1 animated:(bool)arg2;
- (bool)presentOverlayBackgroundViewController:(id)arg1;
- (void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (void)purchaseManagerDidEndUpdates:(id)arg1;
- (void)purchaseManagerWillBeginUpdates:(id)arg1;
- (bool)reloadSectionWithIdentifier:(id)arg1 url:(id)arg2;
- (bool)selectSectionWithIdentifier:(id)arg1;
- (void)setLaunchURL:(id)arg1;
- (void)setupUI;
- (bool)showDialogForCapabilities:(id)arg1 mismatches:(id)arg2;
- (id)storeContentLanguage;
- (id)tabBarController;
- (void)tabBarController:(id)arg1 didEndCustomizingViewControllers:(id)arg2 changed:(bool)arg3;
- (void)tearDownUI;
- (id)topNavigationController;
- (id)topViewControllerForClient:(id)arg1;

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