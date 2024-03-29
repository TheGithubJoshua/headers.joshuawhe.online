<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CNFRegListController.h</title>
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

/PrivateFrameworks/CommunicationsSetupUI.framework/CNFRegListController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI (1)
 */

@interface CNFRegListController : PSListController <CNFRegAccountAuthorizationDelegate, CNFRegChangeAccountPasswordDelegate, IMSystemMonitorListener> {
    id /* block */  _appearBlock;
    bool  _appeared;
    CNFRegController * _regController;
    bool  _shouldRerootPreferences;
    bool  _showingChildController;
}

@property (nonatomic, copy) id /* block */ appearBlock;
@property (nonatomic, readonly) bool appeared;
@property (nonatomic, readonly) long long currentAppearanceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNFRegController *regController;
@property (nonatomic) bool shouldRerootPreferences;
@property (nonatomic) bool showingChildController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_existingLabelForSection:(long long)arg1 header:(bool)arg2;
- (id)_existingLabelForSpecifier:(id)arg1 header:(bool)arg2;
- (bool)_handleURLDictionary:(id)arg1;
- (void)_performAppearBlock;
- (void)_setFieldsEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setLabel:(id)arg1 forSpecifier:(id)arg2 header:(bool)arg3;
- (void)_setSpecifierEnabled:(id)arg1 enabled:(bool)arg2 animated:(bool)arg3;
- (void)_setupEventHandlers;
- (bool)_showWiFiAlertIfNecessary;
- (void)_updateExistingLabelForSpecifier:(id)arg1 header:(bool)arg2;
- (void)_updateTableLabel:(id)arg1 withTableView:(id)arg2 isTopMostHeader:(bool)arg3;
- (void)_updateTitle;
- (id /* block */)appearBlock;
- (bool)appeared;
- (void)applicationDidResume;
- (void)authorizationController:(id)arg1 authorizedAccount:(bool)arg2;
- (void)changePasswordControllerDidCancel:(id)arg1;
- (void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (long long)currentAppearanceStyle;
- (id)customTitle;
- (void)dealloc;
- (void)handleURL:(id)arg1;
- (id)initWithParentController:(id)arg1;
- (id)initWithRegController:(id)arg1;
- (void)loadView;
- (id)logName;
- (id)regController;
- (void)removeAllHandlers;
- (void)setAppearBlock:(id /* block */)arg1;
- (void)setRegController:(id)arg1;
- (void)setShouldRerootPreferences:(bool)arg1;
- (void)setShowingChildController:(bool)arg1;
- (void)setSpecifier:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)shouldRerootPreferences;
- (bool)shouldSelectResponderOnAppearance;
- (bool)showingChildController;
- (id)specifierList;
- (id)specifiers;
- (void)systemApplicationDidBecomeActive;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationWillResignActive;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsWiFiChooser;

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
