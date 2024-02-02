<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXMemoryRowGadget.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXMemoryRowGadget.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXMemoryRowGadget : UIViewController <PXForYouMemoriesViewControllerDelegate, PXGadget, PXSectionedDataSourceManagerObserver, PXUIViewControllerZoomTransitionEndPoint> {
    unsigned long long  _currentNumberOfColumns;
    <PXUIViewControllerZoomTransitionEndPoint> * _currentTransitionEndPoint;
    long long  _currentVisibility;
    PXMemoriesFeedWidgetDataSourceManager * _dataSourceManager;
    <PXGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    bool  _hasAppeared;
    long long  _priority;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
    }  _updateFlags;
    NSMutableDictionary * _viewControllerEntries;
}

@property (nonatomic, readonly) const struct __CFString { }*accessoryButtonEventTrackerKey;
@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic) unsigned long long currentNumberOfColumns;
@property (nonatomic, retain) <PXUIViewControllerZoomTransitionEndPoint> *currentTransitionEndPoint;
@property (nonatomic) long long currentVisibility;
@property (nonatomic, readonly) PXMemoriesFeedWidgetDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (nonatomic) bool hasAppeared;
@property (nonatomic, readonly) bool hasContentToDisplay;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, readonly) bool keepsSourceRegionOfInterestContent;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) long long priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAssetsDrop;
@property (nonatomic, readonly) bool supportsHighlighting;
@property (nonatomic, readonly) bool supportsSelection;
@property (nonatomic, retain) NSMutableDictionary *viewControllerEntries;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;

+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })dataSourceRangeForRowType:(unsigned long long)arg1 currentVisibility:(long long)arg2;
+ (unsigned long long)numberOfColumnsForCurrentVisibility:(long long)arg1 rowType:(unsigned long long)arg2 numberOfMemories:(unsigned long long)arg3;
+ (long long)visibilityForGadgetSpec:(id)arg1 numberOfMemories:(unsigned long long)arg2;

- (void).cxx_destruct;
- (long long)_columnSpanForRowType:(unsigned long long)arg1;
- (void)_configureMetricsForMultiRow:(id)arg1 dataSourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_configureMetricsForSingleRow:(id)arg1 dataSourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_dismissIfNeeded;
- (void)_fillViewControllerEntryForRowType:(unsigned long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForRowType:(unsigned long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_refreshViewControllerForRowType:(unsigned long long)arg1 visibility:(long long)arg2;
- (void)_removeViewControllerEntryForRowType:(unsigned long long)arg1;
- (bool)_shouldPageForRowType:(unsigned long long)arg1;
- (void)_transitionFromCurrentVisibility:(long long)arg1 toNewVisibility:(long long)arg2;
- (void)_updateIfNeeded;
- (void)_updateNumberOfColumnsIfNeeded;
- (void)_updateScrollingBehaviorForRowType:(unsigned long long)arg1;
- (void)_updateScrollingBehaviorIfNeeded;
- (void)_updateVisibilityIfNeeded;
- (const struct __CFString { }*)accessoryButtonEventTrackerKey;
- (id)accessoryButtonTitle;
- (unsigned long long)accessoryButtonType;
- (struct NSObject { Class x1; }*)contentViewController;
- (unsigned long long)currentNumberOfColumns;
- (id)currentTransitionEndPoint;
- (long long)currentVisibility;
- (id)dataSourceManager;
- (id)delegate;
- (void)forYouMemoriesViewController:(id)arg1 configureMetrics:(id)arg2;
- (void)forYouMemoriesViewController:(id)arg1 transitionToViewController:(id)arg2 animated:(bool)arg3;
- (void)gadgetControllerHasAppeared;
- (void)gadgetControllerHasDisappeared;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (bool)hasAppeared;
- (bool)hasContentToDisplay;
- (id)initWithDataSourceManager:(id)arg1;
- (id)localizedTitle;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (long long)priority;
- (bool)px_canPerformZoomTransitionWithDetailViewController:(id)arg1;
- (id)px_endPointForTransition:(id)arg1;
- (void)setCurrentNumberOfColumns:(unsigned long long)arg1;
- (void)setCurrentTransitionEndPoint:(id)arg1;
- (void)setCurrentVisibility:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setHasAppeared:(bool)arg1;
- (void)setPriority:(long long)arg1;
- (void)setViewControllerEntries:(id)arg1;
- (id)showAllMemoriesFeedAnimated:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)userDidSelectAccessoryButton:(id)arg1;
- (id)viewControllerEntries;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

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