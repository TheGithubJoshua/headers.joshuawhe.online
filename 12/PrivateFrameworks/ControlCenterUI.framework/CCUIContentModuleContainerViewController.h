<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CCUIContentModuleContainerViewController.h</title>
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

/PrivateFrameworks/ControlCenterUI.framework/CCUIContentModuleContainerViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI (1)
 */

@interface CCUIContentModuleContainerViewController : UIViewController <CCUISafeAppearancePropagationProvider, UIGestureRecognizerDelegate, UIPreviewInteractionDelegatePrivate> {
    CCUIContentModuleBackgroundView * _backgroundView;
    UIViewController<CCUIContentModuleBackgroundViewController> * _backgroundViewController;
    CCUIContentModuleContentContainerView * _contentContainerView;
    <CCUIContentModule> * _contentModule;
    bool  _contentModuleProvidesOwnPlatter;
    UIView * _contentView;
    UIViewController<CCUIContentModuleContentViewController> * _contentViewController;
    <CCUIContentModuleContainerViewControllerDelegate> * _delegate;
    bool  _expanded;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _expandedContentEdgeInsets;
    UIView * _highlightWrapperView;
    UIView * _maskView;
    NSString * _materialGroupName;
    NSString * _moduleIdentifier;
    UIPreviewInteraction * _previewInteraction;
    UITapGestureRecognizer * _tapRecognizer;
    NSArray * _topLevelBlockingGestureRecognizers;
}

@property (nonatomic, retain) CCUIContentModuleBackgroundView *backgroundView;
@property (nonatomic, retain) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (nonatomic, readonly) NSArray *childViewControllersForAppearancePropagation;
@property (nonatomic, retain) CCUIContentModuleContentContainerView *contentContainerView;
@property (nonatomic, retain) <CCUIContentModule> *contentModule;
@property (nonatomic) bool contentModuleProvidesOwnPlatter;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CCUIContentModuleContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } expandedContentEdgeInsets;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *highlightWrapperView;
@property (nonatomic, retain) UIView *maskView;
@property (nonatomic, copy) NSString *materialGroupName;
@property (nonatomic, readonly) CCUIContentModuleContentContainerView *moduleContentView;
@property (nonatomic, copy) NSString *moduleIdentifier;
@property (nonatomic, retain) UIPreviewInteraction *previewInteraction;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapRecognizer;
@property (nonatomic, readonly) NSArray *topLevelBlockingGestureRecognizers;

- (void).cxx_destruct;
- (void)_addTopLevelGestureRecognizersFromViewAndSubviews:(id)arg1 toGestureRecognizers:(id)arg2 blockingGestureRecognizers:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundFrameForExpandedState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_backgroundFrameForRestState;
- (void)_closeExpandedModule;
- (void)_configureForContentModuleGroupRenderingIfNecessary;
- (void)_configureMaskViewIfNecessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_containerFrameForExpandedState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentBoundsForExpandedState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentBoundsForTransitionProgress:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentFrameForExpandedState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentFrameForRestState;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentFrameInPresentationFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_dismissModulePresentedContentAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)_findTopLevelGestureRecognizersForView:(id)arg1 installOnView:(id)arg2;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (bool)_isForceTouchAvailable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationFrameForExpandedState;
- (id)_previewInteraction:(id)arg1 viewControllerPresentationForPresentingViewController:(id)arg2;
- (id)_previewInteractionHighlighterForPreviewTransition:(id)arg1;
- (bool)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (bool)_previewInteractionShouldFinishTransitionToPreview:(id)arg1;
- (void)_setDidExpandModulePreference;
- (bool)_shouldApplyBackgroundEffects;
- (id)backgroundView;
- (id)backgroundViewController;
- (id)contentContainerView;
- (id)contentModule;
- (bool)contentModuleProvidesOwnPlatter;
- (id)contentView;
- (id)contentViewController;
- (id)delegate;
- (void)dismissExpandedModuleAnimated:(bool)arg1;
- (void)dismissPresentedContentAnimated:(bool)arg1;
- (void)expandModule;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })expandedContentEdgeInsets;
- (id)highlightWrapperView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModuleIdentifier:(id)arg1 contentModule:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isExpanded;
- (void)loadView;
- (id)maskView;
- (id)materialGroupName;
- (id)moduleContentView;
- (id)moduleIdentifier;
- (id)previewInteraction;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setBackgroundViewController:(id)arg1;
- (void)setContentContainerView:(id)arg1;
- (void)setContentModule:(id)arg1;
- (void)setContentModuleProvidesOwnPlatter:(bool)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpandedContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHighlightWrapperView:(id)arg1;
- (void)setMaskView:(id)arg1;
- (void)setMaterialGroupName:(id)arg1;
- (void)setModuleIdentifier:(id)arg1;
- (void)setPreviewInteraction:(id)arg1;
- (void)setTapRecognizer:(id)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)tapRecognizer;
- (id)topLevelBlockingGestureRecognizers;
- (void)updateFrameForExpandedModule;
- (void)viewWillLayoutSubviews;
- (void)willBecomeActive;
- (void)willResignActive;

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