<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKUIViewElementLayoutContext.h</title>
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

/PrivateFrameworks/StoreKitUI.framework/SKUIViewElementLayoutContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI (1)
 */

@interface SKUIViewElementLayoutContext : NSObject {
    double  _activePageWidth;
    NSMutableDictionary * _aggregateValues;
    <SKUIArtworkRequestDelegate> * _artworkRequestDelegate;
    NSString * _backdropGroupName;
    SKUIBadgeTextAttachmentLoader * _badgeImageLoader;
    NSMapTable * _blurColors;
    MPUBorderDrawingCache * _borderDrawingCache;
    SKUIClientContext * _clientContext;
    unsigned long long  _containerViewElementType;
    double  _displayScale;
    NSMapTable * _editorialLayouts;
    NSHashTable * _expandedEditorialLayouts;
    SKUIItemOfferButton * _itemOfferButton;
    NSMutableDictionary * _itemOfferButtonSizes;
    SKUIViewElementTextLayoutCache * _labelLayoutCache;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _largeScreenElementPadding;
    NSMutableSet * _observedArtworkRequestIDs;
    UIViewController * _parentViewController;
    UIColor * _placeholderColor;
    SKUIResourceLoader * _resourceLoader;
    UIColor * _tintColor;
}

@property (nonatomic) double activePageWidth;
@property (nonatomic) <SKUIArtworkRequestDelegate> *artworkRequestDelegate;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic, readonly) SKUIBadgeTextAttachmentLoader *badgeImageLoader;
@property (nonatomic, readonly) MPUBorderDrawingCache *borderDrawingCache;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic) unsigned long long containerViewElementType;
@property (nonatomic) double displayScale;
@property (nonatomic, retain) SKUIViewElementTextLayoutCache *labelLayoutCache;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } largeScreenElementPadding;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic, retain) UIColor *placeholderColor;
@property (nonatomic, readonly) NSCache *placeholderImageCache;
@property (nonatomic, retain) SKUIResourceLoader *resourceLoader;
@property (nonatomic, retain) UIColor *tintColor;

+ (double)_calculateValueFromString:(id)arg1 withDefault:(double)arg2 coefficent:(double)arg3;
+ (double)itemWidthForElement:(id)arg1 withDefaultWidth:(double)arg2 fitWidth:(double)arg3;

- (void).cxx_destruct;
- (void)_artworkRequestDidLoadImageNotification:(id)arg1;
- (id)_initSKUIViewElementLayoutContext;
- (bool)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(long long)arg4;
- (struct CGSize { double x1; double x2; })_sizeForImageElement:(id)arg1 applyTransform:(bool)arg2;
- (double)activePageWidth;
- (id)aggregateValueForKey:(id)arg1;
- (id)artworkRequestDelegate;
- (id)backdropGroupName;
- (id)badgeImageLoader;
- (id)blurColorForCacheKey:(id)arg1;
- (id)borderDrawingCache;
- (id)clientContext;
- (unsigned long long)containerViewElementType;
- (id)dataConsumerForImageElement:(id)arg1;
- (void)dealloc;
- (double)defaultItemWidthForViewElement:(id)arg1;
- (double)displayScale;
- (id)editorialLayoutForLabelElement:(id)arg1 width:(double)arg2;
- (void)expandEditorialForLabelElement:(id)arg1;
- (id)imageResourceCacheKeyForArtwork:(id)arg1;
- (id)imageResourceCacheKeyForViewElement:(id)arg1;
- (id)init;
- (id)initWithStorePageSectionContext:(id)arg1;
- (id)initWithStorePageSectionContext:(id)arg1 previousLayoutContext:(id)arg2;
- (void)invalidateAllEditorialLayouts;
- (bool)isEditorialLayoutExpanded:(id)arg1;
- (id)labelLayoutCache;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })largeScreenElementPadding;
- (bool)loadImageForArtwork:(id)arg1 dataConsumer:(id)arg2 reason:(long long)arg3;
- (bool)loadImageForArtwork:(id)arg1 reason:(long long)arg2;
- (bool)loadImageForBadgeElement:(id)arg1 reason:(long long)arg2;
- (bool)loadImageForImageElement:(id)arg1 reason:(long long)arg2;
- (bool)loadImageForImageElement:(id)arg1 reason:(long long)arg2 dataConsumer:(id)arg3;
- (bool)loadTemplatedImageForBadgeElement:(id)arg1 reason:(long long)arg2;
- (long long)maxWidthForElement:(id)arg1 withDefaultWidth:(long long)arg2;
- (id)parentViewController;
- (id)placeholderColor;
- (id)placeholderImageCache;
- (id)placeholderImageForImageElement:(id)arg1 dataConsumer:(id)arg2;
- (id)placeholderImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2;
- (id)requestIdentifierForArtwork:(id)arg1;
- (id)requestIdentifierForResourceCacheKey:(id)arg1;
- (id)requestIdentifierForViewElement:(id)arg1;
- (id)resourceLoader;
- (void)setActivePageWidth:(double)arg1;
- (void)setAggregateValue:(id)arg1 forKey:(id)arg2;
- (void)setArtworkRequestDelegate:(id)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBlurColor:(id)arg1 cacheKey:(id)arg2;
- (void)setClientContext:(id)arg1;
- (void)setContainerViewElementType:(unsigned long long)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setLabelLayoutCache:(id)arg1;
- (void)setLargeScreenElementPaddingFromContext:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setResourceLoader:(id)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForBadgeElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForImageElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForItemOfferButton:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForViewElement:(id)arg1 width:(double)arg2;
- (id)textPropertiesForViewElement:(id)arg1 width:(double)arg2;
- (id)tintColor;
- (id)transientRequestIdentifierForViewElement:(id)arg1;

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
