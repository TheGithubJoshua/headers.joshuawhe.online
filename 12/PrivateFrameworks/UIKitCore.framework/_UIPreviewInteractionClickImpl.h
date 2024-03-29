<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIPreviewInteractionClickImpl.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIPreviewInteractionClickImpl.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIPreviewInteractionClickImpl : NSObject <UIGestureRecognizerDelegate, UIInteraction, UIInteraction_Private, _UIClickInteractionDelegate, _UIPreviewInteractionImpl> {
    _UIClickInteraction * _commitClickInteraction;
    <UIPreviewInteractionDelegate> * _delegate;
    struct { 
        bool shouldBegin; 
        bool didUpdateCommitTransition; 
        bool highlighterForPreviewTransition; 
        bool viewControllerPresentationForPresentingViewController; 
        bool shouldFinishTransitionToPreview; 
        bool shouldAutomaticallyTransitionToPreviewAfterDelay; 
        bool overrideViewForCommitPhase; 
    }  _delegateImplements;
    _UIRelationshipGestureRecognizer * _exclusionRelationshipGestureRecognizer;
    <UIInteractionEffect> * _interactionEffect;
    _UIClickInteraction * _previewClickInteraction;
    UIPreviewInteraction * _previewInteraction;
    <UIPreviewInteractionDelegatePrivate> * _privateDelegate;
    _UIStateMachine * _stateMachine;
    <_UIPreviewInteractionTouchForceProviding> * _touchForceProvider;
    UIView * _view;
    _UIPreviewInteractionViewControllerHelper * _viewControllerHelper;
}

@property (nonatomic, retain) _UIClickInteraction *commitClickInteraction;
@property (nonatomic, readonly) unsigned long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIPreviewInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _UIRelationshipGestureRecognizer *exclusionRelationshipGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UIInteractionEffect> *interactionEffect;
@property (nonatomic, retain) _UIClickInteraction *previewClickInteraction;
@property (nonatomic) UIPreviewInteraction *previewInteraction;
@property (nonatomic, readonly) <UIPreviewInteractionDelegatePrivate> *privateDelegate;
@property (nonatomic, retain) _UIStateMachine *stateMachine;
@property (readonly) Class superclass;
@property (nonatomic, retain) <_UIPreviewInteractionTouchForceProviding> *touchForceProvider;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, retain) _UIPreviewInteractionViewControllerHelper *viewControllerHelper;

- (void).cxx_destruct;
- (void)_cancelInteractionInternal:(bool)arg1;
- (id)_gestureRecognizerForExclusionRelationship;
- (void)_handleTransitionToPreview;
- (void)_interactionEnded:(bool)arg1;
- (void)_interactionEnded:(bool)arg1 notifyDelegateIfNecessary:(bool)arg2;
- (void)_performPresentationIfPossible;
- (void)_preparePreviewInteractionHighlighter;
- (void)_prepareStateMachine;
- (void)_startPreviewAtLocation:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (void)cancelInteraction;
- (void)clickInteractionDidClickDown:(id)arg1;
- (void)clickInteractionDidClickUp:(id)arg1;
- (void)clickInteractionDidEnd:(id)arg1;
- (bool)clickInteractionShouldBegin:(id)arg1;
- (id)commitClickInteraction;
- (unsigned long long)currentState;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (id)exclusionRelationshipGestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)highlightEffectForClickInteraction:(id)arg1;
- (id)initWithView:(id)arg1 previewInteraction:(id)arg2;
- (id)interactionEffect;
- (struct CGPoint { double x1; double x2; })locationInCoordinateSpace:(id)arg1;
- (id)previewClickInteraction;
- (id)previewInteraction;
- (id)privateDelegate;
- (void)setCommitClickInteraction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExclusionRelationshipGestureRecognizer:(id)arg1;
- (void)setInteractionEffect:(id)arg1;
- (void)setPreviewClickInteraction:(id)arg1;
- (void)setPreviewInteraction:(id)arg1;
- (void)setStateMachine:(id)arg1;
- (void)setTouchForceProvider:(id)arg1;
- (void)setViewControllerHelper:(id)arg1;
- (id)stateMachine;
- (id)touchForceProvider;
- (id)view;
- (id)viewControllerHelper;
- (void)willMoveToView:(id)arg1;

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
