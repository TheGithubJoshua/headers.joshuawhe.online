<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UIKeyboardCandidateGridCellAttributes.h</title>
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

/PrivateFrameworks/UIKitCore.framework/UIKeyboardCandidateGridCellAttributes.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface UIKeyboardCandidateGridCellAttributes : UICollectionViewLayoutAttributes {
    NSIndexPath * _candidateIndexPath;
    unsigned long long  _candidateNumber;
    int  _candidatesVisualStyle;
    bool  _dummy;
    unsigned long long  _edges;
    bool  _emphasizedAppearance;
    bool  _groupHeader;
    bool  _groupShowsAlternativeText;
    bool  _needsPaddingForIndexScrubber;
    unsigned long long  _rowIndex;
    struct CGSize { 
        double width; 
        double height; 
    }  _rowSize;
    bool  _secondaryCandidateAppearance;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 8; 
        unsigned int padding : 8; 
    }  _visualStyling;
}

@property (nonatomic, retain) NSIndexPath *candidateIndexPath;
@property (nonatomic) unsigned long long candidateNumber;
@property (nonatomic) int candidatesVisualStyle;
@property (nonatomic) bool dummy;
@property (nonatomic) unsigned long long edges;
@property (nonatomic) bool emphasizedAppearance;
@property (nonatomic) bool groupHeader;
@property (nonatomic) bool groupShowsAlternativeText;
@property (nonatomic) bool needsPaddingForIndexScrubber;
@property (nonatomic) unsigned long long rowIndex;
@property (nonatomic) struct CGSize { double x1; double x2; } rowSize;
@property (nonatomic) bool secondaryCandidateAppearance;
@property (nonatomic) struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; } visualStyling;

- (void).cxx_destruct;
- (id)candidateIndexPath;
- (unsigned long long)candidateNumber;
- (int)candidatesVisualStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)dummy;
- (unsigned long long)edges;
- (bool)emphasizedAppearance;
- (bool)groupHeader;
- (bool)groupShowsAlternativeText;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)needsPaddingForIndexScrubber;
- (unsigned long long)representedElementCategory;
- (unsigned long long)rowIndex;
- (struct CGSize { double x1; double x2; })rowSize;
- (bool)secondaryCandidateAppearance;
- (void)setCandidateIndexPath:(id)arg1;
- (void)setCandidateNumber:(unsigned long long)arg1;
- (void)setCandidatesVisualStyle:(int)arg1;
- (void)setDummy:(bool)arg1;
- (void)setEdges:(unsigned long long)arg1;
- (void)setEmphasizedAppearance:(bool)arg1;
- (void)setGroupHeader:(bool)arg1;
- (void)setGroupShowsAlternativeText:(bool)arg1;
- (void)setNeedsPaddingForIndexScrubber:(bool)arg1;
- (void)setRowIndex:(unsigned long long)arg1;
- (void)setRowSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSecondaryCandidateAppearance:(bool)arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 8; unsigned int x6 : 8; })visualStyling;

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