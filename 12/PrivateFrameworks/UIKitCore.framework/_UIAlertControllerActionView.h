<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIAlertControllerActionView.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIAlertControllerActionView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIAlertControllerActionView : UIView <UIAlertActionViewRepresentation_Internal, UIGestureRecognizerDelegate> {
    UIAlertAction * _action;
    UIAlertController * _alertController;
    double  _axEnforcedWidth;
    NSLayoutConstraint * _axLabelContainerWidthConstraint;
    NSLayoutConstraint * _checkToMarginConstraint;
    UIImageView * _checkView;
    NSArray * _contentViewControllerConstraints;
    UIView * _contentViewControllerContainerView;
    UILabel * _descriptiveLabel;
    NSLayoutConstraint * _descriptiveLabelTrailingToContainerCenterConstraint;
    NSLayoutConstraint * _descriptiveLabelTrailingToLabelLeadingLabelConstraint;
    NSLayoutConstraint * _descriptiveLabelWidthConstraint;
    bool  _hasDescriptiveText;
    NSArray * _havingDescriptiveLabelConstraints;
    bool  _highlighted;
    UIImageView * _imageView;
    NSLayoutConstraint * _imageViewBottomConstraint;
    NSLayoutConstraint * _imageViewTopConstraint;
    UILabel * _label;
    NSLayoutConstraint * _labelCenterLeadingConstraint;
    NSLayoutConstraint * _labelContainerCenterXConstraint;
    NSLayoutConstraint * _labelContainerLeadingConstraint;
    NSLayoutConstraint * _labelContainerLeadingPinConstraint;
    NSLayoutConstraint * _labelContainerTrailingConstraint;
    NSLayoutConstraint * _labelContainerTrailingPinConstraint;
    UIView * _labelContainerView;
    NSLayoutConstraint * _labelWidthConstraint;
    NSLayoutConstraint * _marginToImageConstraint;
    _UIAlertControllerActionViewMetrics * _metrics;
    NSLayoutConstraint * _minimumHeightConstraint;
    NSArray * _notHavingDescriptiveLabelConstraints;
    UIAlertControllerVisualStyle * _visualStyle;
}

@property (nonatomic, copy) UIAlertAction *action;
@property (nonatomic) UIAlertController *alertController;
@property (readonly) double currentDescriptiveLabelTextWidth;
@property (readonly) double currentLabelTextWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic, readonly) bool highlighted;
@property (retain) NSLayoutConstraint *labelContainerCenterXConstraint;
@property (retain) NSLayoutConstraint *labelContainerLeadingPinConstraint;
@property (retain) NSLayoutConstraint *labelContainerTrailingPinConstraint;
@property (readonly) Class superclass;
@property (nonatomic) UIAlertControllerVisualStyle *visualStyle;

- (void).cxx_destruct;
- (void)_action:(id)arg1 changedToBePreferred:(bool)arg2;
- (void)_action:(id)arg1 changedToChecked:(bool)arg2;
- (void)_action:(id)arg1 changedToEnabled:(bool)arg2;
- (void)_action:(id)arg1 changedToTitle:(id)arg2;
- (void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2;
- (void)_action:(id)arg1 updatedImageTintColor:(id)arg2;
- (void)_action:(id)arg1 updatedTitleTextColor:(id)arg2;
- (void)_buildCheckViewConstraints;
- (void)_buildConstraints;
- (void)_buildContentViewControllerContainerConstraints;
- (void)_buildHavingDescriptiveLabelConstraints;
- (void)_buildImageViewConstraints;
- (void)_buildNotHavingDescriptiveLabelConstraints;
- (void)_contentSizeChanged;
- (long long)_effectiveTitleTextAlignment;
- (id)_interfaceActionViewState;
- (void)_loadCheckView;
- (void)_loadContentViewControllerContainerViewIfNecessary;
- (void)_loadContentViewControllerView;
- (void)_loadDescriptiveLabel;
- (void)_loadImageView;
- (void)_prepareConstraintsForHavingDescriptiveText:(bool)arg1;
- (void)_recomputeColors;
- (void)_removeContentViewControllerContainerViewSubviews;
- (void)_updateCheckImageView;
- (void)_updateContentViewControllerContainerViewConstraints;
- (void)_updateDescriptiveText;
- (void)_updateHavingDescriptiveLabelConstraints;
- (void)_updateImageMargins;
- (void)_updateImageView;
- (void)_updateImageViewAttributes;
- (void)_updateLabelAttributes;
- (void)_updateLabelContainerConstraints;
- (void)_updateMinimumHeight;
- (void)_updateStyle;
- (void)_updateTextAlignmentForHavingDescriptiveText:(bool)arg1 titleTextAlignment:(long long)arg2;
- (id)action;
- (id)alertController;
- (void)applyMetrics:(id)arg1;
- (double)currentDescriptiveLabelTextWidth;
- (double)currentLabelTextWidth;
- (void)dealloc;
- (id)description;
- (bool)hasActiveMinimumSizeConstraintsWithSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)hasLayoutHeightConstraintsIdenticalToInterfaceActionCustomView:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (id)labelContainerCenterXConstraint;
- (id)labelContainerLeadingPinConstraint;
- (id)labelContainerTrailingPinConstraint;
- (void)setAction:(id)arg1;
- (void)setAlertController:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setLabelContainerCenterXConstraint:(id)arg1;
- (void)setLabelContainerLeadingPinConstraint:(id)arg1;
- (void)setLabelContainerTrailingPinConstraint:(id)arg1;
- (void)setVisualStyle:(id)arg1;
- (id)tintColor;
- (void)tintColorDidChange;
- (void)underlyingInterfaceActionRepresentationDidChange;
- (void)updateHeightUsingAXEnforcedWidth:(double)arg1;
- (id)visualStyle;

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