<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>__NSCFURLLocalStreamTaskFromDataTask.h</title>
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

/Frameworks/CFNetwork.framework/__NSCFURLLocalStreamTaskFromDataTask.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork (978.0.7)
 */

@interface __NSCFURLLocalStreamTaskFromDataTask : __NSCFURLLocalStreamTask <SessionConnectionDelegate> {
    struct __CFReadStream { } * _myReadToHisWrite;
    bool  _myReadToHisWriteEOF;
    struct { 
        long long domain; 
        int error; 
    }  _myReadToHisWriteError;
    bool  _myReadToHisWriteSignaled;
    struct __CFWriteStream { } * _myWriteToHisRead;
    bool  _myWriteToHisReadEOF;
    struct { 
        long long domain; 
        int error; 
    }  _myWriteToHisReadError;
    bool  _myWriteToHisReadSignaled;
    NSMutableArray * _myWriteToHisReadWork;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_onqueue_didFinishLoadingWithError:(id)arg1;
- (void)_onqueue_ioTickFromDataTask;
- (void)_onqueue_ioTickFromDataTaskConversion:(const char *)arg1;
- (void)_onqueue_stFromDataTaskReadCallback:(unsigned long long)arg1;
- (void)_onqueue_stFromDataTaskWriteCallback:(unsigned long long)arg1;
- (void)_unimp:(const char *)arg1;
- (void)connection:(id)arg1 _conditionalRequirementsChanged:(bool)arg2;
- (void)connection:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completion:(id /* block */)arg3;
- (void)connection:(id)arg1 challenged:(id)arg2 authCallback:(id /* block */)arg3;
- (void)connection:(id)arg1 didFinishCollectingMetrics:(id)arg2 completion:(id /* block */)arg3;
- (void)connection:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveConnectionCacheKey:(struct HTTPConnectionCacheKey { int (**x1)(); struct __CFAllocator {} *x2; int x3; unsigned long long x4; struct __CFString {} *x5; int x6; int x7; struct __CFDictionary {} *x8; unsigned long long x9; struct __CFDictionary {} *x10; struct shared_ptr<NetworkProxy> { struct NetworkProxy {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; struct shared_ptr<const __CFString> { struct __CFString {} *x_12_1_1; struct __shared_weak_count {} *x_12_1_2; } x12; int x13; int x14; struct unique_ptr<const __CFDictionary, Deleter_CFRelease> { struct __compressed_pair<const __CFDictionary *, Deleter_CFRelease> { struct __CFDictionary {} *x_1_2_1; } x_15_1_1; } x15; struct unique_ptr<const __CFString, Deleter_CFRelease> { struct __compressed_pair<const __CFString *, Deleter_CFRelease> { struct __CFString {} *x_1_2_1; } x_16_1_1; } x16; }*)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 completion:(id /* block */)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 completion:(id /* block */)arg3;
- (void)connection:(id)arg1 didReceiveSocketInputStream:(id)arg2 outputStream:(id)arg3;
- (void)connection:(id)arg1 needConnectedSocketToHost:(id)arg2 port:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)connection:(id)arg1 request:(id)arg2 needsNewBodyStreamCallback:(id /* block */)arg3;
- (void)connection:(id)arg1 sentBodyBytes:(id)arg2 totalBytes:(id)arg3 expectedBytes:(id)arg4;
- (void)connection:(id)arg1 waitingWithReason:(long long)arg2;
- (void)connection:(id)arg1 wasRedirected:(id)arg2 newRequest:(id)arg3 responseCallback:(id /* block */)arg4;
- (void)connection:(id)arg1 willCacheResponse:(id)arg2 responseCallback:(id /* block */)arg3;
- (void)connectionWillFinishLoading:(id)arg1;
- (void)dealloc;
- (id)initWithTask:(id)arg1 disavow:(id /* block */)arg2;
- (id)initWithTask:(id)arg1 inputStream:(id)arg2 ouptutStream:(id)arg3 disavow:(id /* block */)arg4;
- (id)initWithTask:(id)arg1 remainingInputStream:(id)arg2 remainingOutputStream:(id)arg3 disavow:(id /* block */)arg4;

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