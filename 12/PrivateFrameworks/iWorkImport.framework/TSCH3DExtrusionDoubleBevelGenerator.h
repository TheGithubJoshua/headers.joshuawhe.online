<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSCH3DExtrusionDoubleBevelGenerator.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSCH3DExtrusionDoubleBevelGenerator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSCH3DExtrusionDoubleBevelGenerator : NSObject {
    float  mBevelHeight;
    long long  mBevelSlices;
    bool  mEnableBevelEdges;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { 
        struct tvec3<float> {} *__begin_; 
        struct tvec3<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { 
            struct tvec3<float> {} *__value_; 
        } __end_cap_; 
    }  mInputSpinePoints;
    struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { 
        struct tvec2<float> {} *__begin_; 
        struct tvec2<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { 
            struct tvec2<float> {} *__value_; 
        } __end_cap_; 
    }  mScaleValues;
    struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { 
        struct tvec3<float> {} *__begin_; 
        struct tvec3<float> {} *__end_; 
        struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { 
            struct tvec3<float> {} *__value_; 
        } __end_cap_; 
    }  mSpinePoints;
}

@property (nonatomic) float bevelHeight;
@property (nonatomic) long long bevelSlices;
@property (nonatomic, readonly) long long bottomBevelStartIndex;
@property (nonatomic, readonly) long long bottomNonBevelStartIndex;
@property (nonatomic) bool enableBevelEdges;

+ (id)generator;
+ (id)namedBevelInterpolationShaderFunction;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)adjustBottomOffset;
- (void)adjustBottomScales;
- (void)adjustTopScales;
- (float)bevelHeight;
- (long long)bevelSlices;
- (long long)bottomBevelStartIndex;
- (struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; })bottomDirection;
- (long long)bottomNonBevelStartIndex;
- (long long)bottomSlices;
- (void)createSpinePointArray;
- (bool)enableBevelEdges;
- (void)generate;
- (void)generateBottom;
- (void)generateTop;
- (id)init;
- (struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x1; struct tvec3<float> {} *x2; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x_3_1_1; } x3; }*)inputSpinePoints;
- (void)resetAllScales;
- (float)scaleUValueAtIndex:(long long)arg1;
- (const struct vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x1; struct tvec2<float> {} *x2; struct __compressed_pair<glm::detail::tvec2<float> *, std::__1::allocator<glm::detail::tvec2<float> > > { struct tvec2<float> {} *x_3_1_1; } x3; }*)scaleValues;
- (void)setBevelHeight:(float)arg1;
- (void)setBevelSlices:(long long)arg1;
- (void)setEnableBevelEdges:(bool)arg1;
- (const struct vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x1; struct tvec3<float> {} *x2; struct __compressed_pair<glm::detail::tvec3<float> *, std::__1::allocator<glm::detail::tvec3<float> > > { struct tvec3<float> {} *x_3_1_1; } x3; }*)spinePoints;
- (float)spineUValueAtIndex:(long long)arg1;
- (long long)topBevelStartIndex;
- (long long)topSlices;

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
