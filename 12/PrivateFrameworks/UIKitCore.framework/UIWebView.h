<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIWebView.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIWebView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIWebView : UIView <NSCoding, UIScrollViewDelegate, WebPolicyDelegate> {
    UIWebViewInternal * _internal;
}

@property (nonatomic) bool allowsInlineMediaPlayback;
@property (nonatomic) bool allowsLinkPreview;
@property (nonatomic) bool allowsPictureInPictureMediaPlayback;
@property (getter=canGoBack, nonatomic, readonly) bool canGoBack;
@property (getter=canGoForward, nonatomic, readonly) bool canGoForward;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIWebViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool detectsPhoneNumbers;
@property (nonatomic) double gapBetweenPages;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool keyboardDisplayRequiresUserAction;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic) bool mediaPlaybackAllowsAirPlay;
@property (nonatomic) bool mediaPlaybackRequiresUserAction;
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic) double pageLength;
@property (nonatomic) long long paginationBreakingMode;
@property (nonatomic) long long paginationMode;
@property (nonatomic, readonly) NSURLRequest *request;
@property (nonatomic) bool scalesPageToFit;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressesIncrementalRendering;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (void)_fixPathsForSandboxDirectoryChange;
+ (id)_relativePathFromAbsolutePath:(id)arg1 removingPathComponents:(unsigned long long)arg2;
+ (void)_updatePersistentStoragePaths;
+ (void)initialize;

- (void)_addShortcut:(id)arg1;
- (bool)_allowsPictureInPictureVideo;
- (bool)_alwaysConstrainsScale;
- (bool)_alwaysDispatchesScrollEvents;
- (bool)_appliesExclusiveTouchToSubviewTree;
- (unsigned long long)_audioSessionCategoryOverride;
- (void)_beginRotation;
- (id)_browserView;
- (void)_define:(id)arg1;
- (void)_didCompleteScrolling;
- (void)_didRotate:(id)arg1;
- (id)_documentView;
- (void)_finishRotation;
- (void)_frameOrBoundsChanged;
- (double)_gapBetweenPages;
- (id)_initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 enableReachability:(bool)arg2;
- (id)_initWithWebView:(id)arg1;
- (id)_makeAlertView;
- (id)_networkInterfaceName;
- (unsigned long long)_pageCount;
- (double)_pageLength;
- (bool)_paginationBehavesLikeColumns;
- (long long)_paginationMode;
- (id)_pdfViewHandler;
- (void)_populateArchivedSubviews:(id)arg1;
- (Class)_printFormatterClass;
- (void)_reportError:(id)arg1;
- (void)_rescaleDocument;
- (id)_scrollView;
- (void)_setAllowsPictureInPictureVideo:(bool)arg1;
- (void)_setAlwaysConstrainsScale:(bool)arg1;
- (void)_setAlwaysDispatchesScrollEvents:(bool)arg1;
- (void)_setAudioSessionCategoryOverride:(unsigned long long)arg1;
- (void)_setDrawInWebThread:(bool)arg1;
- (void)_setDrawsCheckeredPattern:(bool)arg1;
- (void)_setGapBetweenPages:(double)arg1;
- (void)_setIsBlankBeforeFirstNonEmptyLayout:(bool)arg1;
- (void)_setNetworkInterfaceName:(id)arg1;
- (void)_setOverridesOrientationChangeEventHandling:(bool)arg1;
- (void)_setPageLength:(double)arg1;
- (void)_setPaginationBehavesLikeColumns:(bool)arg1;
- (void)_setPaginationMode:(long long)arg1;
- (void)_setRichTextReaderViewportSettings;
- (void)_setScalesPageToFitViewportSettings;
- (void)_setWebSelectionEnabled:(bool)arg1;
- (void)_share:(id)arg1;
- (void)_updateBrowserViewExposedScrollViewRect;
- (void)_updateCheckeredPattern;
- (void)_updateOpaqueAndBackgroundColor;
- (void)_updateRequest;
- (void)_updateScrollViewInsetAdjustmentBehavior;
- (void)_updateScrollerViewForInputView:(id)arg1;
- (void)_updateViewSettings;
- (void)_webView:(id)arg1 commitPreview:(id)arg2;
- (void)_webView:(id)arg1 didChangeAvoidsUnsafeArea:(bool)arg2;
- (void)_webView:(id)arg1 didDismissPreview:(id)arg2 committing:(bool)arg3;
- (id)_webView:(id)arg1 presentationRectsForPreview:(id)arg2;
- (id)_webView:(id)arg1 presentationSnapshotForPreview:(id)arg2;
- (bool)_webView:(id)arg1 previewIsAllowedForPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2;
- (void)_webView:(id)arg1 willPresentPreview:(id)arg2;
- (void)_webViewCommonInitWithWebView:(id)arg1 scalesPageToFit:(bool)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (bool)allowsInlineMediaPlayback;
- (bool)allowsLinkPreview;
- (bool)allowsPictureInPictureMediaPlayback;
- (bool)canGoBack;
- (bool)canGoForward;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (unsigned long long)dataDetectorTypes;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (bool)detectsPhoneNumbers;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)gapBetweenPages;
- (void)goBack;
- (void)goForward;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isElementAccessibilityExposedToInterfaceBuilder;
- (bool)isLoading;
- (bool)keyboardDisplayRequiresUserAction;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (bool)mediaPlaybackAllowsAirPlay;
- (bool)mediaPlaybackRequiresUserAction;
- (struct CGImage { }*)newSnapshotWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)pageCount;
- (double)pageLength;
- (long long)paginationBreakingMode;
- (long long)paginationMode;
- (void)reload;
- (id)request;
- (void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2;
- (void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2;
- (bool)scalesPageToFit;
- (id)scrollView;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWasRemoved:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setAllowsInlineMediaPlayback:(bool)arg1;
- (void)setAllowsLinkPreview:(bool)arg1;
- (void)setAllowsPictureInPictureMediaPlayback:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetectsPhoneNumbers:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGapBetweenPages:(double)arg1;
- (void)setKeyboardDisplayRequiresUserAction:(bool)arg1;
- (void)setMediaPlaybackAllowsAirPlay:(bool)arg1;
- (void)setMediaPlaybackRequiresUserAction:(bool)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setPageLength:(double)arg1;
- (void)setPaginationBreakingMode:(long long)arg1;
- (void)setPaginationMode:(long long)arg1;
- (void)setScalesPageToFit:(bool)arg1;
- (void)setSuppressesIncrementalRendering:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)stopLoading;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (bool)suppressesIncrementalRendering;
- (void)view:(id)arg1 didSetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 oldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didReceiveTitle:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)arg2 totalSpaceNeeded:(unsigned long long)arg3;
- (void)webView:(id)arg1 frame:(id)arg2 exceededDatabaseQuotaForSecurityOrigin:(id)arg3 database:(id)arg4;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webView:(id)arg1 printFrameView:(id)arg2;
- (bool)webView:(id)arg1 resource:(id)arg2 canAuthenticateAgainstProtectionSpace:(id)arg3 forDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didCancelAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 runJavaScriptAlertPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (bool)webView:(id)arg1 runJavaScriptConfirmPanelWithMessage:(id)arg2 initiatedByFrame:(id)arg3;
- (id)webView:(id)arg1 runJavaScriptTextInputPanelWithPrompt:(id)arg2 defaultText:(id)arg3 initiatedByFrame:(id)arg4;
- (void)webView:(id)arg1 unableToImplementPolicyWithError:(id)arg2 frame:(id)arg3;
- (void)webViewClose:(id)arg1;
- (void)webViewMainFrameDidCommitLoad:(id)arg1;
- (void)webViewMainFrameDidFailLoad:(id)arg1 withError:(id)arg2;
- (void)webViewMainFrameDidFinishLoad:(id)arg1;
- (void)webViewMainFrameDidFirstVisuallyNonEmptyLayoutInFrame:(id)arg1;
- (void)webViewSupportedOrientationsUpdated:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI

- (bool)isLayoutSizeDependentOnPerpendicularAxis;

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
