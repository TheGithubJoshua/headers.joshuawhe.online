<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXPhotoKitAssetActionManager.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXPhotoKitAssetActionManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXPhotoKitAssetActionManager : PXAssetActionManager {
    NSMapTable * __actionTypeByBarButtonItem;
    PXAssetActionPerformer * __activePerformer;
    PXPhotosDataSource * __dataSourceSnapshot;
    NSMutableDictionary * __performerClassByType;
    PXPhotoKitAssetsDataSourceManager * _dataSourceManager;
    PHPerson * _person;
}

@property (nonatomic, readonly) NSMapTable *_actionTypeByBarButtonItem;
@property (setter=_setActivePerformer:, nonatomic, retain) PXAssetActionPerformer *_activePerformer;
@property (nonatomic, readonly) PXPhotosDataSource *_dataSourceSnapshot;
@property (nonatomic, readonly) NSMutableDictionary *_performerClassByType;
@property (nonatomic, retain) PXPhotoKitAssetsDataSourceManager *dataSourceManager;
@property (nonatomic, retain) PHPerson *person;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void).cxx_destruct;
- (id)_actionTypeByBarButtonItem;
- (id)_activePerformer;
- (id)_dataSourceSnapshot;
- (void)_handleActionPerformerComplete:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_handleActionType:(id)arg1;
- (void)_handleBarButtonItem:(id)arg1;
- (void)_handlePreviewAction:(id)arg1 previewViewController:(id)arg2 actionType:(id)arg3;
- (id)_performerClassByType;
- (void)_setActivePerformer:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (id)alertActionForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (bool)canPerformActionType:(id)arg1;
- (bool)canPerformAssetVariationActions;
- (id)dataSourceManager;
- (id)initWithSelectionManager:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)person;
- (id)previewActionForActionType:(id)arg1;
- (void)registerPerformerClass:(Class)arg1 forType:(id)arg2;
- (void)setDataSourceManager:(id)arg1;
- (void)setPerson:(id)arg1;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

- (void)px_registerAdditionalPerformerClasses;

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
