<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIAlertControllerView.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIAlertControllerView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIAlertControllerView : UIView <UIGestureRecognizerDelegatePrivate, UIInterfaceActionHandlerInvocationDelegate, UIScrollViewDelegate, UISpringLoadedInteractionSupporting> {
    NSLayoutConstraint * _actionGroupEqualsContentViewWidthConstraint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _actionSelectionInitialLocation;
    _UIAlertControllerActionViewMetrics * _actionViewMetrics;
    NSMutableArray * _actionViews;
    bool  _actionsReversed;
    UIAlertController * _alertController;
    bool  _alignsToKeyboard;
    long long  _batchActionChangesInProgressCount;
    bool  _cancelActionIsDiscrete;
    NSLayoutConstraint * _centerXConstraint;
    NSLayoutConstraint * _centerYConstraint;
    NSLayoutConstraint * _contentScrollViewBottomConstraint;
    NSLayoutConstraint * _contentScrollViewMaximumWidthConstraint;
    UIView * _contentView;
    NSLayoutConstraint * _contentViewBottomConstraint;
    UIView * _contentViewControllerContainerView;
    NSLayoutConstraint * _contentViewControllerContainerViewHeightConstraint;
    NSLayoutConstraint * _contentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint * _contentViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint * _contentViewControllerViewBottomConstraint;
    NSLayoutConstraint * _contentViewControllerViewLeftConstraint;
    NSLayoutConstraint * _contentViewControllerViewRightConstraint;
    NSLayoutConstraint * _contentViewControllerViewTopConstraint;
    NSLayoutConstraint * _contentViewMaxHeightConstraint;
    NSLayoutConstraint * _contentViewTopConstraint;
    UIView * _contentViewTopItemsView;
    UILabel * _detailMessageLabel;
    NSLayoutConstraint * _detailMessageLabelTopAlignmentConstraint;
    UIView * _dimmingView;
    NSArray * _dimmingViewConstraints;
    NSArray * _dimmingViewConstraintsForActionSheetStyle;
    NSArray * _dimmingViewConstraintsForAlertStyle;
    NSArray * _dimmingViewForegroundViewBottomConstraints;
    NSArray * _dimmingViewForegroundViewTopConstraints;
    NSLayoutConstraint * _discreteActionGroupViewHorizontalLayoutTrailingConstraint;
    _UIAlertControllerInterfaceActionGroupView * _discreteCancelActionGroupView;
    NSLayoutConstraint * _discreteCancelActionViewHeightConstraint;
    NSLayoutConstraint * _discreteCancelActionViewLeadingConstraint;
    NSLayoutConstraint * _discreteCancelActionViewTopConstraint;
    NSLayoutConstraint * _discreteCancelActionViewWidthConstraint;
    UIAlertAction * _effectivePreferredAction;
    NSLayoutConstraint * _foregroundViewWidthConstraint;
    bool  _hasAppliedDetailConstraints;
    bool  _hasAppliedMessageConstraints;
    bool  _hasAppliedTitleConstraints;
    bool  _hasCachedLargestActionDimension;
    bool  _hasDimmingView;
    UIView * _headerContentViewControllerContainerView;
    NSLayoutConstraint * _headerContentViewControllerContainerViewTopAlignmentConstraint;
    NSLayoutConstraint * _headerContentViewControllerPreferredHeightConstraint;
    NSLayoutConstraint * _headerContentViewControllerPreferredWidthConstraint;
    NSLayoutConstraint * _heightConstraint;
    bool  _inPopover;
    UIView * _keyboardLayoutAlignmentAvailableSpaceView;
    _UIKeyboardLayoutAlignmentView * _keyboardLayoutAlignmentView;
    struct CGSize { 
        double width; 
        double height; 
    }  _largestActionDimension;
    long long  _layoutRequiresPositionUpdateCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutSize;
    NSLayoutConstraint * _mainActionButtonSequenceViewHeightConstraint;
    NSLayoutConstraint * _mainActionButtonSequenceViewHorizontalAlignmentConstraint;
    NSLayoutConstraint * _mainActionButtonSequenceViewWidthConstraint;
    _UIAlertControllerInterfaceActionGroupView * _mainInterfaceActionsGroupView;
    UILabel * _messageLabel;
    _UIFlexibleConstantConstraintSet * _messageLabelTopAlignmentConstraints;
    bool  _needsActionsChangedHandling;
    NSArray * _noDimmingViewConstraints;
    bool  _presentationContextPrefersCancelActionShown;
    bool  _shouldHaveBackdropView;
    bool  _showsCancelAction;
    bool  _springLoaded;
    UIView * _textFieldViewControllerContainerView;
    NSLayoutConstraint * _textFieldViewControllerContainerViewHeightConstraint;
    _UIFlexibleConstantConstraintSet * _textFieldViewControllerContainerViewTopAlignmentConstraints;
    NSLayoutConstraint * _textFieldViewControllerContainerViewWidthConstraint;
    NSLayoutConstraint * _textFieldViewControllerViewBottomConstraint;
    NSLayoutConstraint * _textFieldViewControllerViewLeftConstraint;
    NSLayoutConstraint * _textFieldViewControllerViewRightConstraint;
    NSLayoutConstraint * _textFieldViewControllerViewTopConstraint;
    UILabel * _titleLabel;
    _UIFlexibleConstantConstraintSet * _titleLabelTopAlignmentConstraints;
    UIAlertControllerVisualStyle * _visualStyle;
    NSLayoutConstraint * _widthConstraint;
}

@property (readonly) UIView *_contentView;
@property (readonly) UIView *_dimmingView;
@property (setter=_setVisualStyle:, nonatomic, retain) UIAlertControllerVisualStyle *_visualStyle;
@property (retain) NSLayoutConstraint *actionGroupEqualsContentViewWidthConstraint;
@property (nonatomic, retain) _UIAlertControllerActionViewMetrics *actionViewMetrics;
@property (getter=_actionsReversed, setter=_setActionsReversed:, nonatomic) bool actionsReversed;
@property UIAlertController *alertController;
@property bool alignsToKeyboard;
@property bool cancelActionIsDiscrete;
@property (retain) NSLayoutConstraint *centerXConstraint;
@property (retain) NSLayoutConstraint *centerYConstraint;
@property (retain) NSLayoutConstraint *contentScrollViewBottomConstraint;
@property (retain) NSLayoutConstraint *contentScrollViewMaximumWidthConstraint;
@property (retain) NSLayoutConstraint *contentViewBottomConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerContainerViewHeightConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerContainerViewTopAlignmentConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerContainerViewWidthConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerViewBottomConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerViewLeftConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerViewRightConstraint;
@property (retain) NSLayoutConstraint *contentViewControllerViewTopConstraint;
@property (retain) NSLayoutConstraint *contentViewMaxHeightConstraint;
@property (retain) NSLayoutConstraint *contentViewTopConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSLayoutConstraint *detailMessageLabelTopAlignmentConstraint;
@property (retain) NSLayoutConstraint *discreteActionGroupViewHorizontalLayoutTrailingConstraint;
@property (retain) NSLayoutConstraint *discreteCancelActionViewHeightConstraint;
@property (retain) NSLayoutConstraint *discreteCancelActionViewLeadingConstraint;
@property (retain) NSLayoutConstraint *discreteCancelActionViewTopConstraint;
@property (retain) NSLayoutConstraint *discreteCancelActionViewWidthConstraint;
@property (nonatomic) double effectAlpha;
@property (retain) NSLayoutConstraint *foregroundViewWidthConstraint;
@property bool hasDimmingView;
@property (readonly) unsigned long long hash;
@property (retain) NSLayoutConstraint *headerContentViewControllerContainerViewTopAlignmentConstraint;
@property (retain) NSLayoutConstraint *heightConstraint;
@property bool inPopover;
@property (getter=_layoutSize, setter=_setLayoutSize:, nonatomic) struct CGSize { double x1; double x2; } layoutSize;
@property (retain) NSLayoutConstraint *mainActionButtonSequenceViewHeightConstraint;
@property (retain) NSLayoutConstraint *mainActionButtonSequenceViewHorizontalAlignmentConstraint;
@property (retain) NSLayoutConstraint *mainActionButtonSequenceViewWidthConstraint;
@property (retain) _UIFlexibleConstantConstraintSet *messageLabelTopAlignmentConstraints;
@property (nonatomic) bool presentationContextPrefersCancelActionShown;
@property bool shouldHaveBackdropView;
@property (getter=isSpringLoaded, nonatomic) bool springLoaded;
@property (readonly) Class superclass;
@property (retain) NSLayoutConstraint *textFieldViewControllerContainerViewHeightConstraint;
@property (retain) _UIFlexibleConstantConstraintSet *textFieldViewControllerContainerViewTopAlignmentConstraints;
@property (retain) NSLayoutConstraint *textFieldViewControllerContainerViewWidthConstraint;
@property (retain) NSLayoutConstraint *textFieldViewControllerViewBottomConstraint;
@property (retain) NSLayoutConstraint *textFieldViewControllerViewLeftConstraint;
@property (retain) NSLayoutConstraint *textFieldViewControllerViewRightConstraint;
@property (retain) NSLayoutConstraint *textFieldViewControllerViewTopConstraint;
@property (retain) _UIFlexibleConstantConstraintSet *titleLabelTopAlignmentConstraints;
@property (retain) NSLayoutConstraint *widthConstraint;

+ (bool)_retroactivelyRequiresConstraintBasedLayout;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_UIAppearance_setAlignsToKeyboard:(bool)arg1;
- (void)_UIAppearance_setHasDimmingView:(bool)arg1;
- (void)_UIAppearance_setInPopover:(bool)arg1;
- (void)_UIAppearance_setPresentationContextPrefersCancelActionShown:(bool)arg1;
- (void)_UIAppearance_setShouldHaveBackdropView:(bool)arg1;
- (id)__cancelActionView;
- (void)_accessibilityColorsChanged;
- (void)_actionLayoutDirectionChanged;
- (bool)_actionLayoutIsVertical;
- (void)_actionsChanged;
- (bool)_actionsReversed;
- (void)_addContentViewControllerToViewHierarchy;
- (void)_addHeaderContentViewControllerToViewHierarchy;
- (void)_applyContentViewControllerContainerViewConstraints;
- (void)_applyDetailMessageConstraints;
- (void)_applyHeaderContentViewControllerContainerViewConstraints;
- (void)_applyISEngineLayoutValuesToBoundsOnly:(bool)arg1;
- (void)_applyKeyboardAlignmentViewsConstraints;
- (void)_applyMessageConstraints;
- (void)_applyTextFieldViewControllerContainerViewConstraints;
- (void)_applyTitleConstraints;
- (void)_applyViewConstraints;
- (void)_associateActionsWithActionViews;
- (id)_attributedDetailMessage;
- (id)_attributedMessage;
- (id)_attributedTitle;
- (double)_availableWidthForHorizontalLayout:(bool)arg1;
- (bool)_buttonsAreTopMost;
- (bool)_canLayOutActionsHorizontally;
- (void)_configureActionGroupViewToAllowHorizontalLayout:(bool)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentInsets;
- (void)_contentSizeChanged;
- (id)_contentView;
- (struct CGSize { double x1; double x2; })_contentViewControllerSize;
- (id)_dimmingView;
- (void)_disableAllowGroupOpacitiyIfNecessaryAlongsideTransitionCoordinator:(id)arg1;
- (id)_discreteCancelActionView;
- (id)_effectivePreferredAction;
- (void)_ensureActionViewRepresentationsHaveMetrics;
- (id)_focusedAction;
- (bool)_forceLayoutEngineSolutionInRationalEdges;
- (bool)_hasAttributedMessage;
- (bool)_hasAttributedTitle;
- (bool)_hasDetailMessage;
- (bool)_hasDiscreteCancelAction;
- (bool)_hasMessage;
- (bool)_hasTextFields;
- (bool)_hasTitle;
- (bool)_horizontalLayoutCanUseFullWidth;
- (double)_idealLayoutWidth;
- (id)_indexesOfActionSectionSeparators;
- (id)_interfaceActionForAlertAction:(id)arg1 inActionGroupView:(id)arg2;
- (id)_interfaceActionRepresentationForAlertAlertAction:(id)arg1;
- (struct CGSize { double x1; double x2; })_itemSizeForHorizontalLayout:(bool)arg1;
- (struct CGSize { double x1; double x2; })_itemSizeForHorizontalLayout:(bool)arg1 visualStyleRequiresActionRepresentationToFitItemSize:(bool*)arg2;
- (double)_labelHorizontalInsets;
- (void)_layoutAndPositionInParentIfNeeded;
- (struct CGSize { double x1; double x2; })_layoutSize;
- (double)_layoutWidthForHorizontalLayout:(bool)arg1;
- (struct CGSize { double x1; double x2; })_mainActionButtonSequenceViewSizeForHorizontalLayout:(bool)arg1 itemSize:(struct CGSize { double x1; double x2; })arg2;
- (double)_marginBetweenContentAndDiscreteCancelAction;
- (struct CGSize { double x1; double x2; })_minimumSizeForAllActions;
- (id)_newStyledBackgroundView;
- (long long)_numberOfActionsForMainActionButtonSequenceView;
- (void)_performBatchActionChangesWithBlock:(id /* block */)arg1;
- (id)_preferredActionView;
- (void)_prepareContentView;
- (void)_prepareContentViewControllerContainerView;
- (void)_prepareContentViewTopItemsView;
- (void)_prepareDetailMessageLabel;
- (void)_prepareDimmingView;
- (void)_prepareDimmingViewConstraints;
- (void)_prepareDimmingViewConstraintsIfNeeded;
- (void)_prepareDiscreteCancelActionGroupView;
- (void)_prepareHeaderContentViewControllerContainerView;
- (void)_prepareKeyboardLayoutAlignmentViews;
- (void)_prepareMainInterfaceActionsGroupView;
- (void)_prepareMesssageLabel;
- (void)_prepareTextFieldViewControllerContainerView;
- (void)_prepareTitleLabel;
- (void)_prepareViewsAndAddConstraints;
- (id)_presentableAlertActions;
- (void)_propertiesChanged;
- (void)_recomputeActionMetrics;
- (void)_recomputeAlertControllerWidth;
- (void)_reevaluateSuperviewSizingConstraints;
- (void)_reloadInterfaceActionViewRepresentations;
- (void)_reloadInterfaceActionsGroupViewPreferredAction;
- (void)_removeContentViewControllerViewFromHierarchy;
- (void)_removeHeaderContentViewControllerViewFromHierarchy;
- (void)_scrollInitialActionToVisibleForPresentation;
- (void)_setActionsReversed:(bool)arg1;
- (void)_setAttributedDetailMessage:(id)arg1;
- (void)_setAttributedMessage:(id)arg1;
- (void)_setAttributedTitle:(id)arg1;
- (void)_setLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setMessage:(id)arg1;
- (void)_setTitle:(id)arg1;
- (void)_setVisualStyle:(id)arg1;
- (bool)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1;
- (bool)_shouldHaveCancelActionInMainActionButtonSequenceView;
- (struct CGSize { double x1; double x2; })_sizeForLayoutWidthDetermination;
- (void)_sizeOfContentViewControllerChanged;
- (void)_sizeOfHeaderContentViewControllerChanged;
- (void)_sizeOfTextFieldViewControllerChanged;
- (double)_spaceRequiredForActionSectionsSpacing;
- (id)_textFieldViewController;
- (void)_textFieldsChanged;
- (id)_unlocalizedOrderedPresentableAlertActionViewRepresentations;
- (id)_unlocalizedOrderedPresentableAlertActions;
- (void)_updateActionViewHeight;
- (void)_updateActionViewVisualStyle:(id)arg1;
- (void)_updateActionsGroupPresentationStyles;
- (void)_updateCancelActionBeingDiscrete;
- (void)_updateConstraintConstants;
- (void)_updateContentView;
- (void)_updateDetailLabelContents;
- (void)_updateDetailLabelFontSize;
- (void)_updateInsets;
- (void)_updateLabelFontSizes;
- (void)_updateLabelProperties;
- (void)_updateLabelTextColor;
- (void)_updateMainScrollableHeaderViewHasRealContent;
- (void)_updateMessageLabelContents;
- (void)_updateMessageLabelFontSize;
- (void)_updatePreferredAction;
- (void)_updateStyleForIdiomChange:(bool)arg1;
- (void)_updateTintColor;
- (void)_updateTitleLabelContents;
- (void)_updateTitleLabelFontSize;
- (double)_verticalLayoutWidth;
- (id)_visualStyle;
- (id)actionGroupEqualsContentViewWidthConstraint;
- (id)actionViewMetrics;
- (id)actions;
- (id)alertController;
- (bool)alignsToKeyboard;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (id)cancelAction;
- (bool)cancelActionIsDiscrete;
- (id)centerXConstraint;
- (id)centerYConstraint;
- (void)configureForDismissAlongsideTransitionCoordinator:(id)arg1;
- (void)configureForPresentAlongsideTransitionCoordinator:(id)arg1;
- (id)contentScrollViewBottomConstraint;
- (id)contentScrollViewMaximumWidthConstraint;
- (id)contentViewBottomConstraint;
- (id)contentViewController;
- (id)contentViewControllerContainerViewHeightConstraint;
- (id)contentViewControllerContainerViewTopAlignmentConstraint;
- (id)contentViewControllerContainerViewWidthConstraint;
- (id)contentViewControllerViewBottomConstraint;
- (id)contentViewControllerViewLeftConstraint;
- (id)contentViewControllerViewRightConstraint;
- (id)contentViewControllerViewTopConstraint;
- (id)contentViewMaxHeightConstraint;
- (id)contentViewTopConstraint;
- (void)dealloc;
- (id)detailMessageLabelTopAlignmentConstraint;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)discreteActionGroupViewHorizontalLayoutTrailingConstraint;
- (id)discreteCancelActionViewHeightConstraint;
- (id)discreteCancelActionViewLeadingConstraint;
- (id)discreteCancelActionViewTopConstraint;
- (id)discreteCancelActionViewWidthConstraint;
- (double)effectAlpha;
- (id)foregroundViewWidthConstraint;
- (bool)hasDimmingView;
- (bool)hasDiscreteHorizontalCancelAction;
- (id)headerContentViewController;
- (id)headerContentViewControllerContainerViewTopAlignmentConstraint;
- (id)heightConstraint;
- (bool)inPopover;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)isSpringLoaded;
- (id)mainActionButtonSequenceViewHeightConstraint;
- (id)mainActionButtonSequenceViewHorizontalAlignmentConstraint;
- (id)mainActionButtonSequenceViewWidthConstraint;
- (id)message;
- (id)messageLabelTopAlignmentConstraints;
- (id)preferredFocusedView;
- (bool)presentationContextPrefersCancelActionShown;
- (void)safeAreaInsetsDidChange;
- (void)setActionGroupEqualsContentViewWidthConstraint:(id)arg1;
- (void)setActionViewMetrics:(id)arg1;
- (void)setAlertController:(id)arg1;
- (void)setAlignsToKeyboard:(bool)arg1;
- (void)setCancelActionIsDiscrete:(bool)arg1;
- (void)setCenterXConstraint:(id)arg1;
- (void)setCenterYConstraint:(id)arg1;
- (void)setContentScrollViewBottomConstraint:(id)arg1;
- (void)setContentScrollViewMaximumWidthConstraint:(id)arg1;
- (void)setContentViewBottomConstraint:(id)arg1;
- (void)setContentViewControllerContainerViewHeightConstraint:(id)arg1;
- (void)setContentViewControllerContainerViewTopAlignmentConstraint:(id)arg1;
- (void)setContentViewControllerContainerViewWidthConstraint:(id)arg1;
- (void)setContentViewControllerViewBottomConstraint:(id)arg1;
- (void)setContentViewControllerViewLeftConstraint:(id)arg1;
- (void)setContentViewControllerViewRightConstraint:(id)arg1;
- (void)setContentViewControllerViewTopConstraint:(id)arg1;
- (void)setContentViewMaxHeightConstraint:(id)arg1;
- (void)setContentViewTopConstraint:(id)arg1;
- (void)setDetailMessageLabelTopAlignmentConstraint:(id)arg1;
- (void)setDiscreteActionGroupViewHorizontalLayoutTrailingConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewHeightConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewLeadingConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewTopConstraint:(id)arg1;
- (void)setDiscreteCancelActionViewWidthConstraint:(id)arg1;
- (void)setEffectAlpha:(double)arg1;
- (void)setForegroundViewWidthConstraint:(id)arg1;
- (void)setHasDimmingView:(bool)arg1;
- (void)setHeaderContentViewControllerContainerViewTopAlignmentConstraint:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setInPopover:(bool)arg1;
- (void)setMainActionButtonSequenceViewHeightConstraint:(id)arg1;
- (void)setMainActionButtonSequenceViewHorizontalAlignmentConstraint:(id)arg1;
- (void)setMainActionButtonSequenceViewWidthConstraint:(id)arg1;
- (void)setMessageLabelTopAlignmentConstraints:(id)arg1;
- (void)setPresentationContextPrefersCancelActionShown:(bool)arg1;
- (void)setShouldHaveBackdropView:(bool)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)setTextFieldViewControllerContainerViewHeightConstraint:(id)arg1;
- (void)setTextFieldViewControllerContainerViewTopAlignmentConstraints:(id)arg1;
- (void)setTextFieldViewControllerContainerViewWidthConstraint:(id)arg1;
- (void)setTextFieldViewControllerViewBottomConstraint:(id)arg1;
- (void)setTextFieldViewControllerViewLeftConstraint:(id)arg1;
- (void)setTextFieldViewControllerViewRightConstraint:(id)arg1;
- (void)setTextFieldViewControllerViewTopConstraint:(id)arg1;
- (void)setTintAdjustmentMode:(long long)arg1;
- (void)setTitleLabelTopAlignmentConstraints:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (bool)shouldHaveBackdropView;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (bool)showsCancelAction;
- (id)textFieldViewControllerContainerViewHeightConstraint;
- (id)textFieldViewControllerContainerViewTopAlignmentConstraints;
- (id)textFieldViewControllerContainerViewWidthConstraint;
- (id)textFieldViewControllerViewBottomConstraint;
- (id)textFieldViewControllerViewLeftConstraint;
- (id)textFieldViewControllerViewRightConstraint;
- (id)textFieldViewControllerViewTopConstraint;
- (id)textFields;
- (long long)tintAdjustmentMode;
- (id)title;
- (id)titleLabelTopAlignmentConstraints;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)widthConstraint;

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
