<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>QLTransitionController.h</title>
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

/Frameworks/QuickLook.framework/QLTransitionController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook (1)
 */

@interface QLTransitionController : NSObject <QLTransitionControllerProtocol, UIViewControllerAnimatedTransitioning> {
    UIViewController<QLCustomTransitioning> * _animatedController;
    UINavigationController * _disabledNavigationController;
    double  _duration;
    QLTransitionContext * _quickLookTransitionContext;
    bool  _showing;
    id /* block */  _startTransitionBlock;
    UIView * _transitionBackgroundView;
    <UIViewControllerContextTransitioning> * _transitionContext;
    id  _transitionDriver;
    unsigned long long  _transitionState;
}

@property (readonly) UIViewController<QLCustomTransitioning> *animatedController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration;
@property (readonly) unsigned long long hash;
@property (readonly) UIViewController *presenterViewController;
@property (readonly) QLPreviewController *previewController;
@property (retain) QLTransitionContext *quickLookTransitionContext;
@property bool showing;
@property (readonly) Class superclass;
@property <UIViewControllerContextTransitioning> *transitionContext;
@property (readonly) id transitionDriver;
@property unsigned long long transitionState;

- (void).cxx_destruct;
- (void)_completeBackgroundTransition:(bool)arg1;
- (void)_completeOverlayTransition:(bool)arg1;
- (void)_performStartBlockIfNeeded;
- (void)_performTransition;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; })_requiredVisualStateTransitions;
- (void)_updateBackgroundTransitionWithProgress:(double)arg1;
- (void)_updateOverlayTransitionWithProgress:(double)arg1;
- (void)_view:(id)arg1 applyFrameFromTransitionContextAsFinalFrame:(bool)arg2 isToView:(bool)arg3;
- (void)animateTransition:(id)arg1;
- (id)animatedController;
- (void)completeTransition:(bool)arg1;
- (void)completeTransition:(bool)arg1 withDuration:(double)arg2;
- (double)duration;
- (id)presenterViewController;
- (id)previewController;
- (id)quickLookTransitionContext;
- (void)setDuration:(double)arg1;
- (void)setQuickLookTransitionContext:(id)arg1;
- (void)setShowing:(bool)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setTransitionState:(unsigned long long)arg1;
- (void)setUpWithTransitionContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)showing;
- (void)tearDownTransition:(bool)arg1;
- (id)transitionContext;
- (id)transitionDriver;
- (double)transitionDuration:(id)arg1;
- (unsigned long long)transitionState;
- (void)updateTransitionWithProgress:(double)arg1;

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
