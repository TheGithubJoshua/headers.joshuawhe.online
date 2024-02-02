<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SUICFlamesView.h</title>
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

/PrivateFrameworks/SiriUICore.framework/SUICFlamesView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore (1)
 */

@interface SUICFlamesView : UIView {
    bool  _accelerateTransitions;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _activeFrame;
    float  _auraMaxSubdivisionLevel;
    float  _auraMinSubdivisionLevel;
    int  _auraProgramHandle;
    unsigned int  _auraVertexCircles;
    long long  _currentContextCount;
    FlameGroup * _currentFlameGroup;
    <SUICFlamesViewDelegate> * _delegate;
    double  _dictationBlueColor;
    UIColor * _dictationColor;
    double  _dictationGreenColor;
    double  _dictationRedColor;
    float  _dictationUnitSize;
    CADisplayLink * _displayLink;
    EAGLContext * _eaglContext;
    unsigned int  _elementArrayHandle;
    int  _fShadID;
    int  _fidelity;
    NSMutableArray * _flameGroups;
    int  _flameProgramHandle;
    double  _frameRateScalingFactor;
    unsigned int  _framebufferHandle;
    bool  _freezesAura;
    bool  _hasCustomActiveFrame;
    double  _horizontalScaleFactor;
    bool  _isInitialized;
    SUICAudioLevelSmoother * _levelSmoother;
    float  _maxSubdivisionLevel;
    unsigned int  _maxVertexCircles;
    int  _mode;
    unsigned int  _numAuraIndices;
    unsigned int  _numAuraIndicesCulled;
    unsigned int  _numVertices;
    unsigned int  _numWaveIndices;
    UIImage * _overlayImage;
    UIImageView * _overlayImageView;
    bool  _paused;
    EAGLContext * _previousContext;
    bool  _reduceFrameRate;
    bool  _reduceMotionEnabled;
    bool  _reduceThinkingFramerate;
    bool  _renderInBackground;
    unsigned int  _renderbufferHandle;
    NSMutableSet * _renderingDisabledReasons;
    UIScreen * _screen;
    bool  _shadersAreCompiled;
    bool  _showAura;
    double  _startTime;
    int  _state;
    bool  _transitionFinished;
    int  _vShadID;
    unsigned int  _vertexArrayObjectHandle;
    unsigned int  _vertexBufferHandle;
    int  _viewHeight;
    int  _viewWidth;
}

@property (nonatomic) bool accelerateTransitions;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } activeFrame;
@property (nonatomic) <SUICFlamesViewDelegate> *delegate;
@property (nonatomic, retain) UIColor *dictationColor;
@property (nonatomic) bool freezesAura;
@property (nonatomic) double horizontalScaleFactor;
@property (nonatomic, readonly) bool isRenderingEnabled;
@property (nonatomic) int mode;
@property (nonatomic, retain) UIImage *overlayImage;
@property (nonatomic) bool paused;
@property (nonatomic) bool reduceFrameRate;
@property (nonatomic) bool reduceThinkingFramerate;
@property (nonatomic) bool renderInBackground;
@property (nonatomic) bool showAura;
@property (nonatomic) int state;

+ (id)_indexCache;
+ (bool)_supportsAdaptiveFramerate;
+ (Class)layerClass;
+ (void)prewarmShadersForScreen:(id)arg1 activeFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fidelity:(int)arg3;
+ (void)prewarmShadersForScreen:(id)arg1 initialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 activeFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 fidelity:(int)arg4 prewarmInBackground:(bool)arg5;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 fidelity:(int)arg3;
+ (void)prewarmShadersForScreen:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 fidelity:(int)arg3 prewarmInBackground:(bool)arg4;
+ (void)setIndexCacheSize:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_cleanupGL;
- (double)_currentDisplayScale;
- (float)_currentMicPowerLevel;
- (bool)_deviceNeeds2xFlamesWithCurrentScale:(double)arg1;
- (void)_didFinishTransition;
- (int)_generateIndicesForNumCircleShapes:(int)arg1 withMaxSubdivisionLevel:(float)arg2 startingWithNumSubdivisionLevel:(float)arg3 forIndices:(unsigned int**)arg4 atStartIndex:(int)arg5 withFill:(bool)arg6 withCullingForAura:(bool)arg7 forVertices:(struct { }*)arg8;
- (bool)_initGLAndSetupDisplayLink:(bool)arg1;
- (bool)_isOriginatingProcessInBackground;
- (unsigned int)_numVerticesPerCircle;
- (void)_predeterminedVertexPositionForAuraWithPolarVertex;
- (void)_prewarmShaders;
- (void)_reduceMotionStatusChanged:(id)arg1;
- (bool)_resizeFromLayer:(id)arg1;
- (void)_restoreCurrentContext;
- (bool)_setCurrentContext;
- (void)_setPreferredFramesPerSecond;
- (void)_setValuesForFidelity:(int)arg1;
- (void)_setupDisplayLink;
- (bool)_setupFramebuffer;
- (bool)_setupShaders;
- (bool)_setupVertexBuffer;
- (void)_tearDownDisplayLink;
- (void)_updateCurveLayer:(id)arg1;
- (void)_updateDisplayLinkPausedState;
- (void)_updateOrthoProjection;
- (bool)accelerateTransitions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })activeFrame;
- (void)dealloc;
- (id)delegate;
- (id)dictationColor;
- (void)didMoveToSuperview;
- (void)fadeOutCurrentAura;
- (bool)freezesAura;
- (double)horizontalScaleFactor;
- (bool)inDictationMode;
- (bool)inSiriMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 screen:(id)arg2 fidelity:(int)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 screenScale:(double)arg2 fidelity:(int)arg3;
- (bool)isRenderingEnabled;
- (void)layoutSubviews;
- (int)mode;
- (id)overlayImage;
- (bool)paused;
- (void)prewarmShadersForCurrentMode;
- (bool)reduceFrameRate;
- (bool)reduceThinkingFramerate;
- (bool)renderInBackground;
- (void)resetAndReinitializeGL:(bool)arg1;
- (void)setAccelerateTransitions:(bool)arg1;
- (void)setActiveFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDictationColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFreezesAura:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHorizontalScaleFactor:(double)arg1;
- (void)setMode:(int)arg1;
- (void)setOverlayImage:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setReduceFrameRate:(bool)arg1;
- (void)setReduceThinkingFramerate:(bool)arg1;
- (void)setRenderInBackground:(bool)arg1;
- (void)setRenderingEnabled:(bool)arg1 forReason:(id)arg2;
- (void)setShowAura:(bool)arg1;
- (void)setState:(int)arg1;
- (bool)showAura;
- (int)state;
- (void)stopRenderingAndCleanupGL;
- (void)traitCollectionDidChange:(id)arg1;

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