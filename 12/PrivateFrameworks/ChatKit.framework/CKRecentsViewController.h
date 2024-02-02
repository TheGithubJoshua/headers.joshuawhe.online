<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKRecentsViewController.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKRecentsViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKRecentsViewController : CKBrowserViewController <CKBrowserDragControllerDelegate, MSStickerBrowserViewDataSource, _MSStickerSendManagerDelegate> {
    MSStickerBrowserView * _browserView;
    id /* block */  _draggingCompletionHandler;
    bool  _hasHandwritingRecents;
    bool  _hasStickerRecents;
    bool  _isLoadingRecents;
    UILabel * _noRecentsLabel;
    bool  _preparingForDisplay;
    NSMutableArray * _recentItems;
    NSMutableDictionary * _stickerCache;
}

@property (nonatomic, retain) MSStickerBrowserView *browserView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ draggingCompletionHandler;
@property (nonatomic) bool hasHandwritingRecents;
@property (nonatomic) bool hasStickerRecents;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLoadingRecents;
@property (nonatomic, retain) UILabel *noRecentsLabel;
@property (getter=isPreparingForDisplay, nonatomic) bool preparingForDisplay;
@property (nonatomic, retain) NSMutableArray *recentItems;
@property (nonatomic, retain) NSMutableDictionary *stickerCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_postBrowserDidPrepareForDisplayNotificationIfNecessary;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_stickerForMSSticker:(id)arg1;
- (id)browserView;
- (void)dealloc;
- (void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (bool)dragManager:(id)arg1 canPeelItem:(id)arg2;
- (bool)dragManager:(id)arg1 canRotateItem:(id)arg2;
- (bool)dragManager:(id)arg1 canScaleItem:(id)arg2;
- (void)dragManager:(id)arg1 didDragItem:(id)arg2 toDragTarget:(id)arg3;
- (void)dragManager:(id)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
- (bool)dragManager:(id)arg1 shouldCancelDraggingForItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
- (id /* block */)draggingCompletionHandler;
- (void)forceTearDownRemoteView;
- (bool)hasHandwritingRecents;
- (bool)hasStickerRecents;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
- (void)insertSticker:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isLoadingRecents;
- (bool)isPreparingForDisplay;
- (void)loadRecents;
- (void)loadView;
- (bool)mayBeKeptInViewHierarchy;
- (id)noRecentsLabel;
- (long long)numberOfStickersInStickerBrowserView:(id)arg1;
- (void)prepareForDisplay;
- (id)recentItems;
- (void)recentsUpdated;
- (id)requestSnapshotDataForPersistance;
- (void)resortAndReloadRecents;
- (void)saveSnapshotForBrowserViewController;
- (void)setBrowserView:(id)arg1;
- (void)setDraggingCompletionHandler:(id /* block */)arg1;
- (void)setHasHandwritingRecents:(bool)arg1;
- (void)setHasStickerRecents:(bool)arg1;
- (void)setIsLoadingRecents:(bool)arg1;
- (void)setNoRecentsLabel:(id)arg1;
- (void)setPreparingForDisplay:(bool)arg1;
- (void)setRecentItems:(id)arg1;
- (void)setStickerCache:(id)arg1;
- (void)setupNoRecentsLabel;
- (bool)shouldShowChatChrome;
- (void)startDragSticker:(id)arg1 frameInRemoteView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fence:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)stickerBrowserView:(id)arg1 shouldDrawBorderAroundSticker:(id)arg2;
- (id)stickerBrowserView:(id)arg1 stickerAtIndex:(long long)arg2;
- (id)stickerCache;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
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