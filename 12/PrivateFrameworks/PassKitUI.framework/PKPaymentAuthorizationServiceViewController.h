<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKPaymentAuthorizationServiceViewController.h</title>
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

/PrivateFrameworks/PassKitUI.framework/PKPaymentAuthorizationServiceViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI (1)
 */

@interface PKPaymentAuthorizationServiceViewController : UIViewController <AKAppleIDAuthenticationInAppContextDelegate, PKAuthenticatorDelegate, PKPaymentAuthorizationFooterViewDelegate, PKPaymentAuthorizationServiceProtocol, PKPaymentAuthorizationStateMachineDelegate, UINavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    bool  _allowCompactProcessing;
    bool  _authenticating;
    PKAuthenticator * _authenticator;
    double  _authenticatorFingerOnTime;
    long long  _authorizationMode;
    PKPaymentPreferencesViewController * _bankAccountPreferencesController;
    unsigned long long  _biometryAttempts;
    bool  _blockingHardwareCancels;
    bool  _bypassAuthenticator;
    UIBarButtonItem * _cancelBarButtonItem;
    bool  _cancelButtonDisabled;
    long long  _coachingState;
    NSMutableSet * _completionHandlers;
    UIView * _contentView;
    NSLayoutConstraint * _contentViewRightConstraint;
    <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> * _delegate;
    UITableView * _detailTableView;
    PKPaymentAuthorizationFooterView * _footerView;
    struct __IOHIDEventSystemClient { } * _hidSystemClient;
    bool  _hostApplicationEnteredBackground;
    bool  _hostApplicationResignedActive;
    long long  _internalCoachingState;
    long long  _internalPearlState;
    bool  _isAMPPayment;
    bool  _isPad;
    double  _keyboardHeight;
    CNContact * _lastUnservicableAddress;
    PKPaymentAuthorizationLayout * _layout;
    bool  _needsFinalCallback;
    bool  _needsToAccommodateKeyboard;
    UIViewController * _passcodeViewController;
    NSLayoutConstraint * _passphraseBottomConstraint;
    UIView * _passphraseSeparatorView;
    UIViewController * _passphraseViewController;
    PKPaymentAuthorizationPasswordButtonView * _passwordButtonView;
    PKPaymentPreferencesViewController * _paymentCardPreferencesController;
    unsigned int  _pearlCameraEdge;
    PKPeerPaymentAccount * _peerPaymentAccount;
    bool  _peerPaymentBalanceIsInsufficient;
    LAUIPhysicalButtonView * _physicalButtonView;
    long long  _preferencesStyle;
    PKPaymentPreferencesViewController * _shippingAddressPreferencesController;
    PKPaymentPreferencesViewController * _shippingContactPreferencesController;
    PKPaymentPreferencesViewController * _shippingMethodPreferencesController;
    bool  _shouldIgnorePhysicalButton;
    PKPaymentAuthorizationStateMachine * _stateMachine;
    NSLayoutConstraint * _summaryHeightConstraint;
    PKPaymentAuthorizationSummaryItemsView * _summaryItemsView;
    PKPaymentAuthorizationTotalView * _totalView;
    bool  _treatingHostAsBackgrounded;
    bool  _userIntentRequired;
    bool  _viewAppeared;
    bool  _visible;
}

@property (nonatomic, retain) PKAuthenticator *authenticator;
@property (nonatomic, readonly) bool blockingHardwareCancels;
@property (nonatomic, readonly) long long coachingState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationServiceViewControllerDelegate><PKPaymentAuthorizationHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) LAUIPhysicalButtonView *physicalButtonView;
@property (nonatomic, readonly) bool shouldIgnorePhysicalButton;
@property (nonatomic, retain) PKPaymentAuthorizationStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (getter=isUserIntentRequired, nonatomic, readonly) bool userIntentRequired;

- (void).cxx_destruct;
- (void)_abandonActiveEnrollmentAttempts;
- (void)_addPassphraseViewControllerToHierarchy:(id)arg1 withCompletion:(id /* block */)arg2;
- (long long)_authenticatorPolicy;
- (id)_availabilityStringForPass:(id)arg1;
- (id)_availablePasses;
- (id)_compactNavigationController;
- (void)_createSubviews;
- (void)_didCancel:(bool)arg1;
- (void)_didFailWithError:(id)arg1;
- (void)_didFailWithFatalError:(id)arg1;
- (void)_didSucceedWithAuthorizationStateParam:(id)arg1;
- (id)_evaluationRequest;
- (void)_executeCompletionHandlers;
- (void)_handleModelUpdate;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)_invalidPaymentDataWithParam:(id)arg1;
- (void)_payWithPasswordPressed:(id)arg1;
- (void)_processClientCallback:(id)arg1;
- (void)_removePassphraseViewFromHierarchyWithCompletionHandler:(id /* block */)arg1;
- (void)_removeSimulatorHIDListener;
- (void)_resumeAuthenticationWithPreviousError:(id)arg1 animated:(bool)arg2;
- (void)_selectOptionsForDataItem:(id)arg1;
- (void)_sendDidEncounterAuthorizationEventIfNecessary:(unsigned long long)arg1;
- (void)_setAuthenticating:(bool)arg1;
- (void)_setPasscodeViewController:(id)arg1;
- (void)_setPassphraseViewController:(id)arg1;
- (void)_setUserIntentRequired:(bool)arg1 shouldIgnorePhysicalButton:(bool)arg2;
- (void)_setVisible:(bool)arg1;
- (void)_setupBankAccounts;
- (void)_setupPaymentPassAndBillingAddress;
- (void)_setupShippingAddress;
- (void)_setupShippingContact;
- (void)_setupShippingMethods;
- (void)_setupWithPaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 applicationIdentifier:(id)arg3 bundleIdentifier:(id)arg4 teamIdentifier:(id)arg5;
- (void)_showUnservicableAddressAlertForErrors:(id)arg1;
- (void)_startEvaluation;
- (void)_startSimulatorHIDListener;
- (void)_suspendAuthentication;
- (void)_suspendAuthenticationAndForceReset:(bool)arg1;
- (Class)_tableViewClassForDataItem:(id)arg1;
- (long long)_totalViewStyle;
- (id)_unavailablePasses;
- (void)_updateAvailableCardsPreferences;
- (void)_updateBackgroundedState:(bool)arg1;
- (void)_updateBankAccounts;
- (void)_updateCancelButtonEnabledForState:(unsigned long long)arg1 param:(id)arg2;
- (void)_updateCoachingInstruction;
- (void)_updateFooterStateForBiometricMatchMissIfNecessary;
- (void)_updatePendingTransaction:(id)arg1 withAuthorizationStateParam:(id)arg2;
- (void)_updatePhysicalButtonInstruction;
- (void)_updatePreferencesWithErrors:(id)arg1;
- (void)_updatePreferredContentSize;
- (void)_updateShippingMethods;
- (void)_updateUserIntentRequired;
- (Class)_viewPresenterClassForDataItem:(id)arg1;
- (id)authenticator;
- (void)authenticator:(id)arg1 didRequestUserAction:(long long)arg2;
- (void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2;
- (void)authenticator:(id)arg1 didTransitionToPearlState:(long long)arg2;
- (void)authenticatorDidEncounterBiometricLockout:(id)arg1;
- (void)authenticatorDidEncounterFingerOff:(id)arg1;
- (void)authenticatorDidEncounterFingerOn:(id)arg1;
- (void)authenticatorDidEncounterMatchMiss:(id)arg1;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizeCashDisbursementWithResult:(id)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuoteCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizePurchaseCompleteWithStatus:(long long)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)authorizationDidSelectPaymentMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithUpdate:(id)arg1;
- (void)authorizationDidSelectShippingMethodCompleteWithUpdate:(id)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethodCompleteWithUpdate:(id)arg1 signatureRequest:(id)arg2;
- (void)authorizationFooterViewDidChangeConstraints:(id)arg1;
- (void)authorizationFooterViewPasscodeButtonPressed:(id)arg1;
- (void)authorizationFooterViewWillChangeConstraints:(id)arg1;
- (void)biometricAttemptFailed;
- (bool)blockingHardwareCancels;
- (void)cancelPressed:(id)arg1;
- (long long)coachingState;
- (void)contextWillBeginPresentingSecondaryUI:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dismissPasscodeViewController;
- (void)dismissPassphraseViewController;
- (void)dismissPassphraseViewControllerWithCompletion:(id /* block */)arg1;
- (void)handleDismissWithCompletion:(id /* block */)arg1;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationDidCancel;
- (void)handleHostApplicationWillResignActive:(bool)arg1;
- (id)handlePaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3;
- (id)handlePaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 applicationIdentifier:(id)arg3 bundleIdentifier:(id)arg4 teamIdentifier:(id)arg5;
- (id)initWithLayout:(id)arg1;
- (void)invalidate;
- (bool)isUserIntentRequired;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (bool)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;
- (id)physicalButtonView;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(id /* block */)arg2 reply:(id /* block */)arg3;
- (void)presentPassphraseViewController:(id)arg1 completionHandler:(id /* block */)arg2 reply:(id /* block */)arg3;
- (void)resumeAndUpdateContentSize;
- (long long)selectedPaymentApplicationIndexFromCardEntries:(id)arg1;
- (void)setAuthenticator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterState:(long long)arg1 string:(id)arg2 animated:(bool)arg3;
- (void)setFooterState:(long long)arg1 string:(id)arg2 animated:(bool)arg3 withCompletion:(id /* block */)arg4;
- (void)setPhysicalButtonView:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (bool)shouldIgnorePhysicalButton;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (bool)signInViewController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (id)stateMachine;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

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