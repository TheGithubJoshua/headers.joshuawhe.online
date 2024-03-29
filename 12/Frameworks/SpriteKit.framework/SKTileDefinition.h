<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKTileDefinition.h</title>
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

/Frameworks/SpriteKit.framework/SKTileDefinition.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit (1)
 */

@interface SKTileDefinition : NSObject <NSCopying, NSSecureCoding> {
    unsigned short  _currentFrameIndex;
    float  _currentFrameTime;
    bool  _frameDidChange;
    double  _lastTargetTime;
    NSString * _name;
    bool  _nextFrameAffectsVertexBuffer;
    NSMutableArray * _normals;
    unsigned long long  _orientation;
    SKTileGroupRule * _parentRule;
    unsigned long long  _placementWeight;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSMutableArray * _textures;
    double  _timePerFrame;
    NSString * _uid;
    NSMutableDictionary * _userData;
}

@property (nonatomic) unsigned short currentFrameIndex;
@property (nonatomic) float currentFrameTime;
@property (nonatomic) bool flipHorizontally;
@property (nonatomic) bool flipVertically;
@property (nonatomic) bool frameDidChange;
@property (nonatomic) double lastTargetTime;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool nextFrameAffectsVertexBuffer;
@property (nonatomic, copy) NSArray *normalTextures;
@property (nonatomic) SKTileGroupRule *parentRule;
@property (nonatomic) unsigned long long placementWeight;
@property (nonatomic) unsigned long long rotation;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, copy) NSArray *textures;
@property (nonatomic) double timePerFrame;
@property (nonatomic, retain) NSString *uid;
@property (nonatomic, retain) NSMutableDictionary *userData;

+ (bool)supportsSecureCoding;
+ (id)tileDefinitionWithTexture:(id)arg1;
+ (id)tileDefinitionWithTexture:(id)arg1 normalTexture:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
+ (id)tileDefinitionWithTexture:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)tileDefinitionWithTextures:(id)arg1 normalTextures:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 timePerFrame:(double)arg4;
+ (id)tileDefinitionWithTextures:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 timePerFrame:(double)arg3;

- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned short)currentFrameIndex;
- (float)currentFrameTime;
- (void)encodeWithCoder:(id)arg1;
- (bool)flipHorizontally;
- (bool)flipVertically;
- (bool)frameDidChange;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTexture:(id)arg1;
- (id)initWithTexture:(id)arg1 normalTexture:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (id)initWithTexture:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithTextures:(id)arg1 normalTextures:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 timePerFrame:(double)arg4;
- (id)initWithTextures:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 timePerFrame:(double)arg3;
- (bool)isEqualToNode:(id)arg1;
- (double)lastTargetTime;
- (id)name;
- (bool)nextFrameAffectsVertexBuffer;
- (id)normalTextures;
- (id)parentRule;
- (unsigned long long)placementWeight;
- (unsigned long long)rotation;
- (void)setCurrentFrameIndex:(unsigned short)arg1;
- (void)setCurrentFrameTime:(float)arg1;
- (void)setDataWithTexture:(id)arg1 normalTexture:(id)arg2 tileName:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4;
- (void)setDataWithTextures:(id)arg1 normalTextures:(id)arg2 timePerFrame:(double)arg3 tileName:(id)arg4 size:(struct CGSize { double x1; double x2; })arg5;
- (void)setFlipHorizontally:(bool)arg1;
- (void)setFlipVertically:(bool)arg1;
- (void)setFrameDidChange:(bool)arg1;
- (void)setLastTargetTime:(double)arg1;
- (void)setName:(id)arg1;
- (void)setNextFrameAffectsVertexBuffer:(bool)arg1;
- (void)setNormalTextures:(id)arg1;
- (void)setParentRule:(id)arg1;
- (void)setPlacementWeight:(unsigned long long)arg1;
- (void)setRotation:(unsigned long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTextures:(id)arg1;
- (void)setTimePerFrame:(double)arg1;
- (void)setUid:(id)arg1;
- (void)setUserData:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)textures;
- (double)timePerFrame;
- (id)uid;
- (id)userData;

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
