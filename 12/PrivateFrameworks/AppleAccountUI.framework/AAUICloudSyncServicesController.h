<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AAUICloudSyncServicesController.h</title>
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

/PrivateFrameworks/AppleAccountUI.framework/AAUICloudSyncServicesController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI (1)
 */

@interface AAUICloudSyncServicesController : NSObject <DAValidityCheckConsumer> {
    ACAccount * _account;
    DAAccount * _accountBeingValidated;
    ACAccountStore * _accountStore;
    NSMutableArray * _dataclassesRequiringMergeDecision;
    bool  _didUserConsentToMerge;
    id /* block */  _handler;
    bool  _isVerifyingExistingEmailAccount;
    NSMutableDictionary * _queuedDataclassActions;
    NSMutableDictionary * _queuedDataclassStates;
    MFAccountValidator * _validator;
    AAAutoAccountVerifier * _verifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)_accountClassForAddress:(id)arg1;
+ (id)_domainFromAddress:(id)arg1;
+ (bool)_isInstalledSystemApplication:(id)arg1;
+ (id)_usernameFromAddress:(id)arg1;
+ (bool)canAutoSetupMailAccount:(id)arg1;
+ (bool)needSetupForMailAccount:(id)arg1;
+ (bool)shouldInitiallyEnableDataclass:(id)arg1 forAccount:(id)arg2;

- (void).cxx_destruct;
- (id)_account;
- (void)_addDAEmailAccount:(id)arg1;
- (void)_addMailAccount:(id)arg1;
- (void)_createAndValidateDAMailAccountWithProperties:(id)arg1;
- (void)_createAndValidateMailAccountWithProperties:(id)arg1;
- (void)_presentMergeConfirmationForDataclasses:(id)arg1 account:(id)arg2;
- (void)_validateDAAccount:(id)arg1;
- (void)_validateExistingEmailAccount:(id)arg1 withPassword:(id)arg2;
- (void)_validateMailAccount:(id)arg1;
- (void)account:(id)arg1 isValid:(bool)arg2 validationError:(id)arg3;
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(bool)arg3;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)completeEnablingCloudServicesWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)setBackupEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setCloudServicesEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setDeviceLocatorEnabled:(bool)arg1;
- (void)setupMailAccount:(id)arg1 password:(id)arg2 completion:(id /* block */)arg3;
- (void)verifyAccountWithAppleID:(id)arg1 completion:(id /* block */)arg2;

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