<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTKCFaceDetailKaleidoscopeContentSectionController.h</title>
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

/PrivateFrameworks/NanoTimeKitCompanion.framework/NTKCFaceDetailKaleidoscopeContentSectionController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion (1)
 */

@interface NTKCFaceDetailKaleidoscopeContentSectionController : NTKCFaceDetailEditOptionHorizontalSectionController <NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> {
    NTKCompanionKaleidoscopeEditor * _editor;
    bool  _externalAssetSet;
    UIViewController * _parentViewController;
    UIImagePickerController * _presentedPicker;
    <NTKCFaceDetailEditOptionSectionDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;

+ (bool)hasSectionForFace:(id)arg1 forEditMode:(long long)arg2;
+ (bool)supressesSectionForExternalAssets:(id)arg1;

- (void).cxx_destruct;
- (bool)_canDisplayActionRowForCustomEditMode:(long long)arg1 andOption:(id)arg2;
- (void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2;
- (void)_finalizeEditor;
- (bool)_handleDidSelectActionRowForOption:(id)arg1;
- (void)_presentPhotoPicker;
- (void)_setPhotoFromAsset:(id)arg1;
- (void)_setPhotoFromDictionary:(id)arg1;
- (void)_setRawPhoto:(id)arg1;
- (bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (id)delegate;
- (Class)editCellClass;
- (id)initWithTableView:(id)arg1 face:(id)arg2 inGallery:(bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (void)kaleidoscopeEditOptionCellDidSelectUserOption:(id)arg1;
- (id)parentViewController;
- (void)setDelegate:(id)arg1;
- (void)setExternalAsset:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSelectedOptions:(id)arg1;

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