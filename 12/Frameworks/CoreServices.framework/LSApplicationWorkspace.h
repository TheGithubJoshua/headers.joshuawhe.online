<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>LSApplicationWorkspace.h</title>
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

/Frameworks/CoreServices.framework/LSApplicationWorkspace.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices (947)
 */

@interface LSApplicationWorkspace : NSObject {
    NSMutableDictionary * _createdInstallProgresses;
    LSInstallProgressList * _observedInstallProgresses;
}

@property (readonly) NSMutableDictionary *createdInstallProgresses;
@property (readonly) LSInstallProgressList *observedInstallProgresses;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)_remoteObserver;
+ (id)activeManagedConfigurationRestrictionUUIDs;
+ (id)callbackQueue;
+ (id)defaultWorkspace;
+ (id)progressQueue;
+ (id)workspaceObserverProxy;

- (id)URLOverrideForNewsURL:(id)arg1;
- (id)URLOverrideForURL:(id)arg1;
- (void)_LSClearSchemaCaches;
- (void)_LSFailedToOpenURL:(id)arg1 withBundle:(id)arg2;
- (bool)_LSPrivateDatabaseNeedsRebuild;
- (bool)_LSPrivateRebuildApplicationDatabasesForSystemApps:(bool)arg1 internal:(bool)arg2 user:(bool)arg3;
- (id)_LSPrivateRemovedSystemAppIdentifiers;
- (void)_LSPrivateSetRemovedSystemAppIdentifiers:(id)arg1;
- (void)_LSPrivateSyncWithMobileInstallation;
- (void)_LSPrivateUpdateAppRemovalRestrictions;
- (void)addObserver:(id)arg1;
- (id)allApplications;
- (id)allInstalledApplications;
- (bool)allowsAlternateIcons;
- (id)applicationForOpeningResource:(id)arg1;
- (id)applicationForUserActivityDomainName:(id)arg1;
- (id)applicationForUserActivityType:(id)arg1;
- (bool)applicationIsInstalled:(id)arg1;
- (id)applicationProxiesWithPlistFlags:(unsigned int)arg1 bundleFlags:(unsigned long long)arg2;
- (id)applicationsAvailableForHandlingURLScheme:(id)arg1;
- (id)applicationsAvailableForOpeningDocument:(id)arg1;
- (id)applicationsAvailableForOpeningURL:(id)arg1;
- (id)applicationsAvailableForOpeningURL:(id)arg1 legacySPI:(bool)arg2;
- (id)applicationsForUserActivityType:(id)arg1;
- (id)applicationsForUserActivityType:(id)arg1 limit:(unsigned long long)arg2;
- (id)applicationsOfType:(unsigned long long)arg1;
- (id)applicationsWithAudioComponents;
- (id)applicationsWithUIBackgroundModes;
- (id)applicationsWithVPNPlugins;
- (id)bundleIdentifiersForMachOUUIDs:(id)arg1 error:(id*)arg2;
- (void)clearAdvertisingIdentifier;
- (void)clearCreatedProgressForBundleID:(id)arg1;
- (id)createDeviceIdentifierWithVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (id)createdInstallProgresses;
- (void)dealloc;
- (id)deviceIdentifierForAdvertising;
- (id)deviceIdentifierForVendor;
- (id)directionsApplications;
- (bool)downgradeApplicationToPlaceholder:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (void)enumerateApplicationsForSiriWithBlock:(id /* block */)arg1;
- (void)enumerateApplicationsOfType:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)enumerateApplicationsOfType:(unsigned long long)arg1 legacySPI:(bool)arg2 block:(id /* block */)arg3;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 legacySPI:(bool)arg2 block:(id /* block */)arg3;
- (void)enumerateBundlesOfType:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePluginsMatchingQuery:(id)arg1 withBlock:(id /* block */)arg2;
- (bool)establishConnection;
- (bool)garbageCollectDatabaseWithError:(id*)arg1;
- (bool)getClaimedActivityTypes:(id*)arg1 domains:(id*)arg2;
- (void)getKnowledgeUUID:(id*)arg1 andSequenceNumber:(id*)arg2;
- (bool)initiateProgressForApp:(id)arg1 withType:(unsigned long long)arg2;
- (bool)installApplication:(id)arg1 withOptions:(id)arg2;
- (bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (bool)installApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)installPhaseFinishedForProgress:(id)arg1;
- (id)installProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2;
- (id)installProgressForBundleID:(id)arg1 makeSynchronous:(unsigned char)arg2;
- (id)installedPlugins;
- (bool)invalidateIconCache:(id)arg1;
- (bool)isApplicationAvailableToOpenURL:(id)arg1 error:(id*)arg2;
- (bool)isApplicationAvailableToOpenURL:(id)arg1 includePrivateURLSchemes:(bool)arg2 error:(id*)arg3;
- (bool)isApplicationAvailableToOpenURLCommon:(id)arg1 includePrivateURLSchemes:(bool)arg2 error:(id*)arg3;
- (id)legacyApplicationProxiesListWithType:(unsigned long long)arg1;
- (bool)ls_injectUTTypeWithDeclaration:(id)arg1 inDatabase:(void*)arg2 error:(id*)arg3;
- (void)ls_resetTestingDatabase;
- (void*)ls_testWithCleanDatabaseWithError:(id*)arg1;
- (id)machOUUIDsForBundleIdentifiers:(id)arg1 error:(id*)arg2;
- (id)observedInstallProgresses;
- (id)observerProxy;
- (bool)openApplicationWithBundleID:(id)arg1;
- (bool)openSensitiveURL:(id)arg1 withOptions:(id)arg2;
- (bool)openSensitiveURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (bool)openURL:(id)arg1;
- (bool)openURL:(id)arg1 withOptions:(id)arg2;
- (bool)openURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)openUserActivity:(id)arg1 withApplicationProxy:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 isContentManaged:(bool)arg4 sourceAuditToken:(const struct { unsigned int x1[8]; }*)arg5 userInfo:(id)arg6 options:(id)arg7 delegate:(id)arg8;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(bool)arg4 userInfo:(id)arg5 delegate:(id)arg6;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 sourceIsManaged:(bool)arg4 userInfo:(id)arg5 options:(id)arg6 delegate:(id)arg7;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 uniqueDocumentIdentifier:(id)arg3 userInfo:(id)arg4 delegate:(id)arg5;
- (id)operationToOpenResource:(id)arg1 usingApplication:(id)arg2 userInfo:(id)arg3;
- (id)placeholderApplications;
- (void)placeholderInstalledForIdentifier:(id)arg1 filterDowngrades:(bool)arg2;
- (id)pluginsMatchingQuery:(id)arg1 applyFilter:(id /* block */)arg2;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 applyFilter:(id /* block */)arg4;
- (id)pluginsWithIdentifiers:(id)arg1 protocols:(id)arg2 version:(id)arg3 withFilter:(id /* block */)arg4;
- (id)privateURLSchemes;
- (id)publicURLSchemes;
- (bool)registerApplication:(id)arg1;
- (bool)registerApplicationDictionary:(id)arg1;
- (bool)registerApplicationDictionary:(id)arg1 withObserverNotification:(int)arg2;
- (bool)registerBundleWithInfo:(id)arg1 options:(id)arg2 type:(unsigned long long)arg3 progress:(id)arg4;
- (bool)registerPlugin:(id)arg1;
- (id)remoteObserver;
- (void)removeDeviceIdentifierForVendorName:(id)arg1 bundleIdentifier:(id)arg2;
- (void)removeObserver:(id)arg1;
- (id)removedSystemApplications;
- (bool)restoreSystemApplication:(id)arg1;
- (void)scanForApplicationStateChangesFromRank:(id)arg1 toRank:(id)arg2;
- (void)scanForApplicationStateChangesWithWhitelist:(id)arg1;
- (void)sendApplicationStateChangedNotificationsFor:(id)arg1;
- (id)syncObserverProxy;
- (bool)uninstallApplication:(id)arg1 withOptions:(id)arg2;
- (bool)uninstallApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)uninstallApplication:(id)arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)unregisterApplication:(id)arg1;
- (bool)unregisterPlugin:(id)arg1;
- (id)unrestrictedApplications;
- (bool)updatePlaceholderMetadataForApp:(id)arg1 installType:(unsigned long long)arg2 failure:(unsigned long long)arg3 underlyingError:(id)arg4 source:(unsigned long long)arg5 outError:(id*)arg6;
- (bool)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 placeholderMetadata:(id)arg4 sendNotification:(int)arg5 error:(id*)arg6;
- (bool)updateSINFWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)updateiTunesMetadataWithData:(id)arg1 forApplication:(id)arg2 options:(id)arg3 error:(id*)arg4;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (void)_sf_openURL:(id)arg1 inApplication:(id)arg2 withOptions:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_sf_openURL:(id)arg1 withOptions:(id)arg2 completionHandler:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI

- (id)blacklistedApps;

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