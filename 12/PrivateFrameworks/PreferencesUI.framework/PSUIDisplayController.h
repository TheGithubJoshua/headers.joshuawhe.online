<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PSUIDisplayController.h</title>
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

/PrivateFrameworks/PreferencesUI.framework/PSUIDisplayController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI (1.0)
 */

@interface PSUIDisplayController : PSListController <PSListControllerTestableSpecifiers, PSMagnifyControllerDelegate> {
    NSDictionary * _autoLockTitleDictionary;
    NSArray * _autoLockValues;
    CBClient * _brightnessClient;
    NSMutableDictionary * _localizedAutoLockTitleDictionary;
    NSDateFormatter * _timeFormatter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)booleanCapabilitiesToTest;

- (void).cxx_destruct;
- (void)_cleanupTransactionRef;
- (void)_localizeAutoLockTitles;
- (id)backlightValue:(id)arg1;
- (id)blueLightSchedule:(id)arg1;
- (id)boldTextEnabledForSpecifier:(id)arg1;
- (void)brightnessChangedExternally;
- (id)connectedDisplaySpecifiers;
- (id)controllerForSpecifier:(id)arg1;
- (void)dealloc;
- (id)getAutoWhiteBalanceEnabled:(id)arg1;
- (void)handleBlueLightStatusChanged:(struct { bool x1; bool x2; bool x3; int x4; struct { struct { int x_1_2_1; int x_1_2_2; } x_5_1_1; struct { int x_2_2_1; int x_2_2_2; } x_5_1_2; } x5; unsigned long long x6; bool x7; }*)arg1;
- (void)handleBrightnessChangedNotification:(id)arg1;
- (void)handlePSUIExternalDisplayManagerCurrentModeDidChangeNotification:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertExternalDisplaySpecifiers;
- (id)localizedMagnifyModeName;
- (id)localizedTimeForTime:(struct { int x1; int x2; })arg1;
- (id)lockGroupFooter;
- (id)locksAndUnlocksWithCase:(id)arg1;
- (void)magnifyController:(id)arg1 didFinishWithDisplayMode:(id)arg2;
- (void)presentModalMagnifyController;
- (void)profileNotification:(id)arg1;
- (void)reloadBlueLightSpecifiers;
- (void)removeExternalDisplaySpecifiers;
- (id)screenLock:(id)arg1;
- (void)setAutoWhiteBalanceEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setBacklightValue:(id)arg1 specifier:(id)arg2;
- (void)setBoldTextEnabled:(id)arg1 specifier:(id)arg2;
- (void)setLocksAndUnlocksWithCase:(id)arg1 specifier:(id)arg2;
- (void)setScreenLock:(id)arg1 specifier:(id)arg2;
- (bool)shouldShowAutoLock;
- (bool)shouldShowCaseLockOption;
- (void)showAlertToDisableAccessibilityFilters:(id /* block */)arg1 cancel:(id /* block */)arg2;
- (id)specifiers;
- (void)updateAutoLockSpecifier;
- (void)viewWillAppear:(bool)arg1;

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
