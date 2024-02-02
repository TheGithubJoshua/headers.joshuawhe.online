<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CEMPasscodeLoginWindowDeclaration.h</title>
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

/PrivateFrameworks/ConfigurationEngineModel.framework/CEMPasscodeLoginWindowDeclaration.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel (25.9)
 */

@interface CEMPasscodeLoginWindowDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadAdminHostInfo;
    NSArray * _payloadAllowList;
    NSArray * _payloadDenyList;
    NSNumber * _payloadDisableConsoleAccess;
    NSNumber * _payloadDisableScreenLockImmediate;
    NSNumber * _payloadHideAdminUsers;
    NSNumber * _payloadHideLocalUsers;
    NSNumber * _payloadHideMobileAccounts;
    NSNumber * _payloadIncludeNetworkUser;
    NSNumber * _payloadLogOutDisabledWhileLoggedIn;
    NSString * _payloadLoginwindowText;
    NSNumber * _payloadPowerOffDisabledWhileLoggedIn;
    NSNumber * _payloadRestartDisabled;
    NSNumber * _payloadRestartDisabledWhileLoggedIn;
    NSNumber * _payloadSHOWFULLNAME;
    NSNumber * _payloadSHOWOTHERUSERSMANAGED;
    NSNumber * _payloadShutDownDisabled;
    NSNumber * _payloadShutDownDisabledWhileLoggedIn;
    NSNumber * _payloadSleepDisabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadAdminHostInfo;
@property (nonatomic, copy) NSArray *payloadAllowList;
@property (nonatomic, copy) NSArray *payloadDenyList;
@property (nonatomic, copy) NSNumber *payloadDisableConsoleAccess;
@property (nonatomic, copy) NSNumber *payloadDisableScreenLockImmediate;
@property (nonatomic, copy) NSNumber *payloadHideAdminUsers;
@property (nonatomic, copy) NSNumber *payloadHideLocalUsers;
@property (nonatomic, copy) NSNumber *payloadHideMobileAccounts;
@property (nonatomic, copy) NSNumber *payloadIncludeNetworkUser;
@property (nonatomic, copy) NSNumber *payloadLogOutDisabledWhileLoggedIn;
@property (nonatomic, copy) NSString *payloadLoginwindowText;
@property (nonatomic, copy) NSNumber *payloadPowerOffDisabledWhileLoggedIn;
@property (nonatomic, copy) NSNumber *payloadRestartDisabled;
@property (nonatomic, copy) NSNumber *payloadRestartDisabledWhileLoggedIn;
@property (nonatomic, copy) NSNumber *payloadSHOWFULLNAME;
@property (nonatomic, copy) NSNumber *payloadSHOWOTHERUSERSMANAGED;
@property (nonatomic, copy) NSNumber *payloadShutDownDisabled;
@property (nonatomic, copy) NSNumber *payloadShutDownDisabledWhileLoggedIn;
@property (nonatomic, copy) NSNumber *payloadSleepDisabled;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withSHOWFULLNAME:(id)arg2 withHideLocalUsers:(id)arg3 withIncludeNetworkUser:(id)arg4 withHideAdminUsers:(id)arg5 withSHOWOTHERUSERSMANAGED:(id)arg6 withAdminHostInfo:(id)arg7 withAllowList:(id)arg8 withDenyList:(id)arg9 withHideMobileAccounts:(id)arg10 withShutDownDisabled:(id)arg11 withRestartDisabled:(id)arg12 withSleepDisabled:(id)arg13 withDisableConsoleAccess:(id)arg14 withLoginwindowText:(id)arg15 withShutDownDisabledWhileLoggedIn:(id)arg16 withRestartDisabledWhileLoggedIn:(id)arg17 withPowerOffDisabledWhileLoggedIn:(id)arg18 withLogOutDisabledWhileLoggedIn:(id)arg19 withDisableScreenLockImmediate:(id)arg20;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadAdminHostInfo;
- (id)payloadAllowList;
- (id)payloadDenyList;
- (id)payloadDisableConsoleAccess;
- (id)payloadDisableScreenLockImmediate;
- (id)payloadHideAdminUsers;
- (id)payloadHideLocalUsers;
- (id)payloadHideMobileAccounts;
- (id)payloadIncludeNetworkUser;
- (id)payloadLogOutDisabledWhileLoggedIn;
- (id)payloadLoginwindowText;
- (id)payloadPowerOffDisabledWhileLoggedIn;
- (id)payloadRestartDisabled;
- (id)payloadRestartDisabledWhileLoggedIn;
- (id)payloadSHOWFULLNAME;
- (id)payloadSHOWOTHERUSERSMANAGED;
- (id)payloadShutDownDisabled;
- (id)payloadShutDownDisabledWhileLoggedIn;
- (id)payloadSleepDisabled;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAdminHostInfo:(id)arg1;
- (void)setPayloadAllowList:(id)arg1;
- (void)setPayloadDenyList:(id)arg1;
- (void)setPayloadDisableConsoleAccess:(id)arg1;
- (void)setPayloadDisableScreenLockImmediate:(id)arg1;
- (void)setPayloadHideAdminUsers:(id)arg1;
- (void)setPayloadHideLocalUsers:(id)arg1;
- (void)setPayloadHideMobileAccounts:(id)arg1;
- (void)setPayloadIncludeNetworkUser:(id)arg1;
- (void)setPayloadLogOutDisabledWhileLoggedIn:(id)arg1;
- (void)setPayloadLoginwindowText:(id)arg1;
- (void)setPayloadPowerOffDisabledWhileLoggedIn:(id)arg1;
- (void)setPayloadRestartDisabled:(id)arg1;
- (void)setPayloadRestartDisabledWhileLoggedIn:(id)arg1;
- (void)setPayloadSHOWFULLNAME:(id)arg1;
- (void)setPayloadSHOWOTHERUSERSMANAGED:(id)arg1;
- (void)setPayloadShutDownDisabled:(id)arg1;
- (void)setPayloadShutDownDisabledWhileLoggedIn:(id)arg1;
- (void)setPayloadSleepDisabled:(id)arg1;

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