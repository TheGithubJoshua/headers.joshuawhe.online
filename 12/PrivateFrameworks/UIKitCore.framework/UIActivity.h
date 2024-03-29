<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIActivity.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIActivity.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIActivity : NSObject <UIActivityExtensionItemDataProviding, UIActivityExtensionItemDataReceiving> {
    id /* block */  _activityCompletionWithItemsHandler;
    _UIActivityResourceLoader * _activityImageLoader;
    _UIActivityResourceLoader * _activitySettingsImageLoader;
    NSUUID * _activityUUID;
    long long  _defaultPriority;
    id /* block */  _didFinishPerformingActivityHandler;
    unsigned long long  _indexInApplicationDefinedActivities;
    long long  _maxPreviews;
}

@property (nonatomic, readonly) _UIActivityResourceLoader *_activityImageLoader;
@property (nonatomic, readonly) _UIActivityResourceLoader *_activitySettingsImageLoader;
@property (nonatomic, readonly) id /* block */ _backgroundPreheatBlock;
@property (nonatomic, copy) id /* block */ activityCompletionWithItemsHandler;
@property (nonatomic, readonly) UIImage *activityImage;
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSUUID *activityUUID;
@property (nonatomic, readonly) UIViewController *activityViewController;
@property (nonatomic, readonly) NSExtension *applicationExtension;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didFinishPerformingActivityHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long indexInApplicationDefinedActivities;
@property (nonatomic) long long maxPreviews;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;
+ (id)_activityImageForActionRepresentationImage:(id)arg1;
+ (id)_activityImageForApplicationBundleIdentifier:(id)arg1;
+ (id)_activityImageForBundleImageConfiguration:(id)arg1;
+ (id)_activitySettingsImageForApplicationBundleIdentifier:(id)arg1;
+ (id)_activitySettingsImageForBundleImageConfiguration:(id)arg1;
+ (id)_defaultFallbackActivityType;
+ (id)_imageByApplyingDefaultEffectsToImage:(id)arg1 activityCategory:(long long)arg2;
+ (bool)_isCapabilityBasedActivity;
+ (void)_performAfterActivityImageLoadingCompletes:(id /* block */)arg1;
+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;
+ (Class)classForPreparingExtensionItemData;
+ (id)preparedActivityExtensionItemDataForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2;

- (void).cxx_destruct;
- (id)_activityBundleImageConfiguration;
- (id)_activityImage;
- (id)_activityImageLoader;
- (id)_activitySettingsBundleImageConfiguration;
- (id)_activitySettingsImage;
- (id)_activitySettingsImageLoader;
- (bool)_activitySupportsPromiseURLs;
- (id)_activityTypeUsingFallbackActivityTypeIfNecessary;
- (bool)_appIsDocumentTypeOwner;
- (id)_attachmentNameForActivityItem:(id)arg1;
- (id /* block */)_backgroundPreheatBlock;
- (id)_beforeActivity;
- (id)_bundleIdentifierForActivityImageCreation;
- (bool)_canBeExcludeWhenMatchingWithContext:(id)arg1;
- (void)_cleanup;
- (id)_dataTypeIdentifierForActivityItem:(id)arg1;
- (long long)_defaultSortGroup;
- (bool)_dismissActivityFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)_embeddedActivityViewController;
- (id)_encodableActivityImageConfiguration;
- (id)_encodableActivitySettingsImageConfiguration;
- (void)_injectedJavaScriptResult:(id)arg1;
- (bool)_isExecutedInProcess;
- (bool)_presentActivityOnViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_setActivityCompletionWithItemsHandler:(id /* block */)arg1;
- (id)_subjectForActivityItem:(id)arg1;
- (bool)_supportsOpenInPlace;
- (id)_thumbnailImageForActivityItem:(id)arg1;
- (struct CGSize { double x1; double x2; })_thumbnailSize;
- (bool)_wantsAttachmentURLItemData;
- (bool)_wantsThumbnailItemData;
- (void)_willBePerformedOrPresented;
- (void)_willPresentAsFormSheet;
- (id /* block */)activityCompletionWithItemsHandler;
- (void)activityDidFinish:(bool)arg1;
- (void)activityDidFinish:(bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityUUID;
- (id)activityViewController;
- (id)applicationExtension;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id /* block */)didFinishPerformingActivityHandler;
- (unsigned long long)indexInApplicationDefinedActivities;
- (id)init;
- (long long)maxPreviews;
- (void)performActivity;
- (void)prepareWithActivityExtensionItemData:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActivityCompletionWithItemsHandler:(id /* block */)arg1;
- (void)setDidFinishPerformingActivityHandler:(id /* block */)arg1;
- (void)setIndexInApplicationDefinedActivities:(unsigned long long)arg1;
- (void)setMaxPreviews:(long long)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (id)ph_PhotosApplicationActivitiesTypePublish;
+ (id)ph_PhotosApplicationActivityTypeOrder;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

+ (void)streamActivitiesWithCompletion:(id /* block */)arg1;

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
