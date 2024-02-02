<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SBLocalDefaults.h</title>
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

/PrivateFrameworks/SpringBoardFoundation.framework/SBLocalDefaults.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation (1)
 */

@interface SBLocalDefaults : SBAbstractDefaults {
    SBAccessibilityDefaults * _lazy_accessibilityDefaults;
    SBAppIconForceTouchDefaults * _lazy_appIconForceTouchDefaults;
    SBAppSwitcherDefaults * _lazy_appSwitcherDefaults;
    SBApplicationDefaults * _lazy_applicationDefaults;
    SBBiometricAuthenticationDefaults * _lazy_biometricAuthenticationDefaults;
    SBBootDefaults * _lazy_bootDefaults;
    SBCarPlayDefaults * _lazy_carPlayDefaults;
    SBDemoDefaults * _lazy_demoDefaults;
    SBFloatingDockDefaults * _lazy_floatingDockDefaults;
    SBGestureDefaults * _lazy_gestureDefaults;
    SBHardwareDefaults * _lazy_hardwareDefaults;
    SBIconDefaults * _lazy_iconDefaults;
    SBIdleTimerDefaults * _lazy_idleTimerDefaults;
    SBLockScreenDefaults * _lazy_lockScreenDefaults;
    SBMiscellaneousDefaults * _lazy_miscellaneousDefaults;
    SBMultiUserDefaults * _lazy_multiUserDefaults;
    SBNotificationCenterDefaults * _lazy_notificationCenterDefaults;
    SBNotificationDefaults * _lazy_notificationDefaults;
    SBPIPDefaults * _lazy_pipDefaults;
    SBPowerDefaults * _lazy_powerDefaults;
    SBPrototypingDefaults * _lazy_prototypingDefaults;
    SBRecentDisplayItemsDefaults * _lazy_recentDisplayItemsDefaults;
    SBRotationDefaults * _lazy_rotationDefaults;
    SBSecurityDefaults * _lazy_securityDefaults;
    SBSetupDefaults * _lazy_setupDefaults;
    SBSoftwareUpdateDefaults * _lazy_softwareUpdateDefaults;
    SBSOSDefaults * _lazy_sosDefaults;
    SBSoundDefaults * _lazy_soundDefaults;
    SBStatusBarDefaults * _lazy_statusBarDefaults;
    SBThermalDefaults * _lazy_thermalDefaults;
    SBUsageDefaults * _lazy_usageDefaults;
    SBVoiceControlDefaults * _lazy_voiceControlDefaults;
    SBWallpaperDefaults * _lazy_wallpaperDefaults;
    SBWorkspaceDefaults * _lazy_workspaceDefaults;
}

@property (nonatomic, readonly, retain) SBAccessibilityDefaults *accessibilityDefaults;
@property (nonatomic, readonly, retain) SBAppIconForceTouchDefaults *appIconForceTouchDefaults;
@property (nonatomic, readonly, retain) SBAppSwitcherDefaults *appSwitcherDefaults;
@property (nonatomic, readonly, retain) SBApplicationDefaults *applicationDefaults;
@property (nonatomic, readonly, retain) SBBiometricAuthenticationDefaults *biometricAuthenticationDefaults;
@property (nonatomic, readonly, retain) SBBootDefaults *bootDefaults;
@property (nonatomic, readonly, retain) SBCarPlayDefaults *carPlayDefaults;
@property (nonatomic, readonly, retain) SBDemoDefaults *demoDefaults;
@property (nonatomic, readonly, retain) SBFloatingDockDefaults *floatingDockDefaults;
@property (nonatomic, readonly, retain) SBGestureDefaults *gestureDefaults;
@property (nonatomic, readonly, retain) SBHardwareDefaults *hardwareDefaults;
@property (nonatomic, readonly, retain) SBIconDefaults *iconDefaults;
@property (nonatomic, readonly, retain) SBIdleTimerDefaults *idleTimerDefaults;
@property (nonatomic, readonly, retain) SBLockScreenDefaults *lockScreenDefaults;
@property (nonatomic, readonly, retain) SBMiscellaneousDefaults *miscellaneousDefaults;
@property (nonatomic, readonly, retain) SBMultiUserDefaults *multiUserDefaults;
@property (nonatomic, readonly, retain) SBNotificationCenterDefaults *notificationCenterDefaults;
@property (nonatomic, readonly, retain) SBNotificationDefaults *notificationDefaults;
@property (nonatomic, readonly, retain) SBPIPDefaults *pipDefaults;
@property (nonatomic, readonly, retain) SBPowerDefaults *powerDefaults;
@property (nonatomic, readonly, retain) SBPrototypingDefaults *prototypingDefaults;
@property (nonatomic, readonly, retain) SBRecentDisplayItemsDefaults *recentDisplayItemsDefaults;
@property (nonatomic, readonly, retain) SBRotationDefaults *rotationDefaults;
@property (nonatomic, readonly, retain) SBSecurityDefaults *securityDefaults;
@property (nonatomic, readonly, retain) SBSetupDefaults *setupDefaults;
@property (nonatomic, readonly, retain) SBSoftwareUpdateDefaults *softwareUpdateDefaults;
@property (nonatomic, readonly, retain) SBSOSDefaults *sosDefaults;
@property (nonatomic, readonly, retain) SBSoundDefaults *soundDefaults;
@property (nonatomic, readonly, retain) SBStatusBarDefaults *statusBarDefaults;
@property (nonatomic, readonly, retain) SBThermalDefaults *thermalDefaults;
@property (nonatomic, readonly, retain) SBUsageDefaults *usageDefaults;
@property (nonatomic, readonly, retain) SBVoiceControlDefaults *voiceControlDefaults;
@property (nonatomic, readonly, retain) SBWallpaperDefaults *wallpaperDefaults;
@property (nonatomic, readonly, retain) SBWorkspaceDefaults *workspaceDefaults;

- (void).cxx_destruct;
- (id)accessibilityDefaults;
- (id)appIconForceTouchDefaults;
- (id)appSwitcherDefaults;
- (id)applicationDefaults;
- (id)biometricAuthenticationDefaults;
- (id)bootDefaults;
- (id)carPlayDefaults;
- (id)demoDefaults;
- (id)floatingDockDefaults;
- (id)gestureDefaults;
- (id)hardwareDefaults;
- (id)iconDefaults;
- (id)idleTimerDefaults;
- (id)lockScreenDefaults;
- (void)migrateAndRemoveOldDefaults;
- (id)miscellaneousDefaults;
- (id)multiUserDefaults;
- (id)notificationCenterDefaults;
- (id)notificationDefaults;
- (id)pipDefaults;
- (id)powerDefaults;
- (id)prototypingDefaults;
- (id)recentDisplayItemsDefaults;
- (id)rotationDefaults;
- (id)securityDefaults;
- (id)setupDefaults;
- (id)softwareUpdateDefaults;
- (id)sosDefaults;
- (id)soundDefaults;
- (id)statusBarDefaults;
- (id)thermalDefaults;
- (id)usageDefaults;
- (id)voiceControlDefaults;
- (id)wallpaperDefaults;
- (id)workspaceDefaults;

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