<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BKSEventFocusManager.h</title>
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

/PrivateFrameworks/BackBoardServices.framework/BKSEventFocusManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices (1.0)
 */

@interface BKSEventFocusManager : NSObject {
    NSSet * _cachedFocusedDeferralProperties;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSString * _clientIdentifier;
    NSXPCConnection * _connection;
    NSMutableSet * _currentState;
    NSObject<OS_dispatch_queue> * _focusClientQueue;
    NSMapTable * _infoPerFocusChangeObserver;
    <BKSEventFocusIPCInterface> * _ipcInterface;
    bool  _needsFlush;
    NSMutableDictionary * _pendingStatesByPriority;
    int  _pid;
    unsigned long long  _propertyUpdateGeneration;
    bool  _systemAppControlsFocusOnMainDisplay;
}

@property (nonatomic, retain) NSSet *cachedFocusedDeferralProperties;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, readonly) NSMutableSet *currentState;
@property (nonatomic, retain) NSMapTable *infoPerFocusChangeObserver;
@property (nonatomic) bool needsFlush;
@property (nonatomic, readonly) NSMutableDictionary *pendingStatesByPriority;
@property (nonatomic) int pid;
@property (nonatomic) bool systemAppControlsFocusOnMainDisplay;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_connectToEventFocusService;
- (void)_pruneSet:(id)arg1 ofDeferralsPassingTest:(id /* block */)arg2;
- (void)_rebuildPendingStatesByPriority;
- (void)_syncObserverState;
- (void)addObserver:(id)arg1;
- (id)cachedFocusedDeferralProperties;
- (id)clientIdentifier;
- (id)connection;
- (id)currentState;
- (void)dealloc;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2;
- (void)deferEventsForClientWithProperties:(id)arg1 toClientWithProperties:(id)arg2 withPriority:(int)arg3;
- (id)description;
- (void)flush;
- (void)focusedDeferralPropertiesUpdatedWithProperties:(id)arg1;
- (id)infoPerFocusChangeObserver;
- (id)init;
- (id)initWithIPCInterface:(id)arg1;
- (bool)needsFlush;
- (id)pendingStatesByPriority;
- (int)pid;
- (void)reallyFlushWithSet:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setCachedFocusedDeferralProperties:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setForegroundApplicationOnMainDisplay:(id)arg1 pid:(int)arg2;
- (void)setInfoPerFocusChangeObserver:(id)arg1;
- (void)setNeedsFlush:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setSystemAppControlsFocusOnMainDisplay:(bool)arg1;
- (bool)systemAppControlsFocusOnMainDisplay;
- (void)touchDetachedForIdentifier:(unsigned int)arg1 context:(unsigned int)arg2 pid:(int)arg3;
- (void)touchUpOccuredForIdentifier:(unsigned int)arg1 detached:(bool)arg2 context:(unsigned int)arg3 pid:(int)arg4;

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