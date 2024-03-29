<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UITextSelectionView.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UITextSelectionView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UITextSelectionView : UIView {
    bool  m_activated;
    bool  m_activeCaret;
    bool  m_caretAnimating;
    bool  m_caretBlinks;
    bool  m_caretShowingNow;
    NSTimer * m_caretTimer;
    UIView * m_caretView;
    bool  m_deferSelectionCommands;
    bool  m_delayShowingCommands;
    bool  m_dictationReplacementsMode;
    UIView * m_floatingCaretView;
    bool  m_forceRangeView;
    UITextInteractionAssistant * m_interactionAssistant;
    bool  m_isSuspended;
    struct __CFRunLoopObserver { } * m_observer;
    UITextRangeView * m_rangeView;
    NSArray * m_replacements;
    UITextSelection * m_selection;
    int  m_showingCommandsCounter;
    int  m_showingCommandsCounterForRotate;
    bool  m_visible;
    bool  m_wasShowingCommands;
}

@property (nonatomic) bool caretBlinks;
@property (nonatomic, readonly) UIView *caretView;
@property (nonatomic, readonly) UIView *floatingCaretView;
@property (nonatomic) bool forceRangeView;
@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic, readonly) UITextRangeView *rangeView;
@property (nonatomic, retain) NSArray *replacements;
@property (nonatomic, readonly) UITextSelection *selection;
@property (nonatomic, readonly) bool selectionCommandsShowing;
@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (void)_showCommandsWithReplacements:(id)arg1 isForContextMenu:(bool)arg2;
- (void)_showSelectionCommandsForContextMenu:(bool)arg1;
- (void)activate;
- (bool)affectedByScrollerNotification:(id)arg1;
- (void)animateBoxShrinkOn:(id)arg1;
- (void)animateCaret:(id)arg1 toPosition:(struct CGPoint { double x1; double x2; })arg2 withSize:(struct CGSize { double x1; double x2; })arg3;
- (void)animateExpanderOn:(id)arg1;
- (void)animatePulsingCaret:(id)arg1;
- (void)appearOrFadeIfNecessary;
- (void)beginFloatingCaretView;
- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)calculateAndShowReplacements:(id)arg1;
- (void)cancelDelayedCommandRequests;
- (void)caretBlinkTimerFired:(id)arg1;
- (bool)caretBlinks;
- (id)caretView;
- (id)caretViewColor;
- (void)clearCaret;
- (void)clearCaretBlinkTimer;
- (void)clearRangeAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clippedTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)configureForHighlightMode;
- (void)configureForReplacementMode;
- (void)configureForRevealHighlightMode;
- (void)configureForSelectionMode;
- (void)deactivate;
- (void)dealloc;
- (void)deferredUpdateSelectionCommands;
- (void)deferredUpdateSelectionRects;
- (void)detach;
- (void)didRotate:(id)arg1;
- (void)didSuspend:(id)arg1;
- (void)doneMagnifying;
- (id)dynamicCaret;
- (id)dynamicCaretList;
- (void)endFloatingCaretView;
- (void)endFloatingCursor;
- (id)floatingCaretView;
- (id)floatingCaretViewColor;
- (struct CGPoint { double x1; double x2; })floatingCursorPositionForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)forceRangeView;
- (void)hideCaret:(int)arg1;
- (void)hideSelectionCommands;
- (void)hideSelectionCommandsAfterDelay:(double)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithInteractionAssistant:(id)arg1;
- (void)inputModeDidChange:(id)arg1;
- (void)inputViewDidAnimate;
- (void)inputViewDidChange;
- (void)inputViewDidMove;
- (void)inputViewWillAnimate;
- (void)inputViewWillChange;
- (void)inputViewWillMove:(id)arg1;
- (void)installIfNecessary;
- (id)interactionAssistant;
- (void)invalidate;
- (bool)isValid;
- (void)layoutChangedByScrolling:(bool)arg1;
- (void)prepareForMagnification;
- (id)rangeView;
- (void)removeFromSuperview;
- (id)replacements;
- (void)scaleDidChange:(id)arg1;
- (void)scaleWillChange:(id)arg1;
- (id)scrollView;
- (id)selection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBoundingBox;
- (void)selectionChanged;
- (bool)selectionCommandsShowing;
- (void)selectionDidScroll:(id)arg1;
- (void)selectionDidTranslateForReachability:(id)arg1;
- (void)selectionWillScroll:(id)arg1;
- (void)selectionWillTranslateForReachability:(id)arg1;
- (void)setCaretBlinks:(bool)arg1;
- (void)setForceRangeView:(bool)arg1;
- (void)setReplacements:(id)arg1;
- (void)setVisible:(bool)arg1;
- (bool)shouldBeVisible;
- (void)showCalloutBarAfterDelay:(double)arg1;
- (void)showCaret:(int)arg1;
- (void)showCommandsWithReplacements:(id)arg1;
- (void)showInitialCaret;
- (void)showReplacementsWithGenerator:(id)arg1 forDictation:(bool)arg2 afterDelay:(double)arg3;
- (void)showSelectionCommands;
- (void)showSelectionCommandsAfterDelay:(double)arg1;
- (void)startCaretBlinkIfNeeded;
- (void)textSelectionViewActivated:(id)arg1;
- (void)tintColorDidChange;
- (void)touchCaretBlinkTimer;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2;
- (void)updateDocumentHasContent:(bool)arg1;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)updateSelectionCommands;
- (void)updateSelectionDots;
- (void)updateSelectionRects;
- (void)updateSelectionRectsIfNeeded;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)validateWithInteractionAssistant:(id)arg1;
- (void)viewAnimate:(id)arg1;
- (bool)visible;
- (void)wilLResume:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)windowDidResignOrBecomeKey;

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
