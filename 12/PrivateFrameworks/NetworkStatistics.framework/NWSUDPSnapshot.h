<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NWSUDPSnapshot.h</title>
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

/PrivateFrameworks/NetworkStatistics.framework/NWSUDPSnapshot.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics (1)
 */

@interface NWSUDPSnapshot : NWSProtocolSnapshot {
    struct nstat_udp_descriptor { 
        unsigned long long upid; 
        unsigned long long eupid; 
        unsigned long long start_timestamp; 
        unsigned long long timestamp; 
        struct activity_bitmap { 
            unsigned long long start; 
            unsigned long long bitmap[2]; 
        } activity_bitmap; 
        union { 
            struct sockaddr_in { 
                unsigned char sin_len; 
                unsigned char sin_family; 
                unsigned short sin_port; 
                struct in_addr { 
                    unsigned int s_addr; 
                } sin_addr; 
                BOOL sin_zero[8]; 
            } v4; 
            struct sockaddr_in6 { 
                unsigned char sin6_len; 
                unsigned char sin6_family; 
                unsigned short sin6_port; 
                unsigned int sin6_flowinfo; 
                struct in6_addr { 
                    union { 
                        unsigned char __u6_addr8[16]; 
                        unsigned short __u6_addr16[8]; 
                        unsigned int __u6_addr32[4]; 
                    } __u6_addr; 
                } sin6_addr; 
                unsigned int sin6_scope_id; 
            } v6; 
        } local; 
        union { 
            struct sockaddr_in { 
                unsigned char sin_len; 
                unsigned char sin_family; 
                unsigned short sin_port; 
                struct in_addr { 
                    unsigned int s_addr; 
                } sin_addr; 
                BOOL sin_zero[8]; 
            } v4; 
            struct sockaddr_in6 { 
                unsigned char sin6_len; 
                unsigned char sin6_family; 
                unsigned short sin6_port; 
                unsigned int sin6_flowinfo; 
                struct in6_addr { 
                    union { 
                        unsigned char __u6_addr8[16]; 
                        unsigned short __u6_addr16[8]; 
                        unsigned int __u6_addr32[4]; 
                    } __u6_addr; 
                } sin6_addr; 
                unsigned int sin6_scope_id; 
            } v6; 
        } remote; 
        unsigned int ifindex; 
        unsigned int rcvbufsize; 
        unsigned int rcvbufused; 
        unsigned int traffic_class; 
        unsigned int pid; 
        BOOL pname[64]; 
        unsigned int epid; 
        unsigned char uuid[16]; 
        unsigned char euuid[16]; 
        unsigned char vuuid[16]; 
        unsigned short ifnet_properties; 
        unsigned char reserved[6]; 
    }  _descriptor;
    NSString * _euuid;
    NSData * _localAddress;
    NSString * _processName;
    unsigned int  _provider;
    NSData * _remoteAddress;
    NSString * _uuid;
    NSString * _vuuid;
}

- (void).cxx_destruct;
- (bool)countsIncludeHeaderOverhead;
- (id)description;
- (int)epid;
- (unsigned long long)eupid;
- (id)euuid;
- (double)flowDuration;
- (unsigned long long)flowStartContinuousTime;
- (id)flowStartTimestamp;
- (id)initWithCounts:(const struct nstat_counts { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; }*)arg1 UDPDescriptor:(struct nstat_udp_descriptor { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct activity_bitmap { unsigned long long x_5_1_1; unsigned long long x_5_1_2[2]; } x5; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_6_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_6_1_2; } x6; union { struct sockaddr_in { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned short x_1_2_3; struct in_addr { unsigned int x_4_3_1; } x_1_2_4; BOOL x_1_2_5[8]; } x_7_1_1; struct sockaddr_in6 { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned short x_2_2_3; unsigned int x_2_2_4; struct in6_addr { union { unsigned char x_1_4_1[16]; unsigned short x_1_4_2[8]; unsigned int x_1_4_3[4]; } x_5_3_1; } x_2_2_5; unsigned int x_2_2_6; } x_7_1_2; } x7; }*)arg2 sourceIdent:(unsigned long long)arg3 seqno:(unsigned long long)arg4 provider:(unsigned int)arg5;
- (bool)interfaceAWDL;
- (bool)interfaceCellular;
- (bool)interfaceExpensive;
- (unsigned int)interfaceIndex;
- (bool)interfaceLoopback;
- (bool)interfaceUnknown;
- (bool)interfaceWifi;
- (bool)interfaceWired;
- (id)localAddress;
- (unsigned long long)networkActivityMapPart1;
- (unsigned long long)networkActivityMapPart2;
- (unsigned long long)networkActivityMapStartTime;
- (int)processID;
- (id)processName;
- (id)provider;
- (unsigned int)receiveBufferSize;
- (unsigned int)receiveBufferUsed;
- (id)remoteAddress;
- (id)traditionalDictionary;
- (unsigned int)trafficClass;
- (unsigned long long)uniqueProcessID;
- (id)uuid;
- (id)vuuid;

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