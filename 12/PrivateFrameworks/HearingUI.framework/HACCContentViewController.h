<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HACCContentViewController.h</title>
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

/PrivateFrameworks/HearingUI.framework/HACCContentViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport (1)
 */

@interface HACCContentViewController : UIViewController <CCUIContentModuleContentViewController, UIGestureRecognizerDelegate, UIPreviewInteractionDelegate> {
    MTMaterialView * _backgroundView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _collapsedFrame;
    UIView<HACCContentModule> * _contentView;
    unsigned long long  _controlType;
    bool  _expanded;
    UIView * _expandedView;
    UIViewController<CCUIContentModuleContentViewController> * _expandedViewController;
    UIView * _materialView;
    UIPreviewInteraction * _previewInteraction;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic, retain) MTMaterialView *backgroundView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } collapsedFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIViewController<CCUIContentModuleContentViewController> *expandedViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, retain) UIPreviewInteraction *previewInteraction;
@property (nonatomic, readonly) bool providesOwnPlatter;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapRecognizer;

- (void).cxx_destruct;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (id)_previewInteractionHighlighterForPreviewTransition:(id)arg1;
- (bool)_previewInteractionShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (id)backgroundView;
- (struct CGSize { double x1; double x2; })collapsedContentSize;
- (struct CGSize { double x1; double x2; })collapsedContentUnitSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })collapsedFrame;
- (unsigned long long)controlTypeForModule:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })expandedContentSize;
- (struct CGSize { double x1; double x2; })expandedContentUnitSize;
- (id)expandedViewController;
- (id)expandedViewControllerForProgramModule:(unsigned long long)arg1;
- (id)initWithContentModule:(unsigned long long)arg1 andDelegate:(id)arg2;
- (long long)layoutRequirement;
- (void)maskCornersForTop:(bool)arg1 bottom:(bool)arg2;
- (double)preferredExpandedContentHeight;
- (id)previewInteraction;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCollapsedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setExpandedViewController:(id)arg1;
- (void)setPreviewInteraction:(id)arg1;
- (void)setTapRecognizer:(id)arg1;
- (bool)supportsExpanding;
- (id)tapRecognizer;
- (id)transitionToExpanded:(bool)arg1;
- (void)updateValue;
- (void)updateViewConstraints;
- (id)value;
- (id)viewControllerForExpandedView;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

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
