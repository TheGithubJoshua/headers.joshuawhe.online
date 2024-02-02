<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>OZFxPlugParameterHandler_v4.h</title>
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

/PrivateFrameworks/ProVideo.framework/OZFxPlugParameterHandler_v4.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo (398.0.87)
 */

@interface OZFxPlugParameterHandler_v4 : OZFxPlugParameterHandler <FxOptionalParameterRetrievalAPI_v2, FxOptionalParameterSettingAPI_v2, FxParameterCreationAPI_v4, FxParameterRetrievalAPI_v4, FxParameterRetrievalAPI_v5, FxParameterSettingAPI_v4>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_getFontName:(id*)arg1 fromParm:(unsigned int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)addFontMenuWithName:(id)arg1 parmId:(unsigned int)arg2 fontName:(id)arg3 parmFlags:(unsigned int)arg4;
- (bool)addHelpButtonWithName:(id)arg1 parmId:(unsigned int)arg2 selector:(SEL)arg3 parmFlags:(unsigned int)arg4;
- (bool)addPushButtonWithName:(id)arg1 parmId:(unsigned int)arg2 selector:(SEL)arg3 parmFlags:(unsigned int)arg4;
- (bool)getBitmap:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4 fromParm:(unsigned int)arg5 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (bool)getBoolValue:(bool*)arg1 fromParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)getCustomParameterValue:(id*)arg1 fromParm:(unsigned int)arg2;
- (bool)getCustomParameterValue:(id*)arg1 fromParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)getFloatValue:(double*)arg1 fromParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)getFontName:(id*)arg1 fromParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)getFontName:(id*)arg1 fromParm:(unsigned int)arg2 atTime:(double)arg3;
- (bool)getGradientSamples:(void*)arg1 numSamples:(unsigned long long)arg2 depth:(unsigned long long)arg3 fromParm:(unsigned int)arg4 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg5;
- (bool)getGradientStartEnd:(double*)arg1 startY:(double*)arg2 endX:(double*)arg3 endY:(double*)arg4 type:(int*)arg5 fromParm:(unsigned int)arg6 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg7;
- (bool)getHistogramBlackIn:(double*)arg1 BlackOut:(double*)arg2 WhiteIn:(double*)arg3 WhiteOut:(double*)arg4 Gamma:(double*)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg8;
- (bool)getIntValue:(int*)arg1 fromParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)getParameterFlags:(unsigned int*)arg1 fromParm:(unsigned int)arg2;
- (bool)getPathID:(void**)arg1 fromParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 alphaValue:(double*)arg4 fromParm:(unsigned int)arg5 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (bool)getRedValue:(double*)arg1 greenValue:(double*)arg2 blueValue:(double*)arg3 fromParm:(unsigned int)arg4 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg5;
- (bool)getStringParameterValue:(id*)arg1 fromParm:(unsigned int)arg2;
- (bool)getTexture:(id*)arg1 layerOffsetX:(double*)arg2 layerOffsetY:(double*)arg3 requestInfo:(struct { union { double x_1_1_1; struct { /* ? */ } *x_1_1_2; } x1; unsigned long long x2; unsigned long long x3; double x4; double x5; unsigned long long x6; })arg4 fromParm:(unsigned int)arg5 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (bool)getXValue:(double*)arg1 YValue:(double*)arg2 fromParm:(unsigned int)arg3 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg4;
- (bool)setBoolValue:(bool)arg1 toParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)setCustomParameterValue:(id)arg1 toParm:(unsigned int)arg2;
- (bool)setCustomParameterValue:(id)arg1 toParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)setFloatValue:(double)arg1 toParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)setHistogramBlackIn:(double)arg1 blackOut:(double)arg2 whiteIn:(double)arg3 whiteOut:(double)arg4 gamma:(double)arg5 forChannel:(unsigned long long)arg6 fromParm:(unsigned int)arg7 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg8;
- (bool)setIntValue:(int)arg1 toParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)setParameterFlags:(unsigned int)arg1 toParm:(unsigned int)arg2;
- (bool)setPathID:(void*)arg1 toParm:(unsigned int)arg2 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 alphaValue:(double)arg4 toParm:(unsigned int)arg5 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg6;
- (bool)setRedValue:(double)arg1 greenValue:(double)arg2 blueValue:(double)arg3 toParm:(unsigned int)arg4 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg5;
- (bool)setStringParameterValue:(id)arg1 toParm:(unsigned int)arg2;
- (bool)setXValue:(double)arg1 YValue:(double)arg2 toParm:(unsigned int)arg3 atFxTime:(union { double x1; struct { /* ? */ } *x2; })arg4;

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