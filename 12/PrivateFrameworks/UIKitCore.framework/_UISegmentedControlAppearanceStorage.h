<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_UISegmentedControlAppearanceStorage.h</title>
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

/PrivateFrameworks/UIKitCore.framework/_UISegmentedControlAppearanceStorage.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore (61000)
 */

@interface _UISegmentedControlAppearanceStorage : NSObject {
    NSMutableDictionary * _backgroundImages;
    NSMutableDictionary * _backgroundPositionAdjustmentsForBarMetrics;
    NSMutableDictionary * _contentPositionOffsets;
    NSMutableDictionary * _dividerImages;
    bool  _isTiled;
    unsigned long long  _leftCapWidth;
    bool  _legacyDontHighlight;
    bool  _legacySuppressOptionsBackground;
    NSMutableDictionary * _miniBackgroundImages;
    NSMutableDictionary * _miniContentPositionOffsets;
    NSMutableDictionary * _miniDividerImages;
    UIImage * _optionsBackgroundImage;
    unsigned long long  _rightCapWidth;
    NSMutableDictionary * _textAttributesForState;
}

@property (nonatomic, retain) UIImage *optionsBackgroundImage;

- (void).cxx_destruct;
- (id)anyDividerImage;
- (id)anyDividerImageForMini:(bool)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(bool)arg2;
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(bool)arg2 withFallback:(bool)arg3;
- (double)backgroundPositionAdjustmentForBarMetrics:(long long)arg1;
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(bool)arg2;
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(bool)arg2 noFallback:(bool)arg3;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(bool)arg3;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(bool)arg3 withFallback:(bool)arg4;
- (id)init;
- (bool)legacySuppressOptionsBackground;
- (id)optionsBackgroundImage;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(bool)arg3;
- (void)setBackgroundPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setContentPositionOffset:(id)arg1 forSegment:(long long)arg2 inMiniBar:(bool)arg3;
- (void)setDetail:(struct { id x1; double x2; double x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; id x_4_1_5; struct CGSize { double x_6_2_1; double x_6_2_2; } x_4_1_6; } x4; struct { id x_5_1_1; id x_5_1_2; id x_5_1_3; id x_5_1_4; id x_5_1_5; struct CGSize { double x_6_2_1; double x_6_2_2; } x_5_1_6; } x5; struct { id x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; id x_6_1_5; struct CGSize { double x_6_2_1; double x_6_2_2; } x_6_1_6; } x6; struct { id x_7_1_1; id x_7_1_2; id x_7_1_3; id x_7_1_4; id x_7_1_5; struct CGSize { double x_6_2_1; double x_6_2_2; } x_7_1_6; } x7; bool x8; }*)arg1;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 isMini:(bool)arg4;
- (void)setIsTiled:(bool)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3;
- (void)setOptionsBackgroundImage:(id)arg1;
- (void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)takeTextAttributesFrom:(struct { id x1; id x2; id x3; id x4; id x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; })arg1 forState:(unsigned long long)arg2;
- (id)textAttributesForState:(unsigned long long)arg1;
- (bool)wantsTrackingSuppressed;

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
