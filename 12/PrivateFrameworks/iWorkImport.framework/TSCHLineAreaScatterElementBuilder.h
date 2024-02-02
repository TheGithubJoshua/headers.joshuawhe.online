<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSCHLineAreaScatterElementBuilder.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSCHLineAreaScatterElementBuilder.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSCHLineAreaScatterElementBuilder : TSCHElementBuilder {
    NSMutableDictionary * mPathCache;
    NSObject<OS_dispatch_queue> * mPathCacheQueue;
}

- (void).cxx_destruct;
- (unsigned long long)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect {}**)arg4 outNewClipRects:(struct CGRect {}**)arg5 outNewElementPaths:(const struct CGPath {}***)arg6 outSelectionKnobLocations:(id*)arg7 forHighlightPath:(bool)arg8;
- (unsigned long long)countOfErrorBarsInSeries:(id)arg1 forGroups:(id)arg2 forAxisID:(id)arg3 forBodyLayout:(id)arg4 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 outNewErrorBarDescriptors:(struct { /* ? */ }**)arg6;
- (unsigned long long)countOfHitCheckRegionsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementPaths:(const struct CGPath {}***)arg4 outSelectionKnobLocations:(id*)arg5;
- (unsigned long long)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(struct CGAffineTransform {}**)arg4 outNewElementSizes:(struct CGSize {}**)arg5 outNewClipRect:(struct CGRect {}**)arg6 outNewStrings:(id*)arg7;
- (unsigned long long)countOfPointsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize { double x1; double x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 outUnitSymbolPath:(const struct CGPath {}**)arg6 outNewTransformArray:(struct CGAffineTransform {}**)arg7 outNewGroupIndexArray:(unsigned long long**)arg8;
- (float)dataPointDimension:(id)arg1 symbolType:(int)arg2 stroke:(id)arg3;
- (long long)hitCheckPoint:(struct CGPoint { double x1; double x2; })arg1 inSeries:(id)arg2 withBodyLayout:(id)arg3;
- (id)init;
- (struct CGPoint { double x1; double x2; })labelPointForPosition:(unsigned int)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 stringSize:(struct CGSize { double x1; double x2; })arg3 symbolType:(int)arg4;
- (bool)needsSeparateHitTestingPaths;
- (bool)p_addBottomStroke:(struct { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; }*)arg1 toPath:(struct CGPath { }*)arg2 seriesIndex:(unsigned long long)arg3 valuesStart:(unsigned long long)arg4 valuesEnd:(unsigned long long)arg5 withPointsArray:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; unsigned long long x4; }*)arg6 withCount:(unsigned long long)arg7;
- (void)p_addCurvedTopStroke:(struct { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; }*)arg1 toPath:(struct CGPath { }*)arg2 withPointsArray:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; unsigned long long x4; }*)arg3 withCount:(unsigned long long)arg4;
- (void)p_addKnobsForPoint:(struct CGPoint { double x1; double x2; })arg1 strokedUnitSymbolRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toKnobSet:(id)arg3 symbolsShowing:(bool)arg4 includePoint:(bool)arg5;
- (void)p_addTopStroke:(struct { id x1; id x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; id x4; id x5; }*)arg1 toPath:(struct CGPath { }*)arg2 withPointsArray:(struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; unsigned long long x4; }*)arg3 withCount:(unsigned long long)arg4 lineType:(int)arg5;
- (double)p_bubbleMaxForSeries:(id)arg1 inChartBodyLayoutSize:(struct CGSize { double x1; double x2; })arg2;
- (id)p_calculateSelectionKnobSet:(id)arg1;
- (bool)p_centerPointForSeries:(id)arg1 forGroupIndex:(unsigned long long)arg2 xAxis:(id)arg3 yAxis:(id)arg4 plotAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 nullsUseIntercept:(bool)arg6 outPoint:(struct CGPoint { double x1; double x2; }*)arg7;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; bool x2; }*)p_centerPointsForSeries:(id)arg1 forGroupIndexes:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4 nullsUseIntercept:(bool)arg5 plotAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; bool x2; }*)p_centerPointsForSeries:(id)arg1 forGroupIndexes:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4 plotAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (void)p_createElementsForSeries:(id)arg1 forGroups:(id)arg2 inBodyLayout:(id)arg3 outTopStrokePath:(const struct CGPath {}**)arg4 outTopStrokeClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 outSeriesElementPath:(const struct CGPath {}**)arg6 outSeriesElementClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg7 outSymbolElementPath:(const struct CGPath {}**)arg8 outSymbolElementClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg9 outSymbolElementHitCheckPath:(const struct CGPath {}**)arg10 outSelectionKnobLocations:(id*)arg11;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; unsigned long long x4; }*)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 valueStart:(unsigned long long)arg3 valueEnd:(unsigned long long)arg4 cullBadPoints:(bool)arg5 outCount:(unsigned long long*)arg6;
- (struct { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; bool x3; unsigned long long x4; }*)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 valueStart:(long long)arg3 valueEnd:(long long)arg4 outCount:(unsigned long long*)arg5;
- (bool)p_hitCheckPoint:(struct CGPoint { double x1; double x2; })arg1 inSymbolsOfSeries:(id)arg2 withBodyLayout:(id)arg3;
- (struct CGPath { }*)p_newCirclePath:(struct CGPoint { double x1; double x2; })arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
- (struct CGPath { }*)p_newCrossPath:(struct CGPoint { double x1; double x2; })arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
- (struct CGPath { }*)p_newDiamondPath:(struct CGPoint { double x1; double x2; })arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
- (struct CGPath { }*)p_newPathForSymbol:(int)arg1 context:(struct CGContext { }*)arg2 at:(struct CGPoint { double x1; double x2; })arg3 width:(double)arg4 pathLocation:(long long)arg5 stroke:(id)arg6;
- (struct CGPath { }*)p_newPlusPath:(struct CGPoint { double x1; double x2; })arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 context:(struct CGContext { }*)arg5;
- (struct CGPath { }*)p_newSquarePath:(struct CGPoint { double x1; double x2; })arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4 context:(struct CGContext { }*)arg5;
- (struct CGPath { }*)p_newTrianglePath:(struct CGPoint { double x1; double x2; })arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
- (struct CGPath { }*)p_newUnitPathForSymbol:(int)arg1 symbolSize:(double)arg2 stroke:(id)arg3 forHitCheck:(bool)arg4;
- (struct CGPath { }*)p_newYieldPath:(struct CGPoint { double x1; double x2; })arg1 width:(double)arg2 pathLocation:(long long)arg3 stroke:(id)arg4;
- (id)p_symbolKnobLocationsForSeries:(id)arg1 forGroups:(id)arg2 inBodyLayout:(id)arg3;
- (void)p_trendlineInfoForSeries:(id)arg1 forBodyLayout:(id)arg2 outVertical:(bool*)arg3 outOffsetInBody:(double*)arg4;
- (id)p_uncachedUnitPathForSymbol:(int)arg1 symbolSize:(double)arg2 stroke:(id)arg3 forHitCheck:(bool)arg4;
- (bool)symbolTypeIsClosed:(int)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingLabelInBody:(id)arg1 forSeries:(unsigned long long)arg2 forGroup:(unsigned long long)arg3 outElementSize:(struct CGSize { double x1; double x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingSeriesElementForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize { double x1; double x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 outNewElementPath:(const struct CGPath {}**)arg6;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingSeriesElementSymbolsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize { double x1; double x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 outNewElementPath:(const struct CGPath {}**)arg6;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingSeriesElementTopStrokeForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize { double x1; double x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5 outNewElementPath:(const struct CGPath {}**)arg6;

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