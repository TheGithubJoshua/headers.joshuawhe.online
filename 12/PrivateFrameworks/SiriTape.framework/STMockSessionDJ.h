<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>STMockSessionDJ.h</title>
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

/PrivateFrameworks/SiriTape.framework/STMockSessionDJ.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape (1)
 */

@interface STMockSessionDJ : NSObject {
    NSDictionary * _SBCommandsAceIDsToTimestamps;
    NSDictionary * _commandsOrderedByType;
    NSMutableArray * _completions;
    <STMockSessionDJDelegate> * _delegate;
    NSObject<OS_dispatch_semaphore> * _finishedSpeech;
    NSArray * _getResultObjectsAceIds;
    NSArray * _getResultObjectsCommands;
    NSDictionary * _indicesOfReplayCommandsByType;
    bool  _isClientFlow;
    bool  _isReplaying;
    NSDictionary * _matchedCommands;
    NSMutableOrderedSet * _newStartRequestIDs;
    NSArray * _oneWayClientBoundCommands;
    NSObject<OS_dispatch_queue> * _onewayCBqueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _recordedCBTimestamps;
    NSArray * _recordedClientBoundAceCommands;
    NSOrderedSet * _recordedRefIDs;
    NSArray * _recordedServerBoundAceCommands;
    NSArray * _recordedStartRequests;
    NSArray * _recordedStartRequestsTimestamps;
    unsigned long long  _replayIndex;
    NSObject<OS_dispatch_semaphore> * _requestCompleted;
    NSDictionary * _responseTime;
    NSObject<OS_dispatch_queue> * _responsesQueue;
}

@property (nonatomic) <STMockSessionDJDelegate> *delegate;
@property (nonatomic, readonly) bool isReplaying;

- (void).cxx_destruct;
- (id)_getEventContextFromEvent:(id)arg1;
- (void)_loadReplayAtURL:(id)arg1;
- (void)_matchRefIdsWithAceIds;
- (void)_replayFromCommand:(id)arg1 isLastRequest:(bool)arg2;
- (void)_sendCommandsFrom:(id)arg1 withTimestamps:(id)arg2 atIndex:(unsigned long long)arg3 isLastRequest:(bool)arg4;
- (void)_sendOneWayCBCommandsForStartRequest:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)_setUpObserverAction;
- (void)addFinishRequestCompletion:(id /* block */)arg1;
- (void)addStartRequestID:(id)arg1;
- (id)delegate;
- (void)handleAceObject:(id)arg1;
- (id)initWithReplayFileURL:(id)arg1;
- (bool)isReplaying;
- (void)setDelegate:(id)arg1;
- (void)startReplay;

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
