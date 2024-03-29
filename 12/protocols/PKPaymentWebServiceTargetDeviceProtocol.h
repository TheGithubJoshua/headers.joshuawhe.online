<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKPaymentWebServiceTargetDeviceProtocol.h</title>
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

/protocols/PKPaymentWebServiceTargetDeviceProtocol.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol PKPaymentWebServiceTargetDeviceProtocol <NSObject>

@required

- (NSString *)bridgedClientInfo;
- (bool)claimSecureElementForCurrentUser;
- (void)claimSecureElementForCurrentUserWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSString *)deviceClass;
- (NSString *)deviceDescriptionForPaymentWebService:(PKPaymentWebService *)arg1;
- (NSString *)deviceName;
- (NSString *)deviceRegion;
- (PKOSVersionRequirement *)deviceVersion;
- (void)downloadAllPaymentPassesForPaymentWebService:(PKPaymentWebService *)arg1;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (int)paymentSupportedInCurrentRegionForWebService:(PKPaymentWebService *)arg1;
- (void)paymentWebService:(void *)arg1 addPaymentPass:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 7: PKPaymentWebService *, PKPaymentPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)paymentWebService:(PKPaymentWebService *)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(NSString *)arg2;
- (void)paymentWebService:(void *)arg1 configurationDataWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: PKPaymentWebService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentDeviceConfigurationData *, NSError *, void*
- (void)paymentWebService:(PKPaymentWebService *)arg1 deleteApplicationWithAID:(NSString *)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 didRegisterWithRegionMap:(NSDictionary *)arg2 primaryRegionTopic:(NSString *)arg3;
- (NSArray *)paymentWebService:(PKPaymentWebService *)arg1 filterVerificationChannels:(NSArray *)arg2;
- (bool)paymentWebService:(PKPaymentWebService *)arg1 hasPassesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(void *)arg1 provisioningDataWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: PKPaymentWebService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentDeviceProvisioningData *, NSError *, void*
- (void)paymentWebService:(void *)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: PKPaymentWebService *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)paymentWebService:(void *)arg1 registrationDataWithAuthToken:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: PKPaymentWebService *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentDeviceRegistrationData *, NSError *, void*
- (void)paymentWebService:(void *)arg1 requestPassUpgrade:(void *)arg2 pass:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: PKPaymentWebService *, PKPassUpgradeRequest *, PKPaymentPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, PKPaymentPass *, void*
- (void)paymentWebService:(void *)arg1 setNewAuthRandom:(void *)arg2; // needs 2 arg types, found 7: PKPaymentWebService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)paymentWebService:(void *)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(void *)arg2; // needs 2 arg types, found 9: PKPaymentWebService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSData *, NSData *, void*
- (void)paymentWebService:(void *)arg1 signData:(void *)arg2 signatureEntanglementMode:(void *)arg3 withCompletionHandler:(void *)arg4; // needs 4 arg types, found 11: PKPaymentWebService *, NSData *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, PKSecureElementSignatureInfo *, NSError *, void*
- (void)paymentWebService:(void *)arg1 validateAddPreconditionsWithCompletion:(void *)arg2; // needs 2 arg types, found 8: PKPaymentWebService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)paymentWebService:(void *)arg1 validateTransferPreconditionsWithCompletion:(void *)arg2; // needs 2 arg types, found 8: PKPaymentWebService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)paymentWebServiceDidUpdateConfiguration:(PKPaymentWebService *)arg1;
- (NSArray *)secureElementIdentifiers;
- (unsigned long long)secureElementOwnershipStateForCurrentUser;
- (bool)supportsAutomaticPassPresentation;

@optional

- (PKAppleAccountInformation *)appleAccountInformation;
- (void)applePayTrustKeyForIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKApplePayTrustKey *, void*
- (void)availableProductsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentAvailableProductsResponse *, NSError *, void*
- (NSString *)cellularNetworkRegion;
- (void)createApplePayTrustKeyWithRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: PKApplePayTrustKeyRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKApplePayTrustKey *, NSError *, void*
- (void)deleteApplePayTrustKeyWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)featureApplicationsForProvisioningWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (bool)felicaSecureElementIsAvailable;
- (unsigned long long)maximumPaymentCards;
- (void)noteForegroundVerificationObserverActive:(bool)arg1;
- (void)paymentWebService:(void *)arg1 addPaymentPass:(void *)arg2 withCompletionHandlerV2:(void *)arg3; // needs 3 arg types, found 8: PKPaymentWebService *, PKPaymentPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentPass *, void*
- (void)paymentWebService:(void *)arg1 deviceMetadataWithFields:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKPaymentWebService *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentDeviceMetadata *, void*
- (void)paymentWebService:(void *)arg1 handlePotentialExpressPass:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: PKPaymentWebService *, PKPaymentPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)paymentWebService:(void *)arg1 passOwnershipTokenWithIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: PKPaymentWebService *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (NSArray *)paymentWebService:(PKPaymentWebService *)arg1 passesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(void *)arg1 registrationDataWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: PKPaymentWebService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentDeviceRegistrationData *, NSError *, void*
- (void)paymentWebService:(void *)arg1 removePass:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 9: PKPaymentWebService *, PKPass *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)paymentWebService:(PKPaymentWebService *)arg1 setDefaultPaymentPassUniqueIdentifier:(NSString *)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 storePassOwnershipToken:(NSString *)arg2 withIdentifier:(NSString *)arg3;
- (void)paymentWebService:(void *)arg1 updateAccountWithIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: PKPaymentWebService *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKAccount *, NSError *, void*
- (bool)paymentWebServiceSupportsAccounts:(PKPaymentWebService *)arg1;
- (bool)paymentWebServiceSupportsPeerPaymentRegistration:(PKPaymentWebService *)arg1;
- (void)performDeviceCheckInWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)performProductActionRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: PKPaymentProductsActionRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PKPaymentAvailableProductsResponse *, NSError *, void*
- (void)renewAppleAccountWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, PKAppleAccountInformation *, void*
- (bool)secureElementIsAvailable;
- (void)setMaximumPaymentCards:(unsigned long long)arg1;
- (void)signatureForAuthToken:(void *)arg1 webService:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, PKPaymentWebService *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)startBackgroundVerificationObserverForPass:(PKPaymentPass *)arg1 verificationMethod:(PKVerificationChannel *)arg2;
- (NSSet *)supportedFeatureIdentifiersWithPaymentWebService:(PKPaymentWebService *)arg1;
- (bool)supportsCredentialType:(long long)arg1;
- (bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (bool)supportsExpressMode:(NSString *)arg1;
- (bool)supportsExpressModeForExpressPassType:(long long)arg1;
- (PKTrustedDeviceEnrollmentInfo *)trustedDeviceEnrollmentInfoForWebService:(PKPaymentWebService *)arg1;
- (void)updatedAccountsForProvisioningWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, void*

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
