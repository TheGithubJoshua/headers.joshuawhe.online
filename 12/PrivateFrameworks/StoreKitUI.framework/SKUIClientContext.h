<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKUIClientContext.h</title>
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

/PrivateFrameworks/StoreKitUI.framework/SKUIClientContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI (1)
 */

@interface SKUIClientContext : NSObject <SUClientInterfaceDelegatePrivate> {
    NSString * _additionalPurchaseParameters;
    SKUIApplicationController * _applicationController;
    NSBundle * _bundle;
    SUClientInterface * _clientInterface;
    NSDictionary * _configurationDictionary;
    SKUIStoreDialogController * _dialogController;
    SKUILocalizedStringDictionary * _localizedStrings;
    NSString * _metricsConfigurationIdentifier;
    NSMapTable * _metricsPageContexts;
    NSMutableArray * _navigationHistory;
    NSString * _navigationHistoryPersistenceKey;
    NSCache * _placeholderImageCache;
    NSString * _purchaseAffiliateIdentifier;
    SKUIURL * _purchaseReferrerURL;
    long long  _purchaseURLBagType;
    NSOperationQueue * _resourceLoadQueue;
    IKAppContext * _scriptAppContext;
    NSString * _storeFrontIdentifier;
    SKUITrendingSearchProvider * _trendingSearchProvider;
    SSUpdatableAssetController * _updatableAssetController;
    SKUIURLBag * _urlBag;
    long long  _userInterfaceIdiomOverride;
}

@property (nonatomic, readonly) SSURLBag *URLBag;
@property (getter=_applicationController, setter=_setApplicationController:, nonatomic) SKUIApplicationController *_applicationController;
@property (getter=_scriptAppContext, setter=_setScriptAppContext:, nonatomic, retain) IKAppContext *_scriptAppContext;
@property (getter=applicationController, nonatomic, readonly) SKUIApplicationController *applicationController;
@property (getter=isBootstrapScriptFallbackDisabled, nonatomic, readonly) bool bootstrapScriptFallbackDisabled;
@property (nonatomic, readonly) SUClientInterface *clientInterface;
@property (nonatomic, readonly, copy) NSDictionary *configurationDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isManagedAppleID, nonatomic, readonly) bool managedAppleID;
@property (nonatomic, copy) NSString *metricsConfigurationIdentifier;
@property (nonatomic, readonly) Class moviePlayerViewControllerClass;
@property (getter=isMultiUser, nonatomic, readonly) bool multiUser;
@property (nonatomic, readonly) NSArray *navigationHistory;
@property (nonatomic, copy) NSString *navigationHistoryPersistenceKey;
@property (nonatomic, readonly) NSCache *placeholderImageCache;
@property (nonatomic, readonly) SSVPlatformContext *platformContext;
@property (nonatomic, copy) SKUIURL *purchaseReferrerURL;
@property (nonatomic, readonly) NSOperationQueue *resourceLoadQueue;
@property (nonatomic, readonly) NSString *storeFrontIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SKUITrendingSearchProvider *trendingSearchProvider;
@property (nonatomic, retain) SSUpdatableAssetController *updatableAssetController;
@property (nonatomic) long long userInterfaceIdiomOverride;

+ (id)_cachePath;
+ (id)_cachePathForStoreFrontIdentifier:(id)arg1;
+ (id)_configurationDictionaryWithBagDictionary:(id)arg1;
+ (id)_fallbackConfigurationDictionary;
+ (id)defaultContext;
+ (id)localizedStringForKey:(id)arg1 inBundles:(id)arg2;
+ (id)localizedStringForKey:(id)arg1 inBundles:(id)arg2 inTable:(id)arg3;

- (void).cxx_destruct;
- (id)SAPSessionForVersion:(long long)arg1;
- (id)URLBag;
- (id)_applicationController;
- (id)_navigationHistory;
- (id)_scriptAppContext;
- (void)_setAdditionalPurchaseParameters:(id)arg1;
- (void)_setApplicationController:(id)arg1;
- (void)_setPurchaseAffiliateIdentifier:(id)arg1;
- (void)_setPurchaseURLBagType:(long long)arg1;
- (void)_setScriptAppContext:(id)arg1;
- (void)_setValue:(id)arg1 forConfigurationKey:(id)arg2;
- (id)additionalLeftBarButtonItemForDocumentContainerViewController:(id)arg1;
- (id)additionalLeftBarButtonItemForViewController:(id)arg1;
- (id)additionalRightBarButtonItemForDocumentContainerViewController:(id)arg1;
- (id)additionalRightBarButtonItemForViewController:(id)arg1;
- (id)applicationController;
- (id)clientInterface;
- (void)clientInterface:(id)arg1 dispatchOnPageResponseWithData:(id)arg2 response:(id)arg3;
- (void)clientInterface:(id)arg1 dispatchXEvent:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (id)configurationDictionary;
- (void)customizePurchase:(id)arg1;
- (void)customizeSoftwarePurchase:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)documentViewControllerForTemplateViewElement:(id)arg1;
- (id)existingBagValueForKey:(id)arg1;
- (void)getDefaultMetricsControllerWithCompletionBlock:(id /* block */)arg1;
- (id)initWithConfigurationDictionary:(id)arg1;
- (bool)isBootstrapScriptFallbackDisabled;
- (bool)isManagedAppleID;
- (bool)isMultiUser;
- (void)loadValueForConfigurationKey:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)localizedAlertWithError:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 inTable:(id)arg2;
- (id)metricsConfigurationIdentifier;
- (id)metricsPageContextForViewController:(id)arg1;
- (id)modalDocumentViewControllerForDocument:(id)arg1 options:(id)arg2;
- (Class)moviePlayerViewControllerClass;
- (id)navigationHistory;
- (id)navigationHistoryPersistenceKey;
- (id)newLegacyStorePageViewControllerForURLResponse:(id)arg1;
- (id)newLoadStoreURLOperationWithURL:(id)arg1;
- (id)newLoadStoreURLOperationWithURLRequest:(id)arg1;
- (id)placeholderImageCache;
- (id)platformContext;
- (id)previewViewControllerForViewElement:(id)arg1;
- (id)purchaseReferrerURL;
- (void)pushNavigationHistoryPageIdentifier:(id)arg1;
- (id)resourceLoadQueue;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (void)sendAppPreviewStateChanged:(bool)arg1;
- (void)sendApplicationDidEnterBackground;
- (void)sendApplicationWillEnterForeground;
- (void)sendApplicationWindowSizeDidUpdate:(struct CGSize { double x1; double x2; })arg1;
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4;
- (void)sendOnXEventWithDictionary:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)setMetricsConfigurationIdentifier:(id)arg1;
- (void)setMetricsPageContext:(id)arg1 forViewController:(id)arg2;
- (void)setNavigationHistoryPersistenceKey:(id)arg1;
- (void)setPurchaseReferrerURL:(id)arg1;
- (void)setUpdatableAssetController:(id)arg1;
- (void)setUserInterfaceIdiomOverride:(long long)arg1;
- (bool)shouldForceTransientSearchControllerBahavior;
- (id)storeFrontIdentifier;
- (bool)storeViewController:(id)arg1 shouldDisplayDefaultDarButton:(long long)arg2;
- (bool)supportsRenderingVersion:(unsigned int)arg1;
- (id)tabBarItemsForStyle:(long long)arg1;
- (long long)tabBarStyleForWidth:(double)arg1;
- (id)trendingSearchProvider;
- (id)updatableAssetController;
- (long long)userInterfaceIdiomOverride;
- (id)valueForConfigurationKey:(id)arg1;

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