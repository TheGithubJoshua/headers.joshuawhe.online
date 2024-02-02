<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTKZeusAnalogScene.h</title>
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

/PrivateFrameworks/NanoTimeKitCompanion.framework/NTKZeusAnalogScene.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion (1)
 */

@interface NTKZeusAnalogScene : NTKAnalogScene {
    double  _bleedZRotation;
    NSCalendar * _calendar;
    unsigned long long  _currentDensity;
    double  _currentTime;
    double  _endSplitRotation;
    SKNode * _fontContainerNodes;
    NSArray * _fontHourNodes;
    bool  _isEditing;
    bool  _isStatusIconVisible;
    SKSpriteNode * _logo1Node;
    SKSpriteNode * _logo2Node;
    SKNode * _logoContainerNode;
    SKSpriteNode * _multicolorBackground;
    SKNode * _multicolorContainerNode;
    SKSpriteNode * _multicolorSplit;
    NSDate * _overrideDate;
    NTKZeusColorPalette * _palette;
    double  _previousCorrectionTime;
    double  _rotationDuration;
    bool  _scrubbing;
    double  _startSplitRotation;
    unsigned long long  _style;
}

@property (nonatomic) double backgroundAlpha;
@property (getter=isScrubbing, nonatomic) bool scrubbing;

- (void).cxx_destruct;
- (void)_applyHourLabelCollectionNode:(id)arg1;
- (void)_applyTransitionFraction:(double)arg1 fromHourLabelCollectionNode:(id)arg2 toHourLabelCollectionNode:(id)arg3;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (double)_contentAlphaForEditMode:(long long)arg1;
- (double)_digitAlphaForEditMode:(long long)arg1;
- (void)_displayZoomScale:(double)arg1 fraction:(double)arg2;
- (id)_hoursNodeForStyle:(unsigned long long)arg1 bleed:(unsigned long long)arg2;
- (struct CGPoint { double x1; double x2; })_logoContainerPositionForStyle:(unsigned long long)arg1;
- (double)_lowerComplicationAlphaForEditing:(bool)arg1;
- (id)_nodeForBleed:(unsigned long long)arg1;
- (double)_secondHandAlphaForDensity:(unsigned long long)arg1 isEditing:(bool)arg2;
- (void)_significantTimeChanged;
- (double)_splitAngle;
- (void)_update12ForStatusIconVisibility;
- (void)_update12ForStatusIconVisibilityAnimated:(bool)arg1;
- (void)applyDensity:(unsigned long long)arg1;
- (void)applyPalette:(id)arg1;
- (void)applyStyle:(unsigned long long)arg1;
- (void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (id)auxiliaryScrubbingObscuredNodes;
- (double)backgroundAlpha;
- (struct CGPoint { double x1; double x2; })centerOf4NumeralForStyle:(unsigned long long)arg1;
- (unsigned long long)currentDensity;
- (void)dealloc;
- (void)endScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 forDevice:(id)arg2;
- (bool)isScrubbing;
- (void)setAdjustsForStatusBarIcon:(bool)arg1 animated:(bool)arg2;
- (void)setBackgroundAlpha:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)setScrubbing:(bool)arg1;
- (void)startScrubbingAnimated:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)update:(double)arg1;

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