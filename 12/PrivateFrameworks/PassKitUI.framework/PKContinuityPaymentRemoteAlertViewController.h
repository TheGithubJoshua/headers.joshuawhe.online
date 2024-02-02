<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKContinuityPaymentRemoteAlertViewController.h</title>
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

/PrivateFrameworks/PassKitUI.framework/PKContinuityPaymentRemoteAlertViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI (1)
 */

@interface PKContinuityPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKContinuityPaymentServiceDelegate, PKPaymentAuthorizationHostProtocol> {
    PKContinuityPaymentService * _continuityService;
    PKContinuityPaymentViewController * _continuityViewController;
    bool  _hasAuthorizedPayment;
    bool  _hasSentCancelPaymentRequest;
    UINavigationController * _navigationController;
    PKRemotePaymentRequest * _remoteRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isSecureForRemoteViewService;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)_willAppearInRemoteViewController;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1;
- (void)authorizationDidAuthorizeApplePayTrustSignatureCompleteWithResult:(id)arg1;
- (void)authorizationDidAuthorizeDisbursement:(id)arg1;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationWillStart;
- (void)configureWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;
- (void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)handleHomeButtonPressed;
- (id)init;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (void)setUserInfo:(id)arg1;
- (bool)shouldAutorotate;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

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