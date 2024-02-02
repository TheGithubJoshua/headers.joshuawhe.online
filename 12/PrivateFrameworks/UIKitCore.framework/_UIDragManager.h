<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIDragManager.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIDragManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIDragManager : NSObject {
    CAContext * _dragImageContext;
    NSArray * _dragSessionDestinations;
    NSArray * _dragSessionSources;
    long long  _pendingSessionRequests;
    NSMutableArray * _pendingSessionRequestsCompletionBlocks;
    UIScreen * _screen;
    _UIDruidSourceWarmUpConnection * _warmUpConnection;
}

@property (nonatomic, readonly) CAContext *dragImageContext;
@property (nonatomic, copy) NSArray *dragSessionDestinations;
@property (nonatomic, copy) NSArray *dragSessionSources;
@property (nonatomic, readonly) UIScreen *screen;

- (void).cxx_destruct;
- (void)_willAddDeactivationReason:(id)arg1;
- (id)beginDragWithItems:(id)arg1 dataOwner:(long long)arg2 touches:(id)arg3 orInitialCentroid:(struct CGPoint { double x1; double x2; })arg4 requiredContextIds:(id)arg5 shouldPerformHitTesting:(bool)arg6 sourceView:(id)arg7 accessibilityEndpoint:(id)arg8;
- (void)deleteSlots:(id)arg1;
- (id)dragDestinationWithEvent:(id)arg1;
- (id)dragImageContext;
- (id)dragSessionDestinations;
- (id)dragSessionSources;
- (bool)hasPendingSessionRequests;
- (id)initWithScreen:(id)arg1;
- (void)performAfterCompletingPendingSessionRequests:(id /* block */)arg1;
- (void)performPendingSessionCompletionBlocksIfPossible;
- (id)screen;
- (void)sessionDestinationDidEnd:(id)arg1;
- (void)sessionSourceDidEnd:(id)arg1;
- (id)sessionSourceWithIdentifier:(unsigned int)arg1;
- (void)setDragSessionDestinations:(id)arg1;
- (void)setDragSessionSources:(id)arg1;
- (unsigned int)uploadImage:(struct CGImage { }*)arg1;
- (void)warmUpDruid;

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