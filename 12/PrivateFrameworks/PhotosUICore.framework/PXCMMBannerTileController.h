<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXCMMBannerTileController.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXCMMBannerTileController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXCMMBannerTileController : NSObject <PXChangeObserver, PXReusableObject, PXSectionedDataSourceManagerObserver, PXUIViewBasicTile> {
    unsigned long long  _activityType;
    PXCMMAssetsProgressListener * _assetsProgressListener;
    PXCMMPosterBannerView * _bannerView;
    <PXCMMBannerTileControllerDelegate> * _delegate;
    NSArray * _displayNames;
    <PXImportStatusManager> * _importStatusManager;
    PXCMMPeopleSuggestionsDataSourceManager * _peopleSuggestionsDataSourceManager;
    PXCMMPeopleSuggestionsMediaProvider * _peopleSuggestionsMediaProvider;
    unsigned long long  _sourceType;
    PXCMMViewModel * _viewModel;
}

@property (nonatomic, retain) PXCMMPosterBannerView *bannerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXCMMBannerTileControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (nonatomic, retain) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

+ (id)new;

- (void).cxx_destruct;
- (void)_configureBannerViewActionButtonWithTitle:(id)arg1;
- (void)_updateBannerActionButton;
- (void)_updateContainsUnverifierPersons;
- (void)_updateCounts;
- (void)_updateDisplayNamesByViewModel;
- (void)_updateLoadingPeopleSuggestions;
- (void)_updatePeopleSuggestionNames;
- (id)bannerView;
- (void)becomeReusable;
- (id)delegate;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (id)init;
- (id)initWithActivityType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 viewModel:(id)arg3 assetsProgressListener:(id)arg4 importStatusManager:(id)arg5;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)peopleSuggestionsDataSourceManager;
- (id)peopleSuggestionsMediaProvider;
- (void)prepareForReuse;
- (void)setBannerView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPeopleSuggestionDataSourceManager:(id)arg1 mediaProvider:(id)arg2;
- (void)setPeopleSuggestionsDataSourceManager:(id)arg1;
- (void)setPeopleSuggestionsMediaProvider:(id)arg1;
- (id)view;

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
