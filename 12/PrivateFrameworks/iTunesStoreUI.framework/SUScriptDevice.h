<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SUScriptDevice.h</title>
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

/PrivateFrameworks/iTunesStoreUI.framework/SUScriptDevice.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI (1)
 */

@interface SUScriptDevice : SUScriptObject {
    NSMutableArray * _scriptFunctions;
}

@property (readonly) NSString *UTIImage;
@property (readonly) NSString *UTIMovie;
@property (readonly) NSString *UTIText;
@property (readonly) id accessibilityBoldTextEnabled;
@property (readonly) id accessibilityButtonShapesEnabled;
@property (readonly) id accessibilityDarkenSystemColors;
@property (readonly) id accessibilityEnhanceBackgroundContrast;
@property (readonly) id accessibilityReduceMotion;
@property (readonly) SUScriptColor *accessibilitySingleColor;
@property (readonly) id accessibilitySingleColorSelected;
@property (readonly) id accessibilityUseDarkerKeyboard;
@property (readonly) long long activeNetworkType;
@property (readonly) NSArray *automaticDownloadMediaTypes;
@property (readonly) NSString *capabilityNameEmail;
@property (readonly) NSString *capabilityNameExplicitMedia;
@property (readonly) NSString *capabilityNameHDVideo;
@property (readonly) NSString *capabilityNameHDVideo1080p;
@property (readonly) NSString *capabilityNameHDVideo720p;
@property (readonly) NSString *capabilityNamePodcasts;
@property (readonly) NSString *capabilityNameWiFi;
@property (readonly) unsigned int deviceTypeIdentifier;
@property (readonly) NSNumber *diskSpaceAvailable;
@property (readonly) SUScriptDictionary *diskUsageDictionary;
@property (readonly) long long freeSpaceEffortLevelAutomaticOnly;
@property (readonly) long long freeSpaceEffortLevelDoNothing;
@property (readonly) long long freeSpaceEffortLevelManualSpaceManagement;
@property (readonly) long long freeSpaceEffortLevelPromptUser;
@property (readonly) NSString *freeSpaceOptionEffortLevel;
@property (readonly) long long hardwareType;
@property (readonly) long long hardwareTypeAppleTVJ33;
@property (readonly) long long hardwareTypeAppleTVK66;
@property (readonly) long long hardwareTypeIPadJ1;
@property (readonly) long long hardwareTypeIPadJ2;
@property (readonly) long long hardwareTypeIPadJ2a;
@property (readonly) long long hardwareTypeIPadK93;
@property (readonly) long long hardwareTypeIPadK93a;
@property (readonly) long long hardwareTypeIPadK94;
@property (readonly) long long hardwareTypeIPadK95;
@property (readonly) long long hardwareTypeIPhoneM68;
@property (readonly) long long hardwareTypeIPhoneN82;
@property (readonly) long long hardwareTypeIPhoneN88;
@property (readonly) long long hardwareTypeIPhoneN90;
@property (readonly) long long hardwareTypeIPhoneN92;
@property (readonly) long long hardwareTypeIPhoneN94;
@property (readonly) long long hardwareTypeIPodTouchN18;
@property (readonly) long long hardwareTypeIPodTouchN45;
@property (readonly) long long hardwareTypeIPodTouchN72;
@property (readonly) long long hardwareTypeIPodTouchN81;
@property (readonly) long long hardwareTypeIPodTouchN81a;
@property (readonly) long long hardwareTypeUnknown;
@property (readonly) long long hardwareTypeWildcatK48;
@property (readonly) NSNumber *mainScreenScale;
@property (readonly) NSNumber *metricsPostFrequencyOverride;
@property (readonly) id needsToneRegrantOption;
@property (readonly) long long networkType2G;
@property (readonly) long long networkType3G;
@property (readonly) long long networkType4G;
@property (readonly) long long networkType5G;
@property (readonly) long long networkType6G;
@property (readonly) long long networkType7G;
@property (readonly) long long networkType8G;
@property (readonly) long long networkType9G;
@property (readonly) long long networkTypeNone;
@property (readonly) long long networkTypeWiFi;
@property (readonly) NSString *orientationStringLandscapeLeft;
@property (readonly) NSString *orientationStringLandscapeRight;
@property (readonly) NSString *orientationStringPortrait;
@property (readonly) NSString *orientationStringPortraitUpsideDown;
@property (readonly) NSString *restrictionAccountModificationAllowed;
@property (readonly) NSString *restrictionAllowGlobalBackgroundFetchWhenRoaming;
@property (readonly) NSString *restrictionAllowVoiceDialing;
@property (readonly) NSString *restrictionAppInstallationAllowed;
@property (readonly) NSString *restrictionAppRemovalAllowed;
@property (readonly) NSString *restrictionBookStoreAllowed;
@property (readonly) NSString *restrictionBookStoreEroticaAllowed;
@property (readonly) long long restrictionBoolNo;
@property (readonly) long long restrictionBoolNoData;
@property (readonly) long long restrictionBoolYes;
@property (readonly) NSString *restrictionCameraAllowed;
@property (readonly) NSString *restrictionCellularHDUploadsAllowed;
@property (readonly) NSString *restrictionITunesAllowed;
@property (readonly) NSString *restrictionITunesSocialAllowed;
@property (readonly) NSString *restrictionMultiplayerGamingAllowed;
@property (readonly) NSString *restrictionSafariAllowed;
@property (readonly) NSString *restrictionScreenShotAllowed;
@property (readonly) NSString *restrictionTypeApplications;
@property (readonly) NSString *restrictionTypeMovies;
@property (readonly) NSString *restrictionTypeTelevision;
@property (readonly) NSString *restrictionVideoConferencingAllowed;
@property (readonly) NSString *restrictionYouTubeAllowed;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)UTIForURL:(id)arg1;
- (id)UTIImage;
- (id)UTIMovie;
- (id)UTIText;
- (void)_accessibilitySettingsChangedNotification:(id)arg1;
- (void)_addScriptFunction:(id)arg1;
- (void)_autoDownloadKindsChangedNotification:(id)arg1;
- (id)_className;
- (long long)_deviceCapabilityForString:(id)arg1;
- (void)_removeScriptFunction:(id)arg1;
- (id)accessibilityBoldTextEnabled;
- (id)accessibilityButtonShapesEnabled;
- (id)accessibilityDarkenSystemColors;
- (id)accessibilityEnhanceBackgroundContrast;
- (id)accessibilityReduceMotion;
- (id)accessibilitySingleColor;
- (id)accessibilitySingleColorSelected;
- (id)accessibilityUseDarkerKeyboard;
- (long long)activeNetworkType;
- (id)attributeKeys;
- (id)automaticDownloadMediaTypes;
- (long long)boolValueForRestriction:(id)arg1;
- (id)capabilityNameEmail;
- (id)capabilityNameExplicitMedia;
- (id)capabilityNameHDVideo;
- (id)capabilityNameHDVideo1080p;
- (id)capabilityNameHDVideo720p;
- (id)capabilityNamePodcasts;
- (id)capabilityNameWiFi;
- (id)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(bool)arg2;
- (void)dealloc;
- (unsigned int)deviceTypeIdentifier;
- (id)diskSpaceAvailable;
- (id)diskUsageDictionary;
- (long long)freeSpaceEffortLevelAutomaticOnly;
- (long long)freeSpaceEffortLevelDoNothing;
- (long long)freeSpaceEffortLevelManualSpaceManagement;
- (long long)freeSpaceEffortLevelPromptUser;
- (id)freeSpaceOptionEffortLevel;
- (id)getMachineIdentifierForAccountIdentifier:(id)arg1;
- (long long)hardwareType;
- (long long)hardwareTypeAppleTVJ33;
- (long long)hardwareTypeAppleTVK66;
- (long long)hardwareTypeIPadJ1;
- (long long)hardwareTypeIPadJ2;
- (long long)hardwareTypeIPadJ2a;
- (long long)hardwareTypeIPadK93;
- (long long)hardwareTypeIPadK93a;
- (long long)hardwareTypeIPadK94;
- (long long)hardwareTypeIPadK95;
- (long long)hardwareTypeIPhoneM68;
- (long long)hardwareTypeIPhoneN82;
- (long long)hardwareTypeIPhoneN88;
- (long long)hardwareTypeIPhoneN90;
- (long long)hardwareTypeIPhoneN92;
- (long long)hardwareTypeIPhoneN94;
- (long long)hardwareTypeIPodTouchN18;
- (long long)hardwareTypeIPodTouchN45;
- (long long)hardwareTypeIPodTouchN72;
- (long long)hardwareTypeIPodTouchN81;
- (long long)hardwareTypeIPodTouchN81a;
- (long long)hardwareTypeUnknown;
- (long long)hardwareTypeWildcatK48;
- (id)hasCapability:(id)arg1;
- (id)init;
- (id)isRestrictionLockedDown:(id)arg1;
- (id)mainScreenScale;
- (id)metricsPostFrequencyOverride;
- (id)needsToneRegrantOption;
- (long long)networkType2G;
- (long long)networkType3G;
- (long long)networkType4G;
- (long long)networkType5G;
- (long long)networkType6G;
- (long long)networkType7G;
- (long long)networkType8G;
- (long long)networkType9G;
- (long long)networkTypeNone;
- (long long)networkTypeWiFi;
- (id)orientationStringLandscapeLeft;
- (id)orientationStringLandscapeRight;
- (id)orientationStringPortrait;
- (id)orientationStringPortraitUpsideDown;
- (void)requestFreeSpaceWithBytes:(id)arg1 options:(id)arg2 completionHandler:(id)arg3;
- (id)restrictionAccountModificationAllowed;
- (id)restrictionAllowGlobalBackgroundFetchWhenRoaming;
- (id)restrictionAllowVoiceDialing;
- (id)restrictionAppInstallationAllowed;
- (id)restrictionAppRemovalAllowed;
- (id)restrictionBookStoreAllowed;
- (id)restrictionBookStoreEroticaAllowed;
- (long long)restrictionBoolNo;
- (long long)restrictionBoolNoData;
- (long long)restrictionBoolYes;
- (id)restrictionCameraAllowed;
- (id)restrictionCellularHDUploadsAllowed;
- (id)restrictionExplicitMedia;
- (id)restrictionITunesAllowed;
- (id)restrictionITunesSocialAllowed;
- (id)restrictionLevelForType:(id)arg1;
- (id)restrictionMultiplayerGamingAllowed;
- (id)restrictionSafariAllowed;
- (id)restrictionScreenShotAllowed;
- (id)restrictionTypeApplications;
- (id)restrictionTypeMovies;
- (id)restrictionTypeTelevision;
- (id)restrictionVideoConferencingAllowed;
- (id)restrictionYouTubeAllowed;
- (id)scriptAttributeKeys;
- (void)setAutomaticDownloadKinds:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setDiskUsageDictionary:(id)arg1;
- (void)setValueForRestriction:(id)arg1 enabled:(id)arg2;
- (id)valueForRestriction:(id)arg1;

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