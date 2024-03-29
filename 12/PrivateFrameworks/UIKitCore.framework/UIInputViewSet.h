<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIInputViewSet.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIInputViewSet.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIInputViewSet : NSObject {
    UIInputViewController * _accessoryViewController;
    UIResponder * _accessoryViewNextResponder;
    UIInputViewController * _assistantViewController;
    UIView * _inputAccessoryView;
    UIView * _inputAssistantView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inputAssistantViewBounds;
    UIView * _inputView;
    UIInputViewController * _inputViewController;
    bool  _isCustomInputView;
    bool  _isNullInputView;
    bool  _isRemoteKeyboard;
    bool  _isSplit;
    UIResponder * _restorableResponder;
    bool  _restoreUsingBecomeFirstResponder;
    double  _splitHeightDelta;
}

@property (nonatomic, readonly) bool _inputViewIsSplit;
@property (nonatomic, retain) UIInputViewController *accessoryViewController;
@property (nonatomic) UIResponder *accessoryViewNextResponder;
@property (nonatomic, retain) UIInputViewController *assistantViewController;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputAccessoryViewBounds;
@property (nonatomic, retain) UIView *inputAssistantView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputAssistantViewBounds;
@property (nonatomic, retain) UIView *inputView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inputViewBounds;
@property (nonatomic, retain) UIInputViewController *inputViewController;
@property (nonatomic, readonly) bool inputViewKeyboardCanSplit;
@property (nonatomic) bool isCustomInputView;
@property (nonatomic, readonly) bool isInputAccessoryViewPlaceholder;
@property (nonatomic, readonly) bool isInputAssistantViewPlaceholder;
@property (nonatomic, readonly) bool isInputViewPlaceholder;
@property (nonatomic, readonly) bool isNullInputView;
@property (nonatomic) bool isRemoteKeyboard;
@property (nonatomic, readonly) bool isSplit;
@property (nonatomic, readonly) UIKeyboard *keyboard;
@property (nonatomic, readonly) UIView *layeringView;
@property (nonatomic) UIResponder *restorableResponder;
@property (nonatomic) bool restoreUsingBecomeFirstResponder;
@property (nonatomic, readonly) UIView *splitExemptSubview;
@property (nonatomic) double splitHeightDelta;
@property (nonatomic, readonly) bool supportsSplit;

+ (id)emptyInputSet;
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2;
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1;
+ (id)inputSetWithPlaceholderAndAccessoryView:(id)arg1;

- (bool)__isCKAccessoryView;
- (bool)_accessorySuppressesShadow;
- (bool)_actLikeInputAccessoryViewSupportsSplit;
- (void)_beginSplitTransitionIfNeeded;
- (void)_endSplitTransitionIfNeeded;
- (void)_forceRestoreUsingBecomeFirstResponder:(bool)arg1;
- (bool)_inputAccessoryViewSupportsSplit;
- (bool)_inputViewIsSplit;
- (bool)_inputViewIsVisible;
- (bool)_inputViewSetSupportsSplit;
- (bool)_inputViewSupportsSplit;
- (bool)_isFullscreen;
- (bool)_isKeyboard;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_leftInputViewSetFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rightInputViewSetFrame;
- (void)_setRenderConfig:(id)arg1;
- (void)_setSplitProgress:(double)arg1;
- (id)_splittableInputAccessoryView;
- (id)_themableInputAccessoryView;
- (id)accessoryViewController;
- (id)accessoryViewNextResponder;
- (id)assistantViewController;
- (bool)canAnimateToInputViewSet:(id)arg1;
- (bool)containsResponder:(id)arg1;
- (bool)containsView:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2;
- (void)inheritNullState:(id)arg1;
- (id)initWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 isKeyboard:(bool)arg4;
- (id)inputAccessoryView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputAccessoryViewBounds;
- (id)inputAssistantView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputAssistantViewBounds;
- (id)inputSetWithInputAccessoryViewFromInputSet:(id)arg1;
- (id)inputSetWithInputAccessoryViewOnly;
- (id)inputView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inputViewBounds;
- (id)inputViewController;
- (bool)inputViewKeyboardCanSplit;
- (bool)isCustomInputView;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isInputAccessoryViewPlaceholder;
- (bool)isInputAssistantViewPlaceholder;
- (bool)isInputViewPlaceholder;
- (bool)isNullInputView;
- (bool)isRemoteKeyboard;
- (bool)isSplit;
- (bool)isStrictSupersetOfViewSet:(id)arg1;
- (id)keyboard;
- (long long)keyboardOrientation:(id)arg1;
- (id)layeringView;
- (id)normalisePlaceholders;
- (void)refreshPresentation;
- (id)restorableResponder;
- (bool)restoreUsingBecomeFirstResponder;
- (void)setAccessoryViewController:(id)arg1;
- (void)setAccessoryViewNextResponder:(id)arg1;
- (bool)setAccessoryViewVisible:(bool)arg1 delay:(double)arg2;
- (void)setAssistantBarVisible:(bool)arg1 delay:(double)arg2 animated:(bool)arg3;
- (void)setAssistantViewController:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputAssistantView:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setInputViewController:(id)arg1;
- (void)setIsCustomInputView:(bool)arg1;
- (void)setIsRemoteKeyboard:(bool)arg1;
- (void)setKeyboardAssistantBar:(id)arg1;
- (void)setRestorableResponder:(id)arg1;
- (void)setRestoreUsingBecomeFirstResponder:(bool)arg1;
- (void)setSplitHeightDelta:(double)arg1;
- (id)splitExemptSubview;
- (double)splitHeightDelta;
- (bool)supportsSplit;
- (bool)usesKeyClicks;
- (bool)visible;

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
