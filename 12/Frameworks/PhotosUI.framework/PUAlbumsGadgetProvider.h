<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUAlbumsGadgetProvider.h</title>
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

/Frameworks/PhotosUI.framework/PUAlbumsGadgetProvider.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUAlbumsGadgetProvider : PXGadgetProvider <PUAlbumGadgetDelegate, PUHorizontalAlbumListGadgetLayoutDelegate, PXChangeObserver, PXCollectionsDataSourceManagerObserver> {
    unsigned long long  _albumListType;
    PUAlbumListCellContentViewHelper * _contentViewHelper;
    unsigned long long  _currentDataSourceIdentifier;
    PXPhotoKitCollectionsDataSourceManager * _dataSourceManager;
    PXExtendedTraitCollection * _extendedTraitCollection;
    bool  _hasGeneratedGadgets;
}

@property (nonatomic, readonly) unsigned long long albumListType;
@property (nonatomic, retain) PUAlbumListCellContentViewHelper *contentViewHelper;
@property (nonatomic) unsigned long long currentDataSourceIdentifier;
@property (nonatomic, readonly) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;
@property (nonatomic) bool hasGeneratedGadgets;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) const struct __CFString { }*seeAllAccessoryButtonEventTrackerKey;
@property (nonatomic, readonly) NSString *seeAllAccessoryButtonTitle;
@property (nonatomic, readonly) bool shouldShowSeeAllAccessoryButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_albumGadgetClassForCollection:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_newGadgetForCollection:(id)arg1;
- (void)_reconfigureGadgets;
- (void)_updateDataSourceWithChangeDetails:(id)arg1;
- (id)albumListCellContentViewHelperForAlbum:(id)arg1;
- (id)albumListCellContentViewHelperForLayout:(id)arg1;
- (unsigned long long)albumListType;
- (id)contentViewHelper;
- (unsigned long long)currentDataSourceIdentifier;
- (id)dataSourceManager;
- (unsigned long long)estimatedNumberOfGadgets;
- (id)extendedTraitCollection;
- (id)gadgetForCollection:(id)arg1;
- (id)gadgetForIndexPath:(id)arg1;
- (void)generateGadgets;
- (bool)hasGeneratedGadgets;
- (id)init;
- (id)initWithAlbumListType:(unsigned long long)arg1 dataSourceManager:(id)arg2 extendedTraitCollection:(id)arg3;
- (void)loadDataForGadgets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (const struct __CFString { }*)seeAllAccessoryButtonEventTrackerKey;
- (id)seeAllAccessoryButtonTitle;
- (void)setContentViewHelper:(id)arg1;
- (void)setCurrentDataSourceIdentifier:(unsigned long long)arg1;
- (void)setHasGeneratedGadgets:(bool)arg1;
- (bool)shouldShowSeeAllAccessoryButton;
- (void)startLoadingRemainingData;

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