<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSCHChartPieLabelPlacement.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSCHChartPieLabelPlacement.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSCHChartPieLabelPlacement : NSObject {
    NSArray * mAllWedgeLayoutInfos;
    NSArray * mAllWedgeLayoutInfosSortedBySeriesIndex;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mTitleRect;
}

@property (nonatomic, readonly) NSArray *allWedgeLayoutInfos;
@property (nonatomic, readonly) bool shouldPreventOverlapWithTitle;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleRect;

- (void).cxx_destruct;
- (id)allWedgeLayoutInfos;
- (struct CGPoint { double x1; double x2; })calloutLineEndpointForWedgeLayoutInfo:(id)arg1;
- (bool)calloutLineEndpointPastStartpoint:(id)arg1;
- (bool)calloutLineEndsOutsidePieWedge:(id)arg1;
- (long long)calloutLineRenderAmount:(id)arg1 startLineEnd:(id)arg2 endLineEnd:(id)arg3 stroke:(id)arg4;
- (struct CGPoint { double x1; double x2; })calloutLineStartpointForWedgeLayoutInfo:(id)arg1;
- (double)distanceFromCenterToChordOfLength:(double)arg1 wedgeAngle:(double)arg2;
- (id)initWithArrayOfWedgeLayoutInfos:(id)arg1;
- (id)initWithArrayOfWedgeLayoutInfos:(id)arg1 titleRectInWedgeElementSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)lineEndLength:(id)arg1 stroke:(id)arg2;
- (double)minimumNecessaryDistanceFromWedgeTipForWedgeLayoutInfo:(id)arg1;
- (double)minimumNecessaryDistanceFromWedgeTipToWedgeLabelToPreventOverlapForWedgeLayoutInfo:(id)arg1 adjacentWedgeLayoutInfo:(id)arg2;
- (id)newCalloutLinePaths:(id)arg1 startLineEnd:(id)arg2 outStartLineEndPath:(id*)arg3 endLineEnd:(id)arg4 outEndLineEndPath:(id*)arg5 stroke:(id)arg6 outStroke:(id*)arg7 context:(struct CGContext { }*)arg8 contextScale:(float)arg9;
- (id)newPathForLineEnd:(id)arg1 startPoint:(struct CGPoint { double x1; double x2; })arg2 angle:(double)arg3 stroke:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedLabelRectWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })paddedTitleRectWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldPreventOverlapWithTitle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleRect;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformOutwardsAlongWedgeBisectionForWedgeLayoutInfo:(id)arg1 withMinimumNecessaryDistance:(double)arg2;
- (id)updateLabelTransformsToPreventOverlap;

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
