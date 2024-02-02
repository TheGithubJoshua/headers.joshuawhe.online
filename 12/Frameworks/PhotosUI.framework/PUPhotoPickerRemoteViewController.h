<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUPhotoPickerRemoteViewController.h</title>
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

/Frameworks/PhotosUI.framework/PUPhotoPickerRemoteViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUPhotoPickerRemoteViewController : UIViewController <NSExtensionRequestHandling, PUPhotoPicker, PUPhotoPickerRemoteNavigationControllerDelegate, PUPhotoPickerTestSupportHandler> {
    long long  _actionType;
    NSString * _actionTypeDescription;
    bool  _contentLoaded;
    PUPhotoPickerRemoteNavigationController * _contentNavigationController;
    UIViewController * _contentViewController;
    PUPhotoPickerExtensionContext * _extensionContext;
    bool  _observingNavigationItemPrompt;
    PUPhotoPickerRemoteViewControllerRequestOptions * _options;
    long long  _secondaryActionType;
}

@property (nonatomic) long long actionType;
@property (nonatomic, retain) NSString *actionTypeDescription;
@property (nonatomic, readonly) bool allowsMultipleSelection;
@property (getter=isContentLoaded, nonatomic) bool contentLoaded;
@property (nonatomic, retain) PUPhotoPickerRemoteNavigationController *contentNavigationController;
@property (nonatomic, retain) UIViewController *contentViewController;
@property (nonatomic, readonly) bool convertAutoloopsToGIF;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) PUPhotoPickerExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *mediaTypes;
@property (nonatomic, readonly) unsigned long long multipleSelectionLimit;
@property (getter=isObservingNavigationItemPrompt, nonatomic) bool observingNavigationItemPrompt;
@property (nonatomic, retain) PUPhotoPickerRemoteViewControllerRequestOptions *options;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) unsigned long long savingOptions;
@property (nonatomic) long long secondaryActionType;
@property (nonatomic, readonly) bool showsPrompt;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_allowSharingSelectionOfInfoDictionaries:(id)arg1 completion:(id /* block */)arg2;
- (void)_handlePerformTraitCollectionUpdateUsingData:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleViewControllerCreationWithClassName:(id)arg1;
- (void)_handleViewControllerFetchWithRequestedIdentifier:(id)arg1;
- (void)_handleViewControllerRequestWithOptions:(id)arg1 error:(id)arg2;
- (void)_loadContentViewIfNeeded;
- (void)_logAssetSelectionIfNeeded:(id)arg1;
- (void)_setPhotoPickerInViewController:(id)arg1;
- (bool)_useLibraryPresentation;
- (long long)actionType;
- (id)actionTypeDescription;
- (bool)allowsMultipleSelection;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)cancelPhotoPicker;
- (id)contentNavigationController;
- (id)contentViewController;
- (bool)convertAutoloopsToGIF;
- (void)dealloc;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(long long)arg1;
- (void)didSelectMediaWithInfoDictionary:(id)arg1 allowedHandler:(id /* block */)arg2;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (id)extensionContext;
- (bool)isContentLoaded;
- (bool)isObservingNavigationItemPrompt;
- (void)loadView;
- (id)mediaTypes;
- (unsigned long long)multipleSelectionLimit;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)options;
- (void)performAppearanceUpdateUsing:(id)arg1;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)performPhotosSelection;
- (void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(id /* block */)arg2;
- (void)photoPickerRemoteNavigationController:(id)arg1 popViewController:(id)arg2 animated:(bool)arg3;
- (void)photoPickerRemoteNavigationController:(id)arg1 viewControllerToPush:(id)arg2;
- (void)presentViewController:(id)arg1;
- (id)properties;
- (unsigned long long)savingOptions;
- (long long)secondaryActionType;
- (void)setActionType:(long long)arg1;
- (void)setActionTypeDescription:(id)arg1;
- (void)setContentLoaded:(bool)arg1;
- (void)setContentNavigationController:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setExtensionContext:(id)arg1;
- (void)setObservingNavigationItemPrompt:(bool)arg1;
- (void)setOptions:(id)arg1;
- (void)setSecondaryActionType:(long long)arg1;
- (bool)showsPrompt;
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