<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UILayoutManagerBasedDraggableGeometry.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UILayoutManagerBasedDraggableGeometry.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UILayoutManagerBasedDraggableGeometry : NSObject <UITextDraggableGeometry, UITextDraggableGeometryFastSameViewOperationsSupporting> {
    long long  _geometryOptions;
    NSLayoutManager * _layoutManager;
    UIView<UITextDragSupporting><UITextDropSupporting> * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long geometryOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLayoutManager *layoutManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView<UITextDragSupporting><UITextDropSupporting> *view;

- (void).cxx_destruct;
- (id)_draggableTextInRange:(id)arg1;
- (bool)_isUsableLink:(id)arg1;
- (id /* block */)_previewProviderForTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_renderTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 image:(out id*)arg2 boundingRectangles:(out id*)arg3 forLifting:(bool)arg4;
- (id /* block */)_targetedPreviewProviderForImage:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id /* block */)_targetedPreviewProviderForTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id /* block */)_targetedPreviewProviderForTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 overrideLifting:(id /* block */)arg2;
- (struct CGPoint { double x1; double x2; })_textOriginOffsetForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_textRectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inView:(id)arg2;
- (id)_textStorage;
- (id)attributedStringsForTextRanges:(id)arg1;
- (id)draggableObjectsForTextRange:(id)arg1;
- (long long)geometryOptions;
- (id)initWithView:(id)arg1 layoutManager:(id)arg2;
- (id)layoutManager;
- (id)performSameViewDropOperation:(id)arg1;
- (id)previewForDroppingText:(id)arg1 toPosition:(id)arg2 inContainerView:(id)arg3;
- (void)setGeometryOptions:(long long)arg1;
- (id)textRangeForAttachmentInTextRange:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)textRangesForAttachmentsInTextRange:(id)arg1;
- (id)view;

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
