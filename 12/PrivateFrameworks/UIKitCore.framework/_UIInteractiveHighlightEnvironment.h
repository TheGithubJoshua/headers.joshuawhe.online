<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIInteractiveHighlightEnvironment.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIInteractiveHighlightEnvironment.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIInteractiveHighlightEnvironment : NSObject {
    NSUUID * _backgroundAnimationIdentifier;
    UIViewPropertyAnimator * _backgroundEffectAnimator;
    id /* block */  _backgroundEffectApplyBlock;
    UIViewFloatAnimatableProperty * _backgroundEffectProgress;
    UIVisualEffectView * _backgroundEffectView;
    _UIInteractiveHighlightEnvironment * _childEnvironment;
    UIScreen * _containerScreen;
    UIView * _containerView;
    _UIInteractiveHighlightEffectWindow * _containerWindow;
    UIView * _contentClipView;
    UIView * _contentOverlayView;
    UIView * _contentView;
    UIView * _customBackgroundEffectView;
    _UIInteractiveHighlightEnvironment * _parentEnvironment;
    NSArray * _viewRecords;
}

@property (nonatomic, copy) id /* block */ backgroundEffectApplyBlock;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) UIView *contentClipView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, retain) UIView *customBackgroundEffectView;
@property (getter=isHidden, nonatomic) bool hidden;

+ (id)interactiveHighlightEnvironmentForContainerView:(id)arg1;
+ (id)requestInteractiveHighlightEnvironmentForView:(id)arg1;

- (void).cxx_destruct;
- (void)applyBackgroundEffectWithMagnitude:(double)arg1 interactive:(bool)arg2 completion:(id /* block */)arg3;
- (void)applyContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id /* block */)backgroundEffectApplyBlock;
- (id)backgroundVisualEffectForProgress:(double)arg1;
- (id)containerView;
- (id)contentClipView;
- (id)contentView;
- (id)customBackgroundEffectView;
- (void)dealloc;
- (void)disableClippingForView:(id)arg1 ancestorView:(id)arg2;
- (void)finalizeBackgroundEffect;
- (void)finalizeContainerWindowIfNeeded;
- (void)finalizeContentViewIfNeeded;
- (void)finalizeViewRecord:(id)arg1;
- (long long)indexOfViewRecordForView:(id)arg1;
- (void)initBackgroundEffectViewIfNeeded;
- (void)initContainerWindowIfNeeded;
- (void)initContentViewIfNeeded;
- (id)initWithContainerScreen:(id)arg1;
- (id)initWithContainerView:(id)arg1;
- (id)initWithParentEnvironment:(id)arg1;
- (id)interactiveHighlightEffectForView:(id)arg1 options:(unsigned long long)arg2;
- (bool)isHidden;
- (id)newBackgroundEffectAnimator;
- (id)newViewRecordForView:(id)arg1 options:(unsigned long long)arg2;
- (void)removeAllViewRecords;
- (void)removeInteractiveHighlightEffect:(id)arg1;
- (void)removeViewRecordsIfNeeded;
- (void)reset;
- (void)setBackgroundEffectApplyBlock:(id /* block */)arg1;
- (void)setCustomBackgroundEffectView:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHidden:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setUserInteractionOnContainerEnabled:(bool)arg1;

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