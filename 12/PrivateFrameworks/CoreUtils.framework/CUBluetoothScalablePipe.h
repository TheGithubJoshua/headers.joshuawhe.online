<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CUBluetoothScalablePipe.h</title>
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

/PrivateFrameworks/CoreUtils.framework/CUBluetoothScalablePipe.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils (592.2)
 */

@interface CUBluetoothScalablePipe : NSObject <CBScalablePipeManagerDelegate, CUReadWriteRequestable> {
    struct channel { } * _btChannel;
    bool  _btEndpointRegistered;
    bool  _btEndpointRegistering;
    int  _btPeerHostState;
    bool  _btPeerKVORegistered;
    CBScalablePipe * _btPipe;
    CBScalablePipeManager * _btPipeManager;
    char * _btReadLeftoverBuf;
    char * _btReadLeftoverEnd;
    unsigned long long  _btReadLeftoverMaxLen;
    char * _btReadLeftoverPtr;
    struct channel_ring_desc { } * _btReadRing;
    struct channel_ring_desc { } * _btWriteRing;
    int  _channelFD;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _identifier;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    int  _peerHostState;
    id /* block */  _peerHostStateChangedHandler;
    NSUUID * _peerIdentifier;
    int  _priority;
    CUReadRequest * _readRequestCurrent;
    struct NSMutableArray { Class x1; } * _readRequests;
    NSObject<OS_dispatch_source> * _readSource;
    bool  _readSuspended;
    int  _state;
    id /* block */  _stateChangedHandler;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    CUWriteRequest * _writeRequestCurrent;
    struct NSMutableArray { Class x1; } * _writeRequests;
    NSObject<OS_dispatch_source> * _writeSource;
    bool  _writeSuspended;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) int peerHostState;
@property (nonatomic, copy) id /* block */ peerHostStateChangedHandler;
@property (nonatomic, copy) NSUUID *peerIdentifier;
@property (nonatomic) int priority;
@property (nonatomic, readonly) int state;
@property (nonatomic, copy) id /* block */ stateChangedHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_abortReadsWithError:(id)arg1;
- (void)_abortWritesWithError:(id)arg1;
- (void)_completeReadRequest:(id)arg1 error:(id)arg2;
- (void)_completeWriteRequest:(id)arg1 error:(id)arg2;
- (void)_ensureStarted;
- (void)_ensureStopped:(id)arg1;
- (void)_handleBTPeerHostStateChanged;
- (void)_invalidate;
- (void)_prepareReadRequest:(id)arg1;
- (bool)_prepareWriteRequest:(id)arg1 error:(id*)arg2;
- (void)_processReads;
- (void)_processWrites;
- (int)_readBytes:(char *)arg1 minLen:(unsigned long long)arg2 maxLen:(unsigned long long)arg3 offset:(unsigned long long*)arg4;
- (void)_setupPipe;
- (void)_tearDownPipe;
- (unsigned long long)_writeBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (int)_writeIOArray:(struct iovec {}**)arg1 ioCount:(int*)arg2;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (id)identifier;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)peerHostState;
- (id /* block */)peerHostStateChangedHandler;
- (id)peerIdentifier;
- (int)priority;
- (void)readWithRequest:(id)arg1;
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;
- (void)scalablePipeManagerDidUpdateState:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setPeerHostStateChangedHandler:(id /* block */)arg1;
- (void)setPeerIdentifier:(id)arg1;
- (void)setPriority:(int)arg1;
- (void)setStateChangedHandler:(id /* block */)arg1;
- (int)state;
- (id /* block */)stateChangedHandler;
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
