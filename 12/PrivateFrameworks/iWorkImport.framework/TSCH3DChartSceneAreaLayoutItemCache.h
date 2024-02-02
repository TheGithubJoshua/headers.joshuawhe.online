<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSCH3DChartSceneAreaLayoutItemCache.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSCH3DChartSceneAreaLayoutItemCache.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSCH3DChartSceneAreaLayoutItemCache : NSObject {
    TSCH3DVector * _containingViewportVector;
    struct TSCH3DChartSceneAreaLayoutItemCacheValues { 
        struct tvec4<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
            union { 
                float z; 
                float b; 
                float p; 
            } ; 
            union { 
                float w; 
                float a; 
                float q; 
            } ; 
        } infoChartScale; 
        struct tvec2<int> { 
            union { 
                int x; 
                int r; 
                int s; 
            } ; 
            union { 
                int y; 
                int g; 
                int t; 
            } ; 
        } containingViewport; 
        struct tvec2<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
        } chartBodyLayoutOffsetInChartAreaLayoutSpace; 
        struct CGSize { 
            double width; 
            double height; 
        } layoutSize; 
        struct CGSize { 
            double width; 
            double height; 
        } requestLayoutSize; 
        struct CGSize { 
            double width; 
            double height; 
        } chartBodyLayoutSize; 
        struct CGSize { 
            double width; 
            double height; 
        } requestChartBodyLayoutSize; 
        struct tvec2<int> { 
            union { 
                int x; 
                int r; 
                int s; 
            } ; 
            union { 
                int y; 
                int g; 
                int t; 
            } ; 
        } modelSize; 
        struct { 
            bool forceOmitLegend; 
            bool forceOmitTitle; 
            bool forceOmitAxisTitle; 
            bool forceOmitLabelPlacement; 
            bool forceTitleAtTop; 
            bool enable3DTightBounds; 
            bool enable3DScaledDepthBounds; 
            long long maxDepthRatioType; 
            unsigned long long max3DLimitingSeries; 
        } layoutSettings; 
        bool forcedValid; 
    }  mValues;
}

@property (nonatomic, readonly) struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; } chartBodyLayoutOffsetInChartAreaLayoutSpace;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } chartBodyLayoutSize;
@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } containingViewport;
@property (nonatomic, readonly) TSCH3DVector *containingViewportVector;
@property (nonatomic, readonly) bool forcedValid;
@property (nonatomic, readonly) struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } infoChartScale;
@property (nonatomic, readonly) struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; } layoutSettings;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } layoutSize;
@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } modelSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } requestChartBodyLayoutSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } requestLayoutSize;

+ (id)cacheWithCacheValues:(const struct TSCH3DChartSceneAreaLayoutItemCacheValues { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_8_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_8_1_2; } x8; struct { bool x_9_1_1; bool x_9_1_2; bool x_9_1_3; bool x_9_1_4; bool x_9_1_5; bool x_9_1_6; bool x_9_1_7; long long x_9_1_8; unsigned long long x_9_1_9; } x9; }*)arg1;

- (id).cxx_construct;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })chartBodyLayoutOffsetInChartAreaLayoutSpace;
- (struct CGSize { double x1; double x2; })chartBodyLayoutSize;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })containingViewport;
- (id)containingViewportVector;
- (bool)forcedValid;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })infoChartScale;
- (id)init;
- (id)initWithCacheValues:(const struct TSCH3DChartSceneAreaLayoutItemCacheValues { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_8_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_8_1_2; } x8; struct { bool x_9_1_1; bool x_9_1_2; bool x_9_1_3; bool x_9_1_4; bool x_9_1_5; bool x_9_1_6; bool x_9_1_7; long long x_9_1_8; unsigned long long x_9_1_9; } x9; }*)arg1;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; long long x8; unsigned long long x9; })layoutSettings;
- (struct CGSize { double x1; double x2; })layoutSize;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })modelSize;
- (void)printDebug;
- (struct CGSize { double x1; double x2; })requestChartBodyLayoutSize;
- (struct CGSize { double x1; double x2; })requestLayoutSize;
- (const struct TSCH3DChartSceneAreaLayoutItemCacheValues { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct CGSize { double x_7_1_1; double x_7_1_2; } x7; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_8_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_8_1_2; } x8; struct { bool x_9_1_1; bool x_9_1_2; bool x_9_1_3; bool x_9_1_4; bool x_9_1_5; bool x_9_1_6; bool x_9_1_7; long long x_9_1_8; unsigned long long x_9_1_9; } x9; }*)values;

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