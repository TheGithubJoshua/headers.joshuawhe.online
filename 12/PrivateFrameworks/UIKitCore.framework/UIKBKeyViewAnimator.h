<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIKBKeyViewAnimator.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIKBKeyViewAnimator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIKBKeyViewAnimator : NSObject <CAAnimationDelegate> {
    bool  _disabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } primaryGlyphNormalizedExitRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } secondaryGlyphNormalizedExitRect;
@property (nonatomic, readonly) bool shouldPurgeKeyViews;
@property (readonly) Class superclass;

+ (id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;
+ (id)normalizedUnwindOpacityAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;

- (void)_fadeInKeyView:(id)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (void)_fadeOutKeyView:(id)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (Class)_keyViewClassForSpecialtyKey:(id)arg1;
- (double)delayedDeactivationTimeForKeyView:(id)arg1;
- (bool)disabled;
- (void)endTransitionForKeyView:(id)arg1;
- (Class)keyViewClassForKey:(id)arg1 traits:(id)arg2;
- (id)keycapAlternateDualStringTransform:(id)arg1;
- (id)keycapAlternateTransform:(id)arg1;
- (id)keycapLeftSelectLeftTransform;
- (id)keycapLeftSelectPrimaryTransform;
- (id)keycapLeftSelectRightTransform;
- (id)keycapLeftTransform;
- (id)keycapMeshTransformFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)keycapNullTransform;
- (id)keycapPrimaryDualStringTransform:(id)arg1;
- (id)keycapPrimaryExitTransform;
- (id)keycapPrimaryTransform;
- (id)keycapRightSelectLeftTransform;
- (id)keycapRightSelectPrimaryTransform;
- (id)keycapRightSelectRightTransform;
- (id)keycapRightTransform;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })primaryGlyphNormalizedExitRect;
- (void)reset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })secondaryGlyphNormalizedExitRect;
- (void)setDisabled:(bool)arg1;
- (bool)shouldAssertCurrentKeyState:(id)arg1;
- (bool)shouldPurgeKeyViews;
- (bool)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3;
- (void)transitionEndedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2;
- (void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(id /* block */)arg4;
- (void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(id /* block */)arg4;
- (void)transitionStartedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 toLeft:(bool)arg3;
- (void)updateTransitionForKeyView:(id)arg1 normalizedDragSize:(struct CGSize { double x1; double x2; })arg2;

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
