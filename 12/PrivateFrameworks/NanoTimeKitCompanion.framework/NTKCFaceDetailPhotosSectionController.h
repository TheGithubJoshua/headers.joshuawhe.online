<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTKCFaceDetailPhotosSectionController.h</title>
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

/PrivateFrameworks/NanoTimeKitCompanion.framework/NTKCFaceDetailPhotosSectionController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion (1)
 */

@interface NTKCFaceDetailPhotosSectionController : NTKCFaceDetailEditOptionVerticalSectionController <NTKCFaceDetailCustomPhotosViewControllerDelegate> {
    bool  _canDeleteCustomPhotos;
    unsigned long long  _currentContent;
    NTKCompanionCustomPhotosEditor * _customPhotosEditor;
    NSArray * _externalAssets;
    NTKCompanionMemoriesEditor * _memoriesEditor;
    UIViewController * _parentViewController;
    NTKCompanionSyncedAlbumEditor * _syncedAlbumEditor;
    NTKCompanionTransientCustomPhotosEditor * _transientEditor;
}

@property (nonatomic, retain) NTKCompanionCustomPhotosEditor *customPhotosEditor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailPhotosSectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *externalAssets;
@property (nonatomic, retain) NTKBasePhotosFaceView *faceView;
@property (nonatomic, readonly) bool hasChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NTKCompanionMemoriesEditor *memoriesEditor;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NTKCompanionSyncedAlbumEditor *syncedAlbumEditor;
@property (nonatomic, retain) NTKCompanionTransientCustomPhotosEditor *transientEditor;

+ (bool)hasPhotosSectionForFace:(id)arg1 forEditMode:(long long)arg2;

- (void).cxx_destruct;
- (id)_actionNameForOption:(id)arg1;
- (bool)_canDisplayActionRowForCustomEditMode:(long long)arg1 andOption:(id)arg2;
- (id)_currentEditor;
- (void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2;
- (bool)_handleDidSelectActionRowForOption:(id)arg1;
- (bool)_handleDidSelectOption:(id)arg1;
- (void)_setPhotos:(id)arg1;
- (void)_updatePhotosSection;
- (bool)canAddFace;
- (void)customPhotosControllerDidFinish:(id)arg1;
- (id)customPhotosEditor;
- (id)externalAssets;
- (void)faceDidChange;
- (void)faceDidChangeResourceDirectory;
- (bool)hasChanges;
- (id)initWithTableView:(id)arg1 face:(id)arg2 inGallery:(bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5 externalAssets:(id)arg6;
- (id)memoriesEditor;
- (id)parentViewController;
- (void)saveChangesWithCompletion:(id /* block */)arg1;
- (void)setCustomPhotosEditor:(id)arg1;
- (void)setExternalAssets:(id)arg1;
- (void)setMemoriesEditor:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSelectedOptions:(id)arg1;
- (void)setSyncedAlbumEditor:(id)arg1;
- (void)setTransientEditor:(id)arg1;
- (id)syncedAlbumEditor;
- (id)transientEditor;

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
