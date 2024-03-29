<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MCRestrictionManager.h</title>
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

/PrivateFrameworks/ManagedConfiguration.framework/MCRestrictionManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration (1.0)
 */

@interface MCRestrictionManager : NSObject {
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSMutableDictionary * _memberQueueEffectiveUserSettings;
    NSMutableDictionary * _memberQueueRestrictions;
    NSMutableDictionary * _memberQueueSystemClientRestrictions;
    NSMutableDictionary * _memberQueueSystemNamespacedUserSettings;
    NSMutableDictionary * _memberQueueSystemProfileRestrictions;
    NSMutableDictionary * _memberQueueSystemUserSettings;
    NSMutableDictionary * _memberQueueUserClientRestrictions;
    NSMutableDictionary * _memberQueueUserNamespacedUserSettings;
    NSMutableDictionary * _memberQueueUserProfileRestrictions;
    NSMutableDictionary * _memberQueueUserUserSettings;
}

@property (nonatomic, readonly, copy) NSDictionary *combinedProfileRestrictions;
@property (nonatomic, readonly) NSDictionary *currentRestrictions;
@property (nonatomic, readonly) NSDictionary *defaultRestrictions;
@property (nonatomic, readonly) NSDictionary *defaultSettings;
@property (nonatomic, readonly, copy) NSDictionary *effectiveUserSettings;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, readonly) NSMutableDictionary *memberQueueCombinedProfileRestrictions;
@property (nonatomic, retain) NSMutableDictionary *memberQueueEffectiveUserSettings;
@property (nonatomic, retain) NSMutableDictionary *memberQueueRestrictions;
@property (nonatomic, retain) NSMutableDictionary *memberQueueSystemClientRestrictions;
@property (nonatomic, retain) NSMutableDictionary *memberQueueSystemNamespacedUserSettings;
@property (nonatomic, retain) NSMutableDictionary *memberQueueSystemProfileRestrictions;
@property (nonatomic, retain) NSMutableDictionary *memberQueueSystemUserSettings;
@property (nonatomic, retain) NSMutableDictionary *memberQueueUserClientRestrictions;
@property (nonatomic, retain) NSMutableDictionary *memberQueueUserNamespacedUserSettings;
@property (nonatomic, retain) NSMutableDictionary *memberQueueUserProfileRestrictions;
@property (nonatomic, retain) NSMutableDictionary *memberQueueUserUserSettings;
@property (nonatomic, readonly, copy) NSDictionary *systemProfileRestrictions;
@property (nonatomic, readonly, copy) NSDictionary *systemUserSettings;
@property (nonatomic, readonly, copy) NSDictionary *userProfileRestrictions;
@property (nonatomic, readonly, copy) NSDictionary *userSettings;
@property (nonatomic, readonly, copy) NSDictionary *userUserSettings;

+ (id)allowedImportFromAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(bool)arg4 mayOpenFromUnmanagedToManaged:(bool)arg5 mayOpenFromManagedToUnmanaged:(bool)arg6 isAppBundleIDExemptBlock:(id /* block */)arg7 isAppBundleIDAccountBasedBlock:(id /* block */)arg8;
+ (id)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 hostAppIsManaged:(bool)arg3 mayOpenFromUnmanagedToManaged:(bool)arg4 mayOpenFromManagedToUnmanaged:(bool)arg5;
+ (id)allowedOpenInAppBundleIDsWithOriginalAppBundleIDs:(id)arg1 managedAppBundleIDs:(id)arg2 localAppBundleID:(id)arg3 localAccountIsManaged:(bool)arg4 mayOpenFromUnmanagedToManaged:(bool)arg5 mayOpenFromManagedToUnmanaged:(bool)arg6 isAppBundleIDExemptBlock:(id /* block */)arg7 isAppBundleIDAccountBasedBlock:(id /* block */)arg8;
+ (int)appWhitelistStateWithSettingsDictionary:(id)arg1 restrictionsDictionary:(id)arg2;
+ (id)applyRestrictions:(id)arg1 forFeature:(id)arg2 toParametersForBoolSetting:(id)arg3;
+ (bool)boolSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (int)boolSettingForFeature:(id)arg1 outAsk:(bool*)arg2 withUserSettingDictionary:(id)arg3;
+ (int)boolSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (int)defaultBoolValueForSetting:(id)arg1;
+ (int)defaultBoolValueForSetting:(id)arg1 outAsk:(bool*)arg2;
+ (id)defaultIntersectedValuesForSetting:(id)arg1;
+ (id)defaultParametersForBoolSetting:(id)arg1;
+ (id)defaultParametersForIntersectedValuesSetting:(id)arg1;
+ (id)defaultParametersForUnionValuesSetting:(id)arg1;
+ (id)defaultParametersForValueSetting:(id)arg1;
+ (id)defaultRestrictionFilePath;
+ (id)defaultSettings;
+ (id)defaultUnionValuesForSetting:(id)arg1;
+ (id)defaultValueForSetting:(id)arg1;
+ (id)explicitlyRestrictedAppsBySetting;
+ (id)explicitlyRestrictedEphemeralMultiUserApps;
+ (id)filterRestrictionDictionary:(id)arg1 acceptedKeysDict:(id)arg2;
+ (id)filterRestrictionDictionary:(id)arg1 toIncludeOnlyRestrictionsThatDifferFromRestrictions:(id)arg2;
+ (id)filterRestrictionDictionaryForPublicUse:(id)arg1;
+ (id)filterUserSettingsForPublicUse:(id)arg1;
+ (bool)intersectedValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (id)intersectedValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (bool)intersectedValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (id)intersectedValuesSettingForFeature:(id)arg1 withUserSettingDectionary:(id)arg2;
+ (bool)isInSingleAppModeWithSettingsDictionary:(id)arg1;
+ (bool)isPasscodeRequiredToAccessWhitelistedAppsWithSettingsDictionary:(id)arg1;
+ (bool)isWebContentFilterUIActiveWithRestrictionDictionary:(id)arg1;
+ (bool)isWhitelistedAppsRestrictionEnforcedWithRestrictionsDictionary:(id)arg1;
+ (id)maximumValueForSetting:(id)arg1;
+ (bool)mayEnterPasscodeToAccessNonWhitelistedAppsWithSettingsDictionary:(id)arg1;
+ (id)minimumValueForSetting:(id)arg1;
+ (id)newEffectiveSettingsByApplyingRestrictions:(id)arg1 toSettings:(id)arg2;
+ (id)objectForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (id)parametersForBoolSetting:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (id)parametersForIntersectedSetting:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (id)parametersForSetting:(id)arg1 ofType:(id)arg2 withUserSettingDictionary:(id)arg3;
+ (id)parametersForUnionSetting:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (id)parametersForValueSetting:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (bool)restrictedBool:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (int)restrictedBoolForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (bool)restrictedValue:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (id)restrictionsAfterApplyingRestrictionsDictionary:(id)arg1 toRestrictionsDictionary:(id)arg2 outChangeDetected:(bool*)arg3 outError:(id*)arg4;
+ (id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 profileRestrictions:(id)arg3 clientRestrictions:(id)arg4 outRestrictionsChanged:(bool*)arg5 outError:(id*)arg6;
+ (id)restrictionsWithCurrentRestrictions:(id)arg1 defaultRestrictions:(id)arg2 systemProfileRestrictions:(id)arg3 userProfileRestrictions:(id)arg4 systemClientRestrictions:(id)arg5 userClientRestrictions:(id)arg6 outRestrictionsChanged:(bool*)arg7 outError:(id*)arg8;
+ (id)sharedManager;
+ (bool)unionValuesForFeature:(id)arg1 changedBetweenOldRestrictions:(id)arg2 andNewRestrictions:(id)arg3;
+ (id)unionValuesForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (bool)unionValuesSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (id)unionValuesSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;
+ (id)valueForFeature:(id)arg1 withRestrictionsDictionary:(id)arg2;
+ (bool)valueSetting:(id)arg1 valueChangedBetweenOldSettings:(id)arg2 andNewSettings:(id)arg3;
+ (id)valueSettingForFeature:(id)arg1 withUserSettingDictionary:(id)arg2;

- (void).cxx_destruct;
- (id)_effectiveIntersectedValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2;
- (id)_effectiveUnionValuesForSetting:(id)arg1 effectiveUserSettings:(id)arg2;
- (bool)_isBoolSettingLockedDown:(id)arg1;
- (bool)_isValueSettingLockedDown:(id)arg1 effectiveSetting:(id)arg2;
- (id)allClientUUIDsForClientType:(id)arg1;
- (bool)allowedToRunAppWithBundleID:(id)arg1;
- (int)appWhitelistState;
- (id)appsAndOptionsForClientUUID:(id)arg1;
- (int)boolSettingForFeature:(id)arg1;
- (id)clientRestrictionsForClientUUID:(id)arg1;
- (id)combinedProfileRestrictions;
- (id)currentRestrictions;
- (id)defaultRestrictions;
- (id)defaultSettings;
- (id)description;
- (id)effectiveBlacklistedAppBundleIDs;
- (id)effectiveBlacklistedAppBundleIDsExcludingRemovedSystemApps:(bool)arg1;
- (id)effectiveIntersectedValuesForSetting:(id)arg1;
- (id)effectiveParametersForBoolSetting:(id)arg1;
- (id)effectiveParametersForBoolSetting:(id)arg1 configurationUUID:(id)arg2;
- (id)effectiveParametersForIntersectedSetting:(id)arg1;
- (id)effectiveParametersForUnionSetting:(id)arg1;
- (id)effectiveParametersForValueSetting:(id)arg1;
- (int)effectiveRestrictedBoolForSetting:(id)arg1;
- (int)effectiveRestrictedBoolForSetting:(id)arg1 configurationUUID:(id)arg2;
- (id)effectiveUnionValuesForSetting:(id)arg1;
- (id)effectiveUserSettings;
- (id)effectiveValueForSetting:(id)arg1;
- (id)effectiveWhitelistedAppBundleIDs;
- (id)effectiveWhitelistedAppsAndOptions;
- (id)exchangeUUIDsRestrictingSettings:(id)arg1;
- (id)init;
- (id)intersectedValuesForFeature:(id)arg1;
- (id)intersectedValuesSettingForFeature:(id)arg1;
- (void)invalidateRestrictions;
- (void)invalidateSettings;
- (bool)isBoolSettingLockedDownByRestrictions:(id)arg1;
- (bool)isInSingleAppMode;
- (bool)isIntersectionSettingLockedDownByRestrictions:(id)arg1;
- (bool)isSettingLockedDownByRestrictions:(id)arg1;
- (bool)isUnionSettingLockedDownByRestrictions:(id)arg1;
- (bool)isValueSettingLockedDownByRestrictions:(id)arg1;
- (id)memberQueue;
- (id)memberQueueAppsAndOptionsForClientUUID:(id)arg1;
- (id)memberQueueClientRestrictionsDictionaryForClientUUID:(id)arg1;
- (id)memberQueueClientRestrictionsForClientUUID:(id)arg1;
- (id)memberQueueClientTypeForClientUUID:(id)arg1;
- (id)memberQueueCombinedProfileRestrictions;
- (id)memberQueueEffectiveUserSettings;
- (id)memberQueueRestrictions;
- (id)memberQueueSystemClientRestrictions;
- (id)memberQueueSystemNamespacedUserSettings;
- (id)memberQueueSystemProfileRestrictions;
- (id)memberQueueSystemUserSettings;
- (id)memberQueueUserClientRestrictions;
- (id)memberQueueUserInfoForClientUUID:(id)arg1;
- (id)memberQueueUserNamespacedUserSettings;
- (id)memberQueueUserProfileRestrictions;
- (id)memberQueueUserUserSettings;
- (id)objectForFeature:(id)arg1;
- (id)parentalControlsBlacklistedAppBundleIDs;
- (id)parentalControlsWhitelistedAppBundleIDs;
- (id)potentialRestrictionsAfterApplyingRestrictionsDictionary:(id)arg1 outChangeDetected:(bool*)arg2 outError:(id*)arg3;
- (id)profileIdentifiersRestrictingSettings:(id)arg1;
- (id)restrictedAppBundleIDs;
- (id)restrictedAppBundleIDsExcludingRemovedSystemApps:(bool)arg1;
- (int)restrictedBoolForFeature:(id)arg1;
- (id)restrictionEnforcedBlacklistedAppBundleIDs;
- (id)restrictionEnforcedBlacklistedAppBundleIDsExcludingRemovedSystemApps:(bool)arg1;
- (id)restrictionEnforcedWhitelistedAppBundleIDs;
- (void)setMemberQueue:(id)arg1;
- (void)setMemberQueueEffectiveUserSettings:(id)arg1;
- (void)setMemberQueueRestrictions:(id)arg1;
- (void)setMemberQueueSystemClientRestrictions:(id)arg1;
- (void)setMemberQueueSystemNamespacedUserSettings:(id)arg1;
- (void)setMemberQueueSystemProfileRestrictions:(id)arg1;
- (void)setMemberQueueSystemUserSettings:(id)arg1;
- (void)setMemberQueueUserClientRestrictions:(id)arg1;
- (void)setMemberQueueUserNamespacedUserSettings:(id)arg1;
- (void)setMemberQueueUserProfileRestrictions:(id)arg1;
- (void)setMemberQueueUserUserSettings:(id)arg1;
- (id)singleAppModeBundleID;
- (id)systemClientRestrictions;
- (id)systemProfileRestrictions;
- (id)systemUserSettings;
- (id)unionValuesForFeature:(id)arg1;
- (id)unionValuesSettingForFeature:(id)arg1;
- (id)userClientRestrictions;
- (id)userInfoForClientUUID:(id)arg1;
- (id)userProfileRestrictions;
- (id)userSettings;
- (id)userUserSettings;
- (id)valueForFeature:(id)arg1;
- (id)valueSettingForFeature:(id)arg1;

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
