<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_FBSystemGestureManager.h</title>
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

/PrivateFrameworks/FrontBoard.framework/_FBSystemGestureManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard (486.52)
 */

@interface _FBSystemGestureManager : NSObject <FBExclusiveTouchGestureRecognizerDelegate, UIGestureRecognizerDelegate> {
    bool  _achievedMaximumMovement;
    UIGestureRecognizer * _catchEdgeSwipeFailureGesture;
    bool  _didProcessPendingSwipeBegan;
    bool  _didSeeExclusiveTouchBegan;
    UIGestureRecognizer * _exclusiveTouchGesture;
    NSMutableSet * _externalEdgeSwipeGestures;
    NSMutableSet * _externalGestures;
    NSMutableSet * _internalGestures;
    UIGestureRecognizer * _pendingSwipeGesture;
    NSMutableSet * _recognizingGestures;
    FBSDisplayIdentity * _rootDisplayIdentity;
    BKSTouchStream * _touchStream;
}

@property (nonatomic) bool achievedMaximumMovement;
@property (nonatomic, retain) UIGestureRecognizer *catchEdgeSwipeFailureGesture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didProcessPendingSwipeBegan;
@property (nonatomic) bool didSeeExclusiveTouchBegan;
@property (nonatomic, retain) UIGestureRecognizer *exclusiveTouchGesture;
@property (nonatomic, readonly, copy) NSSet *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIGestureRecognizer *pendingSwipeGesture;
@property (readonly) Class superclass;
@property (nonatomic, retain) BKSTouchStream *touchStream;

- (void).cxx_destruct;
- (void)_addInternalGesturesToView:(id)arg1;
- (void)_catchSwipeFailureGestureChanged:(id)arg1;
- (unsigned char)_dispatchModeForExternalGestureCompletion;
- (void)_exclusiveTouchGestureChanged:(id)arg1;
- (void)_exclusiveTouchGestureDidTerminate:(id)arg1;
- (void)_externalGestureRecognizerChanged:(id)arg1;
- (void)_failedPendingSwipe;
- (void)_handleTooMuchMovementWithLastTouchTimestamp:(double)arg1;
- (void)_pendingSwipeGestureChanged:(id)arg1;
- (void)_pendingSwipeGestureDidBegin:(id)arg1;
- (void)_pendingSwipeGestureDidTerminate:(id)arg1;
- (void)_removeInternalGestures;
- (bool)achievedMaximumMovement;
- (void)addGestureRecognizer:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2;
- (id)catchEdgeSwipeFailureGesture;
- (void)dealloc;
- (id)description;
- (bool)didProcessPendingSwipeBegan;
- (bool)didSeeExclusiveTouchBegan;
- (id)exclusiveTouchGesture;
- (void)exclusiveTouchGestureRecognizer:(id)arg1 achievedMaximumAbsoluteAccumulatedMovement:(bool)arg2 timestamp:(double)arg3;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)gestureRecognizers;
- (id)initWithRootDisplayIdentity:(id)arg1;
- (id)pendingSwipeGesture;
- (void)removeGestureRecognizer:(id)arg1;
- (void)setAchievedMaximumMovement:(bool)arg1;
- (void)setCatchEdgeSwipeFailureGesture:(id)arg1;
- (void)setDidProcessPendingSwipeBegan:(bool)arg1;
- (void)setDidSeeExclusiveTouchBegan:(bool)arg1;
- (void)setExclusiveTouchGesture:(id)arg1;
- (void)setPendingSwipeGesture:(id)arg1;
- (void)setTouchStream:(id)arg1;
- (id)touchStream;
- (id)windowForSystemGestures;

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