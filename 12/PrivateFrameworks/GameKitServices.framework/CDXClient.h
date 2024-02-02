<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CDXClient.h</title>
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

/PrivateFrameworks/GameKitServices.framework/CDXClient.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices (1475.1.8)
 */

@interface CDXClient : NSObject {
    struct addrinfo { int x1; int x2; int x3; int x4; unsigned int x5; char *x6; struct sockaddr {} *x7; struct addrinfo {} *x8; } * cdxMappedIPv4Addr;
    struct sockaddr_in { 
        unsigned char sin_len; 
        unsigned char sin_family; 
        unsigned short sin_port; 
        struct in_addr { 
            unsigned int s_addr; 
        } sin_addr; 
        BOOL sin_zero[8]; 
    }  cdxaddr_ipv4;
    <CDXClientDelegate> * delegate_;
    NSError * error_;
    int  fd_;
    long long  holePunchAttemptCount_;
    double  holePunchInterval_;
    unsigned long long  holePunchSID_;
    NSObject<OS_dispatch_source> * holePunchTimer_;
    unsigned short  localPort_;
    void * padding_;
    unsigned short  port_;
    id /* block */  preblobCallback_;
    bool  preblobIsUpToDate_;
    NSData * preblob_;
    unsigned long long  prevHolePunchSID_;
    NSObject<OS_dispatch_queue> * queue_;
    long long  restartCount_;
    struct __CFRunLoopSource { } * scDynamicStoreRunLoopSource_;
    struct __SCDynamicStore { } * scDynamicStore_;
    NSString * server_;
    NSMutableDictionary * sessionLookup_;
    NSObject<OS_dispatch_source> * source_;
    bool  willReconfigureShortly_;
}

@property (nonatomic) <CDXClientDelegate> *delegate;
@property (nonatomic, readonly) NSError *error;
@property (readonly) NSData *preblob;
@property (nonatomic, copy) id /* block */ preblobCallback;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedClient;

- (id)createSessionWithTicket:(id)arg1 sessionKey:(id)arg2;
- (const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)currentSockAddr;
- (unsigned char)currentSockAddrLen;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (void)handleFDEvent;
- (bool)handleHolePunchEvent;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (void)invalidateSession:(id)arg1;
- (void)mapIPv4AddrToIPv6:(struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1;
- (void)networkDidChange;
- (id)preblob;
- (id /* block */)preblobCallback;
- (id)queue;
- (void)resetHolepunchTimer;
- (void)restart;
- (void)sendHolePunch;
- (bool)sendRaw:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPreblob:(id)arg1;
- (void)setPreblobCallback:(id /* block */)arg1;
- (void)start;
- (void)startListeningOnSockets;
- (void)stopHolePunchTimer;
- (void)stopListeningOnSockets;

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