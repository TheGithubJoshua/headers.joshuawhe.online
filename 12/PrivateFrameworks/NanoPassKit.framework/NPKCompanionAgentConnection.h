<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NPKCompanionAgentConnection.h</title>
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

/PrivateFrameworks/NanoPassKit.framework/NPKCompanionAgentConnection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit (1)
 */

@interface NPKCompanionAgentConnection : NSObject <NPKCompanionClientProtocol> {
    NSObject<OS_dispatch_queue> * _cacheQueue;
    NSMutableDictionary * _cachedPasses;
    NSMutableSet * _cachedUniqueIDs;
    NSMutableDictionary * _connectionAvailableActions;
    PKPaymentWebServiceContext * _connectionUnavailableWebServiceContext;
    <NPKCompanionAgentConnectionDelegate> * _delegate;
    bool  _hasQueuedPaymentPasses;
    int  _notifyToken;
    bool  _queueAppropriateFailedActions;
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

@property (retain) NSMutableDictionary *cachedPasses;
@property (retain) NSMutableSet *cachedUniqueIDs;
@property (nonatomic, retain) NSMutableDictionary *connectionAvailableActions;
@property (nonatomic, retain) PKPaymentWebServiceContext *connectionUnavailableWebServiceContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKCompanionAgentConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasQueuedPaymentPasses;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool queueAppropriateFailedActions;
@property (readonly) Class superclass;
@property (readonly) NSXPCConnection *xpcConnection;

+ (bool)isIssuerAppProvisioningSupported;
+ (bool)isSetupAssistantProvisioningSupported;
+ (id)watchPaymentWebService;
+ (id)watchPeerPaymentWebService;
+ (id)watchProvisioningURL;
+ (id)watchProvisioningURLForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (void)_addPassToCache:(id)arg1;
- (void)_applyPropertiesToPass:(id)arg1;
- (id)_cachedPassForUniqueID:(id)arg1;
- (id)_cachedUniqueIDs;
- (void)_clearCaches;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)arg1;
- (void)_handleDefaultCardChanged:(id)arg1;
- (void)_handleServerPaymentPassesChanged:(id)arg1;
- (void)_invalidateCachedPassWithUniqueID:(id)arg1;
- (int)_isApplePaySupportedInCurrentRegion;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (void)_removePassWithUniqueIDFromCache:(id)arg1;
- (void)_savePaymentPass:(id)arg1 atURL:(id)arg2 forDevice:(id)arg3 completion:(id /* block */)arg4;
- (void)_setCachedUniqueIDs:(id)arg1;
- (void)_sharedPaymentWebServiceContextForDevice:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)beginProvisioningFromWatchOfferForPaymentPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)cachedPasses;
- (id)cachedUniqueIDs;
- (id)connectionAvailableActions;
- (id)connectionUnavailableWebServiceContext;
- (void)consistencyCheckWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)defaultCardUniqueID:(id /* block */)arg1;
- (void)defaultPaymentApplicationForPassWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 passUniqueIdentifier:(id)arg2 fromDevice:(id)arg3 completion:(id /* block */)arg4;
- (void)handleDeviceUnlockedForPendingProvisioningRequestFromGizmo;
- (void)handlePeerPaymentTermsAndConditionsRequestFromGizmo;
- (void)handlePendingUnpairingWithCompletion:(id /* block */)arg1;
- (void)handlePendingiCloudSignoutWithCompletion:(id /* block */)arg1;
- (bool)hasQueuedPaymentPasses;
- (id)init;
- (void)initiateLostModeExitAuthWithCompletion:(id /* block */)arg1;
- (void)markAllAppletsForDeletionWithCompletion:(id /* block */)arg1;
- (void)noteProvisioningPreflightCompleteWithSuccess:(bool)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)noteWatchOfferShownForPaymentPass:(id)arg1;
- (void)paymentPassUniqueIDs:(id /* block */)arg1;
- (void)paymentPassWithDeviceAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)paymentPassWithUniqueID:(id)arg1 reply:(id /* block */)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithBalances:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)paymentPassesWithPrimaryAccountIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)peerPaymentAccountForDevice:(id)arg1;
- (void)provisionPassForAccountIdentifier:(id)arg1 makeDefault:(bool)arg2 completion:(id /* block */)arg3;
- (bool)queueAppropriateFailedActions;
- (void)redownloadAllPaymentPassesWithCompletion:(id /* block */)arg1;
- (void)registerDeviceWithCompletion:(id /* block */)arg1;
- (void)removePaymentPassWithUniqueID:(id)arg1 forDevice:(id)arg2 waitForConfirmation:(bool)arg3 completion:(id /* block */)arg4;
- (void)savePaymentPass:(id)arg1 forDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)setCachedPasses:(id)arg1;
- (void)setCachedUniqueIDs:(id)arg1;
- (void)setConnectionAvailableActions:(id)arg1;
- (void)setConnectionUnavailableWebServiceContext:(id)arg1;
- (void)setDefaultCardUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)setDefaultPaymentApplication:(id)arg1 forPassWithUniqueID:(id)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setHasQueuedPaymentPasses:(bool)arg1;
- (void)setPeerPaymentAccount:(id)arg1 forDevice:(id)arg2;
- (void)setQueueAppropriateFailedActions:(bool)arg1;
- (void)setSharedPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2;
- (void)setSharedPeerPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2;
- (id)sharedPaymentWebServiceContext;
- (id)sharedPaymentWebServiceContextForDevice:(id)arg1;
- (id)sharedPeerPaymentWebServiceContextForDevice:(id)arg1;
- (void)shouldShowApplePaySettingsWithCompletion:(id /* block */)arg1;
- (void)shouldShowWatchOfferForPaymentPass:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(id /* block */)arg8;
- (void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(id /* block */)arg3;
- (void)trustedDeviceEnrollmentSignatureWithAccountDSID:(id)arg1 sessionData:(id)arg2 handler:(id /* block */)arg3;
- (void)updateSettings:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;
- (id)watchPaymentWebService;
- (id)xpcConnection;

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
