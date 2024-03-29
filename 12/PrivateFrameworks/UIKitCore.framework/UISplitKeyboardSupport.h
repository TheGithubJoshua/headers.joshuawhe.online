<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UISplitKeyboardSupport.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UISplitKeyboardSupport.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UISplitKeyboardSupport : UIKeyboardMotionSupport <UIGestureRecognizerDelegate, UIKeyboardKeyplaneTransitionDelegate> {
    id /* block */  _bounceCompletionBlock;
    CADisplayLink * _displayLink;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTranslation;
    bool  _isSplitting;
    bool  _isTranslating;
    double  _lastBounceTime;
    double  _lastTranslationNotificationTime;
    bool  _splitLockState;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetTranslation;
    UIPanGestureRecognizer * _translateRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _translationVelocity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSplitting;
@property (nonatomic, readonly) bool isTranslating;
@property (readonly) Class superclass;

- (void)_connectController:(id)arg1;
- (void)_disconnectingController:(id)arg1;
- (void)_updateBounceAnimation:(id)arg1;
- (void)_updatedController;
- (void)bounceAnimationDidFinish;
- (void)cancelBounceAnimation;
- (bool)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (void)dealloc;
- (void)dock;
- (void)finishTransitionWithCompletion:(id /* block */)arg1;
- (bool)generateSplitNotificationForNewPlacement:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)invalidateDisplayLink;
- (bool)isSplitting;
- (bool)isTranslating;
- (void)prepareForTransition;
- (bool)startedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (void)transitionDidFinish:(bool)arg1;
- (void)translateDetected:(id)arg1;
- (void)translateToPlacement:(id)arg1 animated:(bool)arg2;
- (void)translateToPlacement:(id)arg1 quietly:(bool)arg2 animated:(bool)arg3;
- (void)undock;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
- (void)updatedControllerApplicator:(id)arg1;

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
