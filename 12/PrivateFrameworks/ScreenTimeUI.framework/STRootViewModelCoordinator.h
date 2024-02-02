<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>STRootViewModelCoordinator.h</title>
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

/PrivateFrameworks/ScreenTimeUI.framework/STRootViewModelCoordinator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI (38)
 */

@interface STRootViewModelCoordinator : NSObject <RMGroupFetchedResultsControllerDelegate, STRootViewModelCoordinator> {
    NSObject<STContentPrivacyViewModelCoordinator> * _contentPrivacyCoordinator;
    NSMutableDictionary * _coordinatorsByChildDSID;
    RMGroupFetchedResultsController * _fetchedResultsController;
    bool  _hasAlreadyEnteredPINForSession;
    bool  _isLocalUser;
    <RMPersistenceControllerProtocol> * _persistenceController;
    NSArray * _selectedDeviceIdentifiers;
    NSObject<STTimeAllowancesViewModelCoordinator> * _timeAllowancesCoordinator;
    NSObject<STUsageDetailsViewModelCoordinator> * _usageDetailsCoordinator;
    NSNumber * _userDSID;
    NSString * _userName;
    STRootViewModel * _viewModel;
}

@property (readonly) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator;
@property (nonatomic, retain) NSMutableDictionary *coordinatorsByChildDSID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RMGroupFetchedResultsController *fetchedResultsController;
@property (nonatomic) bool hasAlreadyEnteredPINForSession;
@property (nonatomic) bool hasShownMiniBuddy;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLocalUser;
@property (getter=isPasscodeEnabled, nonatomic, readonly) bool passcodeEnabled;
@property (nonatomic, retain) <RMPersistenceControllerProtocol> *persistenceController;
@property (nonatomic, copy) NSArray *selectedDeviceIdentifiers;
@property (readonly) Class superclass;
@property (readonly) NSObject<STTimeAllowancesViewModelCoordinator> *timeAllowancesCoordinator;
@property (readonly) NSObject<STUsageDetailsViewModelCoordinator> *usageDetailsCoordinator;
@property (nonatomic, copy) NSNumber *userDSID;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, retain) STRootViewModel *viewModel;

+ (id)keyPathsForValuesAffectingPasscodeEnabled;
+ (id)keyPathsForValuesAffectingUsageDetailsCoordinator;
+ (id)loadViewModelFromManagedObjectContext:(id)arg1 isLocalUser:(bool)arg2 userDSID:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)_automaticDateTimeConfigurationIdentifier;
- (void)_createUserManagementConfigurationsForCoreUser:(id)arg1 inContext:(id)arg2;
- (void)_deleteUserManagementConfigurationsForCoreUser:(id)arg1 fromContext:(id)arg2;
- (id)_iCloudLogoutConfigurationIdentifier;
- (id)_managedUserActivationIdentifier;
- (void)_notifyServerOfScreenTimeEnabled:(bool)arg1 forDSID:(id)arg2;
- (void)_passcodeSessionHasEnded:(id)arg1;
- (void)_registerForPersistenceStoreNotifications;
- (void)_registerForWillResignActiveNotifications;
- (id)contentPrivacyCoordinator;
- (id)coordinatorForChild:(id)arg1;
- (id)coordinatorsByChildDSID;
- (void)enableScreenTimeWithPIN:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fetchedResultsController;
- (void)groupResultsControllerDidChangeContents:(id)arg1;
- (bool)hasAlreadyEnteredPINForSession;
- (bool)hasShownMiniBuddy;
- (id)init;
- (id)initWithPersistenceController:(id)arg1;
- (id)initWithPersistenceController:(id)arg1 userDSID:(id)arg2 selectedDevices:(id)arg3;
- (id)initWithUserDSID:(id)arg1;
- (bool)isLocalUser;
- (bool)isPasscodeEnabled;
- (void)loadViewModelRightNow;
- (void)loadViewModelWithCompletionHandler:(id /* block */)arg1;
- (id)organizationIdentifierForManagement;
- (id)organizationIdentifierForUsage;
- (id)persistenceController;
- (void)saveViewModel:(id)arg1;
- (id)selectedDeviceIdentifiers;
- (void)setCoordinatorsByChildDSID:(id)arg1;
- (void)setFetchedResultsController:(id)arg1;
- (void)setHasAlreadyEnteredPINForSession:(bool)arg1;
- (void)setHasShownMiniBuddy:(bool)arg1;
- (void)setIsLocalUser:(bool)arg1;
- (void)setPIN:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setPersistenceController:(id)arg1;
- (void)setScreenTimeEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setScreenTimeSyncingEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setSelectedDeviceIdentifiers:(id)arg1;
- (void)setShareWebUsageEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setUserDSID:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)timeAllowancesCoordinator;
- (id)usageDetailsCoordinator;
- (id)userDSID;
- (id)userName;
- (bool)validatePIN:(id)arg1;
- (id)viewModel;

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