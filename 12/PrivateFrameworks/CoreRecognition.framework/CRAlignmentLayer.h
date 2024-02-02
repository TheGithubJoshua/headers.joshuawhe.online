<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CRAlignmentLayer.h</title>
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

/PrivateFrameworks/CoreRecognition.framework/CRAlignmentLayer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition (112.6.1)
 */

@interface CRAlignmentLayer : CALayer {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cardNumberHorizontalDefaultBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cardNumberHorizontalDefaultPos;
    NSMutableArray * _cardNumberLayers;
    CATextLayer * _cardholderNameLayer;
    CATextLayer * _expirationDateLayer;
    CALayer * _infoLayer;
    CATextLayer * _instructionLayer;
    CAShapeLayer * _maskLayer;
    CAShapeLayer * _outlineLayer;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cardNumberHorizontalDefaultBounds;
@property (nonatomic) struct CGPoint { double x1; double x2; } cardNumberHorizontalDefaultPos;
@property (retain) NSMutableArray *cardNumberLayers;
@property (retain) CATextLayer *cardholderNameLayer;
@property (retain) CATextLayer *expirationDateLayer;
@property (retain) CALayer *infoLayer;
@property (retain) CATextLayer *instructionLayer;
@property (retain) CAShapeLayer *maskLayer;
@property (retain) CAShapeLayer *outlineLayer;

+ (id)layer;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRect;
- (void)animateFoundCardRect:(id)arg1;
- (void)animateFoundCodeParts:(id)arg1 codePartPositions:(id)arg2 codeFrameIndex:(unsigned long long)arg3 cardHolder:(id)arg4 cardholderPosition:(struct CGPoint { double x1; double x2; })arg5 cardholderFrameIndex:(unsigned long long)arg6 expDate:(id)arg7 expdatePosition:(struct CGPoint { double x1; double x2; })arg8 expDateFrameIndex:(unsigned long long)arg9 completionBlock:(id /* block */)arg10;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cardNumberHorizontalDefaultBounds;
- (struct CGPoint { double x1; double x2; })cardNumberHorizontalDefaultPos;
- (id)cardNumberLayers;
- (id)cardholderNameLayer;
- (id)expirationDateLayer;
- (void)fadePlacementImage;
- (id)infoLayer;
- (id)init;
- (id)instructionLayer;
- (void)layoutSublayers;
- (void)makeTextLayer:(id)arg1 matchWidthOfText:(id)arg2;
- (id)maskLayer;
- (id)outlineLayer;
- (struct CGPoint { double x1; double x2; })pointOnInfoLayerForPointOnCard:(struct CGPoint { double x1; double x2; })arg1;
- (void)propogateMaskColor:(id)arg1 outlineColor:(id)arg2 placementTextColor:(id)arg3 capturedTextColor:(id)arg4;
- (void)resetLayer;
- (void)setCardNumberHorizontalDefaultBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCardNumberHorizontalDefaultPos:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCardNumberLayers:(id)arg1;
- (void)setCardholderNameLayer:(id)arg1;
- (void)setExpirationDateLayer:(id)arg1;
- (void)setInfoLayer:(id)arg1;
- (void)setInstructionLayer:(id)arg1;
- (void)setMaskLayer:(id)arg1;
- (void)setOutlineLayer:(id)arg1;

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