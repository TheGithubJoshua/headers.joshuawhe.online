<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PSUIPrefsListController.h</title>
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

/PrivateFrameworks/PreferencesUI.framework/PSUIPrefsListController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI (1.0)
 */

@interface PSUIPrefsListController : PSListController <AAUISignInControllerDelegate, CoreTelephonyClientSubscriberDelegate, DevicePINControllerDelegate, PSSpotlightSearchResultsControllerDelegate, RadiosPreferencesDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating> {
    ACAccountStore * _accountStore;
    PSSpecifier * _appleAccountSpecifier;
    PSSpecifier * _applePencilSpecifier;
    NSString * _bluetoothString;
    bool  _bluetoothValueIsClean;
    PSSpecifier * _carrierSelectionSpecifier;
    PSSpecifier * _classKitSpecifier;
    PSUIClassKitVisibilityArbitrator * _classKitVisibilityArbitrator;
    PSSpecifier * _classroomSpecifier;
    PSUIClassroomVisibilityArbitrator * _classroomVisibilityArbitrator;
    CoreTelephonyClient * _coreTelephonyClient;
    bool  _didFirstLoad;
    PSSpecifier * _emergencySOSSpecifier;
    PSSpecifier * _eqSpecifier;
    PSSpecifier * _ethernetSpecifier;
    PSSpecifier * _exposureNotificationSpecifier;
    PSSpecifier * _faceTimeSpecifier;
    FLPreferencesController * _followupController;
    NSArray * _followupSpecifiers;
    PSSpecifier * _gameCenterSpecifier;
    PSSpecifier * _healthKitSpecifier;
    struct __IOHIDManager { } * _hidManager;
    PSSpecifier * _homeKitSpecifier;
    HFHomeSettingsVisibilityArbitrator * _homeKitVisibilityArbitrator;
    bool  _initiallyLoadingThirdPartySpecifiers;
    bool  _launchedToTest;
    NSObject<OS_dispatch_queue> * _loadAllSpecifiersQueue;
    PSSpecifier * _messagesSpecifier;
    NSDictionary * _movedThirdPartySpecifiers;
    PSSpecifier * _notificationsSpecifier;
    NSSet * _originalDisplayIdentifiers;
    NSArray * _originalSpecifiers;
    PSSpecifier * _passcodeSpecifier;
    NSString * _pendingOffsetItemName;
    PSSpecifier * _personalHotspotSpecifier;
    AAUIProfilePictureStore * _profilePictureStore;
    bool  _refreshingThirdPartySpecifiers;
    AIDAServiceOwnersManager * _serviceOwnersManager;
    PSSpecifier * _siriSpecifier;
    bool  _skipSelectingGeneralOnLaunch;
    EAAccessory * _speakerAccessory;
    PSSpecifier * _specifierToSelect;
    PSSpotlightSearchResultsController * _spotlightResultsController;
    PSKeyboardNavigationSearchController * _spotlightSearchController;
    NSArray * _thirdPartySpecifiers;
    PSSpecifier * _tvSpecifier;
    VSAccountStore * _videoSubscriberAccountStore;
    PSSpecifier * _videoSubscriberGroupSpecifier;
    PSSpecifier * _videoSubscriberSpecifier;
    NSArray * _vpnBundleControllers;
    PSSpecifier * _wallpaperSpecifier;
    NSString * _wifiString;
    bool  _wifiValueIsClean;
}

@property (nonatomic, copy) NSString *bluetoothString;
@property (nonatomic, readonly) UIViewController<PSController> *categoryController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FLPreferencesController *followupController;
@property (nonatomic, retain) NSArray *followupSpecifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool skipSelectingGeneralOnLaunch;
@property (nonatomic, retain) PSSpotlightSearchResultsController *spotlightResultsController;
@property (nonatomic, retain) PSKeyboardNavigationSearchController *spotlightSearchController;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *wifiString;

+ (bool)airplaneMode;
+ (id)radiosPreferences;
+ (void)setAirplaneMode:(bool)arg1;

- (void).cxx_destruct;
- (void)NETRBStateChangedNotification:(id)arg1;
- (void)NETRBStateChangedNotification:(id)arg1 completion:(id /* block */)arg2;
- (id)_accountStore;
- (void)_beginObservingAccountStoreDidChangeNotification;
- (void)_beginObservingProfilePictureStoreDidChangeNotification;
- (bool)_canSelectSpecifierAtIndexPath:(id)arg1;
- (void)_downArrowKeyPressed;
- (bool)_exposureNotificationAvailable;
- (void)_insertOrRemovePaymentSpecifierAsNeededCompletion:(id /* block */)arg1;
- (void)_loadThirdPartySpecifiersIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)_loadThirdPartySpecifiersWithCompletion:(id /* block */)arg1;
- (void)_localeChanged;
- (void)_newCarrierNotification;
- (void)_presentAppleAccountSignInController:(id)arg1;
- (id)_primarySpecifierOrdering;
- (id)_profilePictureStore;
- (void)_reallyLoadThirdPartySpecifiersForApps:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)_serviceOwnersManager;
- (void)_setAirplaneMode:(bool)arg1;
- (void)_setupAppleAccountSpecifier:(id)arg1;
- (void)_setupAppleAccountSpecifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_setupAppleAccountSpecifier:(id)arg1 title:(id)arg2;
- (void)_setupAppleAccountSpecifierForLogin:(id)arg1;
- (void)_setupCachedAppleAccountSpecifier:(id)arg1;
- (void)_showControllerFromSpecifier:(id)arg1;
- (void)_showDetailTargetDidChange:(id)arg1;
- (bool)_showSOS;
- (id)_sidebarSpecifierForCategoryController;
- (id)_specifierDictionaryForBundlePath:(id)arg1 identifier:(id)arg2 internalIcon:(bool)arg3 searchPlist:(id)arg4;
- (id)_specifierDictionaryForDeveloperBundlePath:(id)arg1 identifier:(id)arg2;
- (void)_tabKeyPressed;
- (void)_upArrowKeyPressed;
- (void)_videoSubscriberAccountAvailabilityDidChange:(id)arg1;
- (void)_videoSubscriberAccountStoreDidChange:(id)arg1;
- (void)airplaneModeChanged;
- (id)appleAccountIconLocalCacheURL;
- (void)appleAccountSpecifierWasTappedWhileInCachedState:(id)arg1;
- (void)appleAccountsDidChange;
- (void)bluetoothPowerChanged:(id)arg1;
- (id)bluetoothString;
- (id)bluetoothValue:(id)arg1;
- (void)bluetoothValueFetch:(id)arg1;
- (id)bundle;
- (bool)canBecomeFirstResponder;
- (id)categoryController;
- (id)cellularDataStatusForSpecifier:(id)arg1;
- (void)checkDeveloperSettingsState;
- (void)clearCache;
- (void)configureApplePencilSpecifier;
- (id)configurePasscodeSpecifierFromSpecifiers:(id)arg1;
- (void)confirmationSpecifierCancelled:(id)arg1;
- (void)confirmationSpecifierConfirmed:(id)arg1;
- (void)dealloc;
- (bool)deviceSupportsApplePay;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)didDismissSearchController:(id)arg1;
- (void)dismissPopover;
- (void)displayIdentifiersChanged;
- (id)followupController;
- (id)followupSpecifiers;
- (id)generalViewController;
- (id)getAirplaneMode:(id)arg1;
- (id)getAllSpecifiers;
- (id)getTetheringStatus:(id)arg1;
- (bool)handlePendingURL;
- (void)iMessageSupportMayHaveChanged;
- (id)identifierForSelectedIndex;
- (void)indexSpecifiersIfNeeded;
- (id)init;
- (void)insertMovedThirdPartySpecifiersAnimated:(bool)arg1;
- (void)insertOrderedSpecifier:(id)arg1 animated:(bool)arg2;
- (long long)insertionIndexForSpecifier:(id)arg1 inSpecifiers:(id)arg2;
- (bool)isBundleIDHiddenDueToRestrictions:(id)arg1;
- (bool)isSpecifierHiddenDueToRestrictions:(id)arg1;
- (id)keyCommands;
- (void)lazyLoadSpecialBundleForSpecifier:(id)arg1;
- (void)loadPPTTestSpecifiers:(int)arg1;
- (void)loadThirdPartySpecifierIfNeededForBundleID:(id)arg1;
- (void)loadView;
- (long long)navigationItemLargeTitleDisplayMode;
- (id)passbookSpecifier;
- (id)phoneStatusForSpecifier:(id)arg1;
- (void)popToRoot;
- (void)profilePictureDidChange;
- (void)refresh3rdPartyBundles;
- (void)reloadAsyncSpecifiers;
- (void)reloadCellularRelatedSpecifiers;
- (void)reloadSpecifiers;
- (void)removeAndReload3rdPartyBundles;
- (void)removeApplePencilListener;
- (void)rerootNavigationController;
- (bool)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchResultsController:(id)arg1 didSelectURL:(id)arg2;
- (id)searchResultsController:(id)arg1 iconForCategory:(id)arg2;
- (long long)searchResultsController:(id)arg1 sortCategory1:(id)arg2 sortCategory2:(id)arg3;
- (void)selectGeneralCategory;
- (void)selectGeneralCategoryForced:(bool)arg1;
- (void)selectGeneralCategoryForced:(bool)arg1 showController:(bool)arg2;
- (void)setAirplaneMode:(id)arg1 specifier:(id)arg2;
- (void)setBluetoothString:(id)arg1;
- (void)setDesiredVerticalContentOffsetItemNamed:(id)arg1;
- (void)setFollowupController:(id)arg1;
- (void)setFollowupSpecifiers:(id)arg1;
- (void)setSkipSelectingGeneralOnLaunch:(bool)arg1;
- (void)setSpeakerAccessory:(id)arg1 eqAvailable:(bool)arg2;
- (void)setSpotlightResultsController:(id)arg1;
- (void)setSpotlightSearchController:(id)arg1;
- (void)setWifiString:(id)arg1;
- (void)setupDaemonsIfNeeded;
- (void)setupPrimaryAppleAccountGroup:(id)arg1;
- (bool)shouldDeferPushForSpecifierID:(id)arg1;
- (bool)shouldReloadSpecifiersOnResume;
- (bool)shouldShowApplePencilSpecifier;
- (bool)shouldShowClassKitSpecifier;
- (bool)shouldShowClassroomSpecifier;
- (bool)shouldShowEthernetSpecifier;
- (bool)shouldShowFaceID;
- (bool)shouldShowSimulatorSettings;
- (bool)shouldShowTouchID;
- (void)showDeviceSupervisionInfo;
- (void)showPINSheet:(id)arg1;
- (void)signInController:(id)arg1 didCompleteWithSuccess:(bool)arg2 error:(id)arg3;
- (void)signInControllerDidCancel:(id)arg1;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (bool)skipSelectingGeneralOnLaunch;
- (id)specifierForBundle:(id)arg1;
- (id)specifiers;
- (id)spotlightResultsController;
- (id)spotlightSearchController;
- (void)suspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)testSpecifierCountAfterBlock:(id /* block */)arg1;
- (void)updateAccountSpecifiers;
- (void)updateApplePencil;
- (void)updateClassKitSpecifier;
- (void)updateClassroomSpecifier;
- (void)updateEthernet;
- (void)updateEthernetWithCompletion:(id /* block */)arg1;
- (void)updateFollowupSpecifiers;
- (void)updateHomeKitSpecifier;
- (void)updatePersonalHotspot;
- (void)updateRestrictedSettings;
- (void)updateSOS;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateVPN;
- (void)updateWifi;
- (id)videoSubscriberAccountValue:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)wifiGetCurrentWiFiNetwork;
- (id)wifiNetwork:(id)arg1;
- (id)wifiString;
- (void)willBecomeActive;
- (void)willEnterForeground;

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
