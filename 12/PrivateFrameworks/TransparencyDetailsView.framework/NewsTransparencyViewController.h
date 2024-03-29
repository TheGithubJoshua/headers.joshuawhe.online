<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NewsTransparencyViewController.h</title>
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

/PrivateFrameworks/TransparencyDetailsView.framework/NewsTransparencyViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TransparencyDetailsView.framework/TransparencyDetailsView (1)
 */

@interface NewsTransparencyViewController : UIViewController <WKNavigationDelegate> {
    <NewsTransparencyViewControllerDelegate> * _delegate;
    UILabel * _errorLabel;
    bool  _isClientTodayWidget;
    bool  _isiPad;
    WKWebView * _myNewsPrivacyWebView;
    double  _statusBarOffset;
    NSDictionary * _transparencyDetailsDictionary;
    NSString * _transparencyDetailsUnavailableMessage;
    UINavigationBar * _transparencyNavBar;
    NSString * _transparencyRendererPayload;
    NSString * _transparencyRendererURL;
    UIActivityIndicatorView * activityIndicator;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <NewsTransparencyViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *errorLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isClientTodayWidget;
@property (nonatomic) bool isiPad;
@property (nonatomic, retain) WKWebView *myNewsPrivacyWebView;
@property (nonatomic) double statusBarOffset;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *transparencyDetailsDictionary;
@property (nonatomic, readonly) NSString *transparencyDetailsUnavailableMessage;
@property (nonatomic, retain) UINavigationBar *transparencyNavBar;
@property (nonatomic, readonly) NSString *transparencyRendererPayload;
@property (nonatomic, readonly) NSString *transparencyRendererURL;

- (void).cxx_destruct;
- (void)_closeViewController:(id)arg1;
- (void)_commonInit;
- (void)_hideErrorMessage;
- (void)_showErrorMessage:(id)arg1;
- (id)bundleForTransparencyDetailsViewFramework;
- (id)delegate;
- (void)errorDelegate;
- (id)errorLabel;
- (id)initWithNewsTransparencyDetailsDictionary:(id)arg1;
- (bool)isClientTodayWidget;
- (bool)isDeviceLocked;
- (bool)isiPad;
- (void)loadWebView;
- (id)myNewsPrivacyWebView;
- (id)normalizeChineseLanguage:(id)arg1;
- (void)presentViewDelegate;
- (void)requestUserPassCodeUnlockUIWithBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrorLabel:(id)arg1;
- (void)setIsClientTodayWidget:(bool)arg1;
- (void)setIsiPad:(bool)arg1;
- (void)setMyNewsPrivacyWebView:(id)arg1;
- (void)setStatusBarOffset:(double)arg1;
- (void)setTransparencyDetailsDictionary:(id)arg1;
- (void)setTransparencyNavBar:(id)arg1;
- (double)statusBarOffset;
- (id)transparencyDetailsDictionary;
- (id)transparencyDetailsUnavailableMessage;
- (id)transparencyNavBar;
- (id)transparencyRendererPayload;
- (id)transparencyRendererURL;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(bool)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

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
