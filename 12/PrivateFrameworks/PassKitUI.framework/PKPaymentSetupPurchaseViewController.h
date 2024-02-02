<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKPaymentSetupPurchaseViewController.h</title>
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

/PrivateFrameworks/PassKitUI.framework/PKPaymentSetupPurchaseViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI (1)
 */

@interface PKPaymentSetupPurchaseViewController : UIViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupDelegate, PKPaymentSetupPurchaseAmountViewDelegate, PKPaymentSetupViewControllerDelegate, PKViewControllerPreflightable, RemoteUIControllerDelegate> {
    bool  _acceptedTerms;
    UIActivityIndicatorView * _activityIndicator;
    PKPaymentSetupPurchaseAmountView * _amountView;
    PKPaymentAuthorizationCoordinator * _authorizationCoordinator;
    UIImage * _cardImage;
    NSDecimalNumber * _currentAmount;
    bool  _fieldsVerified;
    UIImageView * _passView;
    PKPaymentSetupProduct * _product;
    PKPaymentProvisioningController * _provisioningController;
    PKPaymentProvisioningMethodMetadata * _provisioningMethodMetadata;
    PKServiceProviderPurchase * _purchase;
    PKPaymentSetupPurchaseController * _purchaseController;
    long long  _setupContext;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
    bool  _snapshotNeedsCorners;
    RemoteUIController * _termsController;
    UILabel * _titleLabel;
}

@property (nonatomic) bool acceptedTerms;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) PKPaymentSetupPurchaseAmountView *amountView;
@property (nonatomic, retain) PKPaymentAuthorizationCoordinator *authorizationCoordinator;
@property (nonatomic, retain) UIImage *cardImage;
@property (nonatomic, copy) NSDecimalNumber *currentAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fieldsVerified;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *passView;
@property (nonatomic, readonly) PKPaymentSetupProduct *product;
@property (nonatomic, retain) PKPaymentProvisioningController *provisioningController;
@property (nonatomic, retain) PKPaymentProvisioningMethodMetadata *provisioningMethodMetadata;
@property (nonatomic, retain) PKServiceProviderPurchase *purchase;
@property (nonatomic, readonly) PKPaymentSetupPurchaseController *purchaseController;
@property (nonatomic) long long setupContext;
@property (nonatomic) <PKPaymentSetupViewControllerDelegate> *setupDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) RemoteUIController *termsController;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (void)_createConstraints;
- (void)_createSubviews;
- (struct CGSize { double x1; double x2; })_imageSizeForScreenType:(unsigned long long)arg1 showingTransferButton:(bool)arg2;
- (id)_paymentRequestForAmount:(id)arg1;
- (void)_presentAddCardAlert:(id)arg1;
- (void)_presentTermsAndConditionsWithCompletion:(id /* block */)arg1;
- (void)_presetPaymentRequest:(id)arg1 forResultType:(long long)arg2;
- (bool)_readerModeIsSupported;
- (id)_rightBarButton;
- (void)_rightBarButtonPressed:(id)arg1;
- (bool)_shouldHideImage;
- (void)_showSpinner:(bool)arg1;
- (id)_spinnerBarButton;
- (bool)acceptedTerms;
- (id)activityIndicator;
- (id)amountView;
- (id)authorizationCoordinator;
- (id)cardImage;
- (id)currentAmount;
- (void)didUpdateAmount:(id)arg1 isValid:(bool)arg2;
- (bool)fieldsVerified;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4;
- (id)passView;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePurchase:(id)arg2 completion:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (void)paymentSetupDidFinish:(id)arg1;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)product;
- (id)provisioningController;
- (id)provisioningMethodMetadata;
- (id)purchase;
- (id)purchaseController;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)setAcceptedTerms:(bool)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setAmountView:(id)arg1;
- (void)setAuthorizationCoordinator:(id)arg1;
- (void)setCardImage:(id)arg1;
- (void)setCurrentAmount:(id)arg1;
- (void)setFieldsVerified:(bool)arg1;
- (void)setPassView:(id)arg1;
- (void)setProvisioningController:(id)arg1;
- (void)setProvisioningMethodMetadata:(id)arg1;
- (void)setPurchase:(id)arg1;
- (void)setSetupContext:(long long)arg1;
- (void)setSetupDelegate:(id)arg1;
- (void)setTermsController:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (long long)setupContext;
- (id)setupDelegate;
- (void)shakeCard;
- (id)termsController;
- (id)titleLabel;
- (void)transferBalanceFromExistingCard;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

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