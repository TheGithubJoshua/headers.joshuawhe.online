<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXPeopleRelatedWidget.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXPeopleRelatedWidget.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXPeopleRelatedWidget : NSObject <PXPeopleDataSourceDelegate, PXPeopleStripCollectionViewControllerDelegate, PXWidget, UIGestureRecognizerDelegate> {
    PXUITapGestureRecognizer * __tapRecognizer;
    double  _cellMinInteritemSpacing;
    double  _cellMinLineSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _cellSize;
    PXPeopleStripCollectionViewController * _collectionViewController;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    long long  _contentViewAnchoringType;
    PXPhotosDetailsContext * _context;
    PXPeopleWidgetDataSource * _dataSource;
    bool  _hasLoadedContentData;
    bool  _isSummaryMode;
    bool  _showFooter;
    PXWidgetSpec * _spec;
    bool  _startedLoadingDataSource;
    double  _targetPrefetchWidth;
    bool  _userInteractionEnabled;
    unsigned long long  _viewType;
    <PXWidgetDelegate> * _widgetDelegate;
    <PXWidgetUnlockDelegate> * _widgetUnlockDelegate;
}

@property (nonatomic, retain) PXUITapGestureRecognizer *_tapRecognizer;
@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle;
@property (nonatomic) double cellMinInteritemSpacing;
@property (nonatomic) double cellMinLineSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } cellSize;
@property (nonatomic, retain) PXPeopleStripCollectionViewController *collectionViewController;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (nonatomic, retain) PXPeopleWidgetDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled;
@property (nonatomic, readonly) bool hasContentForCurrentInput;
@property (setter=_setHasLoadedContentData:, nonatomic) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSummaryMode;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic) bool showFooter;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (getter=hasStartedLoadingDataSource, nonatomic) bool startedLoadingDataSource;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic) double targetPrefetchWidth;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) unsigned long long viewType;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;
@property (nonatomic) <PXWidgetUnlockDelegate> *widgetUnlockDelegate;

- (void).cxx_destruct;
- (bool)_calculateLayoutInfosForWidth:(double)arg1 cellSize:(struct CGSize { double x1; double x2; }*)arg2 interitemSpacing:(double*)arg3;
- (void)_handleTap:(id)arg1;
- (void)_loadContainerView;
- (unsigned long long)_numberOfVisibleFacesForWidth:(double)arg1;
- (void)_prepareDataSource;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_realContentInset;
- (void)_resetControllerLayoutInfosForWidth:(double)arg1;
- (void)_setHasLoadedContentData:(bool)arg1;
- (struct CGSize { double x1; double x2; })_sizeForItemWithWidth:(double)arg1 withInterItemSpacing:(double)arg2;
- (id)_tapRecognizer;
- (double)cellMinInteritemSpacing;
- (double)cellMinLineSpacing;
- (struct CGSize { double x1; double x2; })cellSize;
- (id)collectionViewController;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)contentSizeCategoryChanged:(id)arg1;
- (id)contentView;
- (long long)contentViewAnchoringType;
- (id)context;
- (id)dataSource;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasContentForCurrentInput;
- (bool)hasLoadedContentData;
- (bool)hasStartedLoadingDataSource;
- (id)initWithViewType:(unsigned long long)arg1;
- (bool)isSummaryMode;
- (bool)isUserInteractionEnabled;
- (void)loadContentData;
- (id)localizedTitle;
- (void)memberTappedAtIndexPath:(id)arg1 forPeopleStripController:(id)arg2;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (void)peopleDataSource:(id)arg1 didAddMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleDataSource:(id)arg1 didRemoveMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSource:(id)arg1 didUpdateMembersAtIndexPaths:(id)arg2;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionInset;
- (void)setCellMinInteritemSpacing:(double)arg1;
- (void)setCellMinLineSpacing:(double)arg1;
- (void)setCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCollectionViewController:(id)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContext:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setIsSummaryMode:(bool)arg1;
- (void)setShowFooter:(bool)arg1;
- (void)setSpec:(id)arg1;
- (void)setStartedLoadingDataSource:(bool)arg1;
- (void)setTargetPrefetchWidth:(double)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)setViewType:(unsigned long long)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (void)setWidgetUnlockDelegate:(id)arg1;
- (void)set_tapRecognizer:(id)arg1;
- (bool)showFooter;
- (struct CGSize { double x1; double x2; })sizeForItem;
- (id)spec;
- (double)targetPrefetchWidth;
- (id)traitCollection;
- (void)unloadContentData;
- (unsigned long long)viewType;
- (id)widgetDelegate;
- (id)widgetUnlockDelegate;

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