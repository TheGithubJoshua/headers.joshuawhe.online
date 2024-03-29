<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKPeerPaymentController.h</title>
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

/PrivateFrameworks/PassKitCore.framework/PKPeerPaymentController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore (1)
 */

@interface PKPeerPaymentController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKPeerPaymentAccount * _account;
    PKPeerPaymentContactResolver * _contactResolver;
    PKPeerPaymentControllerInternalState * _is;
    PKPaymentPass * _peerPaymentPass;
    PKPaymentAuthorizationCoordinator * _performQuoteAuthorizationCoordinator;
    NSObject<OS_dispatch_queue> * _performQuoteCallbackQueue;
    NSError * _performQuoteError;
    NSObject<OS_dispatch_group> * _performQuoteGroup;
    bool  _performQuoteSuccess;
    PKPeerPaymentWebService * _webService;
}

@property (nonatomic, readonly) PKPeerPaymentAccount *account;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) PKPaymentPass *peerPaymentPass;
@property (nonatomic, readonly) PKPeerPaymentPerformResponse *performQuoteResponse;
@property (nonatomic, readonly) PKPeerPaymentQuote *quote;
@property (nonatomic, readonly, copy) PKPeerPaymentRecipient *recipient;
@property (nonatomic, readonly, copy) NSString *recipientDisplayName;
@property (nonatomic, readonly, copy) NSString *recipientPhoneOrEmail;
@property (nonatomic, readonly) PKPeerPaymentRequestToken *requestToken;
@property (nonatomic, readonly, copy) NSString *senderPhoneOrEmail;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPeerPaymentWebService *webService;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)_displayNameForRecipientAddress:(id)arg1 contactResolver:(id)arg2 foundInContacts:(bool*)arg3;
+ (id)_displayableErrorOverrideForUnderlyingError:(id)arg1;
+ (id)_peerPaymentPassURL;
+ (id)displayNameForAddress:(id)arg1 contactResolver:(id)arg2;
+ (id)displayableErrorForError:(id)arg1;
+ (bool)errorIsIdentityVerificationRequiredError:(id)arg1;
+ (bool)errorIsTermsAcceptanceRequiredError:(id)arg1;
+ (unsigned long long)proposedResolutionForError:(id)arg1;

- (void).cxx_destruct;
- (bool)_contactInfoIsValidForAuthorizedQuote:(id)arg1 errors:(id*)arg2;
- (id)_contactResolver;
- (id)_defaultAlternateFundingSourceForMode:(unsigned long long)arg1;
- (bool)_ensureState:(unsigned long long)arg1;
- (void)_handleAccountChanged:(id)arg1;
- (void)_refreshRecipientWithCompletion:(id /* block */)arg1;
- (void)_requestQuoteWithRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_resetToState:(unsigned long long)arg1;
- (void)_setPerformQuoteSuccess:(bool)arg1;
- (void)_setState:(unsigned long long)arg1 notify:(bool)arg2;
- (void)_updateLastUsedAlternateFundingSource;
- (id)account;
- (void)aggDAuthorizedQuoteWithSuccess:(bool)arg1 authorizedQuote:(id)arg2;
- (id)contactForHandle:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)displayNameForRecipientAddress:(id)arg1;
- (id)displayNameForRecipientAddress:(id)arg1 foundInContacts:(bool*)arg2;
- (id)displayableErrorForError:(id)arg1;
- (id)externalizedControllerState;
- (void)formalRequestTokenForAmount:(id)arg1 completion:(id /* block */)arg2;
- (void)handleIdentityVerificationWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)handleTermsAcceptanceRequiredWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)identifyRecipientDebitCardWithCompletion:(id /* block */)arg1;
- (void)identifyRecipientSelf;
- (void)identifyRecipientWithAddress:(id)arg1 completion:(id /* block */)arg2;
- (void)identifyRecipientWithAddress:(id)arg1 senderAddress:(id)arg2 completion:(id /* block */)arg3;
- (void)identifyRecipientWithRoutingNumber:(id)arg1 accountNumber:(id)arg2 accountName:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithPeerPaymentWebService:(id)arg1;
- (id)internalState;
- (unsigned long long)mode;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePayment:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id)arg1 didSelectPaymentMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)arg1;
- (id)peerPaymentPass;
- (void)performAction:(id)arg1 withPaymentIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)performQuote:(id)arg1 completion:(id /* block */)arg2;
- (id)performQuoteOrientation;
- (id)performQuoteResponse;
- (void)performQuoteWithCompletion:(id /* block */)arg1;
- (id)quote;
- (void)quoteWithAmount:(id)arg1 completion:(id /* block */)arg2;
- (void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 alternateFundingSource:(id)arg3 completion:(id /* block */)arg4;
- (void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 completion:(id /* block */)arg3;
- (id)recipient;
- (id)recipientDisplayName;
- (id)recipientPhoneOrEmail;
- (id)requestToken;
- (void)requestTokenForAmount:(id)arg1 completion:(id /* block */)arg2;
- (void)reset;
- (bool)restoreStateWithExternalizedControllerState:(id)arg1;
- (void)selectMode:(unsigned long long)arg1;
- (id)senderPhoneOrEmail;
- (unsigned long long)state;
- (void)statusForPaymentIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)summaryItemsForQuote:(id)arg1;
- (id)webService;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)performQuoteOrientation;

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
