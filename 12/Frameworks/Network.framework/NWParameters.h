<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NWParameters.h</title>
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

/Frameworks/Network.framework/NWParameters.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Network.framework/Network (1)
 */

@interface NWParameters : NSObject <NSCopying, NSSecureCoding, NWPrettyDescription> {
    NSSet * _SSLCipherSuitesInternal;
    bool  _enableSFO;
    NSObject<OS_nw_parameters> * _internalParameters;
    unsigned long long  _maximumSSLProtocolVersionInternal;
    unsigned long long  _minimumSSLProtocolVersionInternal;
}

@property (nonatomic, copy) NSSet *SSLCipherSuites;
@property (nonatomic, retain) NSSet *SSLCipherSuitesInternal;
@property (nonatomic, copy) NSData *TLSSessionID;
@property (nonatomic, copy) NSString *account;
@property (nonatomic) bool allowSocketAccess;
@property (nonatomic) bool allowUnusableAddresses;
@property (nonatomic) unsigned long long dataMode;
@property (nonatomic) bool disableNagleAlgorithm;
@property (getter=isDiscretionary, nonatomic) bool discretionary;
@property (getter=isDryRun, nonatomic, readonly) bool dryRun;
@property (nonatomic, copy) NSString *effectiveBundleID;
@property (nonatomic, copy) NSUUID *effectiveProcessUUID;
@property (nonatomic) bool enableSFO;
@property (nonatomic) bool enableTFO;
@property (nonatomic) bool enableTFONoCookie;
@property (nonatomic) bool enableTLS;
@property (nonatomic) bool httpsProxyIsOpaque;
@property (nonatomic) bool httpsProxyOverTLS;
@property (nonatomic) bool indefinite;
@property (retain) NSObject<OS_nw_parameters> *internalParameters;
@property (nonatomic, readonly) unsigned char ipProtocol;
@property (nonatomic) bool keepAlive;
@property (nonatomic) unsigned long long keepAliveIdleTime;
@property (nonatomic) unsigned long long keepAliveInterval;
@property (nonatomic) bool keepAliveOffload;
@property (nonatomic, retain) NWAddressEndpoint *localAddress;
@property (nonatomic) unsigned long long maximumSSLProtocolVersion;
@property (nonatomic) unsigned long long maximumSSLProtocolVersionInternal;
@property (nonatomic) NSData *metadata;
@property (nonatomic) unsigned long long minimumSSLProtocolVersion;
@property (nonatomic) unsigned long long minimumSSLProtocolVersionInternal;
@property (nonatomic) bool multipath;
@property (nonatomic) int multipathService;
@property (nonatomic) bool noProxy;
@property (nonatomic, retain) NSUUID *parentID;
@property (nonatomic) int pid;
@property (nonatomic) bool preferNoProxy;
@property (nonatomic, readonly, copy) NSString *privateDescription;
@property (nonatomic, copy) NSUUID *processUUID;
@property (nonatomic, readonly) bool prohibitCellular;
@property (nonatomic) bool prohibitExpensivePaths;
@property (nonatomic) bool prohibitFallback;
@property (nonatomic) bool prohibitRoaming;
@property (nonatomic, copy) NSArray *protocolTransforms;
@property (nonatomic, copy) NSDictionary *proxyConfiguration;
@property (nonatomic) bool reduceBuffering;
@property (nonatomic) unsigned char requiredAddressFamily;
@property (nonatomic, retain) NWInterface *requiredInterface;
@property (nonatomic) long long requiredInterfaceSubtype;
@property (nonatomic) long long requiredInterfaceType;
@property (nonatomic) bool resolvePTR;
@property (nonatomic) bool reuseLocalAddress;
@property (nonatomic, readonly) NSURL *sanitizedURL;
@property (nonatomic) unsigned long long trafficClass;
@property (nonatomic) bool trustInvalidCertificates;
@property (nonatomic) unsigned int uid;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic) bool useAWDL;
@property (nonatomic) bool useLongOutstandingQueries;
@property (nonatomic) bool useP2P;
@property (nonatomic) bool useTFOHeuristics;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (id)parametersWithCParameters:(id)arg1;
+ (id)parametersWithProtocolBufferData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SSLCipherSuites;
- (id)SSLCipherSuitesInternal;
- (id)TLSSessionID;
- (id)account;
- (bool)allowSocketAccess;
- (bool)allowUnusableAddresses;
- (void)avoidNetworkAgentWithDomain:(id)arg1 type:(id)arg2;
- (void)avoidNetworkAgentWithUUID:(id)arg1;
- (id)copyCParameters;
- (bool)copyEffectiveAuditToken:(struct { unsigned int x1[8]; }*)arg1;
- (id)copyRequiredAgentsDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createProtocolBufferObject;
- (unsigned long long)dataMode;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (bool)disableNagleAlgorithm;
- (id)effectiveBundleID;
- (id)effectiveProcessUUID;
- (bool)enableSFO;
- (bool)enableTFO;
- (bool)enableTFONoCookie;
- (bool)enableTLS;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDelegatedPIDForOriginatingPID:(int)arg1;
- (bool)hasDelegatedProcessUUID;
- (bool)hasNonEmptyProxyConfiguration;
- (bool)hasPreferredNetworkAgents;
- (bool)hasProhibitedNetworkAgents;
- (bool)hasRequiredNetworkAgents;
- (unsigned long long)hash;
- (bool)httpsProxyIsOpaque;
- (bool)httpsProxyOverTLS;
- (bool)indefinite;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (id)internalParameters;
- (unsigned char)ipProtocol;
- (bool)isDiscretionary;
- (bool)isDryRun;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (bool)keepAlive;
- (unsigned long long)keepAliveIdleTime;
- (unsigned long long)keepAliveInterval;
- (bool)keepAliveOffload;
- (id)localAddress;
- (unsigned long long)maximumSSLProtocolVersion;
- (unsigned long long)maximumSSLProtocolVersionInternal;
- (id)metadata;
- (unsigned long long)minimumSSLProtocolVersion;
- (unsigned long long)minimumSSLProtocolVersionInternal;
- (bool)multipath;
- (int)multipathService;
- (bool)noProxy;
- (id)parentID;
- (int)pid;
- (void)preferNetworkAgentWithDomain:(id)arg1 type:(id)arg2;
- (void)preferNetworkAgentWithUUID:(id)arg1;
- (bool)preferNoProxy;
- (id)privateDescription;
- (id)processUUID;
- (bool)prohibitCellular;
- (bool)prohibitExpensivePaths;
- (bool)prohibitFallback;
- (void)prohibitInterface:(id)arg1;
- (void)prohibitInterfaceSubtype:(long long)arg1;
- (void)prohibitInterfaceType:(long long)arg1;
- (void)prohibitNetworkAgentWithUUID:(id)arg1;
- (void)prohibitNetworkAgentsWithDomain:(id)arg1 type:(id)arg2;
- (bool)prohibitRoaming;
- (id)protocolTransforms;
- (id)proxyConfiguration;
- (bool)reduceBuffering;
- (void)requireNetworkAgentWithDomain:(id)arg1 type:(id)arg2;
- (void)requireNetworkAgentWithUUID:(id)arg1;
- (unsigned char)requiredAddressFamily;
- (id)requiredInterface;
- (long long)requiredInterfaceSubtype;
- (long long)requiredInterfaceType;
- (bool)resolvePTR;
- (bool)reuseLocalAddress;
- (id)sanitizedURL;
- (void)setAccount:(id)arg1;
- (void)setAllowSocketAccess:(bool)arg1;
- (void)setAllowUnusableAddresses:(bool)arg1;
- (void)setDataMode:(unsigned long long)arg1;
- (void)setDisableNagleAlgorithm:(bool)arg1;
- (void)setDiscretionary:(bool)arg1;
- (void)setEffectiveBundleID:(id)arg1;
- (void)setEffectiveProcessUUID:(id)arg1;
- (void)setEnableSFO:(bool)arg1;
- (void)setEnableTFO:(bool)arg1;
- (void)setEnableTFONoCookie:(bool)arg1;
- (void)setEnableTLS:(bool)arg1;
- (void)setHttpsProxyIsOpaque:(bool)arg1;
- (void)setHttpsProxyOverTLS:(bool)arg1;
- (void)setIndefinite:(bool)arg1;
- (void)setInitialDataPayload:(id)arg1;
- (void)setInternalParameters:(id)arg1;
- (void)setKeepAlive:(bool)arg1;
- (void)setKeepAliveIdleTime:(unsigned long long)arg1;
- (void)setKeepAliveInterval:(unsigned long long)arg1;
- (void)setKeepAliveOffload:(bool)arg1;
- (void)setLocalAddress:(id)arg1;
- (void)setMaximumSSLProtocolVersion:(unsigned long long)arg1;
- (void)setMaximumSSLProtocolVersionInternal:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMinimumSSLProtocolVersion:(unsigned long long)arg1;
- (void)setMinimumSSLProtocolVersionInternal:(unsigned long long)arg1;
- (void)setMultipath:(bool)arg1;
- (void)setMultipathService:(int)arg1;
- (void)setNoProxy:(bool)arg1;
- (void)setParentID:(id)arg1;
- (void)setPid:(int)arg1;
- (void)setPreferNoProxy:(bool)arg1;
- (void)setProcessUUID:(id)arg1;
- (void)setProhibitExpensivePaths:(bool)arg1;
- (void)setProhibitFallback:(bool)arg1;
- (void)setProhibitRoaming:(bool)arg1;
- (void)setProtocolAtLevel:(unsigned long long)arg1 protocol:(struct nw_protocol_identifier { BOOL x1[32]; int x2; int x3; }*)arg2;
- (void)setProtocolTransforms:(id)arg1;
- (void)setProxyConfiguration:(id)arg1;
- (void)setReduceBuffering:(bool)arg1;
- (void)setRequiredAddressFamily:(unsigned char)arg1;
- (void)setRequiredInterface:(id)arg1;
- (void)setRequiredInterfaceSubtype:(long long)arg1;
- (void)setRequiredInterfaceType:(long long)arg1;
- (void)setResolvePTR:(bool)arg1;
- (void)setReuseLocalAddress:(bool)arg1;
- (void)setSSLCipherSuites:(id)arg1;
- (void)setSSLCipherSuitesInternal:(id)arg1;
- (void)setSourceApplicationWithBundleID:(id)arg1;
- (void)setSourceApplicationWithToken:(struct { unsigned int x1[8]; })arg1;
- (void)setTLSSessionID:(id)arg1;
- (void)setTrafficClass:(unsigned long long)arg1;
- (void)setTrustInvalidCertificates:(bool)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (void)setUseAWDL:(bool)arg1;
- (void)setUseLongOutstandingQueries:(bool)arg1;
- (void)setUseP2P:(bool)arg1;
- (void)setUseTFOHeuristics:(bool)arg1;
- (int)sslProtocolWithTLSVersion:(unsigned short)arg1;
- (unsigned short)tlsVersionWithSSLProtocol:(int)arg1;
- (unsigned long long)trafficClass;
- (bool)trustInvalidCertificates;
- (unsigned int)uid;
- (id)url;
- (bool)useAWDL;
- (bool)useLongOutstandingQueries;
- (bool)useP2P;
- (bool)useTFOHeuristics;

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