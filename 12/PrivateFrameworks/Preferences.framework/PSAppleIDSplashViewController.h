<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PSAppleIDSplashViewController.h</title>
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

/PrivateFrameworks/Preferences.framework/PSAppleIDSplashViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences (1.0)
 */

@interface PSAppleIDSplashViewController : PSListController <AKAppleIDAuthenticationInAppContextPasswordDelegate, RemoteUIControllerDelegate> {
    AKAppleIDAuthenticationController * _authController;
    UIBarButtonItem * _cancelButtonBarItem;
    PSSpecifier * _createNewAccountButtonSpecifier;
    PSSpecifier * _createNewAccountGroupSpecifier;
    NSTimer * _idleJiggleTimer;
    bool  _isPasswordDirty;
    bool  _isPresentedModally;
    CNMonogrammer * _monogrammer;
    UIBarButtonItem * _nextButtonBarItem;
    NSString * _password;
    id /* block */  _passwordHandler;
    PSSpecifier * _passwordSpecifier;
    void * _powerAssertion;
    id /* block */  _remoteUICompletion;
    RemoteUIController * _remoteUIController;
    bool  _shouldHideBackButton;
    bool  _shouldShowCreateAppleIDButton;
    PSSpecifier * _signInButtonSpecifier;
    UIActivityIndicatorView * _spinner;
    UIBarButtonItem * _spinnerBarItem;
    id  _textFieldTextDidChangeObserver;
    PSSpecifier * _userSpecifier;
    NSString * _username;
}

@property (nonatomic, readonly) AKAppleIDAuthenticationController *authenticationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=setPresentedModally:, nonatomic) bool isPresentedModally;
@property (nonatomic) bool shouldShowCreateAppleIDButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginiCloudCreationFlowWithContinuationData:(id)arg1 completion:(id /* block */)arg2;
- (void)_cancelButtonWasTapped:(id)arg1;
- (void)_cancelPasswordDelegateIfNecessary;
- (void)_createNewAppleIDButtonWasTapped:(id)arg1;
- (double)_heightForCreateNewAccountFooterWithWidth:(double)arg1;
- (double)_heightForCreateNewAccountSpecifierWithWidth:(double)arg1;
- (void)_iForgotButtonWasTapped:(id)arg1;
- (id)_monogrammer;
- (void)_openWebBasedCredentialRecoveryFlow;
- (id)_passwordForSpecifier:(id)arg1;
- (void)_presentAppleIDPrivacyInformationPane;
- (void)_presentInvalidUsernameAlert;
- (void)_reloadPasswordSpecifier;
- (bool)_runningInMail;
- (void)_setInteractionEnabled:(bool)arg1;
- (void)_setPassword:(id)arg1 withSpecifier:(id)arg2;
- (void)_setUsername:(id)arg1 withSpecifier:(id)arg2;
- (bool)_shouldAnchorCreateAccountButton;
- (bool)_shouldShowCancelDone;
- (void)_signInButtonWasTapped:(id)arg1;
- (void)_signInWithUsername:(id)arg1 password:(id)arg2;
- (id)_specifierForGroupWithiForgotLink;
- (id)_specifierForLoginPasswordForm;
- (id)_specifierForLoginUserForm;
- (id)_specifiersForCreateNewAccount;
- (id)_specifiersForSignInButton;
- (void)_textFieldValueDidChange:(id)arg1;
- (void)_updateSignInButton;
- (id)_usernameForSpecifier:(id)arg1;
- (id)authenticationController;
- (void)context:(id)arg1 needsPasswordWithCompletion:(id /* block */)arg2;
- (void)createNewAppleIDWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)didFinishAuthWithContext:(id)arg1 results:(id)arg2 error:(id)arg3;
- (void)handleAuthCompletionWithResults:(id)arg1;
- (void)hideBusyUI;
- (bool)isPresentedModally;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)returnPressedAtEnd;
- (id)serviceDescription;
- (id)serviceIcon;
- (id)serviceName;
- (void)setPresentedModally:(bool)arg1;
- (void)setShouldShowCreateAppleIDButton:(bool)arg1;
- (void)setUsername:(id)arg1;
- (void)setUsernameEnabled:(bool)arg1;
- (bool)shouldShowCreateAppleIDButton;
- (void)showBusyUI;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willBeginAuthWithContext:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;

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