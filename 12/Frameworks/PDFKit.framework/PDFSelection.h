<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PDFSelection.h</title>
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

/Frameworks/PDFKit.framework/PDFSelection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit (745.3)
 */

@interface PDFSelection : NSObject <NSCopying> {
    PDFSelectionPrivate * _private;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic, readonly) NSArray *pages;
@property (nonatomic, readonly) NSString *string;

- (void).cxx_destruct;
- (id)activeColor;
- (void)addCGSelection:(struct CGPDFSelection { }*)arg1 forPage:(id)arg2;
- (void)addSelection:(id)arg1;
- (void)addSelectionCore:(id)arg1 normalize:(bool)arg2;
- (void)addSelectionNoNormalize:(id)arg1;
- (void)addSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 page:(id)arg2 normalize:(bool)arg3;
- (void)addSelections:(id)arg1;
- (id)asDestination;
- (id)attributedString;
- (id)attributedStringScaled:(double)arg1;
- (bool)beginsAndEndsOnWordBoundaries;
- (id)boundsArrayForPage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForPage:(id)arg1;
- (struct CGPDFSelection { }*)cgSelectionForPage:(id)arg1;
- (id)cgSelectionPages;
- (struct __CFArray { }*)cgSelections;
- (id)color;
- (id)colorWithCGColor:(struct CGColor { }*)arg1 space:(struct CGColorSpace { }*)arg2;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)createAttributedStringForCGSelection:(struct CGPDFSelection { }*)arg1 scaled:(double)arg2;
- (void)dealloc;
- (id)description;
- (id)document;
- (void)drawForPage:(id)arg1 active:(bool)arg2;
- (void)drawForPage:(id)arg1 withBox:(long long)arg2 active:(bool)arg3;
- (void)drawForPage:(id)arg1 withBox:(int)arg2 active:(bool)arg3 inContext:(struct CGContext { }*)arg4;
- (void)extendSelectionAtEnd:(long long)arg1;
- (void)extendSelectionAtStart:(long long)arg1;
- (void)extendSelectionForLineBoundaries;
- (struct CGPoint { double x1; double x2; })firstCharCenter;
- (id)firstPage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstSpanBoundsForPage:(id)arg1;
- (bool)forceBreaks;
- (id)html;
- (id)inactiveColor;
- (unsigned long long)indexOfFirstCharacterOnPage:(id)arg1;
- (unsigned long long)indexOfLastCharacterOnPage:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (id)initWithPage:(id)arg1;
- (bool)isEmpty;
- (id)lastPage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastSpanBoundsForPage:(id)arg1;
- (struct CGPoint { double x1; double x2; })leftMostCharCenter;
- (void)normalize;
- (unsigned long long)numberOfTextRangesOnPage:(id)arg1;
- (id)pages;
- (unsigned long long)pdfKitIndexOfFirstCharacterOnPage:(id)arg1;
- (unsigned long long)pdfKitIndexOfLastCharacterOnPage:(id)arg1;
- (id)pdfSelectionUUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })previewRangeAtIndex:(unsigned long long)arg1 onPage:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeAtIndex:(unsigned long long)arg1 onPage:(id)arg2;
- (struct CGPoint { double x1; double x2; })rightMostCharCenter;
- (id)rtfdData;
- (id)selectionsByLine;
- (void)setActiveColor:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setForceBreaks:(bool)arg1;
- (void)setInactiveColor:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })spanBoundsForPage:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)string;
- (void)subtractSelection:(id)arg1;
- (void)subtractSelectionCore:(id)arg1 normalize:(bool)arg2;
- (id)webArchive;

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