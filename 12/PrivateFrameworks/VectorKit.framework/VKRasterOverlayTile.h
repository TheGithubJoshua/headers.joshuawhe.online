<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VKRasterOverlayTile.h</title>
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

/PrivateFrameworks/VectorKit.framework/VKRasterOverlayTile.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit (1360.35.12.18.4)
 */

@interface VKRasterOverlayTile : VKTile {
    struct shared_ptr<md::RasterOverlayData> { 
        struct RasterOverlayData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _overlayData;
    struct unique_ptr<ggl::Textured::Pos2DUVPipelineSetup, std::__1::default_delete<ggl::Textured::Pos2DUVPipelineSetup> > { 
        struct __compressed_pair<ggl::Textured::Pos2DUVPipelineSetup *, std::__1::default_delete<ggl::Textured::Pos2DUVPipelineSetup> > { 
            struct Pos2DUVPipelineSetup {} *__value_; 
        } __ptr_; 
    }  _pipelineSetup;
    struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > { 
        struct __compressed_pair<ggl::RenderItem *, std::__1::default_delete<ggl::RenderItem> > { 
            struct RenderItem {} *__value_; 
        } __ptr_; 
    }  _renderItem;
}

@property (nonatomic, readonly) struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*gglTexture;
@property (nonatomic, readonly) struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct PipelineSetup {} *x4; unsigned int x5; unsigned long long x6; float x7; struct Mesh {} *x8; struct Range<unsigned long> { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; struct Range<unsigned long> {} *x10; unsigned long long x11; }*renderItem;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGContext { }*)drawContext;
- (struct Texture2D { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; unsigned int x10; struct shared_ptr<const ggl::TextureDataAbstract> { struct TextureDataAbstract {} *x_11_1_1; struct __shared_weak_count {} *x_11_1_2; } x11; bool x12; bool x13; unsigned int x14; unsigned int x15; bool x16; struct shared_ptr<ggl::SamplerState> { struct SamplerState {} *x_17_1_1; struct __shared_weak_count {} *x_17_1_2; } x17; }*)gglTexture;
- (id)initWithKey:(const struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; }*)arg1 size:(unsigned long long)arg2 scale:(float)arg3;
- (bool)isEmpty;
- (struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct PipelineSetup {} *x4; unsigned int x5; unsigned long long x6; float x7; struct Mesh {} *x8; struct Range<unsigned long> { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; struct Range<unsigned long> {} *x10; unsigned long long x11; }*)renderItem;
- (struct RenderItem { int (**x1)(); char *x2; struct RenderState {} *x3; struct PipelineSetup {} *x4; unsigned int x5; unsigned long long x6; float x7; struct Mesh {} *x8; struct Range<unsigned long> { unsigned long long x_9_1_1; unsigned long long x_9_1_2; } x9; struct Range<unsigned long> {} *x10; unsigned long long x11; }*)setupRenderItemWithRenderState:(struct RenderState { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; struct DepthState { int x_4_1_1; int x_4_1_2; int x_4_1_3; float x_4_1_4; float x_4_1_5; } x4; struct StencilState { int x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; int x_5_1_5; unsigned int x_5_1_6; unsigned int x_5_1_7; unsigned int x_5_1_8; } x5; struct RasterizerState { int x_6_1_1; int x_6_1_2; unsigned int x_6_1_3; struct Box<unsigned int, 2> { struct Matrix<unsigned int, 2, 1> { unsigned int x_1_3_1[2]; } x_4_2_1; struct Matrix<unsigned int, 2, 1> { unsigned int x_2_3_1[2]; } x_4_2_2; } x_6_1_4; } x6; bool x7; }*)arg1 pipelineState:(const struct shared_ptr<ggl::Textured::Pos2DUVPipelineState> { struct Pos2DUVPipelineState {} *x1; struct __shared_weak_count {} *x2; }*)arg2 mesh:(struct Mesh { int (**x1)(); char *x2; int (**x3)(); struct ResourceManager {} *x4; struct RenderResource {} *x5; struct MeshCReflection {} *x6; struct vector<std::__1::shared_ptr<ggl::VertexData>, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_7_1_1; struct shared_ptr<ggl::VertexData> {} *x_7_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::VertexData> *, geo::StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> > { struct shared_ptr<ggl::VertexData> {} *x_3_2_1; struct StdAllocator<std::__1::shared_ptr<ggl::VertexData>, ggl::Allocator> { struct Allocator {} *x_2_3_1; } x_3_2_2; } x_7_1_3; } x7; struct shared_ptr<ggl::IndexData> { struct IndexData {} *x_8_1_1; struct __shared_weak_count {} *x_8_1_2; } x8; }*)arg3;

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
