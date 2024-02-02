<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSCH3DChartType.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSCH3DChartType.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSCH3DChartType : TSCH2DChartType

+ (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })adjustedScaleForInfoChartScale:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 chartType:(id)arg2 barShape:(int)arg3;
+ (id)allAnimationFilters;

- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })adjustedScaleForInfoChartScale:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 barShape:(int)arg2;
- (id)animationDeliveryStylesForFilter:(id)arg1;
- (id)animationFilters;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (bool)approximatesTitleAccommodationUsingLegendSize;
- (id)categoryLabelPositioner;
- (int)chartBodyBoundsDefinition;
- (Class)chartLayoutClass;
- (Class)chartLayoutItemClass;
- (id)columnShapeUIName;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (unsigned long long)depthRatioDimension;
- (bool)isHomogeneous;
- (int)labelOrientation;
- (Class)layoutClass;
- (bool)layoutFrameShouldEncloseInfoGeometry;
- (double)maxDepthRatio;
- (double)minDepthRatio;
- (struct CGSize { double x1; double x2; })minimumChartBodySize;
- (struct CGSize { double x1; double x2; })minimumChartBodySizeForTransformingGeometry;
- (bool)needsRefinementForInwardLayout;
- (unsigned long long)presentationDimension;
- (Class)presetImagerClass;
- (id)renderers;
- (Class)repClass;
- (Class)sageGeometeryHelperClass;
- (double)sageMaxDepthRatio;
- (id)sceneWithChartInfo:(id)arg1 layoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; })arg2;
- (double)spiceMaxDepthRatio;
- (Class)stageClass;
- (bool)supportsAxisLabelsOrientation;
- (bool)supportsAxisLine;
- (bool)supportsBackgroundFill;
- (bool)supportsBevels;
- (bool)supportsBorderFrame;
- (bool)supportsBubbleOptions;
- (bool)supportsCalloutLines;
- (bool)supportsCategoryAxisMinorTickmarks;
- (bool)supportsColumnShape;
- (bool)supportsConnectingLines;
- (bool)supportsErrorBars;
- (bool)supportsGroupedShadows;
- (bool)supportsIncrementalResize;
- (bool)supportsInterSetDepthGap;
- (bool)supportsMinorGridlines;
- (bool)supportsReferenceLines;
- (bool)supportsSeriesFill;
- (bool)supportsSeriesShadow;
- (bool)supportsSeriesStroke;
- (bool)supportsShadowOffset;
- (bool)supportsTickmarks;
- (bool)supportsTrendLines;
- (bool)supportsValueAxisLabelsPosition;
- (id)valueLabelPositioner;

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