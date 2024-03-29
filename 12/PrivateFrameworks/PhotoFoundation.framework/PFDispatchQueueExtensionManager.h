<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PFDispatchQueueExtensionManager.h</title>
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

/PrivateFrameworks/PhotoFoundation.framework/PFDispatchQueueExtensionManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation (3462.12.130)
 */

@interface PFDispatchQueueExtensionManager : NSObject <PFDispatchQueueExtending> {
    _Atomic unsigned long long  _enabledExtensionCount;
    _Atomic bool  _extensionEnabled;
    PFDispatchQueueExtension * _extensions;
    unsigned long long  _suspendCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addExtensions:(id)arg1 queue:(id)arg2;
- (id)announce:(id /* block */)arg1;
- (void)disableExtension:(id)arg1;
- (void)enableExtension:(id)arg1;
- (id)extensionMatching:(id /* block */)arg1;
- (id)extensions;
- (id)init;
- (void)installOnQueue:(id)arg1;
- (void)messageExtensions:(id)arg1 messageBlock:(id /* block */)arg2;
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(id /* block */)arg3;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (id)queue:(id)arg1 receivedDispatchAfter:(id /* block */)arg2;
- (id)queue:(id)arg1 receivedDispatchAsync:(id /* block */)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierAsync:(id /* block */)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierSync:(id /* block */)arg2;
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 async:(id /* block */)arg3;
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 notify:(id /* block */)arg3;
- (id)queue:(id)arg1 receivedDispatchSync:(id /* block */)arg2;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(id /* block */)arg3;
- (void)queue:(id)arg1 willEnqueueSync:(id)arg2;
- (void)queue:(id)arg1 willExecute:(id)arg2;
- (id)queue:(id)arg1 willTargetQueue:(id)arg2;
- (void)queueDidSuspend:(id)arg1;
- (void)queueWillResume:(id)arg1;

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
