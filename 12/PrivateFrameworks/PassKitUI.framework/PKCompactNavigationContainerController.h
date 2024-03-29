<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKCompactNavigationContainerController.h</title>
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

/PrivateFrameworks/PassKitUI.framework/PKCompactNavigationContainerController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI (1)
 */

@interface PKCompactNavigationContainerController : UIViewController <PKContentContainerObserver, UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate> {
    PKCompactNavigationContainedNavigationController * _containedNavigationController;
    <PKCompactNavigationContainerControllerDelegate> * _delegate;
    <UICoordinateSpace> * _exclusionCoordinateSpace;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _exclusionRect;
    UIViewController * _pendingTopVC;
    unsigned long long  _pendingTopVCIdentifier;
    UIViewController * _presentationContextVC;
    bool  _presentingNavigationController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _statusBarFrame;
    unsigned long long  _style;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UIViewController * _topVC;
    struct { 
        struct CGSize { 
            double width; 
            double height; 
        } preferredContentSize; 
        double minimumNavigationHeight; 
        bool isRoot; 
    }  _topVCInfo;
    unsigned long long  _updateChildViewControllerSizeCounter;
}

@property (nonatomic, readonly) PKCompactNavigationContainedNavigationController *containedNavigationController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKCompactNavigationContainerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <UICoordinateSpace> *exclusionCoordinateSpace;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } exclusionRect;
@property (readonly) unsigned long long hash;
@property (getter=isPresentingNavigationController, nonatomic) bool presentingNavigationController;
@property (nonatomic, readonly) unsigned long long style;
@property (readonly) Class superclass;

+ (id)dimmingColor;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; })_infoForViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })_navigationControllerSizeForChildViewControllerInfo:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; })arg1 withCurrentInfo:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_targetNavigationControllerFrameForInfo:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; })arg1;
- (void)_updateTopViewController:(id)arg1 animated:(bool)arg2;
- (void)_updateTopViewControllerAsync:(id)arg1 animated:(bool)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (struct CGSize { double x1; double x2; })childViewControllerPreferredContentSizeForSize:(struct CGSize { double x1; double x2; })arg1 isRoot:(bool)arg2;
- (struct CGSize { double x1; double x2; })childViewControllerSizeForNavigationControllerSize:(struct CGSize { double x1; double x2; })arg1;
- (id)containedNavigationController;
- (void)contentContainer:(id)arg1 preferredContentSizeDidChangeForChildContentContainer:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)exclusionCoordinateSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })exclusionRect;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithNavigationController:(id)arg1;
- (id)initWithNavigationController:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isPresentingNavigationController;
- (void)loadView;
- (struct CGSize { double x1; double x2; })modalPresentationSize;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (struct CGSize { double x1; double x2; })navigationControllerSizeForChildViewControllerPreferredContentSize:(struct CGSize { double x1; double x2; })arg1 isRoot:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setExclusionRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withCoordinateSpace:(id)arg2;
- (void)setPresentingNavigationController:(bool)arg1;
- (void)statusBarFrameWillChange:(id)arg1;
- (unsigned long long)style;
- (void)tapGestureRecognized:(id)arg1;
- (bool)updateChildViewControllerSizeAnimated:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

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
