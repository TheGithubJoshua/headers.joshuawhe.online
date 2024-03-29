<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSDGLDataArrayBuffer.h</title>
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

/PrivateFrameworks/TSReading.framework/TSDGLDataArrayBuffer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSDGLDataArrayBuffer : NSObject <TSDGLDataBufferAccessor> {
    NSMutableDictionary * _attributeOffsetsDictionary;
    unsigned long long  _bufferCount;
    unsigned long long  _bufferIndex;
    unsigned int  _bufferUsage;
    unsigned long long  _currentBufferIndex;
    unsigned long long  _dataBufferEntrySize;
    bool  _dataBufferHasBeenSetup;
    unsigned long long  _dataTypeSizeInBytes;
    char * _gLData;
    unsigned int * _gLDataBuffers;
    NSArray * _metalDataBuffers;
    long long * _needsUpdateFirstIndex;
    long long * _needsUpdateLastIndex;
    bool  _usesMetalBuffer;
    NSMutableArray * _vertexAttributes;
    unsigned long long  _vertexCount;
}

@property (nonatomic, readonly) unsigned long long bufferCount;
@property (nonatomic) unsigned long long currentBufferIndex;
@property (nonatomic, readonly) unsigned long long dataBufferEntrySize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasUpdatedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct { float x1; float x2; })GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; })GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; float x4; })GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addAllIndexesNeedUpdate;
- (void)addIndexNeedsUpdate:(long long)arg1;
- (void)addIndexRangeNeedsUpdate:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)bufferCount;
- (unsigned long long)currentBufferIndex;
- (unsigned long long)dataBufferEntrySize;
- (char *)dataPointer;
- (void)dealloc;
- (id)description;
- (void)disableVertexAttributeArrayBuffersWithShader:(id)arg1;
- (void)enableArrayBufferWithDevice:(id)arg1;
- (void)enableVertexAttributeArrayBuffersWithShader:(id)arg1;
- (void)encodeArrayBufferWithEncoder:(id)arg1 atIndex:(long long)arg2;
- (bool)hasUpdatedData;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 bufferCount:(unsigned long long)arg3;
- (unsigned long long)p_bufferOffsetOfAttribute:(id)arg1 atIndex:(unsigned long long)arg2 component:(unsigned long long)arg3;
- (void)p_setupGLDataBufferIfNecessary;
- (void)p_setupMetalDataBufferIfNecessaryWithDevice:(id)arg1;
- (void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setCurrentBufferIndex:(unsigned long long)arg1;
- (void)setGLPoint2D:(struct { float x1; float x2; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint3D:(struct { float x1; float x2; float x3; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)swapGPUDataBuffers;
- (void)updateDataBufferIfNecessary;
- (unsigned long long)vertexCount;

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
