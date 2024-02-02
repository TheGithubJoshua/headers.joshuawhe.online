<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AAUIFamilySetupViewController.h</title>
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

/PrivateFrameworks/AppleAccountUI.framework/AAUIFamilySetupViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI (1)
 */

@interface AAUIFamilySetupViewController : AAUIBleachedNavigationController <FAFamilySetupPageDelegate, RemoteUIControllerDelegate> {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    NSMutableURLRequest * _currentRemoteUIRequest;
    AAGrandSlamSigner * _grandSlamSigner;
    bool  _isShowingSpinner;
    UINavigationItem * _navigationItemShowingSpinner;
    NSArray * _originalRightBarButtonItems;
    RemoteUIController * _remoteUIController;
    UIActivityIndicatorView * _spinnerView;
    NSMutableURLRequest * _startRemoteUIRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIFamilySetupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeButtonWasTapped:(id)arg1;
- (id)_createCloseButton;
- (void)_hideActivitySpinnerInNavigationBar;
- (id)_initWithAccount:(id)arg1 grandSlamSigner:(id)arg2 rootViewController:(id)arg3;
- (bool)_isRunningInSettings;
- (void)_loadRemoteUIPages;
- (void)_remoteUIDidCancel;
- (void)_sendUserToiTunesSettings;
- (void)_showActivitySpinnerInNavigationBar;
- (id)_urlForLaunchingSettings;
- (void)dealloc;
- (void)familySetupPage:(id)arg1 didCompleteWithSuccess:(bool)arg2;
- (id)initTrimmedFlowWithAccount:(id)arg1 grandSlamSigner:(id)arg2;
- (id)initWithAccount:(id)arg1 grandSlamSigner:(id)arg2 familyEligibilityResponse:(id)arg3;
- (id)initWithAccount:(id)arg1 store:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (bool)shouldAutorotate;
- (void)viewDidLoad;

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