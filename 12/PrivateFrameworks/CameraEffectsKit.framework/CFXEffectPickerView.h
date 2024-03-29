<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CFXEffectPickerView.h</title>
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

/PrivateFrameworks/CameraEffectsKit.framework/CFXEffectPickerView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit (357.0.70)
 */

@interface CFXEffectPickerView : UIView <JTEffectPreviewManagerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
    struct CGSize { 
        double width; 
        double height; 
    }  _cellSize;
    bool  _continuousPreviewEnabled;
    <CFXEffectPickerViewDataSource> * _dataSource;
    <CFXEffectPickerViewDelegate> * _delegate;
    UIImage * _previewBackgroundImage;
    JTEffectPreviewManager * _previewManager;
    bool  _previewingIsWaitingForConfiguration;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
    bool  _useCameraForContinuousPreview;
}

@property (nonatomic) struct CGSize { double x1; double x2; } cellSize;
@property (getter=isContinuousPreviewEnabled, nonatomic) bool continuousPreviewEnabled;
@property (nonatomic) <CFXEffectPickerViewDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CFXEffectPickerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *previewBackgroundImage;
@property (nonatomic, retain) JTEffectPreviewManager *previewManager;
@property (nonatomic) bool previewingIsWaitingForConfiguration;
@property (readonly) Class superclass;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;
@property (getter=isUsingCameraForContinuousPreview, nonatomic) bool useCameraForContinuousPreview;

- (void).cxx_destruct;
- (void)applyEffectAtCellIndex:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })cellSize;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didResize:(struct CGSize { double x1; double x2; })arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionViewLayout;
- (void)configureCell:(id)arg1;
- (id)contentView;
- (id)dataSource;
- (id)delegate;
- (void)didResizeCollectionViewToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)didScrollCollectionView;
- (void)didSelectItemAtCellIndex:(unsigned long long)arg1;
- (void)effectDidLoadForCell:(id)arg1 effect:(id)arg2;
- (unsigned long long)effectIndexForCellIndex:(unsigned long long)arg1;
- (id)effectPickerCellNibName;
- (id)effectPickerCellReuseIdentifier;
- (id)effectPickerNibName;
- (void)effectPreviewManager:(id)arg1 didUpdatePreviewsFor:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isContinuousPreviewEnabled;
- (bool)isUsingCameraForContinuousPreview;
- (unsigned long long)numberOfCollectionViewItems;
- (void)orientationDidChange;
- (id)previewBackgroundImage;
- (id)previewManager;
- (bool)previewingIsWaitingForConfiguration;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContinuousPreviewEnabled:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPreviewBackgroundImage:(id)arg1;
- (void)setPreviewManager:(id)arg1;
- (void)setPreviewingIsWaitingForConfiguration:(bool)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUseCameraForContinuousPreview:(bool)arg1;
- (void)sharedInit;
- (void)startPreviewing;
- (void)stopPreviewing;
- (void)subviewsDidLoad;
- (struct CGSize { double x1; double x2; })thumbnailSize;
- (void)updatePreviewEffects;
- (void)updatePreviewEffectsWhenReloadComplete;

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
