<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CNFRegServerWebViewController.h</title>
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

/PrivateFrameworks/CommunicationsSetupUI.framework/CNFRegServerWebViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI (1)
 */

@interface CNFRegServerWebViewController : UIViewController <RUIObjectModelDelegate, UIWebViewDelegate> {
    RUILoader * _loader;
    CNFRegLoadingView * _loadingView;
    NSMutableArray * _objectModels;
    CNFRegController * _regController;
    NSTimer * _timeoutTimer;
    struct { 
        unsigned int isLoading : 1; 
        unsigned int isLoaded : 1; 
        unsigned int wantsWifi : 1; 
        unsigned int modifiedWiFi : 1; 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int checkedLogState : 1; 
        unsigned int shouldLog : 1; 
        unsigned int timedOut; 
    }  _webControllerFlags;
    UIWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLoaded;
@property (nonatomic, readonly) bool isLoading;
@property (nonatomic, retain) CNFRegController *regController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool timedOut;
@property (nonatomic, retain) UIWebView *webView;

- (void).cxx_destruct;
- (void)_cleanupLoader;
- (void)_handleTimeout;
- (void)_popObjectModelAnimated:(bool)arg1;
- (bool)_shouldLog;
- (void)_startTimeoutWithDuration:(double)arg1;
- (void)_stopTimeout;
- (void)_timeoutFired:(id)arg1;
- (void)applicationWillSuspend;
- (bool)canSendURLRequest:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)dealloc;
- (void)hideSpinner;
- (id)init;
- (id)initWithRegController:(id)arg1;
- (bool)isLoaded;
- (bool)isLoading;
- (void)loadURL:(id)arg1;
- (void)loadView;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3;
- (id)logName;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModelDidChange:(id)arg1;
- (void)objectModelPressedBack:(id)arg1;
- (id)overrideURLForURL:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (id)regController;
- (void)setHeadersForRequest:(id)arg1;
- (void)setRegController:(id)arg1;
- (void)setWantsWifi:(bool)arg1;
- (void)setWebView:(id)arg1;
- (bool)shouldSetHeadersForRequest:(id)arg1;
- (void)showSpinner;
- (void)startRequiringWifi;
- (void)stopRequiringWifi;
- (bool)timedOut;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)webView;

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