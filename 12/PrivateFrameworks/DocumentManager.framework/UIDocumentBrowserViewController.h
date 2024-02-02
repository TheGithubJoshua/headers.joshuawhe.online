<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIDocumentBrowserViewController.h</title>
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

/PrivateFrameworks/DocumentManager.framework/UIDocumentBrowserViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager (68.100.44)
 */

@interface UIDocumentBrowserViewController : UIViewController <DOCAppearanceProtocol, DOCHostDocumentBrowserViewControllerInterface, DOCKeyCommandResponder, DOCRemoteViewControllerDelegate, DOCViewServiceErrorViewControllerDelegate, NSCoding> {
    DOCDocBrowserVC_UIActivityViewController * _activityViewController;
    NSArray * _additionalLeadingNavigationBarButtonItems;
    NSArray * _additionalTrailingNavigationBarButtonItems;
    bool  _allowsDocumentCreation;
    bool  _allowsPickingMultipleItems;
    DOCAppearance * _appearance;
    UIColor * _backgroundColor;
    UIColor * _badgeTintColor;
    DOCConfiguration * _configuration;
    UIColor * _createButtonColor;
    NSArray * _customActions;
    <UIDocumentBrowserViewControllerDelegate> * _delegate;
    UIColor * _inBrowserTintColor;
    bool  _isDisplayingRemoteViewController;
    UIColor * _itemSubtitleColor;
    UIColor * _itemTitleColor;
    NSArray * _leadingBarButtonTrackingViews;
    NSArray * _remoteAdditionalLeadingNavigationBarButtonItems;
    NSArray * _remoteAdditionalTrailingNavigationBarButtonItems;
    _UIResilientRemoteViewContainerViewController * _remoteViewController;
    <DOCServiceBrowserViewControllerProxy> * _serviceBrowserProxy;
    <DOCServiceDocumentBrowserViewControllerInterface> * _serviceProxy;
    NSOperationQueue * _serviceQueue;
    bool  _shouldDelayRemoteViewController;
    UIColor * _sortingBackgroundColor;
    UIView * _trackingViewsContainer;
    NSArray * _trailingBarButtonTrackingViews;
}

@property (nonatomic, retain) NSArray *additionalLeadingNavigationBarButtonItems;
@property (nonatomic, retain) NSArray *additionalToolbarButtonItems;
@property (nonatomic, retain) NSArray *additionalTrailingNavigationBarButtonItems;
@property (nonatomic, readonly, copy) NSArray *allowedContentTypes;
@property (nonatomic) bool allowsDocumentCreation;
@property (nonatomic) bool allowsPickingMultipleItems;
@property (nonatomic, readonly) DOCAppearance *appearance;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, copy) UIColor *badgeTintColor;
@property (nonatomic) unsigned long long browserUserInterfaceStyle;
@property (nonatomic, retain) DOCConfiguration *configuration;
@property (nonatomic) double createButtonAspectRatio;
@property (nonatomic, copy) UIColor *createButtonColor;
@property (nonatomic, copy) NSString *createButtonTitle;
@property (nonatomic, retain) NSArray *customActions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDocumentBrowserViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIColor *inBrowserTintColor;
@property (nonatomic, copy) UIColor *itemSubtitleColor;
@property (nonatomic, copy) UIColor *itemTitleColor;
@property (nonatomic, retain) NSArray *leadingBarButtonTrackingViews;
@property (nonatomic, retain) NSArray *remoteAdditionalLeadingNavigationBarButtonItems;
@property (nonatomic, retain) NSArray *remoteAdditionalTrailingNavigationBarButtonItems;
@property (nonatomic) bool shouldDelayRemoteViewController;
@property (nonatomic, copy) UIColor *sortingBackgroundColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *trailingBarButtonTrackingViews;

- (void).cxx_destruct;
- (void)__commonInit;
- (void)_clearShownViewControllers;
- (void)_commitDocumentURLPreview:(id)arg1;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)_didImportDocumentAtURL:(id)arg1 toDestinationItem:(id)arg2;
- (void)_didPickItems:(id)arg1;
- (void)_didRequestDocumentCreationWithHandler:(id /* block */)arg1;
- (void)_didTriggerActionWithIdentifier:(id)arg1 onItems:(id)arg2;
- (void)_didTriggerBarButtonWithUUID:(id)arg1;
- (void)_displayActivityControllerWithItems:(id)arg1 popoverTracker:(id)arg2 barButtonItem:(id)arg3 sourceIsManaged:(bool)arg4;
- (void)_displayRemoteControllerIfNeeded;
- (void)_embedDocumentBrowserViewController;
- (void)_embedViewController:(id)arg1;
- (void)_failedToImportDocumentAtURL:(id)arg1 error:(id)arg2;
- (void)_importDocumentAtURL:(id)arg1 neighbourURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)_presentActivityViewControllerForItems:(id)arg1 withPopoverTracker:(id)arg2 sourceIsManaged:(bool)arg3;
- (void)_renameDocumentAtURL:(id)arg1 newName:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)_sandboxingURLWrapperForURL:(id)arg1 readonly:(bool)arg2 error:(id*)arg3;
- (void)_showDocumentBrowserViewController:(bool)arg1;
- (void)_showErrorViewController;
- (void)_updateRemoteBarButtonFrames:(id)arg1 forUUID:(id)arg2;
- (void)addOperationToServiceQueue:(id /* block */)arg1;
- (id)additionalLeadingNavigationBarButtonItems;
- (id)additionalTrailingNavigationBarButtonItems;
- (id)allowedContentTypes;
- (bool)allowsDocumentCreation;
- (bool)allowsPickingMultipleItems;
- (id)appearance;
- (id)backgroundColor;
- (id)badgeTintColor;
- (unsigned long long)browserUserInterfaceStyle;
- (bool)canBecomeFirstResponder;
- (void)clearCurrentOpenInteraction;
- (id)configuration;
- (double)createButtonAspectRatio;
- (id)createButtonColor;
- (id)createButtonTitle;
- (id)customActions;
- (id)delegate;
- (void)didTapTryAgainInErrorViewController:(id)arg1;
- (void)dismissAllPresentedViewControllers:(bool)arg1 completion:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)getTrackingViews:(id*)arg1 remoteButtons:(id*)arg2 fromBarButtons:(id)arg3;
- (void)importDocumentAtURL:(id)arg1 byMoving:(bool)arg2 toCurrentBrowserLocationWithCompletion:(id /* block */)arg3;
- (void)importDocumentAtURL:(id)arg1 mode:(unsigned long long)arg2 toCurrentBrowserLocationWithCompletion:(id /* block */)arg3;
- (void)importDocumentAtURL:(id)arg1 nextToDocumentAtURL:(id)arg2 mode:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (id)inBrowserTintColor;
- (id)init;
- (id)initForOpeningFilesWithContentTypes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)itemSubtitleColor;
- (id)itemTitleColor;
- (void)keyCommandWasPerformed:(id)arg1;
- (id)keyCommands;
- (id)leadingBarButtonTrackingViews;
- (long long)preferredStatusBarStyle;
- (void)prepareDocumentFromURL:(id)arg1 byMoving:(bool)arg2 toLocation:(id)arg3 completion:(id /* block */)arg4;
- (void)prepareItems:(id)arg1 forMode:(unsigned long long)arg2 usingBookmark:(bool)arg3 completionBlock:(id /* block */)arg4;
- (void)prepareItems:(id)arg1 usingBookmark:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)remoteAdditionalLeadingNavigationBarButtonItems;
- (id)remoteAdditionalTrailingNavigationBarButtonItems;
- (id)remoteBarButtonForUUID:(id)arg1;
- (void)remoteViewController:(id)arg1 didTerminateViewServiceWithError:(id)arg2;
- (void)revealDocumentAtURL:(id)arg1 importIfNeeded:(bool)arg2 completion:(id /* block */)arg3;
- (void)revealDocumentAtURL:(id)arg1 shouldImport:(bool)arg2 completion:(id /* block */)arg3;
- (void)setAdditionalLeadingNavigationBarButtonItems:(id)arg1;
- (void)setAdditionalToolbarButtonItems:(id)arg1;
- (void)setAdditionalTrailingNavigationBarButtonItems:(id)arg1;
- (void)setAllowsDocumentCreation:(bool)arg1;
- (void)setAllowsPickingMultipleItems:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBadgeTintColor:(id)arg1;
- (void)setBrowserUserInterfaceStyle:(unsigned long long)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCreateButtonAspectRatio:(double)arg1;
- (void)setCreateButtonColor:(id)arg1;
- (void)setCreateButtonTitle:(id)arg1;
- (void)setCustomActions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setInBrowserTintColor:(id)arg1;
- (void)setItemSubtitleColor:(id)arg1;
- (void)setItemTitleColor:(id)arg1;
- (void)setLeadingBarButtonTrackingViews:(id)arg1;
- (void)setRemoteAdditionalLeadingNavigationBarButtonItems:(id)arg1;
- (void)setRemoteAdditionalTrailingNavigationBarButtonItems:(id)arg1;
- (void)setShouldDelayRemoteViewController:(bool)arg1;
- (void)setSortingBackgroundColor:(id)arg1;
- (void)setTrailingBarButtonTrackingViews:(id)arg1;
- (bool)shouldDelayRemoteViewController;
- (id)sortingBackgroundColor;
- (id)trackingViewForUUID:(id)arg1;
- (id)trailingBarButtonTrackingViews;
- (id)transitionControllerForDocumentAtURL:(id)arg1;
- (id)transitionControllerForDocumentURL:(id)arg1;
- (void)updateAppearance:(id)arg1;
- (void)updateBrowserProxyWithCompletion:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

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