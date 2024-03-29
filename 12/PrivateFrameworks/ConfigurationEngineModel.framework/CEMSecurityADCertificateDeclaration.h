<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CEMSecurityADCertificateDeclaration.h</title>
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

/PrivateFrameworks/ConfigurationEngineModel.framework/CEMSecurityADCertificateDeclaration.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel (25.9)
 */

@interface CEMSecurityADCertificateDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowAllAppsAccess;
    NSString * _payloadCertServer;
    NSString * _payloadCertTemplate;
    NSString * _payloadCertificateAcquisitionMechanism;
    NSString * _payloadCertificateAuthority;
    NSNumber * _payloadCertificateRenewalTimeInterval;
    NSString * _payloadDescription;
    NSNumber * _payloadEnableAutoRenewal;
    NSNumber * _payloadKeyIsExtractable;
    NSNumber * _payloadKeysize;
    NSNumber * _payloadPromptForCredentials;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowAllAppsAccess;
@property (nonatomic, copy) NSString *payloadCertServer;
@property (nonatomic, copy) NSString *payloadCertTemplate;
@property (nonatomic, copy) NSString *payloadCertificateAcquisitionMechanism;
@property (nonatomic, copy) NSString *payloadCertificateAuthority;
@property (nonatomic, copy) NSNumber *payloadCertificateRenewalTimeInterval;
@property (nonatomic, copy) NSString *payloadDescription;
@property (nonatomic, copy) NSNumber *payloadEnableAutoRenewal;
@property (nonatomic, copy) NSNumber *payloadKeyIsExtractable;
@property (nonatomic, copy) NSNumber *payloadKeysize;
@property (nonatomic, copy) NSNumber *payloadPromptForCredentials;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withCertServer:(id)arg2 withCertTemplate:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withCertServer:(id)arg2 withCertTemplate:(id)arg3 withDescription:(id)arg4 withCertificateRenewalTimeInterval:(id)arg5 withCertificateAuthority:(id)arg6 withCertificateAcquisitionMechanism:(id)arg7 withAllowAllAppsAccess:(id)arg8 withPromptForCredentials:(id)arg9 withKeyIsExtractable:(id)arg10 withKeysize:(id)arg11 withEnableAutoRenewal:(id)arg12;
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
- (id)payloadAllowAllAppsAccess;
- (id)payloadCertServer;
- (id)payloadCertTemplate;
- (id)payloadCertificateAcquisitionMechanism;
- (id)payloadCertificateAuthority;
- (id)payloadCertificateRenewalTimeInterval;
- (id)payloadDescription;
- (id)payloadEnableAutoRenewal;
- (id)payloadKeyIsExtractable;
- (id)payloadKeysize;
- (id)payloadPromptForCredentials;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowAllAppsAccess:(id)arg1;
- (void)setPayloadCertServer:(id)arg1;
- (void)setPayloadCertTemplate:(id)arg1;
- (void)setPayloadCertificateAcquisitionMechanism:(id)arg1;
- (void)setPayloadCertificateAuthority:(id)arg1;
- (void)setPayloadCertificateRenewalTimeInterval:(id)arg1;
- (void)setPayloadDescription:(id)arg1;
- (void)setPayloadEnableAutoRenewal:(id)arg1;
- (void)setPayloadKeyIsExtractable:(id)arg1;
- (void)setPayloadKeysize:(id)arg1;
- (void)setPayloadPromptForCredentials:(id)arg1;

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
