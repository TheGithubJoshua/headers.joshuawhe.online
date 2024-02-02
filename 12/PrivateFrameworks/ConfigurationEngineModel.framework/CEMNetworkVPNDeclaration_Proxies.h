<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CEMNetworkVPNDeclaration_Proxies.h</title>
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

/PrivateFrameworks/ConfigurationEngineModel.framework/CEMNetworkVPNDeclaration_Proxies.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel (25.9)
 */

@interface CEMNetworkVPNDeclaration_Proxies : CEMPayloadBase {
    NSNumber * _payloadHTTPEnable;
    NSNumber * _payloadHTTPPort;
    NSString * _payloadHTTPProxy;
    NSString * _payloadHTTPProxyPassword;
    NSString * _payloadHTTPProxyUsername;
    NSNumber * _payloadHTTPSEnable;
    NSNumber * _payloadHTTPSPort;
    NSString * _payloadHTTPSProxy;
    NSNumber * _payloadProxyAutoConfigEnable;
    NSString * _payloadProxyAutoConfigURLString;
    NSNumber * _payloadProxyAutoDiscoveryEnable;
    NSArray * _payloadSupplementalMatchDomains;
}

@property (nonatomic, copy) NSNumber *payloadHTTPEnable;
@property (nonatomic, copy) NSNumber *payloadHTTPPort;
@property (nonatomic, copy) NSString *payloadHTTPProxy;
@property (nonatomic, copy) NSString *payloadHTTPProxyPassword;
@property (nonatomic, copy) NSString *payloadHTTPProxyUsername;
@property (nonatomic, copy) NSNumber *payloadHTTPSEnable;
@property (nonatomic, copy) NSNumber *payloadHTTPSPort;
@property (nonatomic, copy) NSString *payloadHTTPSProxy;
@property (nonatomic, copy) NSNumber *payloadProxyAutoConfigEnable;
@property (nonatomic, copy) NSString *payloadProxyAutoConfigURLString;
@property (nonatomic, copy) NSNumber *payloadProxyAutoDiscoveryEnable;
@property (nonatomic, copy) NSArray *payloadSupplementalMatchDomains;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithHTTPEnable:(id)arg1 withHTTPPort:(id)arg2 withHTTPProxy:(id)arg3 withHTTPProxyPassword:(id)arg4 withHTTPProxyUsername:(id)arg5 withHTTPSEnable:(id)arg6 withHTTPSPort:(id)arg7 withHTTPSProxy:(id)arg8 withProxyAutoConfigEnable:(id)arg9 withProxyAutoDiscoveryEnable:(id)arg10 withProxyAutoConfigURLString:(id)arg11 withSupplementalMatchDomains:(id)arg12;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadHTTPEnable;
- (id)payloadHTTPPort;
- (id)payloadHTTPProxy;
- (id)payloadHTTPProxyPassword;
- (id)payloadHTTPProxyUsername;
- (id)payloadHTTPSEnable;
- (id)payloadHTTPSPort;
- (id)payloadHTTPSProxy;
- (id)payloadProxyAutoConfigEnable;
- (id)payloadProxyAutoConfigURLString;
- (id)payloadProxyAutoDiscoveryEnable;
- (id)payloadSupplementalMatchDomains;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadHTTPEnable:(id)arg1;
- (void)setPayloadHTTPPort:(id)arg1;
- (void)setPayloadHTTPProxy:(id)arg1;
- (void)setPayloadHTTPProxyPassword:(id)arg1;
- (void)setPayloadHTTPProxyUsername:(id)arg1;
- (void)setPayloadHTTPSEnable:(id)arg1;
- (void)setPayloadHTTPSPort:(id)arg1;
- (void)setPayloadHTTPSProxy:(id)arg1;
- (void)setPayloadProxyAutoConfigEnable:(id)arg1;
- (void)setPayloadProxyAutoConfigURLString:(id)arg1;
- (void)setPayloadProxyAutoDiscoveryEnable:(id)arg1;
- (void)setPayloadSupplementalMatchDomains:(id)arg1;

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