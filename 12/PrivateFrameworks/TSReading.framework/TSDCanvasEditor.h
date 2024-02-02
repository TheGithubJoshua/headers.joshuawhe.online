<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSDCanvasEditor.h</title>
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

/PrivateFrameworks/TSReading.framework/TSDCanvasEditor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading (261)
 */

@interface TSDCanvasEditor : NSObject <TSDCanvasEditor> {
    TSDCanvasEditorHelper * mCanvasEditorHelper;
    NSObject<TSDInlineFloatingWrapInspectorDelegate> * mInlineFloatingEditor;
    UIView * mInputView;
    TSDInteractiveCanvasController * mInteractiveCanvasController;
    bool  mPreventImageDataReplace;
    TSDCanvasSelection * mSelection;
    NSObject<TSDArrangeInspectorDelegate> * mZOrderArranger;
}

@property (nonatomic, readonly) TSDCanvasEditorHelper *canvasEditorHelper;
@property (nonatomic, readonly) TSKSelection<TSDCanvasSelection> *canvasSelection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *infosForSelectAllInRoot;
@property (readonly, retain) UIView *inputAccessoryView;
@property (readonly, retain) UIView *inputView;
@property (nonatomic, readonly) TSDInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } markedRange;
@property (nonatomic, readonly) TSPObject *modelForSelection;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingEndpoints;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingFill;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingOpacity;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingReflection;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingResize;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingShadow;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingStroke;
@property (nonatomic, readonly) NSSet *selectedObjectsSupportingTextInset;
@property (nonatomic, retain) TSKSelection *selection;
@property (nonatomic, retain) TSKSelection<TSDTextSelection> *selectionForArrowKeys;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) TSKSelection<TSDTextSelection> *textInputSelection;
@property (readonly) bool wantsRawArrowKeyEvents;

+ (Class)canvasEditorHelperClass;
+ (id)canvasSelectionWithInfos:(id)arg1;
+ (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
+ (bool)physicalKeyboardIsSender:(id)arg1;
+ (id /* block */)spatialInfoComparator;

- (bool)canAddOrShowComment;
- (bool)canCopyStyle;
- (bool)canDeleteComment;
- (bool)canGroupDrawable:(id)arg1;
- (bool)canGroupWithSender:(id)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canSelectAllWithSender:(id)arg1;
- (bool)canUngroupWithSender:(id)arg1;
- (bool)canvasEditorCanCopyStyleWithSender:(id)arg1;
- (bool)canvasEditorCanCopyWithSender:(id)arg1;
- (bool)canvasEditorCanCutWithSender:(id)arg1;
- (bool)canvasEditorCanDeleteWithSender:(id)arg1;
- (bool)canvasEditorCanDuplicateWithSender:(id)arg1;
- (bool)canvasEditorCanGroupWithSender:(id)arg1;
- (bool)canvasEditorCanSelectAllWithSender:(id)arg1;
- (bool)canvasEditorCanUngroupWithSender:(id)arg1;
- (id)canvasEditorHelper;
- (void)canvasInfosDidChange;
- (id)canvasSelection;
- (id)canvasSelectionWithInfos:(id)arg1;
- (id)canvasSelectionWithInfos:(id)arg1 andContainer:(id)arg2;
- (unsigned long long)charIndexByMovingPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3 preferPosition:(double*)arg4;
- (void)clearMarkedRange;
- (void)connectWithConnectionLine:(id)arg1;
- (void)copy:(id)arg1;
- (void)copyToPasteboard:(id)arg1 withSender:(id)arg2;
- (unsigned long long)countOfDrawables;
- (void)dealloc;
- (id)documentRoot;
- (id)drawables;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })editRange;
- (Class)editorClassForSelection;
- (id)editorToPopToOnEndEditing;
- (void)endEditing;
- (void)extendSelectionLeft;
- (void)extendSelectionRight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)infosForSelectAllInRoot;
- (id)initWithInteractiveCanvasController:(id)arg1;
- (id)inputAccessoryView;
- (id)inputView;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertText:(id)arg1;
- (id)interactiveCanvasController;
- (bool)isCharIndex:(unsigned long long)arg1 withEolAffinity:(bool)arg2 atBoundary:(long long)arg3 inDirection:(long long)arg4;
- (bool)isCharIndex:(unsigned long long)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (bool)isRepSelectable:(id)arg1;
- (bool)isSelectedInfo:(id)arg1;
- (id)keyCommands;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })markedRange;
- (id)modelForSelection;
- (id)p_filterNonDisplayedInfos:(id)arg1;
- (id)p_nextInfoInTabSequence:(int)arg1;
- (void)p_notifyRepsForSelectionChangeFrom:(id)arg1 to:(id)arg2;
- (id)p_spatiallySortedDrawables;
- (id)pasteboardController;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfWordEnclosingCharIndex:(unsigned long long)arg1 backward:(bool)arg2;
- (void)repWasCreated:(id)arg1;
- (void)replaceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withText:(id)arg2;
- (long long)returnKeyType;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (id)selection;
- (id)selectionRectsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)selectionWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setSelection:(id)arg1;
- (void)setSelection:(id)arg1 withFlags:(unsigned long long)arg2;
- (void)setSelectionToInfo:(id)arg1;
- (void)setSelectionToInfos:(id)arg1;
- (void)setSelectionToRep:(id)arg1;
- (void)setSelectionWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 endOfLine:(bool)arg2;
- (bool)shouldPushNewEditorForNewSelection;
- (bool)shouldUseAlternateSelectionHighlight;
- (void)teardown;
- (id)textColorAtCharIndex:(unsigned long long)arg1;
- (id)textFontAtCharIndex:(unsigned long long)arg1;
- (id)textInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)textInputSelection;
- (bool)textIsVerticalAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)textLength;
- (bool)wantsKeyboard;
- (bool)wantsRawArrowKeyEvents;

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