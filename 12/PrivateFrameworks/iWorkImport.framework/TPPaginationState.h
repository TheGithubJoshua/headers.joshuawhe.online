<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TPPaginationState.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TPPaginationState.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TPPaginationState : NSObject {
    bool  _allowParagraphMetrics;
    unsigned long long  _bodyCharIndex;
    void * _bodyLayoutState;
    TSWPStorage * _bodyStorage;
    unsigned long long  _documentPageIndex;
    bool  _doingPagination;
    unsigned long long  _footnoteIndex;
    unsigned long long  _lastLaidOutSectionIndex;
    TPPageIndexPath * _pageIndexPath;
}

@property (nonatomic) bool allowParagraphMetrics;
@property (nonatomic) unsigned long long bodyCharIndex;
@property (nonatomic) void*bodyLayoutState;
@property (nonatomic, readonly) unsigned long long documentPageIndex;
@property (nonatomic) bool doingPagination;
@property (nonatomic) unsigned long long footnoteIndex;
@property (nonatomic, readonly) bool isPaginationComplete;
@property (nonatomic, readonly) unsigned long long lastLaidOutDocumentPageIndex;
@property (nonatomic, readonly) unsigned long long lastLaidOutSectionIndex;
@property (nonatomic, readonly) bool onLastSection;
@property (nonatomic, readonly) unsigned long long pageIndex;
@property (nonatomic, readonly) TPPageIndexPath *pageIndexPath;
@property (nonatomic, readonly) TPSection *section;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } sectionCharRange;
@property (nonatomic, readonly) unsigned long long sectionIndex;

- (void).cxx_destruct;
- (void)advancePageIndex;
- (void)advanceSectionIndex;
- (bool)allowParagraphMetrics;
- (void)backUpToPageIndexPath:(id)arg1 documentPageIndex:(unsigned long long)arg2;
- (unsigned long long)bodyCharIndex;
- (void*)bodyLayoutState;
- (unsigned long long)documentPageIndex;
- (bool)doingPagination;
- (unsigned long long)footnoteIndex;
- (id)initWithBodyStorage:(id)arg1;
- (bool)isPaginationComplete;
- (bool)isPaginationCompleteThroughDocumentPageIndex:(unsigned long long)arg1;
- (bool)isPaginationCompleteUpToDocumentPageIndex:(unsigned long long)arg1;
- (unsigned long long)lastLaidOutDocumentPageIndex;
- (unsigned long long)lastLaidOutSectionIndex;
- (bool)onLastSection;
- (unsigned long long)pageIndex;
- (id)pageIndexPath;
- (void)restartPaginationFromFirstPage;
- (void)restartPaginationFromPageIndexPath:(id)arg1 documentPageIndex:(unsigned long long)arg2;
- (id)section;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sectionCharRange;
- (unsigned long long)sectionIndex;
- (void)setAllowParagraphMetrics:(bool)arg1;
- (void)setBodyCharIndex:(unsigned long long)arg1;
- (void)setBodyLayoutState:(void*)arg1;
- (void)setDocumentPageIndex:(unsigned long long)arg1;
- (void)setDoingPagination:(bool)arg1;
- (void)setFootnoteIndex:(unsigned long long)arg1;
- (void)setPageIndex:(unsigned long long)arg1;
- (void)setSectionIndex:(unsigned long long)arg1;

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
