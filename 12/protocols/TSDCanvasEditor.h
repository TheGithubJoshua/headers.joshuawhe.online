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

/protocols/TSDCanvasEditor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol TSDCanvasEditor <TSDEditor, TSDSubcommandProvider, TSDTextInput>

@required

+ (<TSDCanvasSelection> *)canvasSelectionWithInfos:(NSSet *)arg1;
+ (<TSDCanvasSelection> *)canvasSelectionWithInfos:(NSSet *)arg1 andContainer:(TSDDrawableInfo<TSDContainerInfo> *)arg2;

- (bool)canGroupDrawable:(TSDDrawableInfo *)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canvasEditorCanCopyStyleWithSender:(id)arg1;
- (bool)canvasEditorCanCopyWithSender:(id)arg1;
- (bool)canvasEditorCanCutWithSender:(id)arg1;
- (bool)canvasEditorCanDeleteWithSender:(id)arg1;
- (bool)canvasEditorCanDuplicateWithSender:(id)arg1;
- (bool)canvasEditorCanGroupWithSender:(id)arg1;
- (bool)canvasEditorCanSelectAllWithSender:(id)arg1;
- (bool)canvasEditorCanUngroupWithSender:(id)arg1;
- (TSDCanvasEditorHelper *)canvasEditorHelper;
- (void)canvasInfosDidChange;
- (TSKSelection<TSDCanvasSelection> *)canvasSelection;
- (<TSDCanvasSelection> *)canvasSelectionWithInfos:(NSSet *)arg1;
- (<TSDCanvasSelection> *)canvasSelectionWithInfos:(NSSet *)arg1 andContainer:(TSDDrawableInfo<TSDContainerInfo> *)arg2;
- (void)connectWithConnectionLine:(id)arg1;
- (void)copy:(id)arg1;
- (void)copyToPasteboard:(TSPPasteboard *)arg1 withSender:(id)arg2;
- (unsigned long long)countOfDrawables;
- (NSArray *)drawables;
- (NSObject<TSDEditor> *)editorToPopToOnEndEditing;
- (id)initWithInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (TSDInteractiveCanvasController *)interactiveCanvasController;
- (bool)isRepSelectable:(TSDRep *)arg1;
- (bool)isSelectedInfo:(NSObject<TSDInfo> *)arg1;
- (TSPObject *)modelForSelection;
- (void)repWasCreated:(TSDRep *)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setSelection:(TSKSelection *)arg1 withFlags:(unsigned long long)arg2;
- (void)setSelectionToInfo:(TSDDrawableInfo *)arg1;
- (void)setSelectionToInfos:(NSSet *)arg1;
- (void)setSelectionToRep:(TSDRep *)arg1;
- (bool)shouldPushNewEditorForNewSelection;
- (bool)shouldUseAlternateSelectionHighlight;
- (void)teardown;

@optional

- (TSDExteriorTextWrap *)exteriorTextWrapForInfos:(NSSet *)arg1;
- (void)setExteriorTextWrap:(TSDExteriorTextWrap *)arg1 forInfos:(NSSet *)arg2;
- (void)setExteriorTextWrapMargin:(double)arg1 forInfos:(NSSet *)arg2;

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
