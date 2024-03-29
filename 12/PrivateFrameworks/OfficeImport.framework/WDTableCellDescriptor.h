<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WDTableCellDescriptor.h</title>
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

/PrivateFrameworks/OfficeImport.framework/WDTableCellDescriptor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport (257.9)
 */

@interface WDTableCellDescriptor : NSObject {
    WDBorder * mBottomBorder;
    unsigned int  mBottomBorderOverridden;
    short  mBottomMargin;
    unsigned int  mBottomMarginOverridden;
    int  mBottomMarginType;
    unsigned int  mBottomMarginTypeOverridden;
    WDBorder * mDiagonalDownBorder;
    unsigned int  mDiagonalDownBorderOverridden;
    WDBorder * mDiagonalUpBorder;
    unsigned int  mDiagonalUpBorderOverridden;
    unsigned int  mFirstInSetOfVerticallyMergedCells;
    unsigned int  mFirstInSetOfVerticallyMergedCellsOverridden;
    WDBorder * mLeftBorder;
    unsigned int  mLeftBorderOverridden;
    short  mLeftMargin;
    unsigned int  mLeftMarginOverridden;
    int  mLeftMarginType;
    unsigned int  mLeftMarginTypeOverridden;
    unsigned int  mNoWrap;
    unsigned int  mNoWrapOverridden;
    WDBorder * mRightBorder;
    unsigned int  mRightBorderOverridden;
    short  mRightMargin;
    unsigned int  mRightMarginOverridden;
    int  mRightMarginType;
    unsigned int  mRightMarginTypeOverridden;
    WDShading * mShading;
    unsigned int  mShadingOverridden;
    WDBorder * mTopBorder;
    unsigned int  mTopBorderOverridden;
    short  mTopMargin;
    unsigned int  mTopMarginOverridden;
    int  mTopMarginType;
    unsigned int  mTopMarginTypeOverridden;
    int  mVerticalAlignment;
    unsigned int  mVerticalAlignmentOverridden;
    unsigned int  mVerticallyMergedCell;
    unsigned int  mVerticallyMergedCellOverridden;
    short  mWidth;
    int  mWidthType;
    unsigned int  mWidthTypeOverridden;
}

- (id)bottomBorder;
- (short)bottomMargin;
- (int)bottomMarginType;
- (id)diagonalDownBorder;
- (id)diagonalUpBorder;
- (bool)firstInSetOfVerticallyMergedCells;
- (bool)isBottomBorderOverridden;
- (bool)isBottomMarginOverridden;
- (bool)isBottomMarginTypeOverridden;
- (bool)isDiagonalDownBorderOverridden;
- (bool)isDiagonalUpBorderOverridden;
- (bool)isFirstInSetOfVerticallyMergedCellsOverridden;
- (bool)isLeftBorderOverridden;
- (bool)isLeftMarginOverridden;
- (bool)isLeftMarginTypeOverridden;
- (bool)isNoWrapOverridden;
- (bool)isRightBorderOverridden;
- (bool)isRightMarginOverridden;
- (bool)isRightMarginTypeOverridden;
- (bool)isShadingOverridden;
- (bool)isTopBorderOverridden;
- (bool)isTopMarginOverridden;
- (bool)isTopMarginTypeOverridden;
- (bool)isVerticalAlignmentOverridden;
- (bool)isVerticallyMergedCellOverridden;
- (bool)isWidthTypeOverridden;
- (id)leftBorder;
- (short)leftMargin;
- (int)leftMarginType;
- (bool)noWrap;
- (id)rightBorder;
- (short)rightMargin;
- (int)rightMarginType;
- (void)setBottomBorder:(id)arg1;
- (void)setBottomBorderOverridden:(bool)arg1;
- (void)setBottomMargin:(short)arg1;
- (void)setBottomMarginOverridden:(bool)arg1;
- (void)setBottomMarginType:(int)arg1;
- (void)setBottomMarginTypeOverridden:(bool)arg1;
- (void)setDiagonalDownBorder:(id)arg1;
- (void)setDiagonalDownBorderOverridden:(bool)arg1;
- (void)setDiagonalUpBorder:(id)arg1;
- (void)setDiagonalUpBorderOverridden:(bool)arg1;
- (void)setFirstInSetOfVerticallyMergedCells:(bool)arg1;
- (void)setFirstInSetOfVerticallyMergedCellsOverridden:(bool)arg1;
- (void)setLeftBorder:(id)arg1;
- (void)setLeftBorderOverridden:(bool)arg1;
- (void)setLeftMargin:(short)arg1;
- (void)setLeftMarginOverridden:(bool)arg1;
- (void)setLeftMarginType:(int)arg1;
- (void)setLeftMarginTypeOverridden:(bool)arg1;
- (void)setNoWrap:(bool)arg1;
- (void)setNoWrapOverridden:(bool)arg1;
- (void)setRightBorder:(id)arg1;
- (void)setRightBorderOverridden:(bool)arg1;
- (void)setRightMargin:(short)arg1;
- (void)setRightMarginOverridden:(bool)arg1;
- (void)setRightMarginType:(int)arg1;
- (void)setRightMarginTypeOverridden:(bool)arg1;
- (void)setShading:(id)arg1;
- (void)setShadingOverridden:(bool)arg1;
- (void)setTopBorder:(id)arg1;
- (void)setTopBorderOverridden:(bool)arg1;
- (void)setTopMargin:(short)arg1;
- (void)setTopMarginOverridden:(bool)arg1;
- (void)setTopMarginType:(int)arg1;
- (void)setTopMarginTypeOverridden:(bool)arg1;
- (void)setVerticalAlignment:(int)arg1;
- (void)setVerticalAlignmentOverridden:(bool)arg1;
- (void)setVerticallyMergedCell:(bool)arg1;
- (void)setVerticallyMergedCellOverridden:(bool)arg1;
- (void)setWidth:(short)arg1;
- (void)setWidthType:(int)arg1;
- (void)setWidthTypeOverridden:(bool)arg1;
- (id)shading;
- (id)topBorder;
- (short)topMargin;
- (int)topMarginType;
- (int)verticalAlignment;
- (bool)verticallyMergedCell;
- (int)widthType;

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
