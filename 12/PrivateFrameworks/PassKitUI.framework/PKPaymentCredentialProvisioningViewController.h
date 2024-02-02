<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKPaymentCredentialProvisioningViewController.h</title>
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

/PrivateFrameworks/PassKitUI.framework/PKPaymentCredentialProvisioningViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI (1)
 */

@interface PKPaymentCredentialProvisioningViewController : PKPaymentSetupProvisioningFieldsViewController <PKPaymentProvisioningControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentSetupPresentationProtocol, PKViewControllerPreflightable> {
    bool  _allowsManualEntry;
    unsigned long long  _credentialProvisioningType;
    unsigned long long  _displayType;
    PKPaymentCredentialMetadataTableController * _metadataController;
    UIImage * _passSnapshot;
    UIImage * _passSnapshotPlaceHolder;
    PKPaymentCredential * _paymentCredential;
    bool  _previouslyAcceptedTerms;
    PKPaymentSetupProduct * _setupProduct;
    bool  _shouldAutoProvision;
    bool  _snapshotNeedsCorners;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldAutoProvision;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanupTransferredCredentialFromSourceDeviceWithCompletion:(id /* block */)arg1;
- (void)_createPassSnapshotFromPaymentPass:(id)arg1 completion:(id /* block */)arg2;
- (id)_defaultHeaderViewSubTitleForLocalCredential;
- (id)_defaultHeaderViewSubTitleForLocalCredentialTransfer;
- (void)_performEligibilityWithCompletion:(id /* block */)arg1;
- (void)_performFinishWithCompletion:(id /* block */)arg1;
- (void)_performProvisionWithCompletion:(id /* block */)arg1;
- (void)_performRequirementsWithCompletion:(id /* block */)arg1;
- (void)_performTermsWithCompletion:(id /* block */)arg1;
- (void)_preflightCredentialFieldsWithCompletion:(id /* block */)arg1;
- (id)_remoteExistingCredentialDefaultHeaderViewSubTitle;
- (void)_skipCard;
- (void)_terminateSetupFlow;
- (void)_updatePassSnapshotHeader;
- (void)addDifferentCard:(id)arg1;
- (void)dealloc;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 paymentCredential:(id)arg4 setupProduct:(id)arg5 allowsManualEntry:(bool)arg6 previouslyAcceptedTerms:(bool)arg7;
- (bool)isComplete;
- (void)loadView;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentRequirementsRequest;
- (id)onPresentationRemoveViewControllersAfterMarker;
- (void)paymentPassUpdatedOnCredential:(id)arg1;
- (void)performNextActionForProvisioningState:(long long)arg1 withCompletion:(id /* block */)arg2;
- (void)preflightWithCompletion:(id /* block */)arg1;
- (id)readonlyFieldIdentifiers;
- (void)setPassSnapshot:(id)arg1 needsCorners:(bool)arg2;
- (void)setShouldAutoProvision:(bool)arg1;
- (bool)shouldAutoProvision;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(bool)arg1;
- (id)visibleFieldIdentifiers;

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