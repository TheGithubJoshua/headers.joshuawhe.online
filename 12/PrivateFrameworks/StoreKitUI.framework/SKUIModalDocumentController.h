<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKUIModalDocumentController.h</title>
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

/PrivateFrameworks/StoreKitUI.framework/SKUIModalDocumentController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI (1)
 */

@interface SKUIModalDocumentController : NSObject <AAUIFamilySetupDelegate, SKUIComposeReviewDelegate, SKUIGiftViewControllerDelegate, SKUIModalDocumentController, SKUIOverlayContainerDelegate, UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate> {
    SKUIClientContext * _clientContext;
    NSMutableArray * _composeReviewViewControllers;
    <SKUIModalDocumentDataSource> * _dataSource;
    <SKUIModalDocumentDelegate> * _delegate;
    SKUIStoreDialogController * _dialogController;
    NSMutableArray * _giftViewControllers;
    <SKUIModalSourceViewProvider> * _modalSourceViewProvider;
    <UINavigationControllerDelegate> * _navigationControllerDelegate;
    UINavigationController * _overlayNavigationController;
    SKUIOverlayContainerViewController * _overlayViewController;
    UIPopoverController * _popoverController;
    SKUIReportAConcernViewController * _reportAConcernViewController;
    UIViewController * _rootViewController;
    NSMutableArray * _stackItems;
}

@property (nonatomic, readonly) UINavigationController *_overlayNavigationController;
@property (nonatomic, readonly) SKUIOverlayContainerViewController *_overlayViewController;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic) <SKUIModalDocumentDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIModalDocumentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *documents;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SKUIModalSourceViewProvider> *modalSourceViewProvider;
@property (nonatomic) <UINavigationControllerDelegate> *navigationControllerDelegate;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_centerRect:(id)arg1 adjust:(bool)arg2;
- (void)_composeReviewViewControllerDidFinish:(id)arg1 finished:(bool)arg2;
- (void)_dismissOverlayControllerWithStackItem:(id)arg1 animated:(bool)arg2;
- (void)_garbageCollectActivityViewController:(id)arg1;
- (id)_imageForImageViewElement:(id)arg1;
- (id)_modalSourceViewProviderFromStackItems;
- (void)_overlayControllerBackstopAction:(id)arg1;
- (id)_overlayNavigationController;
- (id)_overlayStackItems;
- (id)_overlayViewController;
- (void)_popDocument:(bool)arg1 completion:(id /* block */)arg2;
- (void)_popDocumentSkippingUserInterfaceUpdates;
- (void)_popOverlayStackItem:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_popPopoverStackItem:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)_popoverController:(id)arg1 containsStackItem:(id)arg2;
- (void)_presentAlertForDialog:(id)arg1;
- (void)_presentOverlayViewControllersFromNavigationController:(id)arg1;
- (id)_presenterViewController;
- (void)_presetPopoverSheetDocument:(id)arg1 viewController:(id)arg2 popoverPresentationController:(id)arg3;
- (void)_promptForStarRating:(id)arg1;
- (void)_pushCharityDocument:(id)arg1 options:(id)arg2;
- (void)_pushDialogDocument:(id)arg1 options:(id)arg2;
- (void)_pushFamilySetupDocument:(id)arg1 options:(id)arg2;
- (void)_pushGiftDocument:(id)arg1 options:(id)arg2;
- (void)_pushOverlayStackItem:(id)arg1;
- (void)_pushPlaylistDocument:(id)arg1 options:(id)arg2;
- (void)_pushPopoverSheetDocument:(id)arg1 viewController:(id)arg2 popoverPresentationController:(id)arg3 options:(id)arg4;
- (void)_pushPopoverStackItem:(id)arg1;
- (void)_pushRedeemDocument:(id)arg1 options:(id)arg2;
- (void)_pushSheetDocument:(id)arg1 viewController:(id)arg2;
- (void)_pushSheetStackItem:(id)arg1;
- (void)_sendDidFinishIfApplicable;
- (id)_showOverlayContainerViewController;
- (void)_unloadDocumentForPopoverController:(id)arg1;
- (void)_unloadDocumentForViewController:(id)arg1;
- (id)clientContext;
- (void)composeReviewViewController:(id)arg1 didFailWithDialog:(id)arg2;
- (void)composeReviewViewController:(id)arg1 didSubmitWithEdit:(bool)arg2;
- (void)composeReviewViewController:(id)arg1 presentDialog:(id)arg2;
- (bool)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2;
- (void)composeReviewViewControllerDidCancel:(id)arg1;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)documents;
- (void)ensureOverlayNavigationControllerStackConsistencyForNavigationController:(id)arg1;
- (void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(bool)arg2;
- (void)giftViewController:(id)arg1 didFinishWithResult:(bool)arg2;
- (id)init;
- (id)modalSourceViewProvider;
- (id)navigationControllerDelegate;
- (id)navigationDocumentForDocument:(id)arg1;
- (id)navigationDocumentForNavigationController:(id)arg1;
- (void)overlayContainerViewController:(id)arg1 willPopViewController:(id)arg2;
- (void)popAllDocuments;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 inView:(inout id*)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)presentOverlayViewControllersFromNavigationController:(id)arg1;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (id)rootViewController;
- (void)setClientContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setModalSourceViewProvider:(id)arg1;
- (void)setNavigationControllerDelegate:(id)arg1;
- (void)setOverlayNavigationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)setRootViewController:(id)arg1;
- (void)unloadDocumentForViewController:(id)arg1;

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
