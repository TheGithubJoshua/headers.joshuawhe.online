<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDNWAPIUsage.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDNWAPIUsage.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNWAPIUsage : PBCodable <NSCopying> {
    struct { 
        unsigned int ifFltrAttach : 1; 
        unsigned int ifFltrAttachOs : 1; 
        unsigned int ifnetAlloc : 1; 
        unsigned int ifnetAllocOs : 1; 
        unsigned int ipFltrAdd : 1; 
        unsigned int ipFltrAddOs : 1; 
        unsigned int nexusFlowInet6Datagram : 1; 
        unsigned int nexusFlowInet6Stream : 1; 
        unsigned int nexusFlowInetDatagram : 1; 
        unsigned int nexusFlowInetStream : 1; 
        unsigned int pfAddrule : 1; 
        unsigned int pfAddruleOs : 1; 
        unsigned int sockAlloc : 1; 
        unsigned int sockAllocKernel : 1; 
        unsigned int sockAllocKernelOs : 1; 
        unsigned int sockDomainInet : 1; 
        unsigned int sockDomainInet6 : 1; 
        unsigned int sockDomainKey : 1; 
        unsigned int sockDomainLocal : 1; 
        unsigned int sockDomainMultipath : 1; 
        unsigned int sockDomainNdrv : 1; 
        unsigned int sockDomainOther : 1; 
        unsigned int sockDomainRoute : 1; 
        unsigned int sockDomainSystem : 1; 
        unsigned int sockFltrRegister : 1; 
        unsigned int sockFltrRegisterOs : 1; 
        unsigned int sockInetMcastJoin : 1; 
        unsigned int sockInetMcastJoinOs : 1; 
        unsigned int sockNecpClientuuidCount : 1; 
        unsigned int sockNetInet6Dgram : 1; 
        unsigned int sockNetInet6DgramConnected : 1; 
        unsigned int sockNetInet6DgramDns : 1; 
        unsigned int sockNetInet6DgramNoData : 1; 
        unsigned int sockNetInet6Stream : 1; 
        unsigned int sockNetInetDgram : 1; 
        unsigned int sockNetInetDgramConnected : 1; 
        unsigned int sockNetInetDgramDns : 1; 
        unsigned int sockNetInetDgramNoData : 1; 
        unsigned int sockNetInetStream : 1; 
        unsigned int timeSinceLastReport : 1; 
        unsigned int timestamp : 1; 
        unsigned int vmnetStart : 1; 
        unsigned int ifNetagentEnabled : 1; 
    }  _has;
    long long  _ifFltrAttach;
    long long  _ifFltrAttachOs;
    bool  _ifNetagentEnabled;
    long long  _ifnetAlloc;
    long long  _ifnetAllocOs;
    long long  _ipFltrAdd;
    long long  _ipFltrAddOs;
    long long  _nexusFlowInet6Datagram;
    long long  _nexusFlowInet6Stream;
    long long  _nexusFlowInetDatagram;
    long long  _nexusFlowInetStream;
    long long  _pfAddrule;
    long long  _pfAddruleOs;
    long long  _sockAlloc;
    long long  _sockAllocKernel;
    long long  _sockAllocKernelOs;
    long long  _sockDomainInet;
    long long  _sockDomainInet6;
    long long  _sockDomainKey;
    long long  _sockDomainLocal;
    long long  _sockDomainMultipath;
    long long  _sockDomainNdrv;
    long long  _sockDomainOther;
    long long  _sockDomainRoute;
    long long  _sockDomainSystem;
    long long  _sockFltrRegister;
    long long  _sockFltrRegisterOs;
    long long  _sockInetMcastJoin;
    long long  _sockInetMcastJoinOs;
    long long  _sockNecpClientuuidCount;
    long long  _sockNetInet6Dgram;
    long long  _sockNetInet6DgramConnected;
    long long  _sockNetInet6DgramDns;
    long long  _sockNetInet6DgramNoData;
    long long  _sockNetInet6Stream;
    long long  _sockNetInetDgram;
    long long  _sockNetInetDgramConnected;
    long long  _sockNetInetDgramDns;
    long long  _sockNetInetDgramNoData;
    long long  _sockNetInetStream;
    unsigned long long  _timeSinceLastReport;
    unsigned long long  _timestamp;
    long long  _vmnetStart;
}

@property (nonatomic) bool hasIfFltrAttach;
@property (nonatomic) bool hasIfFltrAttachOs;
@property (nonatomic) bool hasIfNetagentEnabled;
@property (nonatomic) bool hasIfnetAlloc;
@property (nonatomic) bool hasIfnetAllocOs;
@property (nonatomic) bool hasIpFltrAdd;
@property (nonatomic) bool hasIpFltrAddOs;
@property (nonatomic) bool hasNexusFlowInet6Datagram;
@property (nonatomic) bool hasNexusFlowInet6Stream;
@property (nonatomic) bool hasNexusFlowInetDatagram;
@property (nonatomic) bool hasNexusFlowInetStream;
@property (nonatomic) bool hasPfAddrule;
@property (nonatomic) bool hasPfAddruleOs;
@property (nonatomic) bool hasSockAlloc;
@property (nonatomic) bool hasSockAllocKernel;
@property (nonatomic) bool hasSockAllocKernelOs;
@property (nonatomic) bool hasSockDomainInet;
@property (nonatomic) bool hasSockDomainInet6;
@property (nonatomic) bool hasSockDomainKey;
@property (nonatomic) bool hasSockDomainLocal;
@property (nonatomic) bool hasSockDomainMultipath;
@property (nonatomic) bool hasSockDomainNdrv;
@property (nonatomic) bool hasSockDomainOther;
@property (nonatomic) bool hasSockDomainRoute;
@property (nonatomic) bool hasSockDomainSystem;
@property (nonatomic) bool hasSockFltrRegister;
@property (nonatomic) bool hasSockFltrRegisterOs;
@property (nonatomic) bool hasSockInetMcastJoin;
@property (nonatomic) bool hasSockInetMcastJoinOs;
@property (nonatomic) bool hasSockNecpClientuuidCount;
@property (nonatomic) bool hasSockNetInet6Dgram;
@property (nonatomic) bool hasSockNetInet6DgramConnected;
@property (nonatomic) bool hasSockNetInet6DgramDns;
@property (nonatomic) bool hasSockNetInet6DgramNoData;
@property (nonatomic) bool hasSockNetInet6Stream;
@property (nonatomic) bool hasSockNetInetDgram;
@property (nonatomic) bool hasSockNetInetDgramConnected;
@property (nonatomic) bool hasSockNetInetDgramDns;
@property (nonatomic) bool hasSockNetInetDgramNoData;
@property (nonatomic) bool hasSockNetInetStream;
@property (nonatomic) bool hasTimeSinceLastReport;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasVmnetStart;
@property (nonatomic) long long ifFltrAttach;
@property (nonatomic) long long ifFltrAttachOs;
@property (nonatomic) bool ifNetagentEnabled;
@property (nonatomic) long long ifnetAlloc;
@property (nonatomic) long long ifnetAllocOs;
@property (nonatomic) long long ipFltrAdd;
@property (nonatomic) long long ipFltrAddOs;
@property (nonatomic) long long nexusFlowInet6Datagram;
@property (nonatomic) long long nexusFlowInet6Stream;
@property (nonatomic) long long nexusFlowInetDatagram;
@property (nonatomic) long long nexusFlowInetStream;
@property (nonatomic) long long pfAddrule;
@property (nonatomic) long long pfAddruleOs;
@property (nonatomic) long long sockAlloc;
@property (nonatomic) long long sockAllocKernel;
@property (nonatomic) long long sockAllocKernelOs;
@property (nonatomic) long long sockDomainInet;
@property (nonatomic) long long sockDomainInet6;
@property (nonatomic) long long sockDomainKey;
@property (nonatomic) long long sockDomainLocal;
@property (nonatomic) long long sockDomainMultipath;
@property (nonatomic) long long sockDomainNdrv;
@property (nonatomic) long long sockDomainOther;
@property (nonatomic) long long sockDomainRoute;
@property (nonatomic) long long sockDomainSystem;
@property (nonatomic) long long sockFltrRegister;
@property (nonatomic) long long sockFltrRegisterOs;
@property (nonatomic) long long sockInetMcastJoin;
@property (nonatomic) long long sockInetMcastJoinOs;
@property (nonatomic) long long sockNecpClientuuidCount;
@property (nonatomic) long long sockNetInet6Dgram;
@property (nonatomic) long long sockNetInet6DgramConnected;
@property (nonatomic) long long sockNetInet6DgramDns;
@property (nonatomic) long long sockNetInet6DgramNoData;
@property (nonatomic) long long sockNetInet6Stream;
@property (nonatomic) long long sockNetInetDgram;
@property (nonatomic) long long sockNetInetDgramConnected;
@property (nonatomic) long long sockNetInetDgramDns;
@property (nonatomic) long long sockNetInetDgramNoData;
@property (nonatomic) long long sockNetInetStream;
@property (nonatomic) unsigned long long timeSinceLastReport;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long vmnetStart;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIfFltrAttach;
- (bool)hasIfFltrAttachOs;
- (bool)hasIfNetagentEnabled;
- (bool)hasIfnetAlloc;
- (bool)hasIfnetAllocOs;
- (bool)hasIpFltrAdd;
- (bool)hasIpFltrAddOs;
- (bool)hasNexusFlowInet6Datagram;
- (bool)hasNexusFlowInet6Stream;
- (bool)hasNexusFlowInetDatagram;
- (bool)hasNexusFlowInetStream;
- (bool)hasPfAddrule;
- (bool)hasPfAddruleOs;
- (bool)hasSockAlloc;
- (bool)hasSockAllocKernel;
- (bool)hasSockAllocKernelOs;
- (bool)hasSockDomainInet;
- (bool)hasSockDomainInet6;
- (bool)hasSockDomainKey;
- (bool)hasSockDomainLocal;
- (bool)hasSockDomainMultipath;
- (bool)hasSockDomainNdrv;
- (bool)hasSockDomainOther;
- (bool)hasSockDomainRoute;
- (bool)hasSockDomainSystem;
- (bool)hasSockFltrRegister;
- (bool)hasSockFltrRegisterOs;
- (bool)hasSockInetMcastJoin;
- (bool)hasSockInetMcastJoinOs;
- (bool)hasSockNecpClientuuidCount;
- (bool)hasSockNetInet6Dgram;
- (bool)hasSockNetInet6DgramConnected;
- (bool)hasSockNetInet6DgramDns;
- (bool)hasSockNetInet6DgramNoData;
- (bool)hasSockNetInet6Stream;
- (bool)hasSockNetInetDgram;
- (bool)hasSockNetInetDgramConnected;
- (bool)hasSockNetInetDgramDns;
- (bool)hasSockNetInetDgramNoData;
- (bool)hasSockNetInetStream;
- (bool)hasTimeSinceLastReport;
- (bool)hasTimestamp;
- (bool)hasVmnetStart;
- (unsigned long long)hash;
- (long long)ifFltrAttach;
- (long long)ifFltrAttachOs;
- (bool)ifNetagentEnabled;
- (long long)ifnetAlloc;
- (long long)ifnetAllocOs;
- (long long)ipFltrAdd;
- (long long)ipFltrAddOs;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)nexusFlowInet6Datagram;
- (long long)nexusFlowInet6Stream;
- (long long)nexusFlowInetDatagram;
- (long long)nexusFlowInetStream;
- (long long)pfAddrule;
- (long long)pfAddruleOs;
- (bool)readFrom:(id)arg1;
- (void)setHasIfFltrAttach:(bool)arg1;
- (void)setHasIfFltrAttachOs:(bool)arg1;
- (void)setHasIfNetagentEnabled:(bool)arg1;
- (void)setHasIfnetAlloc:(bool)arg1;
- (void)setHasIfnetAllocOs:(bool)arg1;
- (void)setHasIpFltrAdd:(bool)arg1;
- (void)setHasIpFltrAddOs:(bool)arg1;
- (void)setHasNexusFlowInet6Datagram:(bool)arg1;
- (void)setHasNexusFlowInet6Stream:(bool)arg1;
- (void)setHasNexusFlowInetDatagram:(bool)arg1;
- (void)setHasNexusFlowInetStream:(bool)arg1;
- (void)setHasPfAddrule:(bool)arg1;
- (void)setHasPfAddruleOs:(bool)arg1;
- (void)setHasSockAlloc:(bool)arg1;
- (void)setHasSockAllocKernel:(bool)arg1;
- (void)setHasSockAllocKernelOs:(bool)arg1;
- (void)setHasSockDomainInet6:(bool)arg1;
- (void)setHasSockDomainInet:(bool)arg1;
- (void)setHasSockDomainKey:(bool)arg1;
- (void)setHasSockDomainLocal:(bool)arg1;
- (void)setHasSockDomainMultipath:(bool)arg1;
- (void)setHasSockDomainNdrv:(bool)arg1;
- (void)setHasSockDomainOther:(bool)arg1;
- (void)setHasSockDomainRoute:(bool)arg1;
- (void)setHasSockDomainSystem:(bool)arg1;
- (void)setHasSockFltrRegister:(bool)arg1;
- (void)setHasSockFltrRegisterOs:(bool)arg1;
- (void)setHasSockInetMcastJoin:(bool)arg1;
- (void)setHasSockInetMcastJoinOs:(bool)arg1;
- (void)setHasSockNecpClientuuidCount:(bool)arg1;
- (void)setHasSockNetInet6Dgram:(bool)arg1;
- (void)setHasSockNetInet6DgramConnected:(bool)arg1;
- (void)setHasSockNetInet6DgramDns:(bool)arg1;
- (void)setHasSockNetInet6DgramNoData:(bool)arg1;
- (void)setHasSockNetInet6Stream:(bool)arg1;
- (void)setHasSockNetInetDgram:(bool)arg1;
- (void)setHasSockNetInetDgramConnected:(bool)arg1;
- (void)setHasSockNetInetDgramDns:(bool)arg1;
- (void)setHasSockNetInetDgramNoData:(bool)arg1;
- (void)setHasSockNetInetStream:(bool)arg1;
- (void)setHasTimeSinceLastReport:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVmnetStart:(bool)arg1;
- (void)setIfFltrAttach:(long long)arg1;
- (void)setIfFltrAttachOs:(long long)arg1;
- (void)setIfNetagentEnabled:(bool)arg1;
- (void)setIfnetAlloc:(long long)arg1;
- (void)setIfnetAllocOs:(long long)arg1;
- (void)setIpFltrAdd:(long long)arg1;
- (void)setIpFltrAddOs:(long long)arg1;
- (void)setNexusFlowInet6Datagram:(long long)arg1;
- (void)setNexusFlowInet6Stream:(long long)arg1;
- (void)setNexusFlowInetDatagram:(long long)arg1;
- (void)setNexusFlowInetStream:(long long)arg1;
- (void)setPfAddrule:(long long)arg1;
- (void)setPfAddruleOs:(long long)arg1;
- (void)setSockAlloc:(long long)arg1;
- (void)setSockAllocKernel:(long long)arg1;
- (void)setSockAllocKernelOs:(long long)arg1;
- (void)setSockDomainInet6:(long long)arg1;
- (void)setSockDomainInet:(long long)arg1;
- (void)setSockDomainKey:(long long)arg1;
- (void)setSockDomainLocal:(long long)arg1;
- (void)setSockDomainMultipath:(long long)arg1;
- (void)setSockDomainNdrv:(long long)arg1;
- (void)setSockDomainOther:(long long)arg1;
- (void)setSockDomainRoute:(long long)arg1;
- (void)setSockDomainSystem:(long long)arg1;
- (void)setSockFltrRegister:(long long)arg1;
- (void)setSockFltrRegisterOs:(long long)arg1;
- (void)setSockInetMcastJoin:(long long)arg1;
- (void)setSockInetMcastJoinOs:(long long)arg1;
- (void)setSockNecpClientuuidCount:(long long)arg1;
- (void)setSockNetInet6Dgram:(long long)arg1;
- (void)setSockNetInet6DgramConnected:(long long)arg1;
- (void)setSockNetInet6DgramDns:(long long)arg1;
- (void)setSockNetInet6DgramNoData:(long long)arg1;
- (void)setSockNetInet6Stream:(long long)arg1;
- (void)setSockNetInetDgram:(long long)arg1;
- (void)setSockNetInetDgramConnected:(long long)arg1;
- (void)setSockNetInetDgramDns:(long long)arg1;
- (void)setSockNetInetDgramNoData:(long long)arg1;
- (void)setSockNetInetStream:(long long)arg1;
- (void)setTimeSinceLastReport:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVmnetStart:(long long)arg1;
- (long long)sockAlloc;
- (long long)sockAllocKernel;
- (long long)sockAllocKernelOs;
- (long long)sockDomainInet;
- (long long)sockDomainInet6;
- (long long)sockDomainKey;
- (long long)sockDomainLocal;
- (long long)sockDomainMultipath;
- (long long)sockDomainNdrv;
- (long long)sockDomainOther;
- (long long)sockDomainRoute;
- (long long)sockDomainSystem;
- (long long)sockFltrRegister;
- (long long)sockFltrRegisterOs;
- (long long)sockInetMcastJoin;
- (long long)sockInetMcastJoinOs;
- (long long)sockNecpClientuuidCount;
- (long long)sockNetInet6Dgram;
- (long long)sockNetInet6DgramConnected;
- (long long)sockNetInet6DgramDns;
- (long long)sockNetInet6DgramNoData;
- (long long)sockNetInet6Stream;
- (long long)sockNetInetDgram;
- (long long)sockNetInetDgramConnected;
- (long long)sockNetInetDgramDns;
- (long long)sockNetInetDgramNoData;
- (long long)sockNetInetStream;
- (unsigned long long)timeSinceLastReport;
- (unsigned long long)timestamp;
- (long long)vmnetStart;
- (void)writeTo:(id)arg1;

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
