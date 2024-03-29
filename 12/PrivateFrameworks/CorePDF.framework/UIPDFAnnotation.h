<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIPDFAnnotation.h</title>
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

/PrivateFrameworks/CorePDF.framework/UIPDFAnnotation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF (414)
 */

@interface UIPDFAnnotation : NSObject {
    UIPDFAnnotationController * _annotationController;
    NSString * _annotationID;
    UIPDFAnnotationView * _annotationView;
    void * _appearanceStream;
    NSString * _associatedAnnotationID;
    struct CGColor { } * _color;
    NSString * _contents;
    struct CGPDFDictionary { } * _dictionary;
    CALayer * _drawingLayer;
    bool  _hidden;
    long long  _index;
    UIPDFPage * _page;
    struct CGPDFString { } * _pdfContents;
    UIPDFPopupAnnotation * _popup;
    NSMutableArray * _quadPoints;
    UIPDFSelection * _selection;
    unsigned long long  _tag;
    id  data;
    bool  editable;
}

@property (nonatomic) UIPDFAnnotationController *annotationController;
@property (nonatomic, retain) UIPDFAnnotationView *annotationView;
@property (nonatomic, retain) NSString *associatedAnnotationID;
@property (nonatomic, retain) NSString *contents;
@property (nonatomic, retain) id data;
@property (nonatomic, retain) CALayer *drawingLayer;
@property (nonatomic) bool editable;
@property (nonatomic) long long index;
@property (nonatomic) UIPDFPage *page;
@property (nonatomic) UIPDFPopupAnnotation *popup;
@property (nonatomic, readonly) bool recognizeGestures;
@property (nonatomic) UIPDFSelection *selection;
@property (nonatomic) unsigned long long tag;

+ (id)newAnnotationWithPage:(id)arg1 fromArchive:(id)arg2;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })Rect;
- (id)annotationController;
- (id)annotationID;
- (int)annotationType;
- (id)annotationView;
- (id)archive;
- (id)associatedAnnotationID;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGColor { }*)color;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)contents;
- (id)data;
- (void)dealloc;
- (id)descriptionHOLD;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)drawingLayer;
- (bool)editable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)getImageNamed:(id)arg1 ofType:(id)arg2;
- (bool)hasPopUp;
- (bool)hidden;
- (long long)index;
- (id)init;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1;
- (void)makeQuadpointsFrom:(id)arg1;
- (struct CGPath { }*)newPathFromQuadPoints;
- (id)newSelection;
- (id)page;
- (const char *)pdfContents;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popUpAnnotationRect;
- (id)popup;
- (bool)recognizeGestures;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectIn:(struct CGPDFArray { }*)arg1;
- (id)selection;
- (void)setAnnotationController:(id)arg1;
- (void)setAnnotationID:(id)arg1;
- (void)setAnnotationView:(id)arg1;
- (void)setAssociatedAnnotationID:(id)arg1;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setContents:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDrawingLayer:(id)arg1;
- (void)setEditable:(bool)arg1;
- (void)setIndex:(long long)arg1;
- (void)setPage:(id)arg1;
- (void)setPageView:(id)arg1;
- (void)setPopup:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)setTag:(unsigned long long)arg1;
- (unsigned long long)tag;
- (Class)viewClass;

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
