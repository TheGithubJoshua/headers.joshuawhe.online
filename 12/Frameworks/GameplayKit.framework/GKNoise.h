<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GKNoise.h</title>
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

/Frameworks/GameplayKit.framework/GKNoise.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit (1)
 */

@interface GKNoise : NSObject {
    NSDictionary * _gradientColors;
    NSMutableArray * _modules;
}

@property (nonatomic, copy) NSDictionary *gradientColors;

+ (id)noiseWithComponentNoises:(id)arg1 selectionNoise:(id)arg2;
+ (id)noiseWithComponentNoises:(id)arg1 selectionNoise:(id)arg2 componentBoundaries:(id)arg3 boundaryBlendDistances:(id)arg4;
+ (id)noiseWithNoiseSource:(id)arg1;
+ (id)noiseWithNoiseSource:(id)arg1 gradientColors:(id)arg2;

- (void).cxx_destruct;
- (void)__blendWithNoise:(id)arg1 selectionNoise:(id)arg2 selectionRangeLowerBound:(double)arg3 selectionRangeUpperBound:(double)arg4 selectionBoundaryBlendDistance:(double)arg5;
- (id)__modules;
- (void)addWithNoise:(id)arg1;
- (void)applyAbsoluteValue;
- (void)applyTurbulenceWithFrequency:(double)arg1 power:(double)arg2 roughness:(int)arg3 seed:(int)arg4;
- (void)cacheBinaryModule:(id)arg1 rhsNoise:(id)arg2;
- (void)cacheQuaternaryModule:(id)arg1 xDisplacementNoise:(id)arg2 yDisplacementNoise:(id)arg3 zDisplacementNoise:(id)arg4;
- (void)cacheTernaryModule:(id)arg1 rhsNoise:(id)arg2 selectionNoise:(id)arg3;
- (void)cacheUnaryModule:(id)arg1;
- (void)clampWithLowerBound:(double)arg1 upperBound:(double)arg2;
- (id)cloneRecursive:(id)arg1;
- (void)dealloc;
- (void)displaceXWithNoise:(id)arg1 yWithNoise:(id)arg2 zWithNoise:(id)arg3;
- (id)gradientColors;
- (id)init;
- (id)initWithNoiseSource:(id)arg1;
- (id)initWithNoiseSource:(id)arg1 gradientColors:(id)arg2;
- (void)invert;
- (void)maximumWithNoise:(id)arg1;
- (void)minimumWithNoise:(id)arg1;
- (void)moveBy;
- (void)multiplyWithNoise:(id)arg1;
- (void)raiseToPower:(double)arg1;
- (void)raiseToPowerWithNoise:(id)arg1;
- (void)remapValuesToCurveWithControlPoints:(id)arg1;
- (void)remapValuesToTerracesWithPeaks:(id)arg1 terracesInverted:(bool)arg2;
- (void)rotateBy;
- (void)scaleBy;
- (void)setGradientColors:(id)arg1;
- (float)valueAtPosition;

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