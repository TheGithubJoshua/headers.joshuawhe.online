<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSDGPUDataBuffer.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSDGPUDataBuffer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSDGPUDataBuffer : NSObject <TSDGLDataBuffer, TSDMTLDataBuffer> {
    NSMutableArray * _arrayBuffers;
    NSMutableDictionary * _attributeToArrayBuffersDictionary;
    unsigned long long  _centerAttributeIndex;
    bool  _conformsToMetalProtocol;
    unsigned long long  _currentBufferIndex;
    <MTLDevice> * _device;
    bool  _didTeardown;
    unsigned int  _drawMode;
    unsigned long long  _elementArrayCount;
    TSDGLShader * _enabledShader;
    unsigned short * _gLElementData;
    unsigned int  _gLElementDataBuffer;
    bool  _gLElementDataBufferWasSetup;
    struct CGSize { 
        double width; 
        double height; 
    }  _gLElementMeshSize;
    unsigned long long  _gLElementQuadParticleCount;
    unsigned int  _gLVertexArrayObjects;
    bool  _isDynamicallyBuffered;
    bool  _isEnabled;
    bool  _isUpdatingRawDataBuffer;
    unsigned long long  _metalDrawMode;
    <MTLBuffer> * _metalElementData;
    unsigned long long  _positionAttributeIndex;
    unsigned long long  _texCoordAttributeIndex;
    NSArray * _vertexAttributes;
    unsigned long long  _vertexCount;
}

@property (readonly) unsigned long long centerAttributeIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int drawMode;
@property (readonly) unsigned long long hash;
@property (readonly) bool isDynamicallyBuffered;
@property (nonatomic) unsigned long long metalDrawMode;
@property (readonly) unsigned long long positionAttributeIndex;
@property (readonly) Class superclass;
@property (readonly) unsigned long long texCoordAttributeIndex;
@property (readonly) NSArray *vertexAttributes;
@property (readonly) unsigned long long vertexCount;

+ (id)newDataBufferWithVertexAttributes:(id)arg1 meshSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 meshSize:(struct CGSize { double x1; double x2; })arg2 device:(id)arg3;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 quadParticleCount:(unsigned long long)arg2 device:(id)arg3;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3;
+ (id)newDataBufferWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 device:(id)arg4;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 device:(id)arg3;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 device:(id)arg4;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4 device:(id)arg5;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4 includeCenterAttribute:(bool)arg5;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4 includeCenterAttribute:(bool)arg5 device:(id)arg6;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textureFlipped:(bool)arg3;
+ (id)newDataBufferWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 textureFlipped:(bool)arg3 device:(id)arg4;

- (struct { float x1; float x2; })GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; })GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct { float x1; float x2; float x3; float x4; })GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned short)GLushortForIndexElement:(unsigned long long)arg1;
- (unsigned long long)centerAttributeIndex;
- (void)dealloc;
- (id)description;
- (void)disableDataBufferWithShader:(id)arg1;
- (void)disableGLElementArrayBuffer;
- (void)disableWithDevice:(id)arg1;
- (unsigned int)drawMode;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 advanceDynamicBuffer:(bool)arg3;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)drawWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 advanceDynamicBuffer:(bool)arg4;
- (void)drawWithShader:(id)arg1;
- (void)drawWithShader:(id)arg1 advanceDynamicBuffer:(bool)arg2;
- (void)drawWithShader:(id)arg1 deactivateShaderWhenDone:(bool)arg2;
- (void)drawWithShader:(id)arg1 deactivateShaderWhenDone:(bool)arg2 advanceDynamicBuffer:(bool)arg3;
- (void)drawWithShader:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 deactivateShaderWhenDone:(bool)arg3;
- (void)drawWithShader:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 deactivateShaderWhenDone:(bool)arg3 advanceDynamicBuffer:(bool)arg4;
- (void)enableDataBuffer;
- (void)enableDataBufferWithShader:(id)arg1;
- (void)enableGLElementArrayBuffer;
- (void)encodeWithEncoder:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithVertexAttributes:(id)arg1 meshSize:(struct CGSize { double x1; double x2; })arg2 bufferCount:(unsigned long long)arg3;
- (id)initWithVertexAttributes:(id)arg1 vertexCount:(unsigned long long)arg2 indexElementCount:(unsigned long long)arg3 bufferCount:(unsigned long long)arg4;
- (id)initWithVertexRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textureRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 meshSize:(struct CGSize { double x1; double x2; })arg3 textureFlipped:(bool)arg4 includeCenterAttribute:(bool)arg5;
- (bool)isDynamicallyBuffered;
- (unsigned long long)metalDrawMode;
- (bool)p_setAttributeUpdateData:(struct { long long x1; unsigned long long x2; bool x3; char *x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; bool x8; struct _NSRange { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; unsigned long long x10; }*)arg1 fromAttribute:(id)arg2;
- (void)p_setupElementArrayBufferIfNecessary;
- (void)p_setupGLElementArrayBufferIfNecessary;
- (unsigned long long)positionAttributeIndex;
- (void)setCGFloat:(double)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setDataForAttribute:(id)arg1 atIndex:(unsigned long long)arg2 fromAttribute:(id)arg3 dataBuffer:(id)arg4 index:(unsigned long long)arg5;
- (void)setDrawMode:(unsigned int)arg1;
- (void)setGLPoint2D:(struct { float x1; float x2; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint3D:(struct { float x1; float x2; float x3; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLPoint4D:(struct { float x1; float x2; float x3; float x4; })arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)setGLushort:(unsigned short)arg1 forIndexElement:(unsigned long long)arg2;
- (void)setMetalDrawMode:(unsigned long long)arg1;
- (void)teardown;
- (unsigned long long)texCoordAttributeIndex;
- (void)updateDataBufferAttributes:(id)arg1 withBlock:(id /* block */)arg2;
- (void)updateDataBufferAttributesWithBlock:(id /* block */)arg1;
- (void)updateMetalDataBufferAttributes:(id)arg1 withBlock:(id /* block */)arg2;
- (id)vertexAttributeNamed:(id)arg1;
- (id)vertexAttributes;
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