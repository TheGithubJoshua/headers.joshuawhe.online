<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKProductPageViewController.h</title>
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

/PrivateFrameworks/StoreKitUI.framework/SKProductPageViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI (1)
 */

@interface SKProductPageViewController : SUViewController <SKUIBannerViewDelegate, SKUIIPadProductPageDelegate, SKUIIPhoneProductPageDelegate, SKUIItemStateCenterObserver, SUClientInterfaceDelegatePrivate, SUPurchaseManagerDelegate> {
    NSString * _additionalPurchaseParameters;
    NSString * _affiliateIdentifier;
    bool  _askToBuy;
    SKUIBannerViewController * _bannerViewController;
    NSString * _cancelButtonTitle;
    SKUIClientContext * _clientContext;
    <SKProductPageViewControllerDelegatePrivate> * _delegate;
    SUDialogManager * _dialogManager;
    SUBarButtonItem * _gotoStoreButtonItem;
    SKUIIPadProductPageViewController * _ipadProductPageViewController;
    SKUIIPhoneProductPageViewController * _iphoneProductPageViewController;
    SKUIItemStateCenter * _itemStateCenter;
    SSMetricsPageEvent * _lastPageEvent;
    NSURL * _nativeURL;
    bool  _preview;
    SUPreviewOverlayViewController * _previewOverlay;
    NSDictionary * _productParameters;
    NSString * _promptString;
    SUPurchaseManager * _purchaseManager;
    SUBarButtonItem * _rightBarButtonItem;
    NSString * _rightBarButtonTitle;
    bool  _showsRightBarButton;
    bool  _showsStoreButton;
    SKUIITunesStoreUIPageViewController * _storePageViewController;
    long long  _style;
    long long  _urlBagType;
}

@property (nonatomic) long long URLBagType;
@property (nonatomic, copy) NSString *additionalPurchaseParameters;
@property (nonatomic, copy) NSString *affiliateIdentifier;
@property (nonatomic) bool askToBuy;
@property (nonatomic, copy) NSString *cancelButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKProductPageViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPreview, nonatomic) bool preview;
@property (nonatomic) long long productPageStyle;
@property (nonatomic, copy) NSString *promptString;
@property (nonatomic, copy) NSString *rightBarButtonTitle;
@property (nonatomic, copy) NSDictionary *scriptContextDictionary;
@property (nonatomic) bool showsRightBarButton;
@property (nonatomic) bool showsStoreButton;
@property (readonly) Class superclass;

+ (id)_defaultClientIdentifier;
+ (id)_defaultClientInterface;
+ (void)_validateURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(id /* block */)arg3;
+ (void)getCanLoadWithURL:(id)arg1 completionBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (long long)URLBagType;
- (void)_applicationWillEnterForeground;
- (void)_failWithError:(id)arg1;
- (void)_gotoStoreButtonAction:(id)arg1;
- (id)_initSKProductPageViewController;
- (void)_loadClientContextWithCompletionBlock:(id /* block */)arg1;
- (void)_loadProductWithRequest:(id)arg1;
- (void)_loadRequestForProductParameters;
- (id)_newRequestPropertiesWithRequest:(id)arg1;
- (id)_previewOverlay;
- (void)_purchaseFailedNotification:(id)arg1;
- (void)_purchaseFinishedNotification:(id)arg1;
- (void)_reloadGotoStoreButton;
- (void)_reloadViews;
- (void)_rightBarButtonAction:(id)arg1;
- (void)_sendDidFailLoadWithError:(id)arg1;
- (void)_sendDidFinishWithResult:(long long)arg1;
- (void)_setClientContext:(id)arg1;
- (void)_setResponse:(id)arg1 forProperties:(id)arg2 error:(id)arg3;
- (void)_setShowsCancelButton:(bool)arg1;
- (void)_showPageWithRequest:(id)arg1 animated:(bool)arg2;
- (void)_showPreviewOverlayAnimated:(bool)arg1;
- (void)_showProductPage:(id)arg1 pageEvent:(id)arg2;
- (id)additionalPurchaseParameters;
- (id)affiliateIdentifier;
- (bool)askToBuy;
- (void)bannerView:(id)arg1 didFailWithError:(id)arg2;
- (void)bannerViewDidClose:(id)arg1;
- (id)cancelButtonTitle;
- (id)cancelButtonTitle:(id)arg1;
- (void)clientInterface:(id)arg1 exitStoreWithReason:(long long)arg2;
- (void)clientInterface:(id)arg1 hidePreviewOverlayAnimated:(bool)arg2;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (void)clientInterface:(id)arg1 setStatusBarHidden:(bool)arg2 withAnimation:(long long)arg3;
- (void)clientInterface:(id)arg1 setStatusBarStyle:(long long)arg2 animated:(bool)arg3;
- (void)clientInterface:(id)arg1 showPreviewOverlayAnimated:(bool)arg2;
- (void)clientInterface:(id)arg1 willDismissViewController:(id)arg2;
- (void)clientInterface:(id)arg1 willPresentViewController:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)iPadProductPage:(id)arg1 openItem:(id)arg2;
- (void)iPadProductPage:(id)arg1 openURL:(id)arg2 viewControllerBlock:(id /* block */)arg3;
- (bool)iPhoneProductPage:(id)arg1 shouldOpenItem:(id)arg2;
- (bool)iPhoneProductPage:(id)arg1 shouldOpenURL:(id)arg2;
- (id)init;
- (id)initWithProductPageStyle:(long long)arg1;
- (id)initWithTabBarItem:(id)arg1;
- (bool)isPreview;
- (void)itemStateCenter:(id)arg1 didFinishPurchases:(id)arg2;
- (void)itemStateCenter:(id)arg1 didFinishSoftwarePurchases:(id)arg2;
- (void)loadProductWithParameters:(id)arg1;
- (void)loadProductWithRequest:(id)arg1;
- (void)loadView;
- (void)loadWithProductPage:(id)arg1;
- (void)loadWithStorePageRequest:(id)arg1;
- (id)previewOverlayForClientInterface:(id)arg1;
- (long long)productPageStyle;
- (id)promptString;
- (void)purchaseManager:(id)arg1 didFinishPurchaseRequest:(id)arg2 withError:(id)arg3;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (id)rightBarButtonTitle;
- (id)scriptContextDictionary;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (void)setAdditionalPurchaseParameters:(id)arg1;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setAskToBuy:(bool)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreview:(bool)arg1;
- (void)setProductPageStyle:(long long)arg1;
- (void)setPromptString:(id)arg1;
- (void)setRightBarButtonTitle:(id)arg1;
- (void)setScriptContextDictionary:(id)arg1;
- (void)setShowsRightBarButton:(bool)arg1;
- (void)setShowsStoreButton:(bool)arg1;
- (void)setURLBagType:(long long)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)showsRightBarButton;
- (bool)showsStoreButton;
- (void)storePage:(id)arg1 finishedWithSuccess:(bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;

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
