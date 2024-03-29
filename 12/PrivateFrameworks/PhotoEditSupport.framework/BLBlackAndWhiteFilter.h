<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BLBlackAndWhiteFilter.h</title>
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

/PrivateFrameworks/PhotoEditSupport.framework/BLBlackAndWhiteFilter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport (1)
 */

@interface BLBlackAndWhiteFilter : CIFilter {
    CIFilter * _colorCubeFilterBW;
    CIFilter * _colorCubeFilterGrain;
    BLPixelImageBuffer * _grainImage;
    NSNumber * _inputAmount;
    NSNumber * _inputApplyGrain;
    NSNumber * _inputApplySepia;
    CIVector * _inputDestinationRect;
    CIVector * _inputHueStrengthArray;
    CIImage * _inputImage;
    NSNumber * _inputNeutralGamma;
    NSNumber * _inputPadding;
    NSNumber * _inputPhototone;
    NSNumber * _inputPreset;
    NSNumber * _inputVersion;
    float  _lastAmount;
    bool  _lastApplyGrain;
    bool  _lastAppySepia;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _lastDestinationRect;
    CIVector * _lastHueStrengthArray;
    float  _lastNeutralGamma;
    float  _lastPhototone;
    int  _lastPreset;
    long long  _lastVersion;
    bool  _needsReprocess;
    NSData * _precomputedCube;
}

@property (nonatomic, retain) CIFilter *colorCubeFilterBW;
@property (nonatomic, retain) CIFilter *colorCubeFilterGrain;
@property (nonatomic, retain) BLPixelImageBuffer *grainImage;
@property (nonatomic, copy) NSNumber *inputAmount;
@property (nonatomic, copy) NSNumber *inputApplyGrain;
@property (nonatomic, copy) NSNumber *inputApplySepia;
@property (nonatomic, copy) CIVector *inputDestinationRect;
@property (nonatomic, copy) CIVector *inputHueStrengthArray;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputNeutralGamma;
@property (nonatomic, copy) NSNumber *inputPadding;
@property (nonatomic, copy) NSNumber *inputPhototone;
@property (nonatomic, copy) NSNumber *inputPreset;
@property (nonatomic, copy) NSNumber *inputVersion;
@property (nonatomic, retain) CIVector *lastHueStrengthArray;
@property (nonatomic, retain) NSData *precomputedCube;

- (void).cxx_destruct;
- (id)applyGrain:(id)arg1 cube:(id)arg2 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 padding:(float)arg4;
- (id)colorCubeFilterBW;
- (id)colorCubeFilterGrain;
- (id)generateGrain:(id)arg1 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)grainImage;
- (id)init;
- (id)inputAmount;
- (id)inputApplyGrain;
- (id)inputApplySepia;
- (id)inputDestinationRect;
- (id)inputHueStrengthArray;
- (id)inputImage;
- (id)inputNeutralGamma;
- (id)inputPadding;
- (id)inputPhototone;
- (id)inputPreset;
- (id)inputVersion;
- (id)lastHueStrengthArray;
- (id)loadGrain:(id)arg1 destRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 padding:(float)arg3;
- (id)outputImage;
- (id)precomputedCube;
- (void)setColorCubeFilterBW:(id)arg1;
- (void)setColorCubeFilterGrain:(id)arg1;
- (void)setDefaults;
- (void)setGrainImage:(id)arg1;
- (void)setInputAmount:(id)arg1;
- (void)setInputApplyGrain:(id)arg1;
- (void)setInputApplySepia:(id)arg1;
- (void)setInputDestinationRect:(id)arg1;
- (void)setInputHueStrengthArray:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputNeutralGamma:(id)arg1;
- (void)setInputPadding:(id)arg1;
- (void)setInputPhototone:(id)arg1;
- (void)setInputPreset:(id)arg1;
- (void)setInputVersion:(id)arg1;
- (void)setLastHueStrengthArray:(id)arg1;
- (void)setPrecomputedCube:(id)arg1;

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
