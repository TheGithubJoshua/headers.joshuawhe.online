<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>QLItemPresenterViewController.h</title>
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

/Frameworks/QuickLook.framework/QLItemPresenterViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook (1)
 */

@interface QLItemPresenterViewController : QLItemAggregatedViewController <QLDownloadingItemViewControllerDelegate, QLItemViewControllerPresentingDelegate> {
    id /* block */  _completionHandler;
    id  _contents;
    QLPreviewContext * _context;
    QLDownloadingItemViewController * _downloadingController;
    QLErrorItemViewController * _errorViewController;
    bool  _failureOccurred;
    bool  _isPeekingSession;
    bool  _isReadyForDisplay;
    QLLoadingItemViewController * _loadingViewController;
    QLItem * _previewItem;
    QLItemViewController * _previewProvider;
    id /* block */  _readyBlock;
    bool  _shouldDeferAppearanceUpdates;
    bool  _shouldHandleLoadingView;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (retain) id contents;
@property (retain) QLPreviewContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) QLDownloadingItemViewController *downloadingController;
@property (nonatomic, retain) QLErrorItemViewController *errorViewController;
@property (readonly) unsigned long long hash;
@property (readonly) QLItemPresenterViewController *itemPresenterViewController;
@property (nonatomic, retain) QLLoadingItemViewController *loadingViewController;
@property (nonatomic, retain) QLItem *previewItem;
@property (nonatomic, retain) QLItemViewController *previewProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelAllDeferredApperanceUpdates;
- (void)_performReadyBlockIfNedded;
- (void)_showLoadingViewControllerDeferredIfNeeded;
- (void)_showReadyToDisplayPreviewViewControllerDeferredIfNeeded:(id)arg1;
- (void)_startLoadingPreviewWithContents:(id)arg1;
- (id)additionalItemViewControllerDescription;
- (id /* block */)completionHandler;
- (id)contents;
- (id)context;
- (id)downloadingController;
- (void)downloadingItemViewControllerDidFinishLoadingPreviewItem:(id)arg1 withContents:(id)arg2;
- (id)errorViewController;
- (id)init;
- (bool)isLoaded;
- (bool)isLoading;
- (void)isReadyForDisplayWithCompletionHandler:(id /* block */)arg1;
- (id)itemPresenterViewController;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)loadingFailed;
- (id)loadingViewController;
- (void)previewDidAppear:(bool)arg1;
- (void)previewDidDisappear:(bool)arg1;
- (id)previewItem;
- (void)previewItemViewController:(id)arg1 didFailWithError:(id)arg2;
- (id)previewProvider;
- (void)previewWillAppear:(bool)arg1;
- (void)previewWillDisappear:(bool)arg1;
- (void)setAppearance:(id)arg1 animated:(bool)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setContents:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDownloadingController:(id)arg1;
- (void)setErrorViewController:(id)arg1;
- (void)setLoadingViewController:(id)arg1;
- (void)setPreviewItem:(id)arg1;
- (void)setPreviewProvider:(id)arg1;
- (void)showErrorViewController;
- (void)showPreviewViewController:(id)arg1;
- (void)showPreviewViewController:(id)arg1 animatingWithCrossfade:(bool)arg2;
- (void)showPreviewViewController:(id)arg1 animatingWithCrossfade:(bool)arg2 updatingIsReadyForDisplay:(bool)arg3;
- (void)transitionDidFinish:(bool)arg1 didComplete:(bool)arg2;
- (void)transitionDidStart:(bool)arg1;
- (void)transitionWillFinish:(bool)arg1 didComplete:(bool)arg2;

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
