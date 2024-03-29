<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CEMNetworkVPNDeclaration_AlwaysOnTunnelConfiguration.h</title>
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

/PrivateFrameworks/ConfigurationEngineModel.framework/CEMNetworkVPNDeclaration_AlwaysOnTunnelConfiguration.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel (25.9)
 */

@interface CEMNetworkVPNDeclaration_AlwaysOnTunnelConfiguration : CEMPayloadBase {
    NSString * _payloadAuthName;
    NSString * _payloadAuthPassword;
    NSString * _payloadAuthenticationMethod;
    CEMNetworkVPNDeclaration_SecurityAssociationParameters * _payloadChildSecurityAssociationParameters;
    NSString * _payloadDeadPeerDetectionRate;
    NSNumber * _payloadDisableMOBIKE;
    NSNumber * _payloadDisableRedirect;
    NSNumber * _payloadEnableCertificateRevocationCheck;
    NSNumber * _payloadEnablePFS;
    NSNumber * _payloadExtendedAuthEnabled;
    CEMNetworkVPNDeclaration_SecurityAssociationParameters * _payloadIKESecurityAssociationParameters;
    NSArray * _payloadInterfaces;
    NSString * _payloadLocalIdentifier;
    NSNumber * _payloadNATKeepAliveInterval;
    NSNumber * _payloadNATKeepAliveOffloadEnable;
    NSString * _payloadPayloadCertificateUUID;
    NSString * _payloadProtocolType;
    NSString * _payloadRemoteAddress;
    NSString * _payloadRemoteIdentifier;
    NSString * _payloadServerCertificateCommonName;
    NSString * _payloadServerCertificateIssuerCommonName;
    NSString * _payloadSharedSecret;
    NSNumber * _payloadUseConfigurationAttributeInternalIPSubnet;
}

@property (nonatomic, copy) NSString *payloadAuthName;
@property (nonatomic, copy) NSString *payloadAuthPassword;
@property (nonatomic, copy) NSString *payloadAuthenticationMethod;
@property (nonatomic, copy) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadChildSecurityAssociationParameters;
@property (nonatomic, copy) NSString *payloadDeadPeerDetectionRate;
@property (nonatomic, copy) NSNumber *payloadDisableMOBIKE;
@property (nonatomic, copy) NSNumber *payloadDisableRedirect;
@property (nonatomic, copy) NSNumber *payloadEnableCertificateRevocationCheck;
@property (nonatomic, copy) NSNumber *payloadEnablePFS;
@property (nonatomic, copy) NSNumber *payloadExtendedAuthEnabled;
@property (nonatomic, copy) CEMNetworkVPNDeclaration_SecurityAssociationParameters *payloadIKESecurityAssociationParameters;
@property (nonatomic, copy) NSArray *payloadInterfaces;
@property (nonatomic, copy) NSString *payloadLocalIdentifier;
@property (nonatomic, copy) NSNumber *payloadNATKeepAliveInterval;
@property (nonatomic, copy) NSNumber *payloadNATKeepAliveOffloadEnable;
@property (nonatomic, copy) NSString *payloadPayloadCertificateUUID;
@property (nonatomic, copy) NSString *payloadProtocolType;
@property (nonatomic, copy) NSString *payloadRemoteAddress;
@property (nonatomic, copy) NSString *payloadRemoteIdentifier;
@property (nonatomic, copy) NSString *payloadServerCertificateCommonName;
@property (nonatomic, copy) NSString *payloadServerCertificateIssuerCommonName;
@property (nonatomic, copy) NSString *payloadSharedSecret;
@property (nonatomic, copy) NSNumber *payloadUseConfigurationAttributeInternalIPSubnet;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithRemoteAddress:(id)arg1 withLocalIdentifier:(id)arg2 withRemoteIdentifier:(id)arg3 withAuthenticationMethod:(id)arg4 withProtocolType:(id)arg5;
+ (id)buildWithRemoteAddress:(id)arg1 withLocalIdentifier:(id)arg2 withRemoteIdentifier:(id)arg3 withAuthenticationMethod:(id)arg4 withPayloadCertificateUUID:(id)arg5 withSharedSecret:(id)arg6 withExtendedAuthEnabled:(id)arg7 withDisableRedirect:(id)arg8 withDisableMOBIKE:(id)arg9 withUseConfigurationAttributeInternalIPSubnet:(id)arg10 withEnablePFS:(id)arg11 withEnableCertificateRevocationCheck:(id)arg12 withNATKeepAliveOffloadEnable:(id)arg13 withNATKeepAliveInterval:(id)arg14 withAuthName:(id)arg15 withAuthPassword:(id)arg16 withDeadPeerDetectionRate:(id)arg17 withProtocolType:(id)arg18 withServerCertificateIssuerCommonName:(id)arg19 withServerCertificateCommonName:(id)arg20 withIKESecurityAssociationParameters:(id)arg21 withChildSecurityAssociationParameters:(id)arg22 withInterfaces:(id)arg23;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAuthName;
- (id)payloadAuthPassword;
- (id)payloadAuthenticationMethod;
- (id)payloadChildSecurityAssociationParameters;
- (id)payloadDeadPeerDetectionRate;
- (id)payloadDisableMOBIKE;
- (id)payloadDisableRedirect;
- (id)payloadEnableCertificateRevocationCheck;
- (id)payloadEnablePFS;
- (id)payloadExtendedAuthEnabled;
- (id)payloadIKESecurityAssociationParameters;
- (id)payloadInterfaces;
- (id)payloadLocalIdentifier;
- (id)payloadNATKeepAliveInterval;
- (id)payloadNATKeepAliveOffloadEnable;
- (id)payloadPayloadCertificateUUID;
- (id)payloadProtocolType;
- (id)payloadRemoteAddress;
- (id)payloadRemoteIdentifier;
- (id)payloadServerCertificateCommonName;
- (id)payloadServerCertificateIssuerCommonName;
- (id)payloadSharedSecret;
- (id)payloadUseConfigurationAttributeInternalIPSubnet;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAuthName:(id)arg1;
- (void)setPayloadAuthPassword:(id)arg1;
- (void)setPayloadAuthenticationMethod:(id)arg1;
- (void)setPayloadChildSecurityAssociationParameters:(id)arg1;
- (void)setPayloadDeadPeerDetectionRate:(id)arg1;
- (void)setPayloadDisableMOBIKE:(id)arg1;
- (void)setPayloadDisableRedirect:(id)arg1;
- (void)setPayloadEnableCertificateRevocationCheck:(id)arg1;
- (void)setPayloadEnablePFS:(id)arg1;
- (void)setPayloadExtendedAuthEnabled:(id)arg1;
- (void)setPayloadIKESecurityAssociationParameters:(id)arg1;
- (void)setPayloadInterfaces:(id)arg1;
- (void)setPayloadLocalIdentifier:(id)arg1;
- (void)setPayloadNATKeepAliveInterval:(id)arg1;
- (void)setPayloadNATKeepAliveOffloadEnable:(id)arg1;
- (void)setPayloadPayloadCertificateUUID:(id)arg1;
- (void)setPayloadProtocolType:(id)arg1;
- (void)setPayloadRemoteAddress:(id)arg1;
- (void)setPayloadRemoteIdentifier:(id)arg1;
- (void)setPayloadServerCertificateCommonName:(id)arg1;
- (void)setPayloadServerCertificateIssuerCommonName:(id)arg1;
- (void)setPayloadSharedSecret:(id)arg1;
- (void)setPayloadUseConfigurationAttributeInternalIPSubnet:(id)arg1;

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
