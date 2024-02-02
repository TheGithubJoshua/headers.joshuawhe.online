<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIApplicationSceneSettings.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIApplicationSceneSettings.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIApplicationSceneSettings : FBSSceneSettings <UIApplicationSceneSettings, _UIDisplayEdgeInfoProviding>

@property (nonatomic, readonly) unsigned long long artworkSubtype;
@property (nonatomic, readonly) bool canShowAlerts;
@property (nonatomic, readonly) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic, readonly) unsigned long long deactivationReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long deviceOrientation;
@property (nonatomic, readonly) bool deviceOrientationEventsEnabled;
@property (getter=isEffectivelyBackgrounded, nonatomic, readonly) bool effectivelyBackgrounded;
@property (nonatomic, readonly) bool forcedStatusBarForegroundTransparent;
@property (nonatomic, readonly) NSNumber *forcedStatusBarStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double homeAffordanceOverlayAllowance;
@property (nonatomic, readonly) bool idleModeEnabled;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } peripheryInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsLandscapeLeft;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsLandscapeRight;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsPortrait;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsetsPortraitUpsideDown;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } statusBarAvoidanceFrame;
@property (nonatomic, readonly) bool statusBarDisabled;
@property (nonatomic, readonly) long long statusBarParts;
@property (nonatomic, readonly) int statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double systemMinimumMargin;
@property (nonatomic, readonly) bool underLock;
@property (nonatomic, readonly) long long userInterfaceStyle;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (unsigned long long)artworkSubtype;
- (bool)canShowAlerts;
- (Class)canvasClass;
- (id)cornerRadiusConfiguration;
- (unsigned long long)deactivationReasons;
- (long long)deviceOrientation;
- (bool)deviceOrientationEventsEnabled;
- (bool)forcedStatusBarForegroundTransparent;
- (id)forcedStatusBarStyle;
- (double)homeAffordanceOverlayAllowance;
- (bool)idleModeEnabled;
- (bool)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })peripheryInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeLeft;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsLandscapeRight;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortrait;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsetsPortraitUpsideDown;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })statusBarAvoidanceFrame;
- (bool)statusBarDisabled;
- (long long)statusBarParts;
- (int)statusBarStyleOverridesToSuppress;
- (double)systemMinimumMargin;
- (bool)underLock;
- (long long)userInterfaceStyle;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (bool)fb_isUnderLock;
- (bool)isEffectivelyBackgrounded;

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