<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIViewControllerBuiltinTransitionViewAnimator.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIViewControllerBuiltinTransitionViewAnimator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    id  _delegate;
    UIView * _fromView;
    bool  _removeFromView;
    UIView * _toView;
    int  _transition;
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIView *fromView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool removeFromView;
@property (readonly) Class superclass;
@property (nonatomic) UIView *toView;
@property (nonatomic) int transition;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_adjustOrigin:(struct CGPoint { double x1; double x2; })arg1 givenOtherOrigin:(struct CGPoint { double x1; double x2; })arg2 forTransition:(int)arg3;
- (void)_prepareKeyboardForTransition:(int)arg1 fromView:(id)arg2;
- (void)animateTransition:(id)arg1;
- (id)delegate;
- (double)durationForTransition:(int)arg1;
- (id)fromView;
- (id)initWithTransition:(int)arg1;
- (bool)removeFromView;
- (void)setDelegate:(id)arg1;
- (void)setFromView:(id)arg1;
- (void)setRemoveFromView:(bool)arg1;
- (void)setToView:(id)arg1;
- (void)setTransition:(int)arg1;
- (id)toView;
- (int)transition;
- (double)transitionDuration:(id)arg1;
- (struct CGPoint { double x1; double x2; })transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGPoint { double x1; double x2; })transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (struct CGPoint { double x1; double x2; })transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(bool)arg4;
- (void)transitionViewDidStart:(id)arg1;
- (bool)transitionViewShouldUseViewControllerCallbacks;

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