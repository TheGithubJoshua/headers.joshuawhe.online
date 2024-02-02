<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSTCellStateForLayout.h</title>
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

/PrivateFrameworks/TSReading.framework/TSTCellStateForLayout.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSTCellStateForLayout : NSObject {
    TSTCell * _cell;
    id  _cellContents;
    bool  _cellPropsRowHeight;
    bool  _cellWraps;
    bool  _forDrawing;
    bool  _inDynamicLayout;
    TSTLayoutContentCachedKey * _keyVal;
    int  _layoutCacheFlags;
    struct TSUCellRect { 
        struct TSUCellCoord { 
            unsigned int row; 
            unsigned short column; 
            bool _preserveRow; 
            bool _preserveColumn; 
        } origin; 
        struct { 
            unsigned int numberOfColumns; 
            unsigned int numberOfRows; 
        } size; 
    }  _layoutMergeRange;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
    double  _maxWidthForChildren;
    struct CGSize { 
        double width; 
        double height; 
    }  _minSize;
    struct TSUCellCoord { 
        unsigned int row; 
        unsigned short column; 
        bool _preserveRow; 
        bool _preserveColumn; 
    }  _modelCellID;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _paddingInsets;
    unsigned long long  _pageCount;
    unsigned long long  _pageNumber;
    int  _verticalAlignment;
    TSWPColumn * _wpColumn;
}

@property (nonatomic, copy) TSTCell *cell;
@property (nonatomic, retain) id cellContents;
@property (nonatomic) bool cellPropsRowHeight;
@property (nonatomic) bool cellWraps;
@property (nonatomic) bool forDrawing;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic) bool inDynamicLayout;
@property (nonatomic, retain) TSTLayoutContentCachedKey *keyVal;
@property (nonatomic) int layoutCacheFlags;
@property (nonatomic) struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; } layoutMergeRange;
@property (nonatomic) struct CGSize { double x1; double x2; } maxSize;
@property (nonatomic) double maxWidthForChildren;
@property (nonatomic) struct CGSize { double x1; double x2; } minSize;
@property (nonatomic) struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; } modelCellID;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } paddingInsets;
@property (nonatomic) unsigned long long pageCount;
@property (nonatomic) unsigned long long pageNumber;
@property (nonatomic) int verticalAlignment;
@property (nonatomic, retain) TSWPColumn *wpColumn;

- (void).cxx_destruct;
- (id)cell;
- (id)cellContents;
- (bool)cellPropsRowHeight;
- (bool)cellWraps;
- (bool)forDrawing;
- (bool)hasContent;
- (bool)inDynamicLayout;
- (id)init;
- (id)keyVal;
- (int)layoutCacheFlags;
- (struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })layoutMergeRange;
- (struct CGSize { double x1; double x2; })maxSize;
- (double)maxWidthForChildren;
- (struct CGSize { double x1; double x2; })minSize;
- (struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })modelCellID;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingInsets;
- (unsigned long long)pageCount;
- (unsigned long long)pageNumber;
- (void)setCell:(id)arg1;
- (void)setCellContents:(id)arg1;
- (void)setCellPropsRowHeight:(bool)arg1;
- (void)setCellWraps:(bool)arg1;
- (void)setForDrawing:(bool)arg1;
- (void)setInDynamicLayout:(bool)arg1;
- (void)setKeyVal:(id)arg1;
- (void)setLayoutCacheFlags:(int)arg1;
- (void)setLayoutMergeRange:(struct TSUCellRect { struct TSUCellCoord { unsigned int x_1_1_1; unsigned short x_1_1_2; bool x_1_1_3; bool x_1_1_4; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMaxWidthForChildren:(double)arg1;
- (void)setMinSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setModelCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg1;
- (void)setPaddingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPageCount:(unsigned long long)arg1;
- (void)setPageNumber:(unsigned long long)arg1;
- (void)setVerticalAlignment:(int)arg1;
- (void)setWpColumn:(id)arg1;
- (int)verticalAlignment;
- (id)wpColumn;

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