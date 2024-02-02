<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SFWebViewControllerDelegate.h</title>
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

/protocols/SFWebViewControllerDelegate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol SFWebViewControllerDelegate <NSObject>

@required

- (unsigned long long)browserPersonaForWebViewController:(SFWebViewController *)arg1;
- (UIViewController *)presentingViewControllerForWebViewController:(SFWebViewController *)arg1;
- (void)webViewController:(SFWebViewController *)arg1 commitPreviewedViewController:(UIViewController *)arg2;
- (void)webViewController:(void *)arg1 createWebViewWithConfiguration:(void *)arg2 forNavigationAction:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: SFWebViewController *, WKWebViewConfiguration *, WKNavigationAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WKWebView *, void*
- (void)webViewController:(void *)arg1 decidePolicyForNavigationAction:(void *)arg2 decisionHandler:(void *)arg3; // needs 3 arg types, found 9: SFWebViewController *, WKNavigationAction *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, _WKWebsitePolicies *, void*
- (void)webViewController:(void *)arg1 decidePolicyForNavigationResponse:(void *)arg2 decisionHandler:(void *)arg3; // needs 3 arg types, found 8: SFWebViewController *, WKNavigationResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)webViewController:(SFWebViewController *)arg1 didChangeFullScreen:(bool)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didCommitNavigation:(WKNavigation *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didEndNavigationGestureToBackForwardListItem:(WKBackForwardListItem *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didFailNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webViewController:(SFWebViewController *)arg1 didFailProvisionalNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webViewController:(SFWebViewController *)arg1 didFinishDocumentLoadForNavigation:(WKNavigation *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didFinishNavigation:(WKNavigation *)arg2;
- (void)webViewController:(void *)arg1 didReceiveAuthenticationChallenge:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: SFWebViewController *, NSURLAuthenticationChallenge *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURLCredential *, void*
- (void)webViewController:(SFWebViewController *)arg1 didReceiveServerRedirectForProvisionalNavigation:(WKNavigation *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 didSameDocumentNavigation:(WKNavigation *)arg2 ofType:(long long)arg3;
- (void)webViewController:(SFWebViewController *)arg1 didStartProvisionalNavigation:(WKNavigation *)arg2;
- (long long)webViewController:(SFWebViewController *)arg1 presentationPolicyForDialog:(_SFDialog *)arg2;
- (UIViewController *)webViewController:(SFWebViewController *)arg1 previewViewControllerForURL:(NSURL *)arg2 defaultActions:(NSArray *)arg3 elementInfo:(_WKActivatedElementInfo *)arg4;
- (void)webViewController:(SFWebViewController *)arg1 printFrame:(_WKFrameHandle *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 webViewDidClose:(WKWebView *)arg2;
- (void)webViewController:(SFWebViewController *)arg1 willPerformClientRedirectToURL:(NSURL *)arg2 withDelay:(double)arg3;
- (void)webViewControllerDidCancelClientRedirect:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeEstimatedProgress:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeHasOnlySecureContent:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeLoadingState:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeSafeAreaInsets:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeSafeAreaShouldAffectObscuredInsets:(SFWebViewController *)arg1;
- (void)webViewControllerDidChangeURL:(SFWebViewController *)arg1;
- (void)webViewControllerDidFirstVisuallyNonEmptyLayout:(SFWebViewController *)arg1;
- (void)webViewControllerUpdateNavigationBar:(SFWebViewController *)arg1;
- (void)webViewControllerWebProcessDidBecomeResponsive:(SFWebViewController *)arg1;
- (void)webViewControllerWebProcessDidBecomeUnresponsive:(SFWebViewController *)arg1;
- (void)webViewControllerWebProcessDidCrash:(SFWebViewController *)arg1;
- (void)webViewControllerWillPresentJavaScriptDialog:(SFWebViewController *)arg1;

@optional

- (void)webViewControllerDidShowSafeBrowsingWarning:(SFWebViewController *)arg1;

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