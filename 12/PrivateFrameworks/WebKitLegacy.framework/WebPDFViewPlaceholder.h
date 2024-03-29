<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WebPDFViewPlaceholder.h</title>
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

/PrivateFrameworks/WebKitLegacy.framework/WebPDFViewPlaceholder.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy (8607.3.18)
 */

@interface WebPDFViewPlaceholder : WAKView <WebPDFDocumentRepresentation, WebPDFDocumentView> {
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    WebDataSource * _dataSource;
    NSObject<WebPDFViewPlaceholderDelegate> * _delegate;
    bool  _didCompleteLayout;
    bool  _didFinishLoad;
    struct CGPDFDocument { } * _document;
    NSArray * _pageRects;
    NSArray * _pageYOrigins;
    NSString * _title;
}

@property struct CGSize { double x1; double x2; } containerSize;
@property (readonly, copy) NSString *debugDescription;
@property NSObject<WebPDFViewPlaceholderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool didCompleteLayout;
@property (readonly) struct CGPDFDocument { }*doc;
@property (readonly) struct CGPDFDocument { }*document;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *pageRects;
@property (retain) NSArray *pageYOrigins;
@property (readonly) Class superclass;
@property (retain) NSString *title;
@property (readonly) unsigned long long totalPages;

+ (Class)_representationClassForWebFrame:(id)arg1;
+ (void)setAsPDFDocRepAndView;
+ (id)supportedMIMETypes;

- (struct CGSize { double x1; double x2; })_computePageRects:(struct CGPDFDocument { }*)arg1;
- (void)_doPostLoadOrUnlockTasks;
- (void)_evaluateJSForDocument:(struct CGPDFDocument { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_getPDFPageBounds:(struct CGPDFPage { }*)arg1;
- (void)_notifyDidCompleteLayout;
- (void)_updateTitleForDocumentIfAvailable;
- (void)_updateTitleForURL:(id)arg1;
- (bool)canProvideDocumentSource;
- (void)clearDocument;
- (struct CGSize { double x1; double x2; })containerSize;
- (void)dataSourceUpdated:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (bool)didCompleteLayout;
- (void)didUnlockDocument;
- (struct CGPDFDocument { }*)doc;
- (struct CGPDFDocument { }*)document;
- (id)documentSource;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (void)layout;
- (id)pageRects;
- (id)pageYOrigins;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPageNumber:(unsigned long long)arg1;
- (void)setContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocument:(struct CGPDFDocument { }*)arg1;
- (void)setPageRects:(id)arg1;
- (void)setPageYOrigins:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)simulateClickOnLinkToURL:(id)arg1;
- (id)title;
- (unsigned long long)totalPages;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;

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
