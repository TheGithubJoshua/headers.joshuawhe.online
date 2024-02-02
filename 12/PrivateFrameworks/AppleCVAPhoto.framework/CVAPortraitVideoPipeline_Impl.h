<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CVAPortraitVideoPipeline_Impl.h</title>
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

/PrivateFrameworks/AppleCVAPhoto.framework/CVAPortraitVideoPipeline_Impl.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAPortraitVideoPipeline_Impl : NSObject <CVADisparityPostprocessingVideoPipeline, CVAMattingVideoPipeline, CVAPortraitVideoPipeline> {
    struct __CVPixelBufferPool { } * _canonicalDisparityPixelBufferPool;
    int  _debugGPUCaptureFrameNumber;
    bool  _debugLogTransition;
    bool  _debugLogTransitionPrintTrivial01;
    struct unique_ptr<DisparityAutofocus, std::__1::default_delete<DisparityAutofocus> > { 
        struct __compressed_pair<DisparityAutofocus *, std::__1::default_delete<DisparityAutofocus> > { 
            struct DisparityAutofocus {} *__value_; 
        } __ptr_; 
    }  _disparityAutofocus;
    struct unique_ptr<DisparityConversion, std::__1::default_delete<DisparityConversion> > { 
        struct __compressed_pair<DisparityConversion *, std::__1::default_delete<DisparityConversion> > { 
            struct DisparityConversion {} *__value_; 
        } __ptr_; 
    }  _disparityConversion;
    struct unique_ptr<GeometricTransformation, std::__1::default_delete<GeometricTransformation> > { 
        struct __compressed_pair<GeometricTransformation *, std::__1::default_delete<GeometricTransformation> > { 
            struct GeometricTransformation {} *__value_; 
        } __ptr_; 
    }  _disparityGeometricTransformation;
    struct unique_ptr<DisparityStatistics, std::__1::default_delete<DisparityStatistics> > { 
        struct __compressed_pair<DisparityStatistics *, std::__1::default_delete<DisparityStatistics> > { 
            struct DisparityStatistics {} *__value_; 
        } __ptr_; 
    }  _disparityStatistics;
    NSDictionary * _faceKitProcessOutput;
    CVAFilterAlphaBlend * _filterAlphaBlend;
    struct unique_ptr<cva::FocusStateMachine, std::__1::default_delete<cva::FocusStateMachine> > { 
        struct __compressed_pair<cva::FocusStateMachine *, std::__1::default_delete<cva::FocusStateMachine> > { 
            struct FocusStateMachine {} *__value_; 
        } __ptr_; 
    }  _focusStateMachine;
    struct unique_ptr<FocusStatsPostprocessing, std::__1::default_delete<FocusStatsPostprocessing> > { 
        struct __compressed_pair<FocusStatsPostprocessing *, std::__1::default_delete<FocusStatsPostprocessing> > { 
            struct FocusStatsPostprocessing {} *__value_; 
        } __ptr_; 
    }  _focusStatsPostprocessing;
    struct RetainPtr<__CVBuffer *> { 
        void *m_ptr; 
    }  _intermediateRelightSourceBuffer;
    struct RetainPtr<__CVBuffer *> { 
        void *m_ptr; 
    }  _intermediateTransitionBufferFrom;
    struct RetainPtr<__CVBuffer *> { 
        void *m_ptr; 
    }  _intermediateTransitionBufferTo;
    struct CVAPhotoMetalContext { 
        <MTLDeviceSPI> *device; 
        <MTLCommandQueue> *commandQueue; 
        <MTLLibrary> *library; 
        <MTLCaptureScope> *captureScope; 
        struct unique_ptr<CVAPerfEndTimeProfilerSet, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { 
            struct __compressed_pair<CVAPerfEndTimeProfilerSet *, std::__1::default_delete<CVAPerfEndTimeProfilerSet> > { 
                struct CVAPerfEndTimeProfilerSet {} *__value_; 
            } __ptr_; 
        } profiler; 
        bool _alreadyInCaptureScope; 
    }  _metalContext;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    struct Preferences { 
        bool drawFocusMachineState; 
        int overlayShiftOnRendering; 
        int displayFrameTime; 
        int noiseBits; 
        int fNumber_tenths; 
        bool bypassGPUProcessing; 
        bool bypassCPUProcessing; 
    }  _preferences;
    <CVAVideoPipelinePropertiesSPI> * _properties;
    float  _referenceLensPosition_um;
    struct RelightingTransitionData { 
        float proxyToFaceEffectLerp; 
        float originalToRelightEffectLerp; 
        float backgroundAlphaMultiplier; 
        float colorCubeIntensity; 
        float colorCubeLerpSelfToOther; 
        int otherCubeType; 
    }  _relightingTransitionData;
    struct unique_ptr<SdofStateMachine, std::__1::default_delete<SdofStateMachine> > { 
        struct __compressed_pair<SdofStateMachine *, std::__1::default_delete<SdofStateMachine> > { 
            struct SdofStateMachine {} *__value_; 
        } __ptr_; 
    }  _sdofIntensityStateMachine;
    struct unique_ptr<StageLightStateMachine, std::__1::default_delete<StageLightStateMachine> > { 
        struct __compressed_pair<StageLightStateMachine *, std::__1::default_delete<StageLightStateMachine> > { 
            struct StageLightStateMachine {} *__value_; 
        } __ptr_; 
    }  _stageLightStateMachine;
    struct TransitionData { 
        bool _inTransition; 
    }  _transitionData;
    struct __CVBuffer { } * _untransformedCanonicalDisparityPixelBuffer;
    VideoMattingMetal * _vmAccelerator;
    struct DynamicMetaParams { 
        float mattingCoeffUpdateRate; 
        float mattingCoeffUpdateRateFast; 
        float mattingCoeffColorStd; 
        float mattingCoeffColorStdFast; 
    }  _vmDynamicMetaParams;
    struct VideoMattingDynamicParams { 
        float updateRate; 
        float sdofDeltaCanonicalDisparity; 
        float alphaCoeffFilterColorStd; 
        float alphaGuidedFilterEps; 
        float alphaGammaExponent; 
        float focusCanonicalDisparity; 
        float backgroundCanonicalDisparity; 
        float thresholdHardness; 
        struct array<float, 3> { 
            float __elems_[3]; 
        } gravity; 
        float alphaMatteDeltaCanonicalDisparity; 
    }  _vmDynamicParams;
    struct VideoPostprocessingParams { 
        bool useFaceAsFocus; 
        float faceSizeRatioInFocus; 
        bool fillLargeHolesWithBackground; 
        float disparityIntervalInHoleSearch; 
        float backgroundFillMarginFromValidDisparity_px; 
        bool useTemporalRejection; 
    }  _vmPostprocessingParams;
    struct VideoMattingStaticParams { 
        unsigned int colorWidth; 
        unsigned int colorHeight; 
        unsigned int shiftWidth; 
        unsigned int shiftHeight; 
        unsigned int alphaWidth; 
        unsigned int alphaHeight; 
        int guidedFilterWidth; 
        int guidedFilterHeight; 
        unsigned int kernelSize; 
        float referenceShift; 
        float guidedFilterUnconfidentWeight; 
        float guidedFilterMinDistToDeweight; 
        float alphaMaxLaplacian; 
        float alphaContrastExponent; 
        float shiftFilterColorStd; 
        float shiftFilterUpdateRate; 
        float minimumConfidenceToKeepDisparity; 
        float maximumSimilarityToKeepDisparity; 
        float maxShiftFillingInconsistency; 
        float maxShiftFillingDistFromFg; 
        unsigned int maxDistToPushShiftEdgesFwd; 
        unsigned int maxDistToPushShiftEdgesRev; 
        int shiftPushingBgToFgShiftDifference; 
        float foregroundMaskDilationRadius; 
        float lowResolutionMatteDownsamplingScale; 
    }  _vmStaticParams;
    VideoRelightingMetal * _vrAccelerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) <CVAVideoPipelineProperties> *videoPipelineProperties;

+ (void)drawCanonicalDisparity:(struct __CVBuffer { }*)arg1 onColor:(struct __CVBuffer { }*)arg2 focusMachineState:(int)arg3 offsetX:(unsigned long long)arg4 offsetY:(unsigned long long)arg5;
+ (int)pixelBufferPoolCreateWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 pool:(struct __CVPixelBufferPool {}**)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (int)extractMatteWithRequest:(id)arg1;
- (int)extractMatteWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2 mattingCompletionHandler:(id /* block */)arg3;
- (id)initWithProperties:(id)arg1 error:(id*)arg2;
- (id)internal_extractMatteWithRequest:(id)arg1 disparityPostprocessingResult:(id)arg2 usePostprocessedDisparity:(bool)arg3 dilateForegroundMask:(bool)arg4 gravity:(struct CVAVector { double x1; double x2; double x3; })arg5 transitionData:(const struct TransitionData { bool x1; }*)arg6 mattingCompletionHandler:(id /* block */)arg7 isFinalStage:(bool)arg8 status:(int*)arg9;
- (int)internal_fixFocusPositionWithDisparityPostprocessingRequest:(id)arg1;
- (id)internal_postprocessDisparityWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2 isFinalStage:(bool)arg3 status:(int*)arg4;
- (void)internal_relightWithRequest:(id)arg1 intermediateSourceBuffer:(struct __CVBuffer { }*)arg2 faceKitProcessOutput:(id)arg3 mattingResult:(id)arg4 singleCubeData:(id)arg5 transitionData:(const struct RelightingTransitionData { float x1; float x2; float x3; float x4; float x5; int x6; }*)arg6 portraitCompletionHandler:(id /* block */)arg7 timestamp:(long long)arg8 status:(int*)arg9;
- (void)internal_renderStageLightWithRequest:(id)arg1 mattingResult:(id)arg2 portraitCompletionHandler:(id /* block */)arg3 status:(int*)arg4;
- (void)internal_renderWithRequest:(id)arg1 dstBuffer:(struct __CVBuffer { }*)arg2 mattingResult:(id)arg3 portraitCompletionHandler:(id /* block */)arg4 status:(int*)arg5 timestamp:(long long)arg6;
- (int)postprocessDisparityWithRequest:(id)arg1;
- (int)postprocessDisparityWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2;
- (int)renderSingleEffectWithRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg2 error:(id*)arg3 disparityPostprocessingCompletionHandler:(id /* block */)arg4 mattingCompletionHandler:(id /* block */)arg5 portraitCompletionHandler:(id /* block */)arg6 requestFrom:(id)arg7 requestTo:(id)arg8;
- (int)renderWithRequest:(id)arg1;
- (int)renderWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2 mattingCompletionHandler:(id /* block */)arg3 portraitCompletionHandler:(id /* block */)arg4;
- (int)renderWithRequest:(id)arg1 requestTo:(id)arg2 mixValue:(float)arg3 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg4 error:(id*)arg5 disparityPostprocessingCompletionHandler:(id /* block */)arg6 mattingCompletionHandler:(id /* block */)arg7 portraitCompletionHandler:(id /* block */)arg8;
- (void)setVideoPipelineProperties:(id)arg1;
- (bool)validateDisparityPostprocessingRequest:(id)arg1 error:(id*)arg2;
- (bool)validateMattingRequest:(id)arg1 error:(id*)arg2;
- (bool)validatePortraitRequest:(id)arg1 error:(id*)arg2;
- (bool)validateSegmentationPixelBuffer:(struct __CVBuffer { }*)arg1 matchFormat:(unsigned int)arg2 error:(id*)arg3;
- (id)videoPipelineProperties;

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