<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUPhotoPickerExtensionHostContext.h</title>
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

/Frameworks/PhotosUI.framework/PUPhotoPickerExtensionHostContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUPhotoPickerExtensionHostContext : PUPhotoPickerAbstractExtensionContext <PUPhotoPickerHostService> {
    <PUPhotoPickerActionHandler> * _actionDisplayHandler;
    NSNumber * _actionType;
    NSString * _actionTypeDescription;
    bool  _cachedDidDisplayPhotoPickerPreview;
    NSNumber * _cachedDidDisplayPhotoPickerSourceType;
    <PUPhotoPickerHostService> * _delegate;
    PUPhotoPickerAppearance * _photoPickerAppearance;
    NSNumber * _photoPickerNavigationBarHidden;
    NSString * _photoPickerViewControllerPrompt;
    NSString * _photoPickerViewControllerTitle;
    NSUUID * _requestIdentifier;
    NSNumber * _secondaryActionType;
}

@property (nonatomic) <PUPhotoPickerActionHandler> *actionDisplayHandler;
@property (nonatomic, retain) NSNumber *actionType;
@property (nonatomic, retain) NSString *actionTypeDescription;
@property (nonatomic) bool cachedDidDisplayPhotoPickerPreview;
@property (nonatomic, retain) NSNumber *cachedDidDisplayPhotoPickerSourceType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoPickerHostService> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PUPhotoPickerAppearance *photoPickerAppearance;
@property (nonatomic, retain) NSNumber *photoPickerNavigationBarHidden;
@property (nonatomic, copy) NSString *photoPickerViewControllerPrompt;
@property (nonatomic, copy) NSString *photoPickerViewControllerTitle;
@property (nonatomic, retain) NSUUID *requestIdentifier;
@property (nonatomic, retain) NSNumber *secondaryActionType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_JPEGDataFromImageData:(id)arg1;
- (id)_UIImagePickerControllerInfoDictionaryFromPhotoPickerInfoDictionary:(id)arg1;
- (bool)_isHEIFImageFormatFromData:(id)arg1 url:(id)arg2;
- (id)_pathExtensionFromData:(id)arg1 url:(id)arg2;
- (id)_remote;
- (id)actionDisplayHandler;
- (id)actionType;
- (id)actionTypeDescription;
- (bool)cachedDidDisplayPhotoPickerPreview;
- (id)cachedDidDisplayPhotoPickerSourceType;
- (void)cancelPhotoPicker;
- (void)completeRequestReturningItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegate;
- (void)didDisplayPhotoPickerPreview;
- (void)didDisplayPhotoPickerSourceType:(id)arg1;
- (void)didSelectMediaWithInfoDictionary:(id)arg1;
- (void)didSelectMultipleMediaItemsWithInfoDictionaries:(id)arg1;
- (void)dismissCurrentViewControllerFromPhotoPickerAnimated:(id)arg1;
- (void)displayActionTypeDescription:(id)arg1;
- (void)displayActionWithType:(id)arg1;
- (void)displaySecondaryActionWithType:(id)arg1;
- (void)initiatePhotoPickerSelection;
- (void)invalidatePhotoPickerHostServices;
- (void)performAppearanceUpdateUsingPhotoPickerAppearanceDictionary:(id)arg1;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (void)performTraitCollectionUpdateUsingData:(id)arg1 completion:(id /* block */)arg2;
- (id)photoPickerAppearance;
- (id)photoPickerNavigationBarHidden;
- (id)photoPickerViewControllerPrompt;
- (id)photoPickerViewControllerTitle;
- (id)requestIdentifier;
- (void)requestViewControllerFromPhotoPickerWithRequestIdentifier:(id)arg1;
- (id)secondaryActionType;
- (void)setActionDisplayHandler:(id)arg1;
- (void)setActionType:(id)arg1;
- (void)setActionTypeDescription:(id)arg1;
- (void)setCachedDidDisplayPhotoPickerPreview:(bool)arg1;
- (void)setCachedDidDisplayPhotoPickerSourceType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPhotoPickerAppearance:(id)arg1;
- (void)setPhotoPickerNavigationBarHidden:(id)arg1;
- (void)setPhotoPickerViewControllerPrompt:(id)arg1;
- (void)setPhotoPickerViewControllerTitle:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setSecondaryActionType:(id)arg1;

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
