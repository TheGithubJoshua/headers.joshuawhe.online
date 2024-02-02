<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSARenderingExporter.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSARenderingExporter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSARenderingExporter : NSObject <TSKRenderingExporter> {
    TSDBitmapRenderingQualityInfo * mBitmapRenderingQualityInfo;
    TSADocumentRoot * mDocumentRoot;
    bool  mDoesDrawAllPages;
    TSDImager * mImager;
    NSObject<OS_dispatch_queue> * mImagerAccessLock;
    bool  mIsCancelled;
    bool  mIsQuit;
    bool  mPaginate;
    TSUProgressContext * mProgressContext;
    NSObject<TSARenderingExporterDelegate> * mRenderingExporterDelegate;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundsRect;
@property (nonatomic, readonly) bool canExportInBackground;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *documentSpecificTypeUTI;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) bool isExportSupported;
@property (nonatomic, readonly) bool needsSupplementalFiles;
@property (nonatomic, readonly) unsigned long long pageCount;
@property (nonatomic) bool paginate;
@property (nonatomic, readonly) TSUProgress *progress;
@property (retain) TSUProgressContext *progressContext;
@property (nonatomic, readonly) double progressForCurrentPage;
@property (nonatomic, readonly) NSString *savePanelMessage;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *typeUTI;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unscaledClipRect;

- (void).cxx_destruct;
- (id)bitmapRenderingQualityInfo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsRect;
- (void)cancel;
- (id)currentInfos;
- (id)documentRoot;
- (void)drawAllPagesWithContext:(struct CGContext { }*)arg1 returnSuccess:(bool*)arg2;
- (bool)drawCurrentPageInContext:(struct CGContext { }*)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 createPage:(bool)arg4;
- (void)drawCurrentPageWithContext:(struct CGContext { }*)arg1 returnSuccess:(bool*)arg2;
- (bool)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
- (bool)exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4;
- (void)finalizeContext:(struct CGContext { }*)arg1;
- (bool)incrementPage;
- (id)initWithDocumentRoot:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1 imager:(id)arg2;
- (bool)isCancelled;
- (bool)isQuit;
- (void)p_drawCurrentPageWithContext:(struct CGContext { }*)arg1 returnSuccess:(bool*)arg2 createPage:(bool)arg3;
- (bool)p_exportToURL:(id)arg1 pageNumber:(unsigned long long)arg2 delegate:(id)arg3 error:(id*)arg4;
- (id)p_renderingExporterDelegate;
- (unsigned long long)pageCount;
- (bool)paginate;
- (void)performBlockWithImager:(id /* block */)arg1;
- (bool)preparePage:(unsigned long long)arg1;
- (id)progressContext;
- (double)progressForCurrentPage;
- (void)quit;
- (bool)setInfosToCurrentPage;
- (void)setPaginate:(bool)arg1;
- (void)setProgressContext:(id)arg1;
- (void)setup;
- (void)teardown;
- (double)totalProgess;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledClipRect;
- (void)waitForRecalcToFinish;

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