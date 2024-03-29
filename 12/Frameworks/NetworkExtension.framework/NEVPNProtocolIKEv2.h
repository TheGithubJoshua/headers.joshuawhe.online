<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NEVPNProtocolIKEv2.h</title>
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

/Frameworks/NetworkExtension.framework/NEVPNProtocolIKEv2.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension (1)
 */

@interface NEVPNProtocolIKEv2 : NEVPNProtocolIPSec {
    NEVPNIKEv2SecurityAssociationParameters * _IKESecurityAssociationParameters;
    NSArray * _IKESecurityAssociationParametersArray;
    long long  _certificateType;
    NEVPNIKEv2SecurityAssociationParameters * _childSecurityAssociationParameters;
    NSArray * _childSecurityAssociationParametersArray;
    long long  _deadPeerDetectionRate;
    bool  _disableMOBIKE;
    int  _disableMOBIKERetryOnWake;
    bool  _disableRedirect;
    bool  _enablePFS;
    bool  _enableRevocationCheck;
    long long  _maximumTLSVersion;
    long long  _minimumTLSVersion;
    int  _natKeepAliveOffloadEnable;
    int  _natKeepAliveOffloadInterval;
    NSString * _pluginType;
    NSString * _providerBundleIdentifier;
    NSString * _serverCertificateCommonName;
    NSString * _serverCertificateIssuerCommonName;
    bool  _strictRevocationCheck;
    bool  _useConfigurationAttributeInternalIPSubnet;
    bool  _wakeForRekey;
}

@property (readonly) NEVPNIKEv2SecurityAssociationParameters *IKESecurityAssociationParameters;
@property (retain) NSArray *IKESecurityAssociationParametersArray;
@property long long certificateType;
@property (readonly) NEVPNIKEv2SecurityAssociationParameters *childSecurityAssociationParameters;
@property (retain) NSArray *childSecurityAssociationParametersArray;
@property long long deadPeerDetectionRate;
@property bool disableMOBIKE;
@property int disableMOBIKERetryOnWake;
@property bool disableRedirect;
@property bool enablePFS;
@property bool enableRevocationCheck;
@property long long maximumTLSVersion;
@property long long minimumTLSVersion;
@property int natKeepAliveOffloadEnable;
@property int natKeepAliveOffloadInterval;
@property (readonly) NSString *pluginType;
@property (copy) NSString *providerBundleIdentifier;
@property (copy) NSString *serverCertificateCommonName;
@property (copy) NSString *serverCertificateIssuerCommonName;
@property bool strictRevocationCheck;
@property bool useConfigurationAttributeInternalIPSubnet;
@property bool wakeForRekey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)IKESecurityAssociationParameters;
- (id)IKESecurityAssociationParametersArray;
- (long long)certificateType;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)childSecurityAssociationParameters;
- (id)childSecurityAssociationParametersArray;
- (id)clone;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deadPeerDetectionRate;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (bool)disableMOBIKE;
- (int)disableMOBIKERetryOnWake;
- (bool)disableRedirect;
- (bool)enablePFS;
- (bool)enableRevocationCheck;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPluginType:(id)arg1;
- (long long)maximumTLSVersion;
- (long long)minimumTLSVersion;
- (int)natKeepAliveOffloadEnable;
- (int)natKeepAliveOffloadInterval;
- (id)pluginType;
- (id)providerBundleIdentifier;
- (id)serverCertificateCommonName;
- (id)serverCertificateIssuerCommonName;
- (void)setCertificateType:(long long)arg1;
- (void)setChildSecurityAssociationParametersArray:(id)arg1;
- (void)setDeadPeerDetectionRate:(long long)arg1;
- (void)setDisableMOBIKE:(bool)arg1;
- (void)setDisableMOBIKERetryOnWake:(int)arg1;
- (void)setDisableRedirect:(bool)arg1;
- (void)setEnablePFS:(bool)arg1;
- (void)setEnableRevocationCheck:(bool)arg1;
- (void)setIKESecurityAssociationParametersArray:(id)arg1;
- (void)setMaximumTLSVersion:(long long)arg1;
- (void)setMinimumTLSVersion:(long long)arg1;
- (void)setNatKeepAliveOffloadEnable:(int)arg1;
- (void)setNatKeepAliveOffloadInterval:(int)arg1;
- (void)setPluginType:(id)arg1;
- (void)setProviderBundleIdentifier:(id)arg1;
- (void)setServerCertificateCommonName:(id)arg1;
- (void)setServerCertificateIssuerCommonName:(id)arg1;
- (void)setStrictRevocationCheck:(bool)arg1;
- (void)setUseConfigurationAttributeInternalIPSubnet:(bool)arg1;
- (void)setWakeForRekey:(bool)arg1;
- (bool)strictRevocationCheck;
- (bool)useConfigurationAttributeInternalIPSubnet;
- (bool)wakeForRekey;

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
