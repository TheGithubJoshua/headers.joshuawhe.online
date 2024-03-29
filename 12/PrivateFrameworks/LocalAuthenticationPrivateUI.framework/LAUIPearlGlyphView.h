<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>LAUIPearlGlyphView.h</title>
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

/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LAUIPearlGlyphView.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI (1)
 */

@interface LAUIPearlGlyphView : UIView <MTKViewDelegate> {
    bool  _animating;
    struct global_state { 
        float accumulator_growth; 
        float accumulator_persistence; 
        float accumulator_luminance_alpha_factor; 
        float blur_scale; 
        float k; 
        float epsilon; 
    }  _blurredRenderState;
    struct CGSize { 
        double width; 
        double height; 
    }  _boundsSize;
    struct double4x4 { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraTransform;
    bool  _changingState;
    LAUICheckmarkLayer * _checkmarkLayer;
    struct CGColorSpace { } * _colorSpace;
    struct vector<void (^)(bool), std::__1::allocator<void (^)(bool)> >="__begin_"^@?"__end_"^@?"__end_cap_"{__compressed_pair<void (^__strong *)(bool), std::__1::allocator<void (^)(bool)> >="__value_"^@? {}  _completionHandlers;
    UIView * _containerView;
    CALayer * _contentLayer;
    CAShapeLayer * _contentLayerMask;
    bool  _contentLayerNeedsMaskUpdate;
    unsigned long long  _cornerID;
    struct unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> > > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> > > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, std::__1::hash<unsigned long>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 6> >, std::__1::equal_to<unsigned long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _cornerStates;
    void _defaultColor;
    <LAUIPearlGlyphViewDelegate> * _delegate;
    bool  _delegateRespondsToWillRender;
    struct CGSize { 
        double width; 
        double height; 
    }  _drawableSize;
    struct set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { 
        struct __tree<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::less<unsigned long> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _duplicateCornerIdentifiers;
    unsigned long long  _externalAnimationCount;
    unsigned long long  _eyeID;
    struct unordered_map<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > >, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > > > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, std::__1::hash<unsigned long>, true>, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, std::__1::equal_to<unsigned long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > > > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, std::__1::hash<unsigned long>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long, std::__1::__hash_value_type<unsigned long, std::__1::unordered_map<unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3>, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::array<LAUI_uniform_cubic_b_spline_renderer::spline_instance_state, 3> > > > >, std::__1::equal_to<unsigned long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _faceStates;
    bool  _feedbackEnabled;
    void _finishedColor;
    bool  _finishedColorOverridden;
    bool  _hideFace;
    void _idleColor;
    bool  _inWindow;
    double  _lastUpdateTime;
    double  _maximumFramerate;
    CAMetalLayer * _metalLayer;
    MTKView * _metalView;
    bool  _modelDirty;
    unsigned long long  _mouthID;
    struct global_state { 
        float accumulator_growth; 
        float accumulator_persistence; 
        float accumulator_luminance_alpha_factor; 
        float blur_scale; 
        float k; 
        float epsilon; 
    }  _normalRenderState;
    unsigned long long  _noseID;
    void _oscillatingColor;
    double  _overdrawRatio;
    bool  _panning;
    bool  _paused;
    long long  _priorState;
    void _processingColor;
    bool  _reduceBlur;
    LAUICubicBSplineRenderer * _renderer;
    struct map<unsigned long, std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> >, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > > > > { 
        struct __tree<std::__1::__value_type<unsigned long, std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, std::__1::set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > >, std::__1::less<unsigned long>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _rendererIdentifiers;
    bool  _rendererPaused;
    void _ringPoint;
    double  _scale;
    LAUIPearlGlyphViewStaticResources * _sharedResources;
    long long  _state;
    bool  _stateChangeAnimated;
    unsigned long long  _stateChangeCounter;
    long long  _style;
    void _successColor;
}

@property (nonatomic, readonly) CALayer *contentLayer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LAUIPearlGlyphViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool feedbackEnabled;
@property (nonatomic, readonly) UIColor *finishedColor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hideFace;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } modelTransform;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (getter=isWireframeEnabled, nonatomic) bool wireframeEnabled;

+ (id)sharedStaticResources;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_applyBlurRadius;
- (void)_applyCheckmarkColor;
- (void)_applyStateAnimated:(bool)arg1;
- (void)_applyStyle;
- (void)_createStates;
- (void)_executeCompletionHandlers:(bool)arg1;
- (void)_extractColorVectorFromColor:(id)arg1;
- (void)_updateReduceBlurState;
- (void)_updateRendererPaused:(bool)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)beginExternalAnimation;
- (id)contentLayer;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)drawInMTKView:(id)arg1;
- (void)endExternalAnimation;
- (bool)feedbackEnabled;
- (id)finishedColor;
- (bool)hideFace;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (bool)isPaused;
- (bool)isWireframeEnabled;
- (void)layoutSubviews;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })modelTransform;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize { double x1; double x2; })arg2;
- (void)purgeBuffers;
- (void)reduceMotionDidChange:(id)arg1;
- (void)reduceTransparencyDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackEnabled:(bool)arg1;
- (void)setFinishedColor:(id)arg1 animated:(bool)arg2;
- (void)setHideFace:(bool)arg1 animated:(bool)arg2;
- (void)setModelTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setPaused:(bool)arg1;
- (void)setState:(long long)arg1 animated:(bool)arg2;
- (void)setState:(long long)arg1 animated:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)setStyle:(long long)arg1 animated:(bool)arg2;
- (void)setWireframeEnabled:(bool)arg1;
- (long long)state;
- (long long)style;

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
