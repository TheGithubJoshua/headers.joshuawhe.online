<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUExtendedToolbar.h</title>
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

/Frameworks/PhotosUI.framework/PUExtendedToolbar.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUExtendedToolbar : UIToolbar <PUToolbarViewModelChangeObserver> {
    UIView * __accessoryView;
    UIView * __accessoryViewContainer;
    NSMutableSet * __accessoryViewContainers;
    double  __accessoryViewTopOutset;
    UIToolbar * __containedToolbar;
    double  __containedToolbarHeight;
    bool  __isUpdating;
    double  __minimumBackgroundHeight;
    bool  __needsUpdateAccessoryView;
    bool  __needsUpdateAccessoryViewContainer;
    bool  __needsUpdateAccessoryViewTopOutset;
    bool  __needsUpdateContainedToolbar;
    bool  __needsUpdateToolbarItems;
    long long  __numberOfNestedChanges;
    NSArray * __toolbarItems;
    PUToolbarViewModel * _toolbarViewModel;
}

@property (setter=_setAccessoryView:, nonatomic, retain) UIView *_accessoryView;
@property (setter=_setAccessoryViewContainer:, nonatomic, retain) UIView *_accessoryViewContainer;
@property (nonatomic, readonly) NSMutableSet *_accessoryViewContainers;
@property (setter=_setAccessoryViewTopOutset:, nonatomic) double _accessoryViewTopOutset;
@property (setter=_setContainedToolbar:, nonatomic, retain) UIToolbar *_containedToolbar;
@property (setter=_setContainedToolbarHeight:, nonatomic) double _containedToolbarHeight;
@property (setter=_setUpdating:, nonatomic) bool _isUpdating;
@property (setter=_setMinimumBackgroundHeight:, nonatomic) double _minimumBackgroundHeight;
@property (setter=_setNeedsUpdateAccessoryView:, nonatomic) bool _needsUpdateAccessoryView;
@property (setter=_setNeedsUpdateAccessoryViewContainer:, nonatomic) bool _needsUpdateAccessoryViewContainer;
@property (setter=_setNeedsUpdateAccessoryViewTopOutset:, nonatomic) bool _needsUpdateAccessoryViewTopOutset;
@property (setter=_setNeedsUpdateContainedToolbar:, nonatomic) bool _needsUpdateContainedToolbar;
@property (setter=_setNeedsUpdateToolbarItems:, nonatomic) bool _needsUpdateToolbarItems;
@property (setter=_setNumberOfNestedChanges:, nonatomic) long long _numberOfNestedChanges;
@property (setter=_setToolbarItems:, nonatomic, copy) NSArray *_toolbarItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) PUToolbarViewModel *toolbarViewModel;

- (void).cxx_destruct;
- (id)_accessoryView;
- (id)_accessoryViewContainer;
- (id)_accessoryViewContainers;
- (double)_accessoryViewTopOutset;
- (void)_assertInsideChangeBlock;
- (void)_assertInsideUpdate;
- (id)_containedToolbar;
- (double)_containedToolbarHeight;
- (void)_getContainedToolbarFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 accessoryViewContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 forBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_invalidateAccessoryView;
- (void)_invalidateAccessoryViewContainer;
- (void)_invalidateAccessoryViewTopOutset;
- (void)_invalidateContainedToolbar;
- (void)_invalidateSize;
- (void)_invalidateToolbarItems;
- (bool)_isUpdating;
- (double)_minimumBackgroundHeight;
- (bool)_needsUpdate;
- (bool)_needsUpdateAccessoryView;
- (bool)_needsUpdateAccessoryViewContainer;
- (bool)_needsUpdateAccessoryViewTopOutset;
- (bool)_needsUpdateContainedToolbar;
- (bool)_needsUpdateToolbarItems;
- (long long)_numberOfNestedChanges;
- (void)_performChanges:(id /* block */)arg1;
- (void)_performChanges:(id /* block */)arg1 withAnimatorBlock:(id /* block */)arg2;
- (void)_setAccessoryView:(id)arg1;
- (void)_setAccessoryViewContainer:(id)arg1;
- (void)_setAccessoryViewTopOutset:(double)arg1;
- (void)_setContainedToolbar:(id)arg1;
- (void)_setContainedToolbarHeight:(double)arg1;
- (void)_setMinimumBackgroundHeight:(double)arg1;
- (void)_setNeedsUpdate;
- (void)_setNeedsUpdateAccessoryView:(bool)arg1;
- (void)_setNeedsUpdateAccessoryViewContainer:(bool)arg1;
- (void)_setNeedsUpdateAccessoryViewTopOutset:(bool)arg1;
- (void)_setNeedsUpdateContainedToolbar:(bool)arg1;
- (void)_setNeedsUpdateToolbarItems:(bool)arg1;
- (void)_setNumberOfNestedChanges:(long long)arg1;
- (void)_setToolbarItems:(id)arg1;
- (void)_setUpdating:(bool)arg1;
- (bool)_shouldStretchDuringCrossfadeTransition;
- (id)_toolbarItems;
- (void)_updateAccessoryTopOutsetViewIfNeeded;
- (void)_updateAccessoryViewIfNeeded;
- (void)_updateIfNeededWithAnimatorBlock:(id /* block */)arg1;
- (void)_updateToolbarItemsIfNeeded;
- (void)_updateViewsIfNeededWithAnimatorBlock:(id /* block */)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBarStyle:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (void)setToolbarViewModel:(id)arg1;
- (void)setToolbarViewModel:(id)arg1 withAnimatorBlock:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)toolbarViewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

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
