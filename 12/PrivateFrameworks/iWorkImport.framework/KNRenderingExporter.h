<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>KNRenderingExporter.h</title>
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

/PrivateFrameworks/iWorkImport.framework/KNRenderingExporter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface KNRenderingExporter : TSARenderingExporter <TSDCanvasDelegate> {
    unsigned long long  _currentBuildIndex;
    unsigned long long  _currentPage;
    KNSlideNode * _currentSlideNode;
    NSMutableArray * _currentSlidesOnPage;
    KNPdfHyperlinkController * _hyperlinkController;
    KNOffscreenController * _offscreenController;
    double  _pageMargin;
    long long  _printLayout;
    NSString * _printTitle;
    id  _printView;
    bool  _printingBackgrounds;
    bool  _printingBorders;
    bool  _printingBuilds;
    bool  _printingDate;
    bool  _printingDraftQuality;
    bool  _printingPageMargins;
    bool  _printingSelectedSlides;
    bool  _printingSkippedSlides;
    bool  _printingSlideNumbers;
    NSOrderedSet * _selectedSlideNodes;
    unsigned long long  _slidesPerPage;
}

@property (nonatomic, readonly) <TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (nonatomic, readonly) unsigned long long currentBuildIndex;
@property (nonatomic, retain) KNSlideNode *currentSlideNode;
@property (nonatomic, readonly) unsigned long long currentSlideNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double heightOfPrintedText;
@property (nonatomic, retain) KNOffscreenController *offscreenController;
@property (nonatomic) double pageMargin;
@property (nonatomic) long long printLayout;
@property (nonatomic, copy) NSString *printTitle;
@property (nonatomic) id printView;
@property (getter=isPrintingBackgrounds, nonatomic) bool printingBackgrounds;
@property (getter=isPrintingBorders, nonatomic) bool printingBorders;
@property (getter=isPrintingBuilds, nonatomic) bool printingBuilds;
@property (getter=isPrintingDate, nonatomic) bool printingDate;
@property (getter=isPrintingDraftQuality, nonatomic) bool printingDraftQuality;
@property (getter=isPrintingPageMargins, nonatomic) bool printingPageMargins;
@property (getter=isPrintingSelectedSlides, nonatomic) bool printingSelectedSlides;
@property (getter=isPrintingSkippedSlides, nonatomic) bool printingSkippedSlides;
@property (getter=isPrintingSlideNumbers, nonatomic) bool printingSlideNumbers;
@property (nonatomic, readonly) unsigned long long rangeEnd;
@property (nonatomic, readonly) unsigned long long rangeStart;
@property (nonatomic, copy) NSOrderedSet *selectedSlideNodes;
@property (nonatomic, readonly) NSArray *slidesForPrinting;
@property (nonatomic) unsigned long long slidesPerPage;
@property (nonatomic, readonly) double spaceForSlideNumbers;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesViewForDrawing;

- (void)addAnchorPointForSlide:(id)arg1 context:(struct CGContext { }*)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsRect;
- (unsigned long long)currentBuildIndex;
- (id)currentInfos;
- (id)currentSlideNode;
- (unsigned long long)currentSlideNumber;
- (void)dealloc;
- (id)documentRoot;
- (void)drawBorderForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)drawDateForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (bool)drawImageForSlideNode:(id)arg1 andEvent:(unsigned long long)arg2 slideSize:(struct CGSize { double x1; double x2; })arg3 intoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct CGContext { }*)arg5 createPage:(bool)arg6;
- (void)drawInView:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawNSStringDateForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)drawSlideNumberForNode:(id)arg1 index:(unsigned long long)arg2 forRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(struct CGContext { }*)arg4 position:(long long)arg5;
- (void)enableRenderAllContent;
- (bool)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (bool)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4;
- (double)heightOfPrintedText;
- (bool)incrementPage;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isCanvasDrawingIntoPDF:(id)arg1;
- (bool)isPrintingBackgrounds;
- (bool)isPrintingBorders;
- (bool)isPrintingBuilds;
- (bool)isPrintingCanvas;
- (bool)isPrintingDate;
- (bool)isPrintingDraftQuality;
- (bool)isPrintingPageMargins;
- (bool)isPrintingSelectedSlides;
- (bool)isPrintingSkippedSlides;
- (bool)isPrintingSlideNumbers;
- (id)offscreenController;
- (unsigned long long)p_slideNumberForSlideNode:(id)arg1;
- (id)p_slideNumberStringForSlideNode:(id)arg1 buildIndex:(unsigned long long)arg2;
- (unsigned long long)pageCount;
- (long long)pageIndexFromQuickLookSlideNode:(id)arg1;
- (double)pageMargin;
- (bool)preparePage:(unsigned long long)arg1;
- (long long)printLayout;
- (id)printTitle;
- (id)printView;
- (double)progressForCurrentPage;
- (id)quickLookSlideNodes;
- (unsigned long long)rangeEnd;
- (unsigned long long)rangeStart;
- (id)selectedSlideNodes;
- (void)setCurrentSlideNode:(id)arg1;
- (void)setOffscreenController:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setPageMargin:(double)arg1;
- (void)setPrintLayout:(long long)arg1;
- (void)setPrintTitle:(id)arg1;
- (void)setPrintView:(id)arg1;
- (void)setPrintingBackgrounds:(bool)arg1;
- (void)setPrintingBorders:(bool)arg1;
- (void)setPrintingBuilds:(bool)arg1;
- (void)setPrintingDate:(bool)arg1;
- (void)setPrintingDraftQuality:(bool)arg1;
- (void)setPrintingPageMargins:(bool)arg1;
- (void)setPrintingSelectedSlides:(bool)arg1;
- (void)setPrintingSkippedSlides:(bool)arg1;
- (void)setPrintingSlideNumbers:(bool)arg1;
- (void)setSelectedSlideNodes:(id)arg1;
- (void)setSlidesPerPage:(unsigned long long)arg1;
- (void)setup;
- (bool)shouldSuppressBackgrounds;
- (id)slideIndexesToPrint;
- (id)slidesForPrinting;
- (unsigned long long)slidesPerPage;
- (double)spaceForSlideNumbers;
- (void)teardown;
- (bool)usesViewForDrawing;

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
