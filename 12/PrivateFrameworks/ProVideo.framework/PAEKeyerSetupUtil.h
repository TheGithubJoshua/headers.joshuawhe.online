<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PAEKeyerSetupUtil.h</title>
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

/PrivateFrameworks/ProVideo.framework/PAEKeyerSetupUtil.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo (398.0.87)
 */

@interface PAEKeyerSetupUtil : NSObject {
    id  _actionAPI;
    id  _apiManager;
    id  _getAPI;
    PAEKeyerCbCrSetup * _keyerCbCrSetup;
    PAEKeyerLumaSetup * _keyerLumaSetup;
    struct PAEKeyerOMKeyer2D { int (**x1)(); float x2; float x3; struct pair<Vec2f, Vec2f> { struct Vec2f { float x_1_2_1[2]; } x_4_1_1; struct Vec2f { float x_2_2_1[2]; } x_4_1_2; } x4; struct pair<Vec2f, Vec2f> { struct Vec2f { float x_1_2_1[2]; } x_5_1_1; struct Vec2f { float x_2_2_1[2]; } x_5_1_2; } x5; float x6; float x7; struct Vec2f { float x_8_1_1[2]; } x8; float *x9; struct vector<float, std::__1::allocator<float> > { float *x_10_1_1; float *x_10_1_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_2_1; } x_10_1_3; } x10; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x_1_2_1; float *x_1_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_1_2_3; } x_11_1_1; } x11; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x_1_2_1; float *x_1_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_1_2_3; } x_12_1_1; } x12; struct Mat4f { struct Vec4f { float x_1_2_1[4]; } x_13_1_1[4]; } x13; } * _omKeyer;
    id  _setAPI;
}

- (bool)addTolerance;
- (double)autoAdjustSoftGap;
- (double)autoKeySoftness;
- (bool)autoScale;
- (void)dealloc;
- (bool)defineEdge;
- (void)getDataFromDB:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (double)highlightsGain;
- (id)initWithAPIManager:(id)arg1 colorPrimaries:(int)arg2 atTime:(union { double x1; struct { /* ? */ } *x2; })arg3;
- (bool)keyerActiveAt:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (struct PAEKeyerOMKeyer2D { int (**x1)(); float x2; float x3; struct pair<Vec2f, Vec2f> { struct Vec2f { float x_1_2_1[2]; } x_4_1_1; struct Vec2f { float x_2_2_1[2]; } x_4_1_2; } x4; struct pair<Vec2f, Vec2f> { struct Vec2f { float x_1_2_1[2]; } x_5_1_1; struct Vec2f { float x_2_2_1[2]; } x_5_1_2; } x5; float x6; float x7; struct Vec2f { float x_8_1_1[2]; } x8; float *x9; struct vector<float, std::__1::allocator<float> > { float *x_10_1_1; float *x_10_1_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_2_1; } x_10_1_3; } x10; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x_1_2_1; float *x_1_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_1_2_3; } x_11_1_1; } x11; struct OMUtilErf { struct vector<float, std::__1::allocator<float> > { float *x_1_2_1; float *x_1_2_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_3_1; } x_1_2_3; } x_12_1_1; } x12; struct Mat4f { struct Vec4f { float x_1_2_1[4]; } x_13_1_1[4]; } x13; }*)omKeyer;
- (void)removeKeyframeAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (void)removeKeyframeAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1 forParam:(int)arg2 withAPI:(id)arg3;
- (void)setAddTolerance:(bool)arg1;
- (void)setDefineEdge:(bool)arg1;
- (double)shadowsGain;
- (double)simpleKeyAmount;
- (double)spreadGain;
- (void)syncChromaWithDB:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (void)syncLumaWithDB:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (void)syncWithDB:(union { double x1; struct { /* ? */ } *x2; })arg1 setAsDefault:(bool)arg2;
- (bool)tight;

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