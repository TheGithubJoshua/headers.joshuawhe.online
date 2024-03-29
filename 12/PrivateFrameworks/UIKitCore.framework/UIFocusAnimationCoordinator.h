<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIFocusAnimationCoordinator.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIFocusAnimationCoordinator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIFocusAnimationCoordinator : NSObject {
    long long  _activeFocusAnimation;
    UIFocusUpdateContext * _focusUpdateContext;
    NSMutableArray * _focusingAnimations;
    NSMutableArray * _focusingCompletions;
    _UIFocusAnimationConfiguration * _focusingConfiguration;
    NSMutableArray * _legacyFocusingAnimations;
    NSMutableArray * _legacyUnfocusingAnimations;
    bool  _locked;
    NSMutableArray * _unfocusingAnimations;
    NSMutableArray * _unfocusingCompletions;
    _UIFocusAnimationConfiguration * _unfocusingConfiguration;
}

@property (getter=_activeAnimationDuration, nonatomic, readonly) double activeAnimationDuration;
@property (getter=_activeConfiguration, nonatomic, readonly, copy) _UIFocusAnimationConfiguration *activeConfiguration;
@property (nonatomic, readonly) long long activeFocusAnimation;
@property (getter=_animationDelay, nonatomic, readonly) double animationDelay;
@property (getter=_animationOptions, nonatomic, readonly) unsigned long long animationOptions;
@property (getter=_focusUpdateContext, nonatomic, readonly) UIFocusUpdateContext *focusUpdateContext;
@property (getter=_focusingAnimationDuration, nonatomic, readonly) double focusingAnimationDuration;
@property (nonatomic, readonly) NSMutableArray *focusingAnimations;
@property (nonatomic, readonly) NSMutableArray *focusingCompletions;
@property (nonatomic, retain) _UIFocusAnimationConfiguration *focusingConfiguration;
@property (nonatomic, readonly) NSMutableArray *legacyFocusingAnimations;
@property (nonatomic, readonly) NSMutableArray *legacyUnfocusingAnimations;
@property (getter=_isLocked, nonatomic, readonly) bool locked;
@property (getter=_unfocusingAnimationDuration, nonatomic, readonly) double unfocusingAnimationDuration;
@property (nonatomic, readonly) NSMutableArray *unfocusingAnimations;
@property (nonatomic, readonly) NSMutableArray *unfocusingCompletions;
@property (nonatomic, retain) _UIFocusAnimationConfiguration *unfocusingConfiguration;
@property (getter=_unfocusingRepositionAnimationDuration, nonatomic, readonly) double unfocusingRepositionAnimationDuration;

+ (id)_focusAnimationCoordinatorForAnimationType:(long long)arg1 withConfiguration:(id)arg2 inContext:(id)arg3;
+ (id)_focusingAnimationCoordinatorWithConfiguration:(id)arg1 inContext:(id)arg2;
+ (id)_unfocusingAnimationCoordinatorWithConfiguration:(id)arg1 inContext:(id)arg2;

- (void).cxx_destruct;
- (double)_activeAnimationDuration;
- (id)_activeConfiguration;
- (void)_animate;
- (void)_animateFocusAnimation:(long long)arg1;
- (double)_animationDelay;
- (unsigned long long)_animationOptions;
- (void)_cancelFocusAnimation:(long long)arg1;
- (id)_configurationForFocusAnimation:(long long)arg1;
- (void)_configureWithFocusUpdateContext:(id)arg1;
- (void)_consumeBlocks:(id)arg1;
- (void)_consumeBlocks:(id)arg1 withAnimationContext:(id)arg2;
- (id)_focusUpdateContext;
- (double)_focusingAnimationDuration;
- (id)_initWithFocusUpdateContext:(id)arg1;
- (bool)_isLocked;
- (void)_prepareForFocusAnimation:(long long)arg1;
- (void)_setConfiguration:(id)arg1 forFocusAnimation:(long long)arg2;
- (double)_unfocusingAnimationDuration;
- (double)_unfocusingRepositionAnimationDuration;
- (long long)activeFocusAnimation;
- (void)addCoordinatedAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)addCoordinatedAnimationsForAnimation:(long long)arg1 animations:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)addCoordinatedFocusingAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)addCoordinatedUnfocusingAnimations:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)focusingAnimations;
- (id)focusingCompletions;
- (id)focusingConfiguration;
- (id)init;
- (id)legacyFocusingAnimations;
- (id)legacyUnfocusingAnimations;
- (void)setFocusingConfiguration:(id)arg1;
- (void)setUnfocusingConfiguration:(id)arg1;
- (id)unfocusingAnimations;
- (id)unfocusingCompletions;
- (id)unfocusingConfiguration;

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
