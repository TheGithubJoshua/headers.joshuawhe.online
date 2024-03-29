<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CUIShapeEffectBlur1.h</title>
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

/Frameworks/CoreImage.framework/CUIShapeEffectBlur1.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage (740.0.130)
 */

@interface CUIShapeEffectBlur1 : CIFilter {
    CIImage * inputFill;
    CIColor * inputGlowColorInner;
    CIColor * inputGlowColorOuter;
    CIImage * inputImage;
    CIVector * inputOffset;
    NSNumber * inputRadius;
    NSNumber * inputShadowBlurInner;
    NSNumber * inputShadowBlurOuter;
    CIColor * inputShadowColorInner;
    CIColor * inputShadowColorOuter;
}

@property (nonatomic, retain) CIImage *inputFill;
@property (nonatomic, retain) CIColor *inputGlowColorInner;
@property (nonatomic, retain) CIColor *inputGlowColorOuter;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) CIVector *inputOffset;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) NSNumber *inputShadowBlurInner;
@property (nonatomic, retain) NSNumber *inputShadowBlurOuter;
@property (nonatomic, retain) CIColor *inputShadowColorInner;
@property (nonatomic, retain) CIColor *inputShadowColorOuter;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputFill;
- (id)inputGlowColorInner;
- (id)inputGlowColorOuter;
- (id)inputImage;
- (id)inputOffset;
- (id)inputRadius;
- (id)inputShadowBlurInner;
- (id)inputShadowBlurOuter;
- (id)inputShadowColorInner;
- (id)inputShadowColorOuter;
- (id)outputImage;
- (void)setInputFill:(id)arg1;
- (void)setInputGlowColorInner:(id)arg1;
- (void)setInputGlowColorOuter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputOffset:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputShadowBlurInner:(id)arg1;
- (void)setInputShadowBlurOuter:(id)arg1;
- (void)setInputShadowColorInner:(id)arg1;
- (void)setInputShadowColorOuter:(id)arg1;

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
