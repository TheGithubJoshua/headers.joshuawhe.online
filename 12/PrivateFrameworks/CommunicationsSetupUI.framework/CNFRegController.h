<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CNFRegController.h</title>
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

/PrivateFrameworks/CommunicationsSetupUI.framework/CNFRegController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI (1)
 */

@interface CNFRegController : NSObject <IMSystemMonitorListener> {
    id /* block */  _accountActivationChangedBlock;
    id /* block */  _accountAddedBlock;
    id /* block */  _accountAuthorizationChangedBlock;
    NSMutableDictionary * _accountFilterCache;
    id /* block */  _accountRegistrationBlock;
    id /* block */  _accountRemovedBlock;
    NSArray * _accounts;
    id /* block */  _aliasAddedBlock;
    id /* block */  _aliasRemovedBlock;
    id /* block */  _aliasStatusChangedBlock;
    NSDictionary * _cachedCallerIDMap;
    id /* block */  _callerIdChangedBlock;
    struct { 
        unsigned int listeningForAccountChanges : 1; 
        unsigned int listeningForCallerIDChanges : 1; 
        unsigned int listeningForAccountActivation : 1; 
        unsigned int preventingIdleSleep : 1; 
        unsigned int expectingWiFiPicker : 1; 
        unsigned int showedWifiFirstRunAlert : 1; 
        unsigned int ignoringAccountChanges : 1; 
        unsigned int activatingAccounts : 1; 
    }  _controllerFlags;
    unsigned long long  _logIndent;
    NSString * _logName;
    unsigned char  _originalCellFlag;
    bool  _originalUsesBackgroundNetwork;
    unsigned char  _originalWifiFlag;
    id /* block */  _profileChangedBlock;
    id /* block */  _profileStatusChangedBlock;
    long long  _requiredWifiCount;
    id /* block */  _resetBlock;
    id /* block */  _serviceDidBecomeUnsupportedBlock;
    long long  _serviceType;
    NSArray * _services;
    NSObject<OS_dispatch_queue> * _springboardNetworkFlagQueue;
    IMAccount * _systemAccount;
    long long  _systemAccountType;
    id /* block */  _vettedAliasesChangedBlock;
    NSTimer * _wifiAlertWatchTimer;
    id /* block */  _willLaunchURLBlock;
}

@property (nonatomic, copy) id /* block */ accountActivationChangedBlock;
@property (nonatomic, copy) id /* block */ accountAddedBlock;
@property (nonatomic, copy) id /* block */ accountAuthorizationChangedBlock;
@property (nonatomic, copy) id /* block */ accountRegistrationBlock;
@property (nonatomic, copy) id /* block */ accountRemovedBlock;
@property (nonatomic, readonly, copy) NSArray *accounts;
@property (nonatomic, copy) id /* block */ aliasAddedBlock;
@property (nonatomic, copy) id /* block */ aliasRemovedBlock;
@property (nonatomic, copy) id /* block */ aliasStatusChangedBlock;
@property (nonatomic, readonly, retain) NSArray *aliases;
@property (nonatomic, readonly, retain) NSArray *allAvailableAliases;
@property (nonatomic, readonly, copy) NSArray *appleIDAccounts;
@property (nonatomic, readonly, copy) NSDictionary *cachedCallerIDMap;
@property (nonatomic, copy) id /* block */ callerIdChangedBlock;
@property (nonatomic, readonly, retain) NSArray *emailAliases;
@property (nonatomic, readonly, copy) NSArray *failedAccounts;
@property (nonatomic, readonly, retain) IMServiceImpl *firstService;
@property (nonatomic, readonly, copy) NSArray *phoneAccounts;
@property (nonatomic, copy) id /* block */ profileChangedBlock;
@property (nonatomic, copy) id /* block */ profileStatusChangedBlock;
@property (nonatomic, copy) id /* block */ resetBlock;
@property (nonatomic, copy) id /* block */ serviceDidBecomeUnsupportedBlock;
@property (getter=isServiceEnabled, nonatomic) bool serviceEnabled;
@property (nonatomic, readonly, retain) NSSet *serviceNames;
@property (getter=isServiceSupported, nonatomic, readonly) bool serviceSupported;
@property (nonatomic) long long serviceType;
@property (nonatomic, copy) NSArray *services;
@property (nonatomic, readonly, retain) IMAccount *systemAccount;
@property (nonatomic, readonly) long long systemAccountType;
@property (nonatomic, readonly, retain) NSArray *useableAliases;
@property (nonatomic, readonly, retain) NSArray *vettedAliases;
@property (nonatomic, copy) id /* block */ vettedAliasesChangedBlock;
@property (nonatomic, copy) id /* block */ willLaunchURLBlock;

+ (id)controllerForServiceType:(long long)arg1;

- (void).cxx_destruct;
- (bool)__ensureSingleAppleIDAccountExistsWithLogin:(id)arg1;
- (id /* block */)__filter_activeAccountsPredicate;
- (id /* block */)__filter_appleIDAccountPredicate;
- (id /* block */)__filter_failedAccountsPredicate;
- (id /* block */)__filter_inactiveAccountsPredicate;
- (id /* block */)__filter_operationalPredicate;
- (id /* block */)__filter_phoneAccountPredicate;
- (id /* block */)__filter_signInCompletePredicate;
- (id /* block */)__filter_signedInPredicate;
- (id /* block */)__filter_validatedAliasPredicate;
- (id /* block */)__filter_validatedProfilePredicate;
- (void)__updateSystemAccount;
- (id)_accountForAlias:(id)arg1 accounts:(id)arg2;
- (bool)_accountHasValidatedLocale:(id)arg1;
- (bool)_accountIsAuthenticated:(id)arg1;
- (id)_accountsPassingTests:(id)arg1 message:(id)arg2;
- (bool)_addAliases:(id)arg1 toAccount:(id)arg2 validate:(bool)arg3;
- (id /* block */)_aliasComparator;
- (bool)_aliasIsDevicePhoneNumber:(id)arg1;
- (id)_aliasesForAccount:(id)arg1;
- (id)_aliasesFromAccounts:(id)arg1 passingTest:(id /* block */)arg2;
- (id)_aliasesPassingTest:(id /* block */)arg1;
- (id)_allAvailableAliasesForAccount:(id)arg1;
- (void)_clearAccountCache;
- (void)_clearFilterCache;
- (id)_createAccountWithLogin:(id)arg1 foundExisting:(bool*)arg2;
- (void)_decrementLogIndent;
- (id)_guessedDisplayAliasFromAccounts:(id)arg1;
- (void)_handleCallerIDChanged;
- (void)_handleCallerIDChangedForResume:(id)arg1;
- (void)_incrementLogIndent;
- (bool)_isValidCallerIDAlias:(id)arg1 forAccount:(id)arg2;
- (id)_logName;
- (id)_logSpace;
- (void)_nukeCallerIDCache;
- (void)_postCallerIDChanged;
- (id)_predicatesWithFilter:(long long)arg1;
- (void)_purgeExcessAccounts;
- (bool)_shouldFilterOutAlias:(id)arg1 onAccount:(id)arg2;
- (void)_showNetworkAlertWithMessage:(id)arg1 andViewController:(id)arg2;
- (void)_signOutAccount:(id)arg1;
- (void)_startListeningForCallerIDChanges;
- (void)_startWiFiAlertWatchTimer;
- (void)_stopListeningForCallerIDChanges;
- (void)_stopWiFiAlertWatchTimer;
- (id)_vettedAliasesForAccount:(id)arg1;
- (void)_wifiAlertWatchTimerFired:(id)arg1;
- (id /* block */)accountActivationChangedBlock;
- (void)accountActivationStateChanged:(id)arg1;
- (void)accountAdded:(id)arg1;
- (id /* block */)accountAddedBlock;
- (id /* block */)accountAuthorizationChangedBlock;
- (id)accountForAlias:(id)arg1;
- (bool)accountIsAuthenticating;
- (id /* block */)accountRegistrationBlock;
- (void)accountRegistrationChanged:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (id /* block */)accountRemovedBlock;
- (unsigned long long)accountState;
- (unsigned long long)accountState:(id)arg1;
- (unsigned long long)accountStateForAccount:(id)arg1;
- (id)accountWithLogin:(id)arg1;
- (id)accounts;
- (id)accountsWithFilter:(long long)arg1;
- (id)accountsWithFilter:(long long)arg1 message:(id)arg2;
- (void)activateAccounts;
- (void)activateAccountsExcludingAccounts:(id)arg1;
- (id)activeAccounts;
- (bool)addAlias:(id)arg1;
- (bool)addAlias:(id)arg1 toAccount:(id)arg2;
- (id /* block */)aliasAddedBlock;
- (id)aliasNamed:(id)arg1;
- (id /* block */)aliasRemovedBlock;
- (void)aliasStatusChanged:(id)arg1;
- (id /* block */)aliasStatusChangedBlock;
- (id)aliasSummaryString:(bool*)arg1;
- (id)aliases;
- (void)aliasesChanged:(id)arg1;
- (id)aliasesForAccounts:(id)arg1;
- (id)allAvailableAliases;
- (id)allAvailableAliasesForAccounts:(id)arg1;
- (id)appleIDAccounts;
- (void)authorizationCredentialsChanged:(id)arg1;
- (id)beginAccountSetupWithAccount:(id)arg1;
- (id)beginAccountSetupWithLogin:(id)arg1 authID:(id)arg2 authToken:(id)arg3 regionInfo:(id)arg4 foundExisting:(bool*)arg5;
- (id)beginAccountSetupWithLogin:(id)arg1 password:(id)arg2 foundExisting:(bool*)arg3;
- (id)cachedCallerIDMap;
- (void)callerIdChanged:(id)arg1;
- (id /* block */)callerIdChangedBlock;
- (bool)canRemoveAlias:(id)arg1;
- (bool)cellularDataEnabled;
- (void)clearAllCaches;
- (void)connect;
- (void)connect:(bool)arg1;
- (void)deactivateAccounts;
- (void)dealloc;
- (bool)deviceCanTakeNetworkAction;
- (void)deviceCapabilityChanged:(id)arg1;
- (bool)deviceHasNetworkEnabled;
- (bool)deviceHasSaneNetworkConnection;
- (id)displayAccount;
- (id)displayAlias;
- (id)emailAliases;
- (void)enablePhoneNumberRegistration;
- (id)failedAccounts;
- (id)firstAccount;
- (id)firstService;
- (id)guessedAccountName;
- (id)guessedAlias;
- (id)guessedDisplayAlias;
- (void)handleAliasAdded:(id)arg1;
- (void)handleAliasRemoved:(id)arg1;
- (bool)hasAlias:(id)arg1;
- (bool)hasAliasNamed:(id)arg1;
- (bool)hasFailedLogin;
- (bool)hasFailedLoginDueToBadLogin;
- (bool)hasSystemAccount;
- (id)init;
- (id)initWithServiceType:(long long)arg1;
- (bool)isConnected;
- (bool)isServiceEnabled;
- (bool)isServiceSupported;
- (id)localPhoneNumberSentinelAlias;
- (id)loginForAccount:(id)arg1;
- (id)networkSettingsURLAllowingCellular:(bool)arg1;
- (void)nukeAllCallerIDSettings;
- (void)openURL:(id)arg1;
- (id)phoneAccounts;
- (void)profileChanged:(id)arg1;
- (id /* block */)profileChangedBlock;
- (id /* block */)profileStatusChangedBlock;
- (void)profileValidationStateChanged:(id)arg1;
- (void)refreshSystemAccount;
- (bool)removeAlias:(id)arg1 fromAccount:(id)arg2;
- (void)removeAllHandlers;
- (id /* block */)resetBlock;
- (void)resetNetworkFirstRunAlert;
- (id /* block */)serviceDidBecomeUnsupportedBlock;
- (id)serviceNames;
- (long long)serviceType;
- (id)services;
- (void)setAccountActivationChangedBlock:(id /* block */)arg1;
- (void)setAccountAddedBlock:(id /* block */)arg1;
- (void)setAccountAuthorizationChangedBlock:(id /* block */)arg1;
- (void)setAccountRegistrationBlock:(id /* block */)arg1;
- (void)setAccountRemovedBlock:(id /* block */)arg1;
- (void)setAliasAddedBlock:(id /* block */)arg1;
- (void)setAliasRemovedBlock:(id /* block */)arg1;
- (void)setAliasStatusChangedBlock:(id /* block */)arg1;
- (bool)setAliases:(id)arg1 onAccount:(id)arg2;
- (void)setCallerIdChangedBlock:(id /* block */)arg1;
- (void)setCellularDataEnabled:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)setDisplayAlias:(id)arg1;
- (void)setProfileChangedBlock:(id /* block */)arg1;
- (void)setProfileStatusChangedBlock:(id /* block */)arg1;
- (void)setResetBlock:(id /* block */)arg1;
- (void)setServiceDidBecomeUnsupportedBlock:(id /* block */)arg1;
- (void)setServiceEnabled:(bool)arg1;
- (void)setServiceType:(long long)arg1;
- (void)setServices:(id)arg1;
- (void)setVettedAliasesChangedBlock:(id /* block */)arg1;
- (void)setWillLaunchURLBlock:(id /* block */)arg1;
- (bool)shouldHandleAccountNotification:(id)arg1;
- (bool)shouldShowAlertForError:(id)arg1;
- (void)showNetworkAlert:(id)arg1;
- (void)showNetworkAlertIfNecessary:(id)arg1;
- (void)showNetworkFirstRunAlert:(id)arg1;
- (void)showSetupFaceTimeOverCellularAlertWithCompletion:(id /* block */)arg1;
- (void)signoutAccount:(id)arg1;
- (void)startListeningForAccountChanges;
- (void)startRequiringWifi;
- (void)stopListeningForAccountChanges;
- (void)stopRequiringWifi;
- (id)systemAccount;
- (long long)systemAccountType;
- (void)systemApplicationDidEnterBackground;
- (bool)unvalidateAlias:(id)arg1;
- (id)useableAliases;
- (id)useableAliasesForAccounts:(id)arg1;
- (bool)validateAlias:(id)arg1;
- (id)vettedAliases;
- (void)vettedAliasesChanged:(id)arg1;
- (id /* block */)vettedAliasesChangedBlock;
- (id)vettedAliasesForAccounts:(id)arg1;
- (id /* block */)willLaunchURLBlock;

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
