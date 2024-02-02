<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKAccountService.h</title>
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

/PrivateFrameworks/PassKitCore.framework/PKAccountService.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore (1)
 */

@interface PKAccountService : NSObject <PKAccountServiceExportedInterface> {
    long long  _accountChangedNotificationSuspensionCount;
    NSLock * _lockObservers;
    NSHashTable * _observers;
    PKXPCService * _remoteService;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_accessObserversWithHandler:(id /* block */)arg1;
- (void)_accountsChanged:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)accountAdded:(id)arg1;
- (void)accountChanged:(id)arg1;
- (void)accountForPassWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)accountRemoved:(id)arg1;
- (void)accountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)accountWithVirtualCardIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)accountsForProvisioningWithCompletion:(id /* block */)arg1;
- (void)accountsWithCompletion:(id /* block */)arg1;
- (void)accountsWithPassLocallyProvisionedWithCompletion:(id /* block */)arg1;
- (void)activateBroadwayPhysicalCardWithActivationCode:(id)arg1 completion:(id /* block */)arg2;
- (void)activatePhysicalCard:(id)arg1 withActivationCode:(id)arg2 forFeatureIdentifier:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)beginPhysicalCardAction:(id)arg1 onPhysicalCardWithIdentifier:(id)arg2 forAccountWithIdentifier:(id)arg3 deviceMetadata:(id)arg4 completion:(id /* block */)arg5;
- (void)beginPhysicalCardRequestWithOrder:(id)arg1 forAccountWithIdentifier:(id)arg2 deviceMetadata:(id)arg3 completion:(id /* block */)arg4;
- (void)billPaymentSelectedSuggestedAmountDataEventsForAccountIdentifier:(id)arg1 withStatementIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)cardCredentialsForVirtualCard:(id)arg1 authorization:(id)arg2 completion:(id /* block */)arg3;
- (void)completePhysicalCardActionRequest:(id)arg1 withSignature:(id)arg2 completion:(id /* block */)arg3;
- (void)completePhysicalCardRequest:(id)arg1 withSignature:(id)arg2 completion:(id /* block */)arg3;
- (void)createVirtualCard:(long long)arg1 forAccountIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)creditStatementsForAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)defaultAccountForFeature:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)deleteAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteEventWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteEventsWithAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)deleteLocalAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)errorHandlerForMethod:(SEL)arg1 completion:(id /* block */)arg2;
- (void)eventsForAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)eventsForAccountIdentifier:(id)arg1 types:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 orderedByDate:(long long)arg5 limit:(unsigned long long)arg6 completion:(id /* block */)arg7;
- (void)fetchKeychainCredentialForVirtualCardIdentifier:(id)arg1 forAccountIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)inactivePhysicalCardForFeatureIdentifier:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)insertEvents:(id)arg1 withAccountidentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)lastRedemptionEventToPeerPaymentForAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)noteAccountDeleted;
- (void)noteVirtualCardAutoFilledBySafari:(id)arg1 completion:(id /* block */)arg2;
- (void)performAccountAction:(id)arg1 withAccountIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)performVirtualCardAction:(long long)arg1 forVirtualCardIdentifier:(id)arg2 forAccountIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)preferencesForAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)registerObserver:(id)arg1;
- (void)scheduledPaymentsChangedForAccountIdentifier:(id)arg1;
- (void)scheduledPaymentsWithAccountIdentifier:(id)arg1 includeFailedRecurringPayments:(bool)arg2 completion:(id /* block */)arg3;
- (void)statementsChangedForAccountIdentifier:(id)arg1;
- (void)termsWithIdentifier:(id)arg1 accepted:(bool)arg2 withAccountIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)unregisterObserver:(id)arg1;
- (void)updateAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)updateAccountWithIdentifier:(id)arg1 extended:(bool)arg2 completion:(id /* block */)arg3;
- (void)updateAccountsWithCompletion:(id /* block */)arg1;
- (void)updateMockAccountWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePreferences:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)updateScheduledPaymentsWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)updateUserInfoForAccountIdentifier:(id)arg1 contact:(id)arg2 completion:(id /* block */)arg3;
- (void)updateVirtualCardsWithAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)userInfoForAccountIdentifier:(id)arg1 forceFetch:(bool)arg2 completion:(id /* block */)arg3;
- (void)virtualCardsInKeychainWithCompletion:(id /* block */)arg1;
- (void)writeVirtualCardToKeychain:(id)arg1 completion:(id /* block */)arg2;

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