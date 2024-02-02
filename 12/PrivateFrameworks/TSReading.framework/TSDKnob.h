<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSDKnob.h</title>
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

/PrivateFrameworks/TSReading.framework/TSDKnob.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading (261)
 */

@interface TSDKnob : NSObject {
    CAShapeLayer * mHitRegionLayer;
    TSDBezierPath * mHitRegionPath;
    CALayer * mLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  mOffset;
    bool  mOffsetValid;
    struct CGPoint { 
        double x; 
        double y; 
    }  mPosition;
    double  mRadius;
    TSDRep * mRep;
    bool  mShouldDisplayDirectlyOverRep;
    unsigned long long  mTag;
    int  mType;
    bool  mWorksWhenInVersionBrowsingMode;
    bool  mWorksWhenRepLocked;
}

@property (nonatomic, copy) TSDBezierPath *hitRegionPath;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic) bool offsetValid;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic) double radius;
@property (nonatomic, readonly) TSDRep *rep;
@property (nonatomic) bool shouldDisplayDirectlyOverRep;
@property (nonatomic) unsigned long long tag;
@property (nonatomic) int type;
@property (nonatomic) bool worksWhenInVersionBrowsingMode;
@property (nonatomic) bool worksWhenRepLocked;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxOfHitRegionForRep:(id)arg1 scale:(double)arg2;
- (void)dealloc;
- (id)description;
- (int)dragType;
- (id)hitRegionLayerForRep:(id)arg1;
- (id)hitRegionPath;
- (double)i_rotationInDegreesForKnobOnRep:(id)arg1;
- (id)init;
- (id)initWithType:(int)arg1 position:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3 tag:(unsigned long long)arg4 onRep:(id)arg5;
- (bool)isHitByUnscaledPoint:(struct CGPoint { double x1; double x2; })arg1 andRep:(id)arg2;
- (bool)isHitByUnscaledPoint:(struct CGPoint { double x1; double x2; })arg1 andRep:(id)arg2 returningDistance:(double*)arg3;
- (id)knobImage;
- (id)layer;
- (bool)obscuresKnob:(id)arg1;
- (struct CGPoint { double x1; double x2; })offset;
- (bool)offsetValid;
- (bool)overlapsWithKnob:(id)arg1;
- (struct CGPoint { double x1; double x2; })position;
- (double)radius;
- (id)rep;
- (void)setHitRegionPath:(id)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOffsetValid:(bool)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRadius:(double)arg1;
- (void)setShouldDisplayDirectlyOverRep:(bool)arg1;
- (void)setTag:(unsigned long long)arg1;
- (void)setType:(int)arg1;
- (void)setWorksWhenInVersionBrowsingMode:(bool)arg1;
- (void)setWorksWhenRepLocked:(bool)arg1;
- (bool)shouldDisplayDirectlyOverRep;
- (unsigned long long)tag;
- (int)type;
- (void)updateHitRegionPathForRep:(id)arg1;
- (bool)worksWhenInVersionBrowsingMode;
- (bool)worksWhenRepLocked;

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