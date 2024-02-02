<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SXEmbedComponentView.h</title>
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

/PrivateFrameworks/Silex.framework/SXEmbedComponentView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex (2166)
 */

@interface SXEmbedComponentView : SXComponentView <SXViewportChangeListener, UIGestureRecognizerDelegate, UIScrollViewDelegate, WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate> {
    NSString * _HTML;
    <SXComponentActionHandler> * _actionHandler;
    UIActivityIndicatorView * _activityIndicator;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentLayoutSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentViewportSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentlyLayoutingForSize;
    <SXEmbedType> * _embedConfiguration;
    SXEmbedResource * _embedResource;
    <SXEmbedService> * _embedService;
    UILabel * _errorLabel;
    NSMutableSet * _expectedMessages;
    bool  _failedLoading;
    bool  _hasRegisteredScriptMessageHandlers;
    WKNavigation * _initialNavigation;
    bool  _isCurrentlyLoadingEmbedData;
    <SXLayoutInvalidator> * _layoutInvalidator;
    <SXReachabilityProvider> * _reachabilityProvider;
    NFMultiDelegate * _scriptMessageHandler;
    NSString * _userScript;
    SXWebCrashRetryThrottler * _webCrashRetryThrottler;
    WKWebView * _webView;
    WKWebView * _webViewPresentingInFullscreen;
}

@property (nonatomic, retain) NSString *HTML;
@property (nonatomic, readonly) <SXComponentActionHandler> *actionHandler;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) struct CGSize { double x1; double x2; } currentLayoutSize;
@property (nonatomic) struct CGSize { double x1; double x2; } currentViewportSize;
@property (nonatomic) struct CGSize { double x1; double x2; } currentlyLayoutingForSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <SXEmbedType> *embedConfiguration;
@property (nonatomic, retain) SXEmbedResource *embedResource;
@property (nonatomic, readonly) <SXEmbedService> *embedService;
@property (nonatomic, retain) UILabel *errorLabel;
@property (nonatomic, retain) NSMutableSet *expectedMessages;
@property (nonatomic) bool failedLoading;
@property (nonatomic) bool hasRegisteredScriptMessageHandlers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WKNavigation *initialNavigation;
@property (nonatomic) bool isCurrentlyLoadingEmbedData;
@property (nonatomic, readonly) <SXLayoutInvalidator> *layoutInvalidator;
@property (nonatomic, readonly) <SXReachabilityProvider> *reachabilityProvider;
@property (nonatomic, readonly) NFMultiDelegate *scriptMessageHandler;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *userScript;
@property (nonatomic, retain) SXWebCrashRetryThrottler *webCrashRetryThrottler;
@property (nonatomic, retain) WKWebView *webView;
@property (nonatomic, retain) WKWebView *webViewPresentingInFullscreen;

- (void).cxx_destruct;
- (id)HTML;
- (id)HTMLByEnclosingHTML:(id)arg1 withHTML:(id)arg2;
- (void)_webViewDidEnterFullscreen:(id)arg1;
- (void)_webViewDidExitFullscreen:(id)arg1;
- (void)_webViewWebProcessDidCrash:(id)arg1;
- (id)actionHandler;
- (id)activityIndicator;
- (void)addScriptMessageHandlers;
- (bool)allowHierarchyRemoval;
- (struct CGSize { double x1; double x2; })currentLayoutSize;
- (struct CGSize { double x1; double x2; })currentViewportSize;
- (struct CGSize { double x1; double x2; })currentlyLayoutingForSize;
- (void)dealloc;
- (void)discardContents;
- (void)displayEmbedIfNeeded;
- (id)embedConfiguration;
- (id)embedResource;
- (id)embedService;
- (id)enclosingHTML;
- (id)errorLabel;
- (id)expectedMessages;
- (bool)failedLoading;
- (void)finalizeLayoutForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleError:(id)arg1;
- (bool)hasLoadedEmbedData;
- (bool)hasRegisteredScriptMessageHandlers;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 reachabilityProvider:(id)arg5 embedService:(id)arg6 actionHandler:(id)arg7 layoutInvalidator:(id)arg8;
- (id)initialNavigation;
- (double)initialScale;
- (bool)isCurrentlyLoadingEmbedData;
- (id)layoutInvalidator;
- (void)layoutWebViewForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)loadEmbedData;
- (void)loadEmbedIfNeeded;
- (void)loadWebViewIfNeeded;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; })arg1;
- (id)reachabilityProvider;
- (void)reloadEmbed;
- (void)removeScriptMessageHandlers;
- (void)renderContents;
- (id)scriptMessageHandler;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setActivityIndicator:(id)arg1;
- (void)setCurrentLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCurrentViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCurrentlyLayoutingForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEmbedConfiguration:(id)arg1;
- (void)setEmbedResource:(id)arg1;
- (void)setErrorLabel:(id)arg1;
- (void)setExpectedMessages:(id)arg1;
- (void)setFailedLoading:(bool)arg1;
- (void)setHTML:(id)arg1;
- (void)setHasRegisteredScriptMessageHandlers:(bool)arg1;
- (void)setInitialNavigation:(id)arg1;
- (void)setIsCurrentlyLoadingEmbedData:(bool)arg1;
- (void)setUserScript:(id)arg1;
- (void)setWebCrashRetryThrottler:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)setWebViewPresentingInFullscreen:(id)arg1;
- (bool)shouldAllowRequestToURL:(id)arg1;
- (bool)shouldLayoutWebView;
- (bool)shouldShowWebView;
- (void)showActivityIndicator:(bool)arg1;
- (id)unableToLoadMessage;
- (unsigned long long)userActionMediaTypes;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)userScript;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (id)webCrashRetryThrottler;
- (id)webView;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (id)webViewPresentingInFullscreen;
- (void)willPresentComponentWithChanges:(struct { bool x1; bool x2; })arg1;

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