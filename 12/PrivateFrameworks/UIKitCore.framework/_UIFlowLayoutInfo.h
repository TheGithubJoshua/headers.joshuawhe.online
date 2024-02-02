<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UIFlowLayoutInfo.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UIFlowLayoutInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UIFlowLayoutInfo : NSObject {
    long long  _computedEstimatedCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _computedEstimatedSum;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    double  _dimension;
    bool  _estimatesSizes;
    bool  _horizontal;
    bool  _isValid;
    UICollectionViewFlowLayout * _layout;
    struct CGSize { 
        double width; 
        double height; 
    }  _layoutSize;
    bool  _leftToRight;
    struct { 
        int commonRowHorizontalAlignment; 
        int lastRowHorizontalAlignment; 
        int rowVerticalAlignment; 
    }  _rowAlignmentOptions;
    NSMutableArray * _sections;
    bool  _useFloatingHeaderFooter;
    bool  _usesFloatingHeaderFooter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _visibleBounds;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } computedEstimatedSize;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) double dimension;
@property (nonatomic) bool estimatesSizes;
@property (nonatomic) bool horizontal;
@property (nonatomic) UICollectionViewFlowLayout *layout;
@property (nonatomic) bool leftToRight;
@property (nonatomic) struct { int x1; int x2; int x3; } rowAlignmentOptions;
@property (nonatomic, readonly) NSMutableArray *sections;
@property (nonatomic) bool usesFloatingHeaderFooter;

- (void).cxx_destruct;
- (id)addSection;
- (struct CGSize { double x1; double x2; })computedEstimatedSize;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)copy;
- (void)didUpdateSizeForSection:(long long)arg1 withDelta:(double)arg2;
- (double)dimension;
- (bool)estimatesSizes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndexPath:(id)arg1;
- (bool)horizontal;
- (id)init;
- (void)invalidate:(bool)arg1;
- (id)invalidatedIndexPaths;
- (id)layout;
- (bool)leftToRight;
- (struct { int x1; int x2; int x3; })rowAlignmentOptions;
- (id)sections;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDimension:(double)arg1;
- (void)setEstimatesSizes:(bool)arg1;
- (void)setHorizontal:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setLeftToRight:(bool)arg1;
- (void)setRowAlignmentOptions:(struct { int x1; int x2; int x3; })arg1;
- (id)setSize:(struct CGSize { double x1; double x2; })arg1 forItemAtIndexPath:(id)arg2;
- (void)setSizes:(id)arg1 forItemsAtIndexPaths:(id)arg2;
- (void)setUsesFloatingHeaderFooter:(bool)arg1;
- (id)snapshot;
- (id)specifiedItemSizes;
- (void)updateEstimatedSizeForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)usesFloatingHeaderFooter;

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