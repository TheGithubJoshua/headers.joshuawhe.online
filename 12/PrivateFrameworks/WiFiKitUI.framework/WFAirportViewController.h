<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WFAirportViewController.h</title>
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

/PrivateFrameworks/WiFiKitUI.framework/WFAirportViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI (1)
 */

@interface WFAirportViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, WFNetworkListing> {
    NSArray * _adhocNetworks;
    bool  _askToJoinShown;
    WFChooseNetworkHeaderViewController * _chooseNetworkHeader;
    <WFNetworkListRecord> * _currentNetwork;
    float  _currentNetworkScaledRSSI;
    long long  _currentNetworkState;
    NSString * _currentNetworkSubtitle;
    long long  _deviceCapability;
    bool  _disabled;
    NSArray * _hotspotNetworks;
    NSArray * _infraNetworks;
    NSObject<OS_dispatch_queue> * _internalQueue;
    <WFNetworkListRecord> * _joiningHotspot;
    <WFAirportViewControllerDelegate> * _listDelegate;
    NSString * _powerOffLocationWarning;
    NSOrderedSet * _sections;
    bool  _showDiagnostics;
    bool  _showKnownNetworks;
    bool  _showOtherNetwork;
    UITableView * _tableView;
    NSArray * _unconfiguredNetworks;
    NSString * _userAutoJoinDisabledWarning;
    bool  _userAutoJoinEnabled;
}

@property (nonatomic, retain) NSArray *adhocNetworks;
@property (nonatomic) bool askToJoinShown;
@property (nonatomic, retain) WFChooseNetworkHeaderViewController *chooseNetworkHeader;
@property (retain) <WFNetworkListRecord> *currentNetwork;
@property float currentNetworkScaledRSSI;
@property long long currentNetworkState;
@property (nonatomic, copy) NSString *currentNetworkSubtitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long deviceCapability;
@property (nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *hotspotNetworks;
@property (nonatomic, retain) NSArray *infraNetworks;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) <WFNetworkListRecord> *joiningHotspot;
@property (nonatomic) <WFAirportViewControllerDelegate> *listDelegate;
@property (nonatomic, copy) NSString *powerOffLocationWarning;
@property (retain) NSOrderedSet *sections;
@property (nonatomic) bool showDiagnostics;
@property (nonatomic) bool showKnownNetworks;
@property (nonatomic) bool showOtherNetwork;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;
@property (nonatomic, retain) NSArray *unconfiguredNetworks;
@property (nonatomic, copy) NSString *userAutoJoinDisabledWarning;
@property (nonatomic) bool userAutoJoinEnabled;

- (void).cxx_destruct;
- (bool)_askToJoinEnabled;
- (void)_askToJoinSwitchChanged:(id)arg1;
- (void)_clearFoundNetworks;
- (id)_currentNetworkCell;
- (id)_currentNetworkCellIndexPath;
- (id)_defaultSectionsForPowerState:(bool)arg1;
- (void)_dumpSections;
- (void)_enableWAPISwitchChanged:(id)arg1;
- (bool)_isChinaDevice;
- (id)_nameOfSection:(long long)arg1;
- (void)_powerSwitchChanged:(id)arg1;
- (void)_promptToJoinAdhoc:(id)arg1;
- (bool)_refreshATJShownStateIfChanged;
- (void)_reloadHotspotSection;
- (id)_sectionNameAtIndex:(long long)arg1;
- (long long)_sectionTypeAtSection:(long long)arg1;
- (id)_tableCellForNetwork:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (void)_updateCellsWithNewData:(id)arg1 oldData:(id)arg2 inSection:(long long)arg3 insertSection:(bool)arg4;
- (void)_updateNetworkRestrictionHeader;
- (id)adhocNetworks;
- (bool)askToJoinShown;
- (id)chooseNetworkHeader;
- (id)currentNetwork;
- (float)currentNetworkScaledRSSI;
- (long long)currentNetworkState;
- (id)currentNetworkSubtitle;
- (long long)deviceCapability;
- (bool)disabled;
- (id)hotspotNetworks;
- (id)infraNetworks;
- (id)init;
- (id)internalQueue;
- (id)joiningHotspot;
- (id)listDelegate;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)powerOffLocationWarning;
- (void)powerStateDidChange:(bool)arg1;
- (bool)powered;
- (void)refresh;
- (id)sections;
- (void)setAdhocNetworks:(id)arg1;
- (void)setAskToJoinShown:(bool)arg1;
- (void)setChooseNetworkHeader:(id)arg1;
- (void)setCurrentNetwork:(id)arg1;
- (void)setCurrentNetwork:(id)arg1 scrollToRecord:(bool)arg2;
- (void)setCurrentNetworkScaledRSSI:(float)arg1;
- (void)setCurrentNetworkState:(long long)arg1;
- (void)setCurrentNetworkSubtitle:(id)arg1;
- (void)setDeviceCapability:(long long)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setHotspotNetworks:(id)arg1;
- (void)setInfraNetworks:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setJoiningHotspot:(id)arg1;
- (void)setListDelegate:(id)arg1;
- (void)setNetworks:(id)arg1;
- (void)setPowerOffLocationWarning:(id)arg1;
- (void)setScanning:(bool)arg1;
- (void)setSections:(id)arg1;
- (void)setShowDiagnostics:(bool)arg1;
- (void)setShowKnownNetworks:(bool)arg1;
- (void)setShowOtherNetwork:(bool)arg1;
- (void)setTableView:(id)arg1;
- (void)setUnconfiguredNetworks:(id)arg1;
- (void)setUserAutoJoinDisabledWarning:(id)arg1;
- (void)setUserAutoJoinEnabled:(bool)arg1;
- (bool)shouldPromptWhenCarPlaySessionIsActive;
- (bool)shouldPromptWhenPersonalHotspotIsEnabled;
- (bool)showDiagnostics;
- (bool)showKnownNetworks;
- (bool)showOtherNetwork;
- (bool)supportsWiFiPasswordSharing;
- (id)tableView;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)unconfiguredNetworks;
- (void)updateViewsForNetworks:(id)arg1;
- (id)userAutoJoinDisabledWarning;
- (bool)userAutoJoinEnabled;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
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
