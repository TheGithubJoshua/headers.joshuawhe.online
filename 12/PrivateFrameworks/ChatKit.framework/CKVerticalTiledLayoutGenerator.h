<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKVerticalTiledLayoutGenerator.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKVerticalTiledLayoutGenerator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKVerticalTiledLayoutGenerator : CKTiledLayoutGenerator {
    struct { 
        long long index; 
        struct CGSize { 
            double width; 
            double height; 
        } imageSize; 
        struct CGSize { 
            double width; 
            double height; 
        } minimumSize; 
        bool hasCaption; 
        bool isBatchStart; 
    }  _enqueuedCaptionTileInfo;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    double  _referenceWidth;
    bool  _shouldDisplayCaptionsBelowBatches;
}

@property (nonatomic) double referenceWidth;
@property (nonatomic) bool shouldDisplayCaptionsBelowBatches;

- (bool)_addRowWithContiguousTiles:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1 count:(long long)arg2;
- (bool)_addRowWithTiles:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1 imageFrames:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 count:(long long)arg3;
- (bool)_addSpecialSequenceBlock:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1;
- (bool)_dequeueCaption;
- (void)_enqueueCaptionWithTileInfo:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; })arg1;
- (void)_enumerateRowFramesWithContiguousTiles:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1 count:(long long)arg2 useMagneticGuidelines:(bool)arg3 block:(id /* block */)arg4;
- (bool)_hasEnqueuedCaption;
- (bool)_hasLeftSuboptimalRow;
- (bool)_isAtEndOfRow;
- (bool)_parseSingleTile;
- (bool)_parseSpecialSequence;
- (bool)_parseSpecialSubsequenceWithRowRequired:(bool)arg1 rowParsed:(bool*)arg2;
- (bool)_parseSpecialTileTriplet;
- (bool)_parseTilePair;
- (bool)_parseTileRequiringFullWidth;
- (bool)_parseTileTriplet;
- (bool)_scanNonPanoramaSequence:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1 count:(long long)arg2;
- (bool)_scanSpecialSequenceBlock:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1;
- (bool)_scanSpecialSequenceRow:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1 count:(long long*)arg2;
- (bool)_scanTilePair:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1;
- (bool)_scanTileRequiringFullWidth:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1;
- (bool)_scanTileRequiringNewRow:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1;
- (bool)_scanTileTriplet:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1;
- (bool)_scanTripletWithLargeLead:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1;
- (bool)_scanTripletWithRearrangment:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; }*)arg1;
- (void)_willAddRowWithFirstTileInfo:(struct { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; })arg1;
- (void)didParseTiles;
- (bool)parseNextTiles;
- (double)referenceDistanceForMagneticGuidelines;
- (double)referenceWidth;
- (void)setReferenceWidth:(double)arg1;
- (void)setShouldDisplayCaptionsBelowBatches:(bool)arg1;
- (bool)shouldDisplayCaptionsBelowBatches;
- (void)willParseTiles;

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