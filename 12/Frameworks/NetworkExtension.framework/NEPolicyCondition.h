<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NEPolicyCondition.h</title>
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

/Frameworks/NetworkExtension.framework/NEPolicyCondition.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension (1)
 */

@interface NEPolicyCondition : NSObject <NEPrettyDescription> {
    NSString * _accountIdentifier;
    NSString * _agentDomain;
    NSString * _agentType;
    NSUUID * _applicationUUID;
    long long  _conditionType;
    NSString * _customEntitlement;
    NSString * _domain;
    NWAddressEndpoint * _endAddress;
    NSString * _interfaceName;
    unsigned short  _ipProtocol;
    bool  _negative;
    int  _pid;
    unsigned char  _prefix;
    NWAddressEndpoint * _startAddress;
    unsigned int  _trafficClassEnd;
    unsigned int  _trafficClassStart;
    unsigned int  _uid;
}

@property (copy) NSString *accountIdentifier;
@property (copy) NSString *agentDomain;
@property (copy) NSString *agentType;
@property (copy) NSUUID *applicationUUID;
@property long long conditionType;
@property (copy) NSString *customEntitlement;
@property (copy) NSString *domain;
@property (copy) NWAddressEndpoint *endAddress;
@property (copy) NSString *interfaceName;
@property unsigned short ipProtocol;
@property (getter=isNegative) bool negative;
@property int pid;
@property unsigned char prefix;
@property (copy) NWAddressEndpoint *startAddress;
@property unsigned int trafficClassEnd;
@property unsigned int trafficClassStart;
@property unsigned int uid;

+ (id)accountIdentifier:(id)arg1;
+ (id)allInterfaces;
+ (id)customEntitlement:(id)arg1;
+ (id)domain:(id)arg1;
+ (id)effectiveApplication:(id)arg1;
+ (id)effectivePID:(int)arg1;
+ (id)entitlement;
+ (id)ipProtocol:(unsigned short)arg1;
+ (id)localAddress:(id)arg1 prefix:(unsigned char)arg2;
+ (id)localAddressStart:(id)arg1 end:(id)arg2;
+ (id)realApplication:(id)arg1;
+ (id)remoteAddress:(id)arg1 prefix:(unsigned char)arg2;
+ (id)remoteAddressStart:(id)arg1 end:(id)arg2;
+ (id)requiredAgentDomain:(id)arg1 agentType:(id)arg2;
+ (id)scopedInterface:(id)arg1;
+ (id)trafficClassStart:(unsigned int)arg1 end:(unsigned int)arg2;
+ (id)uid:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (bool)addTLVsToMessage:(id)arg1;
- (id)agentDomain;
- (id)agentType;
- (id)applicationUUID;
- (long long)conditionType;
- (id)conditionTypeString;
- (unsigned char)conditionTypeValue;
- (id)customEntitlement;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)domain;
- (id)endAddress;
- (id)init;
- (id)initInternal;
- (id)interfaceName;
- (unsigned short)ipProtocol;
- (bool)isNegative;
- (int)pid;
- (unsigned char)prefix;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAgentDomain:(id)arg1;
- (void)setAgentType:(id)arg1;
- (void)setApplicationUUID:(id)arg1;
- (void)setConditionType:(long long)arg1;
- (void)setCustomEntitlement:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setEndAddress:(id)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setIpProtocol:(unsigned short)arg1;
- (void)setNegative:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setPrefix:(unsigned char)arg1;
- (void)setStartAddress:(id)arg1;
- (void)setTrafficClassEnd:(unsigned int)arg1;
- (void)setTrafficClassStart:(unsigned int)arg1;
- (void)setUid:(unsigned int)arg1;
- (id)startAddress;
- (unsigned int)trafficClassEnd;
- (unsigned int)trafficClassStart;
- (unsigned int)uid;
- (bool)validate;

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
