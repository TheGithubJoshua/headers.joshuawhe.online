<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MTTimerServer.h</title>
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

/PrivateFrameworks/MobileTimer.framework/MTTimerServer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer (1)
 */

@interface MTTimerServer : NSObject <MTAgentDiagnosticDelegate, MTTimerObserver, MTTimerServer> {
    MTXPCConnectionListenerProvider * _connectionListenerProvider;
    <NAScheduler> * _serializer;
    MTTimerStorage * _storage;
    bool  _systemReady;
}

@property (nonatomic, readonly) MTXPCConnectionListenerProvider *connectionListenerProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, readonly) MTTimerStorage *storage;
@property (readonly) Class superclass;
@property (getter=isSystemReady, nonatomic, readonly) bool systemReady;

- (void).cxx_destruct;
- (bool)_isSystemReady;
- (id)_systemNotReadyError;
- (void)addTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)checkIn;
- (id)connectionListenerProvider;
- (void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)gatherDiagnostics;
- (void)getTimersWithCompletion:(id /* block */)arg1;
- (void)handleSystemReady;
- (id)initWithStorage:(id)arg1;
- (id)initWithStorage:(id)arg1 connectionListenerProvider:(id)arg2;
- (bool)isSystemReady;
- (void)nextTimerDidChange:(id)arg1;
- (void)printDiagnostics;
- (void)removeTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)serializer;
- (void)setSerializer:(id)arg1;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (void)startListening;
- (void)stopListening;
- (id)storage;
- (void)updateTimer:(id)arg1 withCompletion:(id /* block */)arg2;

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
