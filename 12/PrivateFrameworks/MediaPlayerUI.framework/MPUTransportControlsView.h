<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPUTransportControlsView.h</title>
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

/PrivateFrameworks/MediaPlayerUI.framework/MPUTransportControlsView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI (1)
 */

@interface MPUTransportControlsView : UIView {
    NSArray * _availableTransportControls;
    NSMutableDictionary * _classByReuseIdentifier;
    <MPUTransportControlsViewDataSource> * _dataSource;
    <MPUTransportControlsViewDelegate> * _delegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insetsForExpandingButtons;
    <MPUTransportControlsViewLayoutDelegate> * _layoutDelegate;
    unsigned long long  _minimumNumberOfTransportButtonsForLayout;
    NSMutableDictionary * _recycledButtonsByReuseIdentifier;
    NSMapTable * _reuseIdentifierByButton;
    bool  _sortByGroup;
    NSMutableArray * _sortedVisibleControlsWithBlanks;
    bool  _sortedVisibleControlsWithBlanksNeedsReload;
    NSMutableSet * _typesOfControlsToReload;
    bool  _usesLegacyLayoutHeuristics;
    NSMutableDictionary * _visibleButtonByControlType;
}

@property (nonatomic, copy) NSArray *availableTransportControls;
@property (nonatomic) <MPUTransportControlsViewDataSource> *dataSource;
@property (nonatomic) <MPUTransportControlsViewDelegate> *delegate;
@property (getter=_insetsForExpandingButtons, setter=_setInsetsForExpandingButtons:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insetsForExpandingButtons;
@property (nonatomic) <MPUTransportControlsViewLayoutDelegate> *layoutDelegate;
@property (nonatomic) unsigned long long minimumNumberOfTransportButtonsForLayout;
@property (nonatomic) bool sortByGroup;
@property (getter=_usesLegacyLayoutHeuristics, setter=_setUsesLegacyLayoutHeuristics:, nonatomic) bool usesLegacyLayoutHeuristics;

+ (id)defaultTransportControls;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedFrameOfButtonForTransportControl:(id)arg1 proposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_availableTransportControlsForGroup:(int)arg1;
- (void)_configureTransportButton:(id)arg1 forTransportControl:(id)arg2;
- (id)_createTransportButtonWithReuseIdentifier:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsForExpandingButtons;
- (void)_recycleTransportButtonWithControlType:(long long)arg1;
- (void)_reloadSortedVisibleControlsWithBlanks;
- (void)_setInsetsForExpandingButtons:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setUsesLegacyLayoutHeuristics:(bool)arg1;
- (id)_transportButtonForControlType:(long long)arg1;
- (struct CGSize { double x1; double x2; })_transportControlButtonSize;
- (void)_transportControlLongPressBegan:(id)arg1;
- (void)_transportControlLongPressEnded:(id)arg1;
- (void)_transportControlTapped:(id)arg1;
- (void)_transportControlTouchEntered:(id)arg1;
- (void)_transportControlTouchExited:(id)arg1;
- (id)_typesFromTransportControls:(id)arg1;
- (id)_typesOfVisibleControls;
- (bool)_usesLegacyLayoutHeuristics;
- (id)_visibleTransportControlAtIndex:(unsigned long long)arg1;
- (void)_willRemoveTransportButton:(id)arg1;
- (id)availableTransportControlWithType:(long long)arg1;
- (id)availableTransportControls;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)dequeueReusableTransportButtonWithReuseIdentifier:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutDelegate;
- (void)layoutSubviews;
- (unsigned long long)minimumNumberOfTransportButtonsForLayout;
- (void)registerClass:(Class)arg1 forTransportButtonWithReuseIdentifier:(id)arg2;
- (void)reloadTransportButtonWithControlType:(long long)arg1;
- (void)setAvailableTransportControls:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutDelegate:(id)arg1;
- (void)setMinimumNumberOfTransportButtonsForLayout:(unsigned long long)arg1;
- (void)setSortByGroup:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)sortByGroup;

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
