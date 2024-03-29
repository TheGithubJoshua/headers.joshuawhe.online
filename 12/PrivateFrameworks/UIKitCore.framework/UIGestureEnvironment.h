<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIGestureEnvironment.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIGestureEnvironment.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIGestureEnvironment : NSObject {
    NSMutableArray * _delayedPresses;
    NSMutableArray * _delayedPressesToSend;
    NSMutableArray * _delayedTouches;
    NSMutableArray * _delayedTouchesToSend;
    UIGestureGraph * _dependencyGraph;
    NSMutableArray * _dirtyGestureRecognizers;
    bool  _dirtyGestureRecognizersUnsorted;
    struct __CFRunLoopObserver { } * _gestureEnvironmentUpdateObserver;
    NSMutableSet * _gestureRecognizersNeedingRemoval;
    NSMutableSet * _gestureRecognizersNeedingReset;
    NSMutableSet * _gestureRecognizersNeedingUpdate;
    bool  _isUpdatingGestureEnvironment;
    NSMapTable * _nodesByGestureRecognizer;
    NSMutableArray * _preUpdateActions;
    bool  _updateExclusivity;
}

@property (nonatomic, readonly) bool _hasGesturesNeedingUpdate;

- (void).cxx_destruct;
- (bool)_activeRelationshipsForGestureRecognizer:(id)arg1;
- (void)_addDynamicRequirementForGestureRecognizer:(id)arg1 requiringGestureRecognizerToFail:(id)arg2;
- (void)_addPreUpdateAction:(id /* block */)arg1;
- (void)_cancelGestureRecognizers:(id)arg1;
- (void)_cancelPresses:(id)arg1 event:(id)arg2;
- (void)_cancelTouches:(id)arg1 event:(id)arg2;
- (void)_clearGestureIsDirty:(id)arg1;
- (void)_clearGestureNeedsUpdate:(id)arg1;
- (id)_delayedPressForPress:(id)arg1 event:(id)arg2;
- (id)_delayedTouchForTouch:(id)arg1 event:(id)arg2;
- (void)_deliverEvent:(id)arg1 toGestureRecognizers:(id)arg2 usingBlock:(id /* block */)arg3;
- (void)_enqueueDelayedPressToSend:(id)arg1;
- (void)_enqueueDelayedTouchToSend:(id)arg1;
- (void)_forceUpdateForSpringBoardOnly;
- (void)_gestureNeedsReset:(id)arg1;
- (id)_gestureRecognizerForNode:(id)arg1;
- (id)_graphDictionary:(bool)arg1;
- (bool)_hasGesturesNeedingUpdate;
- (void)_markGestureAsDirty:(id)arg1;
- (id)_nodeForGestureRecognizer:(id)arg1;
- (void)_notifyDependentsGestureRecognizerHasCompleted:(id)arg1;
- (void)_performTouchContinuationWithOverrideHitTestedView:(id)arg1;
- (bool)_pressesBeganWasDelayedForPress:(id)arg1;
- (void)_queueGestureRecognizerForResetIfFinished:(id)arg1;
- (void)_queueGestureRecognizersForResetIfFinished:(id)arg1;
- (void)_removeDelayedPress:(id)arg1;
- (void)_removeDelayedTouch:(id)arg1;
- (void)_removeNodeFromGestureGraph:(id)arg1;
- (void)_runPreUpdateActions;
- (bool)_touchesBeganWasDelayedForTouch:(id)arg1;
- (void)_updateForEvent:(id)arg1 window:(id)arg2;
- (void)addGestureRecognizer:(id)arg1;
- (void)addRequirementForGestureRecognizer:(id)arg1 requiringGestureRecognizerToFail:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 requiresGestureRecognizerToFail:(id)arg2;
- (id)init;
- (void)removeGestureRecognizer:(id)arg1;
- (void)removeRequirementForGestureRecognizer:(id)arg1 requiringGestureRecognizerToFail:(id)arg2;
- (void)setGestureNeedsUpdate:(id)arg1;
- (void)setNeedsExclusivityUpdate;
- (bool)unmetRequirementsForGestureRecognizer:(id)arg1;

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
