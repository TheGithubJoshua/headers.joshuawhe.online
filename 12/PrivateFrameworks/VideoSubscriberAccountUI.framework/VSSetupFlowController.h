<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VSSetupFlowController.h</title>
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

/PrivateFrameworks/VideoSubscriberAccountUI.framework/VSSetupFlowController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI (291.60.3)
 */

@interface VSSetupFlowController : NSObject <VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderRequestManagerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate, VSSupportedAppsViewControllerDelegate> {
    VSAppDescription * _appDescription;
    VSDevice * _currentDevice;
    <VSSetupFlowControllerDelegate> * _delegate;
    NSArray * _freeOnBoardingBundleIDs;
    id /* block */  _goingBackActivationCompletionBlock;
    bool  _isInSTBMode;
    bool  _notifyDelegateFromActivation;
    VSPreferences * _preferences;
    NSOperationQueue * _privateQueue;
    NSString * _providerAccountUsername;
    VSRemoteNotifier * _remoteNotifier;
    VSIdentityProviderRequestManager * _requestManager;
    bool  _signingIn;
    VSPersistentStorage * _storage;
}

@property (nonatomic, retain) VSAppDescription *appDescription;
@property (nonatomic, retain) VSDevice *currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSSetupFlowControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *freeOnBoardingBundleIDs;
@property (nonatomic, copy) id /* block */ goingBackActivationCompletionBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInSTBMode;
@property (nonatomic) bool notifyDelegateFromActivation;
@property (nonatomic, retain) VSPreferences *preferences;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) NSString *providerAccountUsername;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (nonatomic, retain) VSIdentityProviderRequestManager *requestManager;
@property (getter=isSigningIn, nonatomic) bool signingIn;
@property (nonatomic, retain) VSPersistentStorage *storage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appleAccountDidChange:(id)arg1;
- (void)_didStartLoading;
- (void)_dismissViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)_finishAfterOfferingOptions:(bool)arg1 endingUndoGrouping:(bool)arg2;
- (id)_getProviderWithUserTokenFromAllProviders:(id)arg1;
- (void)_obtainConsentForBundleIDs:(id)arg1 vouchers:(id)arg2 withAppleAccount:(id)arg3 identityProvider:(id)arg4 endingUndoGrouping:(bool)arg5 arrivedViaNotNowButton:(bool)arg6 arrivedAfterSigningIn:(bool)arg7 goingBack:(bool)arg8;
- (void)_offerAuthenticationForProvider:(id)arg1 withSupportedAppsButton:(bool)arg2 msoAppDescription:(id)arg3;
- (void)_offerAuthenticationForSTBProvider:(id)arg1 msoAppDescription:(id)arg2 providerAccountUsername:(id)arg3;
- (void)_offerAuthenticationWithSupportedAppsButton:(bool)arg1;
- (void)_offerFreeOnBoardingIfNeededAfterOfferingOptions:(bool)arg1 endingUndoGrouping:(bool)arg2 arrivedViaNotNowButton:(bool)arg3 arrivedAfterSigningIn:(bool)arg4 goingBack:(bool)arg5;
- (void)_pickProviderWithViewController:(id)arg1;
- (void)_presentError:(id)arg1;
- (void)_presentViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)_requestAccessWithViewController:(id)arg1;
- (void)_startLoadingAfterOfferingOptions:(bool)arg1 endingUndoGrouping:(bool)arg2 arrivedViaNotNowButton:(bool)arg3 arrivedAfterSigningIn:(bool)arg4 goingBack:(bool)arg5;
- (id)appDescription;
- (id)currentDevice;
- (void)dealloc;
- (id)delegate;
- (void)dismissIdentityProviderViewController:(id)arg1;
- (void)finishSTBSuccessFlowForProvider:(id)arg1;
- (void)forceSignOutWithAccount:(id)arg1;
- (id)freeOnBoardingBundleIDs;
- (id /* block */)goingBackActivationCompletionBlock;
- (void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2;
- (void)identityProviderRequestManager:(id)arg1 finishedRequest:(id)arg2 withResult:(id)arg3;
- (void)identityProviderViewController:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;
- (void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3;
- (void)identityProviderViewControllerDidCancel:(id)arg1;
- (id)init;
- (bool)isInSTBMode;
- (bool)isSigningIn;
- (void)markSTBProviderAppForInstallation:(id)arg1 withAppPlacementPosition:(id)arg2;
- (void)notNow;
- (void)notNowWithIdentityProvider:(id)arg1;
- (bool)notifyDelegateFromActivation;
- (void)performDismissalOfIdentityProviderViewController:(id)arg1;
- (id)preferences;
- (id)privateQueue;
- (id)providerAccountUsername;
- (id)remoteNotifier;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (id)requestManager;
- (void)setAppDescription:(id)arg1;
- (void)setCurrentDevice:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFreeOnBoardingBundleIDs:(id)arg1;
- (void)setGoingBackActivationCompletionBlock:(id /* block */)arg1;
- (void)setIsInSTBMode:(bool)arg1;
- (void)setNotifyDelegateFromActivation:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setProviderAccountUsername:(id)arg1;
- (void)setRemoteNotifier:(id)arg1;
- (void)setRequestManager:(id)arg1;
- (void)setSigningIn:(bool)arg1;
- (void)setStorage:(id)arg1;
- (void)showSupportedApps;
- (void)signOutForNotNowFlowWithIdentityProvider:(id)arg1;
- (void)startLoadingWhenGoingBack:(bool)arg1;
- (void)startSigningIn;
- (void)startSigningInForIdentityProvider:(id)arg1;
- (void)startSilentSigningInForSTBFromActivation:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)storage;
- (void)supportedAppsViewControllerDidFinish:(id)arg1;

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
