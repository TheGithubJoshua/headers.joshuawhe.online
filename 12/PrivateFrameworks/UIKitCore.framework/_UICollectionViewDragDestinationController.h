<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UICollectionViewDragDestinationController.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UICollectionViewDragDestinationController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UICollectionViewDragDestinationController : NSObject <UIDropInteractionDelegate_Private, _UICollectionViewShadowUpdatesRebaseApplicable> {
    UICollectionView * _collectionView;
    <_UICollectionViewDragDestinationControllerDelegate> * _delegate;
    UIDropInteraction * _dropInteraction;
    _UIDragDestinationControllerDropProposalState * _dropProposalState;
    CADisplayLink * _reorderDisplayLink;
    _UIDragDestinationControllerReorderingState * _reorderingState;
    _UIDragDestinationControllerSessionState * _sessionState;
}

@property (nonatomic) UICollectionView *collectionView;
@property (nonatomic, readonly) UICollectionViewDropProposal *currentDropProposal;
@property (nonatomic, readonly) <UIDropSession> *currentDropSession;
@property (nonatomic, readonly) NSIndexPath *currentIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UICollectionViewDragDestinationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIDropInteraction *dropInteraction;
@property (nonatomic, retain) _UIDragDestinationControllerDropProposalState *dropProposalState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, retain) CADisplayLink *reorderDisplayLink;
@property (nonatomic, retain) _UIDragDestinationControllerReorderingState *reorderingState;
@property (nonatomic, retain) _UIDragDestinationControllerSessionState *sessionState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsLocalSessionReordering;

+ (id)controllerForCollectionView:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (void)_cancelCurrentInteractiveReorder;
- (void)_cancelInteractiveReorderingIfNeeded;
- (void)_commitCurrentDragAndDropSession;
- (void)_commitCurrentInteractiveReordering;
- (id)_computeNextItemAttributesStartingFromItemAttributes:(id)arg1 withCurrentDragLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_configureInteraction;
- (void)_configureReorderingDisplayLink;
- (bool)_delegateImplementsDidExit;
- (bool)_delegateImplementsDropActionForIndexPath;
- (bool)_delegateImplementsPerformDropFromIndexPathsWithAction;
- (bool)_delegateImplementsPerformDropFromIndexPathsWithCoordinator;
- (bool)_delegateImplementsSelector:(SEL)arg1;
- (bool)_delegateImplementsTargetIndexPath;
- (id)_dragAndDropController;
- (id)_dragDestinationDelegateActual;
- (id)_dragDestinationDelegateProxy;
- (id)_dropDelegateActual;
- (id)_dropDelegateProxy;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)_effectiveDropProposalForProposal:(id)arg1;
- (void)_endInteractiveReorderingIfNeeded;
- (bool)_hasGapLargeEnoughToRequireDropActionCallForCurrentItemAttributes:(id)arg1 proposedNextItemAttributes:(id)arg2;
- (bool)_isCompatibilityMode;
- (bool)_isLocalInteractiveMove;
- (bool)_isMultiItemSource;
- (void)_pauseReorderingDisplayLink;
- (id)_queryClientForPreviewParamtersForItemAtIndexPath:(id)arg1;
- (void)_reorderingDisplayLinkDidTick;
- (void)_resumeReorderingDisplayLink;
- (bool)_shouldPerformMovementForProposal:(id)arg1;
- (bool)_shouldQueryDropActionForIndexPath:(id)arg1;
- (void)_updateDropProposalByQueryingClientIfNeeded:(id)arg1;
- (void)applyingRebasingUpdatesWithUpdateMap:(id)arg1;
- (id)collectionView;
- (id)currentDropProposal;
- (id)currentDropSession;
- (id)currentIndexPath;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)dragSourceSelectedItemCountDidChangeWithCount:(long long)arg1;
- (id)dropInteraction;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)dropProposalState;
- (void)dropWasCancelled;
- (bool)hasPerformedReordering;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2;
- (bool)isActive;
- (bool)isInteractiveReorderingDisabled;
- (id)reorderDisplayLink;
- (id)reorderingState;
- (id)sessionState;
- (void)setCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDropInteraction:(id)arg1;
- (void)setDropProposalState:(id)arg1;
- (void)setReorderDisplayLink:(id)arg1;
- (void)setReorderingState:(id)arg1;
- (void)setSessionState:(id)arg1;
- (bool)supportsLocalSessionReordering;

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
