<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UISelectionGrabber.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UISelectionGrabber.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UISelectionGrabber : UIView {
    int  _applicationDeactivationReason;
    bool  m_activeFlattened;
    bool  m_alertFlattened;
    bool  m_animating;
    UISelectionGrabberDot * m_dotView;
    bool  m_isDotted;
    bool  m_navigationTransitionFlattened;
    long long  m_orientation;
}

@property (nonatomic) bool activeFlattened;
@property (nonatomic) bool alertFlattened;
@property (nonatomic) bool animating;
@property (nonatomic, readonly) UITextRangeView *hostView;
@property (nonatomic) bool isDotted;
@property (nonatomic) bool navigationTransitionFlattened;
@property (nonatomic) long long orientation;

+ (id)_grabberDot;

- (void).cxx_destruct;
- (id)_dotView;
- (bool)activeFlattened;
- (bool)alertFlattened;
- (void)animateGrabberInWithCompletion:(id /* block */)arg1;
- (void)animateGrabberOutWithCompletion:(id /* block */)arg1;
- (bool)animating;
- (bool)autoscrolled;
- (void)canExpandAfterAlert:(id)arg1;
- (void)canExpandAfterBecomeActive:(id)arg1;
- (void)canExpandAfterNavigationTransition:(id)arg1;
- (bool)clipDot:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (bool)dotIsVisibleInDocument:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)hostView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)inputViewIsChanging;
- (bool)isDotted;
- (bool)isPointedDown;
- (bool)isPointedLeft;
- (bool)isPointedRight;
- (bool)isPointedUp;
- (bool)isRotating;
- (bool)isScaling;
- (bool)isScrolling;
- (bool)isVertical;
- (void)mustFlattenForAlert:(id)arg1;
- (void)mustFlattenForNavigationTransition:(id)arg1;
- (void)mustFlattenForResignActive:(id)arg1;
- (bool)navigationTransitionFlattened;
- (long long)orientation;
- (void)removeFromSuperview;
- (void)saveDeactivationReason:(id)arg1;
- (bool)scroller:(id)arg1 fullyContainSelectionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setActiveFlattened:(bool)arg1;
- (void)setAlertFlattened:(bool)arg1;
- (void)setAnimating:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsDotted:(bool)arg1;
- (void)setNavigationTransitionFlattened:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)transitionDot:(long long)arg1 completion:(id /* block */)arg2;
- (void)updateDot;

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