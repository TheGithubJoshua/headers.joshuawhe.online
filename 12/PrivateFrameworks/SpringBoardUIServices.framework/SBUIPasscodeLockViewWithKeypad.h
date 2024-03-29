<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SBUIPasscodeLockViewWithKeypad.h</title>
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

/PrivateFrameworks/SpringBoardUIServices.framework/SBUIPasscodeLockViewWithKeypad.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices (1)
 */

@interface SBUIPasscodeLockViewWithKeypad : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate, SBUIPasscodeLockNumberPadDelegate> {
    bool  _hasPerformedLayoutOnce;
    NSString * _lastCharacterBeforeBackspace;
    SBUIPasscodeLockNumberPad * _numberPad;
    UILabel * _statusSubtitleView;
    UILabel * _statusTitleView;
    bool  _undoInputOnTouchCancellation;
    bool  _useLightStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *lastCharacterBeforeBackspace;
@property (nonatomic, retain) UILabel *statusSubtitleView;
@property (nonatomic, retain) UILabel *statusTitleView;
@property (readonly) Class superclass;
@property (getter=_undoInputOnTouchCancellation, setter=_setUndoInputOnTouchCancellation:, nonatomic) bool undoInputOnTouchCancellation;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultEntryFieldPosition;
- (double)_entryFieldBottomYDistanceFromNumberPadTopButton;
- (bool)_includesStatusView;
- (void)_layoutEntryField;
- (void)_layoutStatusView;
- (id)_newEntryField;
- (id)_newStatusSubtitleView;
- (id)_newStatusTitleView;
- (void)_noteBackspaceHit;
- (void)_noteKeyUp:(id)arg1;
- (void)_noteStringEntered:(id)arg1 eligibleForPlayingSounds:(bool)arg2;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegatePasscodeEntered;
- (id)_numberPad;
- (id)_numericEntryFieldIfExists;
- (double)_offsetForCenteringTitleAndEntryFieldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTopYvalue:(double)arg2 bottomYvalue:(double)arg3;
- (void)_setHasInput:(bool)arg1;
- (void)_setUndoInputOnTouchCancellation:(bool)arg1;
- (id)_statusSubtitleView;
- (id)_statusSubtitleViewTitleFont;
- (id)_statusTitleView;
- (id)_statusTitleViewTitleFont;
- (double)_statusTitleWidth;
- (void)_toggleForStatusField;
- (bool)_undoInputOnTouchCancellation;
- (void)_updateFonts;
- (bool)_usesLightStyle;
- (void)dealloc;
- (id)init;
- (id)initWithLightStyle:(bool)arg1;
- (id)lastCharacterBeforeBackspace;
- (void)layoutSubviews;
- (id)passcode;
- (bool)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeEntryFieldDidAcceptEntry:(id)arg1;
- (void)passcodeEntryFieldDidCancelEntry:(id)arg1;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (void)passcodeLockNumberPad:(id)arg1 keyCancelled:(id)arg2;
- (void)passcodeLockNumberPad:(id)arg1 keyDown:(id)arg2;
- (void)passcodeLockNumberPad:(id)arg1 keyUp:(id)arg2;
- (void)passcodeLockNumberPadBackspaceButtonHit:(id)arg1;
- (void)passcodeLockNumberPadCancelButtonHit:(id)arg1;
- (void)passcodeLockNumberPadEmergencyCallButtonHit:(id)arg1;
- (void)reset;
- (void)resetForFailedPasscode;
- (void)setKeypadVisible:(bool)arg1 animated:(bool)arg2;
- (void)setLastCharacterBeforeBackspace:(id)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setShowsEmergencyCallButton:(bool)arg1;
- (void)setShowsStatusField:(bool)arg1;
- (void)setStatusSubtitleView:(id)arg1;
- (void)setStatusTitleView:(id)arg1;
- (id)statusSubtitleView;
- (id)statusTitleView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForTransitionToPasscodeView:(bool)arg1 animated:(bool)arg2;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(bool)arg3;
- (void)willTransitionToPasscodeView;

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
