<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CUTCPConnection.h</title>
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

/PrivateFrameworks/CoreUtils.framework/CUTCPConnection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils (592.2)
 */

@interface CUTCPConnection : NSObject <CUReadWriteRequestable> {
    bool  _activateCalled;
    id /* block */  _activateCompletion;
    double  _connectTimeoutSecs;
    struct AsyncConnection { } * _connector;
    double  _dataTimeoutSecs;
    int  _defaultPort;
    CUBonjourDevice * _destinationBonjour;
    NSString * _destinationString;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    unsigned int  _flags;
    id /* block */  _flowControlChangedHandler;
    int  _flowControlState;
    unsigned long long  _ifExtendedFlags;
    unsigned int  _ifFlags;
    unsigned int  _ifIndex;
    unsigned int  _ifMedia;
    BOOL  _ifName;
    NSString * _interfaceName;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    int  _keepAliveSeconds;
    NSString * _label;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    CUNANDataSession * _nanDataSession;
    CUNetLinkEndpoint * _netLinkEndpoint;
    CUNetLinkManager * _netLinkManager;
    unsigned int  _netTransportType;
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
    }  _peerAddr;
    CUReadRequest * _readRequestCurrent;
    struct NSMutableArray { Class x1; } * _readRequests;
    NSObject<OS_dispatch_source> * _readSource;
    unsigned char  _readSuspended;
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
    }  _selfAddr;
    id /* block */  _serverInvalidationHandler;
    int  _socketFD;
    unsigned int  _trafficFlags;
    unsigned int  _trafficFlagsApplied;
    bool  _trafficFlagsPending;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    CUWiFiManager * _wifiTrafficManager;
    CUWriteRequest * _writeRequestCurrent;
    struct NSMutableArray { Class x1; } * _writeRequests;
    NSObject<OS_dispatch_source> * _writeSource;
    unsigned char  _writeSuspended;
}

@property (nonatomic) double connectTimeoutSecs;
@property (nonatomic) double dataTimeoutSecs;
@property (nonatomic) int defaultPort;
@property (nonatomic, retain) CUBonjourDevice *destinationBonjour;
@property (nonatomic, copy) NSString *destinationString;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic) unsigned int flags;
@property (nonatomic, copy) id /* block */ flowControlChangedHandler;
@property (nonatomic, readonly) int flowControlState;
@property (nonatomic, copy) NSString *interfaceName;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic) int keepAliveSeconds;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, retain) CUNANDataSession *nanDataSession;
@property (nonatomic, retain) CUNetLinkManager *netLinkManager;
@property (nonatomic, readonly) unsigned int netTransportType;
@property (nonatomic, readonly) union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; } peerAddr;
@property (nonatomic, readonly) union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; } selfAddr;
@property (nonatomic, copy) id /* block */ serverInvalidationHandler;
@property (nonatomic) int socketFD;
@property (nonatomic) unsigned int trafficFlags;

- (void).cxx_destruct;
- (void)_abortReadsWithError:(id)arg1;
- (void)_abortWritesWithError:(id)arg1;
- (bool)_activateDirectAndReturnError:(id*)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)_invalidate;
- (void)_invalidated;
- (void)_netLinkStateChanged;
- (void)_prepareReadRequest:(id)arg1;
- (bool)_prepareWriteRequest:(id)arg1 error:(id*)arg2;
- (void)_processReads:(bool)arg1;
- (void)_processWrites:(bool)arg1;
- (bool)_readStatus;
- (bool)_readableData;
- (bool)_setupIOAndReturnError:(id*)arg1;
- (bool)_startConnectingToBonjourDevice:(id)arg1 error:(id*)arg2;
- (bool)_startConnectingToDestination:(id)arg1 error:(id*)arg2;
- (void)_updateTrafficRegistration;
- (bool)activateDirectAndReturnError:(id*)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (double)connectTimeoutSecs;
- (double)dataTimeoutSecs;
- (void)dealloc;
- (int)defaultPort;
- (id)description;
- (id)destinationBonjour;
- (id)destinationString;
- (id)dispatchQueue;
- (id /* block */)errorHandler;
- (unsigned int)flags;
- (id /* block */)flowControlChangedHandler;
- (int)flowControlState;
- (id)init;
- (id)interfaceName;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (int)keepAliveSeconds;
- (id)label;
- (id)nanDataSession;
- (id)netLinkManager;
- (unsigned int)netTransportType;
- (union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; })peerAddr;
- (void)readWithRequest:(id)arg1;
- (union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; })selfAddr;
- (id /* block */)serverInvalidationHandler;
- (void)setConnectTimeoutSecs:(double)arg1;
- (void)setDataTimeoutSecs:(double)arg1;
- (void)setDefaultPort:(int)arg1;
- (void)setDestinationBonjour:(id)arg1;
- (void)setDestinationString:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setFlowControlChangedHandler:(id /* block */)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setKeepAliveSeconds:(int)arg1;
- (void)setLabel:(id)arg1;
- (void)setNanDataSession:(id)arg1;
- (void)setNetLinkManager:(id)arg1;
- (void)setServerInvalidationHandler:(id /* block */)arg1;
- (void)setSocketFD:(int)arg1;
- (void)setTrafficFlags:(unsigned int)arg1;
- (int)socketFD;
- (unsigned int)trafficFlags;
- (void)writeEndOfDataWithCompletion:(id /* block */)arg1;
- (void)writeWithRequest:(id)arg1;

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
