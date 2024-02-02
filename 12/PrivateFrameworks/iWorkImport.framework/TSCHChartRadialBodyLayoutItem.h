<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSCHChartRadialBodyLayoutItem.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSCHChartRadialBodyLayoutItem.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSCHChartRadialBodyLayoutItem : TSCHChartBodyLayoutItem {
    TSCHRadialBodyLayoutItemPathCache * mPathCache;
    NSArray * mWedgeLayoutInfosInLocalSpace;
}

@property (retain) TSCHRadialBodyLayoutItemPathCache *p_pathCache;
@property (nonatomic, readonly) NSDictionary *wedgeLayoutInfosInChartCoordinateSpaceForSeriesIndex;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })bodySizeForOverhangSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcDrawingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcOverhangRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calloutLineBoundingBoxForSeries:(unsigned long long)arg1;
- (id)createAndOptimallyPlaceWedgeLayoutInfos;
- (id)createWedgeLayoutInfos;
- (id)defaultPieWedgeElementForSeriesModelCache:(id)arg1;
- (id)defaultPieWedgeLayoutInfoForSeriesModelCache:(id)arg1 pieLabels:(id)arg2 combinedLabelTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (id)knobsOfElementForSeries:(unsigned long long)arg1 withInnerRadius:(id)arg2;
- (id)knobsWithRadius:(double)arg1 center:(struct CGPoint { double x1; double x2; })arg2 startAngle:(double)arg3 midAngle:(double)arg4 endAngle:(double)arg5;
- (struct TSCHChartPieLabelGeometries { struct TSCHChartPieLabelGeometry { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_1_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_1_1_4; } x1; struct TSCHChartPieLabelGeometry { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_2_1_3; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_4_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_4_2_2; } x_2_1_4; } x2; })labelGeometriesForRenderingLabelsForSeriesModelCache:(id)arg1 topLabelType:(long long)arg2 bottomLabelType:(long long)arg3;
- (struct TSCHChartPieLabelGeometry { struct CGAffineTransform { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; })labelGeometryForRenderingLabelForSeriesModelCache:(id)arg1 labelType:(long long)arg2;
- (id)labelStringForType:(long long)arg1 seriesModelCache:(id)arg2;
- (struct CGPath { }*)newElementPathWithPercentage:(double)arg1 radius:(double)arg2 center:(struct CGPoint { double x1; double x2; })arg3 startAngle:(double)arg4 midAngle:(double)arg5 endAngle:(double)arg6 withInnerRadius:(id)arg7;
- (id)newPathsForRenderingCalloutLineForSeries:(unsigned long long)arg1 outStartLineEndPath:(id*)arg2 outEndLineEndPath:(id*)arg3 stroke:(id)arg4 outStroke:(id*)arg5 context:(struct CGContext { }*)arg6 contextScale:(float)arg7;
- (double)normalizedLabelDistanceFromWedgeTipForSeries:(id)arg1;
- (id)optimizedWedgeLayoutInfoPlacementForWedgeLayoutInfos:(id)arg1;
- (struct CGSize { double x1; double x2; })overhangSizeForBodySize:(struct CGSize { double x1; double x2; })arg1;
- (void)p_collectMaxRatio:(double*)arg1 maxLabelOverhang:(double*)arg2 maxWedgeExplosion:(float*)arg3 maxComboExplosion:(float*)arg4;
- (id)p_pathCache;
- (id)pathCacheForSeries:(unsigned long long)arg1 withInnerRadius:(id)arg2;
- (struct CGPath { }*)pathOfElementForSeries:(unsigned long long)arg1 outWedgeCenterPoint:(struct CGPoint { double x1; double x2; }*)arg2 withInnerRadius:(id)arg3;
- (id)renderersWithRep:(id)arg1;
- (id)seriesIndexToWedgeLayoutInfoMapWithWedgeLayoutInfos:(id)arg1;
- (id)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
- (void)setLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setP_pathCache:(id)arg1;
- (struct CGSize { double x1; double x2; })titleSizeToUseForOverlapPreventionWithLabels;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingElementForSeries:(unsigned long long)arg1 outElementSize:(struct CGSize { double x1; double x2; }*)arg2 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 withInnerRadius:(id)arg4;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToMaintainLabelSameDistanceAwayFromWedge:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wedgeElement:(id)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToShiftStraightLineLabelRectOutForEnableCalloutLineONSetting:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 wedgeElement:(id)arg2;
- (id)wedgeLayoutInfosInChartCoordinateSpace;
- (id)wedgeLayoutInfosInChartCoordinateSpaceForSeriesIndex;
- (id)wedgeLayoutInfosInLocalSpaceForSeriesIndex;

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