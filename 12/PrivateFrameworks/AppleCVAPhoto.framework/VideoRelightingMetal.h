<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VideoRelightingMetal.h</title>
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

/PrivateFrameworks/AppleCVAPhoto.framework/VideoRelightingMetal.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface VideoRelightingMetal : ImageSaverAndFileConfigRegistrator {
    <MTLTexture> * _alphaTexture;
    bool  _apiTransitionPeriod;
    UIColor * _backgroundColor;
    struct optional<float> { 
        bool m_initialized; 
        struct aligned_storage<float> { 
            union dummy_u { 
                BOOL data[4]; 
                struct a4 { } aligner_; 
            } dummy_; 
        } m_storage; 
    }  _cheekAngle;
    struct optional<unsigned long> { 
        bool m_initialized; 
        struct aligned_storage<unsigned long> { 
            union dummy_u { 
                BOOL data[8]; 
                struct a8 { } aligner_; 
            } dummy_; 
        } m_storage; 
    }  _closestLeftCheekVertexID;
    NSData * _colorCubeUserData;
    <MTLCommandQueue> * _commandQueue;
    <MTLTexture> * _countTexture;
    bool  _debugFace;
    bool  _debugFaceDraw;
    <MTLDepthStencilState> * _depthStencilState;
    <MTLDeviceSPI> * _device;
    <MTLTexture> * _dstTexture;
    <MTLTexture> * _dstUVTexture;
    void _face3DCenter;
    struct optional<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_variance, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > { 
        bool m_initialized; 
        struct aligned_storage<boost::accumulators::accumulator_set<double, boost::accumulators::stats<boost::accumulators::tag::rolling_variance, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na, mpl_::na>, void> > { 
            union dummy_u { 
                BOOL data[88]; 
                struct a8 { } aligner_; 
            } dummy_; 
        } m_storage; 
    }  _faceConfidenceRollingVariance;
    bool  _faceDetected;
    bool  _faceDetectedReal;
    struct circular_buffer<bool, std::__1::allocator<bool> > { 
        bool *m_buff; 
        bool *m_end; 
        bool *m_first; 
        bool *m_last; 
        unsigned long long m_size; 
        struct allocator<bool> { } m_alloc; 
    }  _faceDetectedRealHistory;
    NSData * _faceKitMeshTexcoords;
    struct vector<unsigned short, std::__1::allocator<unsigned short> > { 
        unsigned short *__begin_; 
        unsigned short *__end_; 
        struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { 
            unsigned short *__value_; 
        } __end_cap_; 
    }  _faceKitMeshTris;
    struct FaceKitStreamedData { 
        NSData *verticesPos; 
        NSArray *intrinsics; 
        NSArray *camR; 
        NSArray *camT; 
        NSArray *poseR; 
        NSArray *poseT; 
        NSData *landmarks; 
        float confidence; 
    }  _faceKitStreamedData;
    void _faceModelCenterProjected;
    MTLRenderPassDescriptor * _faceRenderDesc1;
    MTLRenderPassDescriptor * _faceRenderDesc2;
    MTLRenderPassDescriptor * _faceRenderDesc3;
    <MTLTexture> * _facemaskRegionTexture;
    long long  _frameIndex;
    long long  _frameIndexWhenFacekitAllowed;
    double  _gpuEndTime;
    double  _gpuStartTime;
    <MTLBuffer> * _indexBufferImmutable;
    unsigned long long  _indexOfCheekLandmark_bottomLeft;
    unsigned long long  _indexOfCheekLandmark_bottomRight;
    unsigned long long  _indexOfCheekLandmark_topLeft;
    unsigned long long  _indexOfCheekLandmark_topRight;
    NSObject<OS_dispatch_semaphore> * _inflightSemaphore;
    <MTLComputePipelineState> * _kernel_AlphaBlendRGBATextureArray;
    <MTLComputePipelineState> * _kernel_Count;
    <MTLComputePipelineState> * _kernel_CountVertical;
    <MTLRenderPipelineState> * _kernel_Face;
    <MTLComputePipelineState> * _kernel_Relight;
    <MTLComputePipelineState> * _kernel_Slide;
    <MTLLibrary> * _library;
    float  _lightMapsNearFarLerp;
    <MTLTexture> * _lightTexture;
    struct CVAPhotoMetalContext { id x1; id x2; id x3; id x4; struct unique_ptr<CVAPerfEndTimeProfilerSet, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { struct __compressed_pair<CVAPerfEndTimeProfilerSet *, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { struct CVAPerfEndTimeProfilerSet {} *x_1_2_1; } x_5_1_1; } x5; bool x6; } * _metalContext;
    struct vector<FaceVertex, std::__1::allocator<FaceVertex> > { 
        struct FaceVertex {} *__begin_; 
        struct FaceVertex {} *__end_; 
        struct __compressed_pair<FaceVertex *, std::__1::allocator<FaceVertex> > { 
            struct FaceVertex {} *__value_; 
        } __end_cap_; 
    }  _modelVertices;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _modelViewMatrix;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _modelViewProjectionMatrix;
    struct float4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _projectionMatrix;
    <CVAVideoPipelinePropertiesSPI> * _properties;
    float  _proxyToFaceEffectLerpFinal;
    float  _proxyToFaceEffectLerpTemporal;
    float  _relightingStability;
    <MTLTexture> * _rgbTransformMapContourFarTexture;
    <MTLTexture> * _rgbTransformMapContourNearTexture;
    <MTLTexture> * _rgbTransformMapCurrentFarTexturePtr;
    <MTLTexture> * _rgbTransformMapCurrentNearTexturePtr;
    <MTLTexture> * _rgbTransformMapCurrentTextureInterpolated;
    <MTLTexture> * _rgbTransformMapStudioFarTexture;
    <MTLTexture> * _rgbTransformMapStudioNearTexture;
    <MTLTexture> * _rgbTransformMapTextureSelectedPtr;
    <MTLTexture> * _slideTexture;
    <MTLTexture> * _srcTexture;
    NSObject<OS_dispatch_queue> * _synchronousRelightingCallbackQueue;
    <MTLTexture> * _tcDepthTexture;
    <MTLRenderPipelineState> * _tcKernel;
    struct TC_MatrixUniforms { 
        struct float4x4 { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } modelViewProjectionMatrix; 
    }  _tcMatrixUniformsBuffer;
    MTLRenderPassDescriptor * _tcRenderDesc;
    <MTLTexture> * _tcTexture;
    <MTLTexture> * _texColorCubeStaticArray;
    <MTLTexture> * _texColorCubeUserData;
    <MTLTexture> * _texSelectedColorCube;
    <MTLTexture> * _texStub;
    struct RelightingTransitionData { 
        float proxyToFaceEffectLerp; 
        float originalToRelightEffectLerp; 
        float backgroundAlphaMultiplier; 
        float colorCubeIntensity; 
        float colorCubeLerpSelfToOther; 
        int otherCubeType; 
    }  _transitionData;
    bool  _trustAlpha;
    struct RelightUniforms { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*outSizeInv; 
    }  _uniformBuffer_relight;
    struct SlideUniforms { 
        float center_x; 
        float center_y; 
        float radius; 
        float bgColor_x; 
        float bgColor_y; 
        float bgColor_z; 
        float width; 
        float height; 
    }  _uniformBuffer_slide;
    <MTLTexture> * _vertCountTexture;
    CVAPhotoMTLRingBuffer * _vertexBuffer;
}

@property (readonly) double gpuEndTime;
@property (readonly) double gpuStartTime;
@property (readonly) float relightingStability;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)configureRenderPipeline;
- (id)create3DTextureWithSize:(unsigned long long)arg1;
- (void)createTexturesWith:(unsigned long long)arg1 imgHeight:(unsigned long long)arg2;
- (void)encodeAlphaBlendRGBATextureArrayToCommandBuffer:(id)arg1 inTexFirst:(id)arg2 inTexSecond:(id)arg3 outTex:(id)arg4 alpha:(const float*)arg5;
- (void)encodeCountKernelToCommandBuffer:(id)arg1;
- (void)encodeLerpNearFarMapsToCommandBuffer:(id)arg1;
- (void)encodeRelightKernelToCommandBuffer:(id)arg1;
- (void)encodeSlideKernelToCommandBuffer:(id)arg1;
- (void)encodeTCKernelToCommandBuffer:(id)arg1;
- (void)encodeVertCountKernelToCommandBuffer:(id)arg1;
- (void)generateModelNormals;
- (double)gpuEndTime;
- (double)gpuStartTime;
- (void)initCommon;
- (void)initKernelFunctions;
- (id)initWithMetalContext:(struct CVAPhotoMetalContext { id x1; id x2; id x3; id x4; struct unique_ptr<CVAPerfEndTimeProfilerSet, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { struct __compressed_pair<CVAPerfEndTimeProfilerSet *, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { struct CVAPerfEndTimeProfilerSet {} *x_1_2_1; } x_5_1_1; } x5; bool x6; }*)arg1;
- (id)loadCube:(id)arg1;
- (void)loadRGBTransformMaps;
- (void)loadRGBTransformMapsOnceTo:(id*)arg1 namePrefix:(const char *)arg2 forIntermediateResults:(bool)arg3;
- (float)relightingStability;
- (void)renderWithSrcImage:(struct __CVBuffer { }*)arg1 srcAlpha:(struct __CVBuffer { }*)arg2 trustAlpha:(bool)arg3 dstImage:(struct __CVBuffer { }*)arg4 faceKitProcessOutput:(id)arg5 transitionData:(const struct RelightingTransitionData { float x1; float x2; float x3; float x4; float x5; int x6; }*)arg6 colorSim:(id)arg7 disparity:(id)arg8 singleCubeData:(id)arg9 properties:(id)arg10 callbackQueue:(id)arg11 callback:(id /* block */)arg12;
- (void)saveTexture:(id)arg1 toImage:(id)arg2;
- (void)setModelVertices;
- (void)updateFaceKitStreamedDataFromProcessOutput:(id)arg1;
- (void)updateMatrixWithWidth:(int)arg1 height:(int)arg2 camera:(const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg3 pose:(const struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg4;
- (void)updateModelAndPose:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg1 camera:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg2;
- (void)updateUniforms;

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