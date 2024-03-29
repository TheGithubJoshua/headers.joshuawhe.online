<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIInputViewController.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIInputViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIInputViewController : UIViewController <UITextInputDelegate, _UITextDocumentInterfaceDelegate> {
    bool  _alignsToContentViewController;
    bool  _autosizeToCurrentKeyboard;
    bool  _commitInputModeOnTouchEnd;
    bool  _hasDictationKey;
    bool  _inputModeListIsShown;
    NSString * _primaryLanguage;
    <UITextDocumentProxy> * _textDocumentProxy;
    double  _touchBegan;
    bool  _viewConformsToRemotePlaceholder;
}

@property (nonatomic) bool _alignsToContentViewController;
@property (setter=_setAutosizeToCurrentKeyboard:, nonatomic) bool _autosizeToCurrentKeyboard;
@property (nonatomic, readonly) bool _isPlaceholder;
@property (nonatomic, readonly) UIKeyboard *_keyboard;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasDictationKey;
@property (nonatomic, readonly) bool hasFullAccess;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIInputView *inputView;
@property (nonatomic, readonly) bool needsInputModeSwitchKey;
@property (nonatomic, copy) NSString *primaryLanguage;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <UITextDocumentProxy> *textDocumentProxy;

+ (bool)_requiresProxyInterface;
+ (void)presentDialogForAddingKeyboard;

- (bool)_alignsToContentViewController;
- (bool)_autosizeToCurrentKeyboard;
- (bool)_canBecomeFirstResponder;
- (bool)_canResignIfContainsFirstResponder;
- (id)_compatibilityController;
- (void)_didResetDocumentState;
- (id)_extensionContext;
- (bool)_isPlaceholder;
- (id)_keyboard;
- (id)_proxyInterface;
- (void)_setAutosizeToCurrentKeyboard:(bool)arg1;
- (void)_setExtensionContextUUID:(id)arg1;
- (void)_setTextDocumentProxy:(id)arg1;
- (void)_setupInputController;
- (bool)_shouldForwardSystemLayoutFittingSizeChanges;
- (struct CGSize { double x1; double x2; })_systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)_textDocumentInterface;
- (void)_updateConformanceCache;
- (void)_willResetDocumentState;
- (void)advanceToNextInputMode;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)dismissKeyboard;
- (void)handleInputModeListFromView:(id)arg1 withEvent:(id)arg2;
- (bool)hasDictationKey;
- (bool)hasFullAccess;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)inputView;
- (void)loadView;
- (bool)needsInputModeSwitchKey;
- (id)primaryLanguage;
- (void)proceedShouldReturnIfPossibleForASP;
- (void)requestSupplementaryLexiconWithCompletion:(id /* block */)arg1;
- (void)returnToPreviousInputMode;
- (void)selectionDidChange:(id)arg1;
- (void)selectionWillChange:(id)arg1;
- (void)setHasDictationKey:(bool)arg1;
- (void)setInputView:(id)arg1;
- (void)setPrimaryLanguage:(id)arg1;
- (void)setView:(id)arg1;
- (void)set_alignsToContentViewController:(bool)arg1;
- (void)set_autosizeToCurrentKeyboard:(bool)arg1;
- (void)textDidChange:(id)arg1;
- (id)textDocumentProxy;
- (void)textWillChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

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
