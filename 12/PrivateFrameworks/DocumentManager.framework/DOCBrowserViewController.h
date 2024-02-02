<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>DOCBrowserViewController.h</title>
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

/PrivateFrameworks/DocumentManager.framework/DOCBrowserViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager (68.100.44)
 */

@interface DOCBrowserViewController : UIViewController <DOCAppearanceProtocol, DOCHostBrowserViewControllerProxy, DOCNavigationBarOverwriteProtocol, DOCRemoteSourceManagementInterface> {
    NSArray * _builtinActionsForSelectedItems;
    DOCConfiguration * _configuration;
    bool  _currentLocationCanSelect;
    bool  _currentLocationIsWritable;
    <DOCDocumentBrowserDelegate> * _delegate;
    NSArray * _hostProvidedActions;
    <DOCServiceBrowserViewControllerInProcessProxy> * _inProcessServiceBrowserProxy;
    bool  _isTopNavigationItem;
    DOCAppearance * _lastAppearance;
    UIViewController<DOCRemoteAppearanceInterface><DOCRemoteSourceManagementInterface> * _localViewController;
    NSString * _overriddenTitle;
    _UIResilientRemoteViewContainerViewController * _remoteViewController;
    NSMutableArray * _remoteViewControllerAvailableCompletionHandlers;
    DOCSearchContext * _searchContext;
    DOCConcreteLocation * _selectedLocation;
    <DOCServiceBrowserViewControllerProxy> * _serviceBrowserProxy;
    NSOperationQueue * _serviceProxyOperationQueue;
    bool  _supportsImportInCurrentLocation;
}

@property (nonatomic, copy) NSArray *builtinActionsForSelectedItems;
@property (readonly) DOCConfiguration *configuration;
@property (nonatomic) bool currentLocationCanSelect;
@property (nonatomic) bool currentLocationIsWritable;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DOCDocumentBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *hostProvidedActions;
@property (readonly) <DOCServiceBrowserViewControllerInProcessProxy> *inProcessServiceBrowserProxy;
@property bool isTopNavigationItem;
@property (readonly) DOCAppearance *lastAppearance;
@property (copy) NSString *overriddenTitle;
@property (retain) NSMutableArray *remoteViewControllerAvailableCompletionHandlers;
@property (nonatomic, retain) DOCSearchContext *searchContext;
@property (nonatomic, copy) DOCConcreteLocation *selectedLocation;
@property (readonly) <DOCServiceBrowserViewControllerProxy> *serviceBrowserProxy;
@property (readonly) NSOperationQueue *serviceProxyOperationQueue;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsImportInCurrentLocation;

- (void).cxx_destruct;
- (void)_setResolvedSelectedLocation:(id)arg1;
- (void)_updateAppearance;
- (void)_updateHostProvidedActions;
- (void)_updateSelectedBrowserLocation;
- (void)browserDidFinishGatheringItemsAndThumbnails;
- (void)browserDidUpdateNumberOfSelectableItems:(unsigned long long)arg1;
- (void)browserDismissButtonWasTapped;
- (void)browserIsDisplayingEmptyCollection:(bool)arg1;
- (void)browserLocationsButtonWasTappedWithSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)builtinActionsDidChange:(id)arg1;
- (id)builtinActionsForSelectedItems;
- (void)callViewControllerCompletionHandlersWithError:(id)arg1;
- (id)configuration;
- (void)createNewFile;
- (void)createNewFolderWithMaxThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)currentLocationCanSelect;
- (bool)currentLocationIsWritable;
- (id)delegate;
- (void)didCommitPreviewOfDocument:(id)arg1;
- (void)didPickItem:(id)arg1;
- (void)didPickLocation:(id)arg1 forceReplaceLocation:(bool)arg2;
- (void)didSelectItems:(id)arg1;
- (void)didTriggerActionWithIdentifier:(id)arg1 onItems:(id)arg2;
- (void)didTriggerFPUIActionWithIdentifier:(id)arg1 providerIdentifier:(id)arg2 domainIdentifier:(id)arg3 title:(id)arg4 onItems:(id)arg5;
- (void)didUpdateCurrentLocationCanSelect:(bool)arg1;
- (void)didUpdateCurrentLocationIsWritable:(bool)arg1;
- (void)didUpdateImportSupportInCurrentLocation:(bool)arg1;
- (void)fetchAllSourcesWithCompletionHandler:(id /* block */)arg1;
- (id)hostProvidedActions;
- (id)inProcessServiceBrowserProxy;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isRelevantBrowser;
- (bool)isTopNavigationItem;
- (id)lastAppearance;
- (id)lastVisitedLocation;
- (id)overriddenTitle;
- (id)remoteInterface;
- (id)remoteViewController;
- (id)remoteViewControllerAvailableCompletionHandlers;
- (void)revealItemAtURL:(id)arg1 completion:(id /* block */)arg2;
- (void)saveLastVisitedLocationIfNeeded;
- (id)searchContext;
- (id)selectedLocation;
- (id)serviceBrowserProxy;
- (id)serviceProxyOperationQueue;
- (void)setBuiltinActionsForSelectedItems:(id)arg1;
- (void)setCurrentLocationCanSelect:(bool)arg1;
- (void)setCurrentLocationIsWritable:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setHostProvidedActions:(id)arg1;
- (void)setIsTopNavigationItem:(bool)arg1;
- (void)setOverriddenTitle:(id)arg1;
- (void)setRemoteViewControllerAvailableCompletionHandlers:(id)arg1;
- (void)setSearchContext:(id)arg1;
- (void)setSelectedLocation:(id)arg1;
- (void)setSelectedLocation:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setSelectedLocation:(id)arg1 viewHierarchyPreparationHandler:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)setSupportsImportInCurrentLocation:(bool)arg1;
- (void)showInfoForItem:(id)arg1;
- (bool)supportsImportInCurrentLocation;
- (void)tagsDidChange:(id)arg1;
- (void)updateAppearance:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

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