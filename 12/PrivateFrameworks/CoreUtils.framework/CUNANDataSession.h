<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CUNANDataSession.h</title>
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

/PrivateFrameworks/CoreUtils.framework/CUNANDataSession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils (592.2)
 */

@interface CUNANDataSession : NSObject {
    id /* block */  _activateCompletion;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _identifier;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    unsigned int  _localInterfaceIndex;
    union { 
        struct sockaddr { 
            unsigned char sa_len; 
            unsigned char sa_family; 
            BOOL sa_data[14]; 
        } sa; 
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
    }  _peerAddress;
    CUNANEndpoint * _peerEndpoint;
    unsigned int  _trafficFlags;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) unsigned int localInterfaceIndex;
@property (nonatomic, readonly) union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; } peerAddress;
@property (nonatomic, retain) CUNANEndpoint *peerEndpoint;
@property (nonatomic) unsigned int trafficFlags;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)dispatchQueue;
- (id)identifier;
- (id)init;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (unsigned int)localInterfaceIndex;
- (union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; })peerAddress;
- (id)peerEndpoint;
- (void)setDispatchQueue:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setPeerEndpoint:(id)arg1;
- (void)setTrafficFlags:(unsigned int)arg1;
- (unsigned int)trafficFlags;

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