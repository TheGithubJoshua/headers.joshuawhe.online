<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSCH2DSageGeometryHelper.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSCH2DSageGeometryHelper.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSCH2DSageGeometryHelper : TSCHSageGeometryHelper {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBottomAxisBounds;
    double  mBottomAxisHeightChange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBottomAxisLabelsBounds;
    struct CGSize { 
        double width; 
        double height; 
    }  mBottomLeftCategoryAxisTitleOverhang;
    struct CGSize { 
        double width; 
        double height; 
    }  mBottomLeftChartTitleOverhang;
    struct CGSize { 
        double width; 
        double height; 
    }  mBottomLeftValueAxisTitleOverhang;
    struct CGSize { 
        double width; 
        double height; 
    }  mBottomLeftValueAxisY2TitleOverhang;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBottomLegendBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCategoryAxisTitleBounds;
    bool  mCategoryAxisTitleSizeValid;
    bool  mChartAxisLabelsSizeValid;
    bool  mChartAxisSizeValid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mChartBodyBounds;
    bool  mChartExplodedSizeValid;
    bool  mChartLayoutValid;
    bool  mChartLegendSizeValid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mChartTitleBounds;
    bool  mChartTitleSizeValid;
    bool  mChartValueElementsGeometryValid;
    struct CGPoint { 
        double x; 
        double y; 
    }  mExplodedBodyShift;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mExplodedBounds;
    double  mHorizontalAxisOverhang;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLeftAxisBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLeftAxisLabelsBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLeftLegendBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  mOutsideLabelsChartTitleShift;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mRightAxisBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mRightAxisLabelsBounds;
    double  mRightAxisWidthChange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mRightLegendBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mTopAxisBounds;
    double  mTopAxisHeightChange;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mTopAxisLabelsBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mTopLegendBounds;
    struct CGSize { 
        double width; 
        double height; 
    }  mTopRightCategoryAxisTitleOverhang;
    struct CGSize { 
        double width; 
        double height; 
    }  mTopRightChartTitleOverhang;
    struct CGSize { 
        double width; 
        double height; 
    }  mTopRightValueAxisTitleOverhang;
    struct CGSize { 
        double width; 
        double height; 
    }  mTopRightValueAxisY2TitleOverhang;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mValueAxisTitleBounds;
    bool  mValueAxisTitleSizeValid;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mValueAxisY2TitleBounds;
    bool  mValueAxisY2TitleSizeValid;
    double  mVerticalAxisOverhang;
}

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeSageChartAreaBoundsForChartInfo:(id)arg1 geometryRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 returningContainingViewportSize:(id*)arg3;

- (double)_bottomAxisOuterWidth;
- (double)_horizontalAxisLabelsHeight;
- (double)_leftAxisOuterWidth;
- (double)_rightAxisOuterWidth;
- (double)_seriesSymbolWidth;
- (double)_topAxisOuterWidth;
- (double)_verticalAxisLabelsWidth:(bool)arg1;
- (bool)aspectRatioLocked;
- (bool)bottomAxisLabelsVisible;
- (void)calculateCategoryAxisTitleSize;
- (void)calculateChartAxisLabelsSize;
- (void)calculateChartAxisSize;
- (void)calculateChartBodySize;
- (bool)calculateChartExplodedSize;
- (void)calculateChartTitleSize;
- (void)calculateValueAxisTitleSize;
- (void)calculateValueAxisY2TitleSize;
- (double)chartTitlePadding;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeSageLayoutCBBForSpiceDoc:(bool)arg1;
- (double)distanceFromXAxisUsingParagraphStyle:(id)arg1;
- (double)distanceFromYAxisUsingParagraphStyle:(id)arg1;
- (double)fontHeight:(id)arg1;
- (bool)isArea;
- (bool)isLine;
- (bool)isScatter;
- (bool)isVertical;
- (bool)leftAxisLabelsVisible;
- (struct CGSize { double x1; double x2; })measureText:(id)arg1 withParagraphStyle:(id)arg2;
- (bool)p_labelsVisible:(id)arg1;
- (id)p_model;
- (double)p_widthFromTicksAndStrokeForAxis:(id)arg1;
- (bool)rightAxisLabelsVisible;
- (double)seriesCategoryLabelsHorizontalGutter;
- (double)seriesCategoryLabelsVerticalGutter;
- (bool)topAxisLabelsVisible;
- (double)xAxisLabelHeight;
- (double)xAxisTitlePadding;
- (double)yAxisLabelHeight:(bool)arg1;
- (double)yAxisTitlePadding:(bool)arg1;

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