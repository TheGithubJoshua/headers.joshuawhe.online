<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKScrollViewController.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKScrollViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKScrollViewController : CKViewController {
    double  _bottomInsetPadding;
    bool  _keyboardInteractionCancelled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardScreenFrame;
    bool  _keyboardVisible;
    double  _minimumBottomInset;
    id /* block */  _overrideScrollBlock;
    UIScrollView * _scrollView;
    bool  _topInsetIncludesPalette;
    double  _topInsetPadding;
    IMScheduledUpdater * _updater;
}

@property (nonatomic, readonly) double bottomInsetPadding;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardFrame;
@property (nonatomic) bool keyboardInteractionCancelled;
@property (getter=isKeyboardOnscreenWithoutAccessoryView, nonatomic, readonly) bool keyboardOnscreenWithoutAccessoryView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardScreenFrame;
@property (getter=isKeyboardUndocked, nonatomic, readonly) bool keyboardUndocked;
@property (getter=isKeyboardVisible, nonatomic) bool keyboardVisible;
@property (nonatomic, readonly) double minimumBottomInset;
@property (nonatomic, copy) id /* block */ overrideScrollBlock;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) bool topInsetIncludesPalette;
@property (nonatomic, readonly) double topInsetPadding;
@property (nonatomic, retain) IMScheduledUpdater *updater;

- (void).cxx_destruct;
- (double)_bottomRotatingFooterHeight;
- (void)_changedStatusBarFrame:(id)arg1;
- (void)_entryViewWillRotate:(id)arg1;
- (void)_updateScrollGeometryWithDuration:(double)arg1;
- (double)_visibleKeyboardHeight;
- (double)accessoryViewHeight;
- (void)beginHoldingScrollGeometryUpdatesForKey:(id)arg1;
- (double)bottomInsetPadding;
- (double)bottomInsetWithoutAccessoryView;
- (void)contentInsetDidChange;
- (void)contentInsetWillChange:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 animated:(bool)arg2 duration:(double)arg3;
- (void)dealloc;
- (void)endHoldingScrollGeometryUpdatesForAllKeys;
- (void)endHoldingScrollGeometryUpdatesForKey:(id)arg1;
- (id)init;
- (bool)isHoldingScrollGeometryUpdates;
- (bool)isKeyboardOnscreenWithoutAccessoryView;
- (bool)isKeyboardUndocked;
- (bool)isKeyboardVisible;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardDidShowOrHide:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardFrame;
- (bool)keyboardInteractionCancelled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardScreenFrame;
- (void)keyboardVisibilityWillChange;
- (void)keyboardWillHideViaGesture;
- (void)keyboardWillShowOrHide:(id)arg1;
- (double)minimumBottomInset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })navigationBarInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })navigationBarInsetsWithoutPalette;
- (id /* block */)overrideScrollBlock;
- (id)scrollView;
- (void)setKeyboardInteractionCancelled:(bool)arg1;
- (void)setKeyboardScreenFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setKeyboardVisible:(bool)arg1;
- (void)setOverrideScrollBlock:(id /* block */)arg1;
- (void)setUpdater:(id)arg1;
- (bool)topInsetIncludesPalette;
- (double)topInsetPadding;
- (void)updateScrollGeometry;
- (id)updater;
- (double)visibleHeightAboveKeyboard;

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
