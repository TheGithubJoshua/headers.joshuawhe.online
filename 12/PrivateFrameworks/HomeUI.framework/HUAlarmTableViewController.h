<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HUAlarmTableViewController.h</title>
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

/PrivateFrameworks/HomeUI.framework/HUAlarmTableViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI (1)
 */

@interface HUAlarmTableViewController : HUItemTableViewController <HFAccessoryObserver, HFAccessorySettingMobileTimerAdapterObserver, HFMediaObjectObserver, HUAlarmEditViewControllerDelegate, HUHomePodAlarmItemModuleControllerDelegate, HUPresentationDelegateHost> {
    UIBarButtonItem * _addButtonItem;
    HUHomePodAlarmItemModuleController * _alarmModuleController;
    MTAlarm * _alarmToEdit;
    UIBarButtonItem * _doneButtonItem;
    UIBarButtonItem * _editDoneButtonItem;
    bool  _isAccessoryControllable;
    bool  _isAlarmsSettingReady;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    _UIContentUnavailableView * _noItemsView;
    <HUPresentationDelegate> * _presentationDelegate;
}

@property (nonatomic, retain) UIBarButtonItem *addButtonItem;
@property (nonatomic, retain) HUHomePodAlarmItemModuleController *alarmModuleController;
@property (nonatomic, retain) MTAlarm *alarmToEdit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButtonItem;
@property (nonatomic, retain) UIBarButtonItem *editDoneButtonItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAccessoryControllable;
@property (nonatomic, readonly) bool isAlarmsSettingReady;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, retain) _UIContentUnavailableView *noItemsView;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_discernReachabilityForAccessory:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)_editDoneAction:(id)arg1;
- (void)_layoutNoItemsLabel;
- (void)_numberOfItemsDidChangeAnimated:(bool)arg1;
- (void)_showAddView:(id)arg1;
- (id)_tableView:(id)arg1 templateLayoutCellForCellsWithReuseIdentifier:(id)arg2;
- (void)_updateAccessoryControllable:(bool)arg1 alarmsSettingReady:(bool)arg2;
- (void)_updateNavigationItems:(bool)arg1;
- (void)accessoryDidUpdateControllable:(id)arg1;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (id)addButtonItem;
- (void)alarmEditController:(id)arg1 didAddAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didDeleteAlarm:(id)arg2;
- (void)alarmEditController:(id)arg1 didEditAlarm:(id)arg2;
- (void)alarmEditControllerDidCancel:(id)arg1;
- (id)alarmItemManager;
- (void)alarmItemModuleController:(id)arg1 didSelectAlarm:(id)arg2;
- (id)alarmModuleController;
- (id)alarmToEdit;
- (bool)alwaysUseDeltaTableViewUpdatesAfterViewHasAppeared;
- (id)backgroundView;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)doneButtonItem;
- (id)editDoneButtonItem;
- (id)editViewControllerForAlarm:(id)arg1;
- (id)initWithMediaProfileContainer:(id)arg1;
- (bool)isAccessoryControllable;
- (bool)isAlarmsSettingReady;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)itemModuleControllers;
- (id)mediaProfileContainer;
- (void)mobileTimerAdapterDidUpdateReadiness:(id)arg1;
- (id)noItemsView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)presentationDelegate;
- (void)setAddButtonItem:(id)arg1;
- (void)setAlarmModuleController:(id)arg1;
- (void)setAlarmToEdit:(id)arg1;
- (void)setDoneButtonItem:(id)arg1;
- (void)setEditDoneButtonItem:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setNoItemsView:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
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