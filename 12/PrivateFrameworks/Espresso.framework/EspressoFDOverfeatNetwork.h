<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EspressoFDOverfeatNetwork.h</title>
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

/PrivateFrameworks/Espresso.framework/EspressoFDOverfeatNetwork.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso (120)
 */

@interface EspressoFDOverfeatNetwork : NSObject {
    NSString * _basename;
    struct shared_ptr<Espresso::abstract_context> { 
        struct abstract_context {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _context_cpu;
    struct shared_ptr<Espresso::abstract_context> { 
        struct abstract_context {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _context_metal;
    int  _cpin;
    NSMutableDictionary * _errorForLayers;
    int  _forceMaxNScales;
    float  _maxScale;
    int  _mode;
    int  _scaleConfig;
    int  _scalingMode;
    bool  _useGPUScaler;
    NSString * _weights;
    struct vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > { 
        struct shared_ptr<Espresso::blob<float, 3> > {} *__begin_; 
        struct shared_ptr<Espresso::blob<float, 3> > {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3> > *, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > { 
            struct shared_ptr<Espresso::blob<float, 3> > {} *__value_; 
        } __end_cap_; 
    }  boxBlobs;
    struct CGColorSpace { } * colorSpace;
    NSObject<OS_dispatch_queue> * cpu_queue_0;
    NSObject<OS_dispatch_semaphore> * cpu_semaphore;
    struct pair<unsigned long long, unsigned long long> { 
        unsigned long long first; 
        unsigned long long second; 
    }  cropDims;
    struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > { 
        struct shared_ptr<Espresso::net> {} *__begin_; 
        struct shared_ptr<Espresso::net> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > { 
            struct shared_ptr<Espresso::net> {} *__value_; 
        } __end_cap_; 
    }  ecpu_nets;
    struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > { 
        struct pair<unsigned long long, unsigned long long> {} *__begin_; 
        struct pair<unsigned long long, unsigned long long> {} *__end_; 
        struct __compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > { 
            struct pair<unsigned long long, unsigned long long> {} *__value_; 
        } __end_cap_; 
    }  full_scales;
    struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > { 
        struct shared_ptr<Espresso::net> {} *__begin_; 
        struct shared_ptr<Espresso::net> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > { 
            struct shared_ptr<Espresso::net> {} *__value_; 
        } __end_cap_; 
    }  gpu_nets;
    int  n_resizers_for_batching;
    struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > { 
        struct pair<unsigned long long, unsigned long long> {} *__begin_; 
        struct pair<unsigned long long, unsigned long long> {} *__end_; 
        struct __compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > { 
            struct pair<unsigned long long, unsigned long long> {} *__value_; 
        } __end_cap_; 
    }  net_scales;
    struct vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > { 
        struct shared_ptr<Espresso::blob<float, 3> > {} *__begin_; 
        struct shared_ptr<Espresso::blob<float, 3> > {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3> > *, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > { 
            struct shared_ptr<Espresso::blob<float, 3> > {} *__value_; 
        } __end_cap_; 
    }  probBlobs;
    struct vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > > { 
        struct shared_ptr<Espresso::fast_pyramid_resizer> {} *__begin_; 
        struct shared_ptr<Espresso::fast_pyramid_resizer> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> *, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > > { 
            struct shared_ptr<Espresso::fast_pyramid_resizer> {} *__value_; 
        } __end_cap_; 
    }  resizers_for_batching;
    struct vector<int, std::__1::allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::__1::allocator<int> > { 
            int *__value_; 
        } __end_cap_; 
    }  retile_n_outputs_v;
    int  retile_stride;
    int  retile_tile_sz;
    struct vector<double, std::__1::allocator<double> > { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::__1::allocator<double> > { 
            double *__value_; 
        } __end_cap_; 
    }  scalesc;
    struct net_strides_configuration { 
        int num_layer; 
        struct vector<int, std::__1::allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::__1::allocator<int> > { 
                int *__value_; 
            } __end_cap_; 
        } kernel_size; 
        struct vector<int, std::__1::allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::__1::allocator<int> > { 
                int *__value_; 
            } __end_cap_; 
        } stride; 
        struct vector<int, std::__1::allocator<int> > { 
            int *__begin_; 
            int *__end_; 
            struct __compressed_pair<int *, std::__1::allocator<int> > { 
                int *__value_; 
            } __end_cap_; 
        } pad; 
    }  strideConf;
    int  tile_h_1;
    int  tile_w_1;
}

@property (nonatomic, retain) NSString *basename;
@property (nonatomic) struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; } context_cpu;
@property (nonatomic) struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; } context_metal;
@property (nonatomic) int cpin;
@property (nonatomic) int forceMaxNScales;
@property (nonatomic) float maxScale;
@property (nonatomic) int mode;
@property (nonatomic) int scaleConfig;
@property (nonatomic) int scalingMode;
@property (nonatomic) bool useGPUScaler;
@property (nonatomic, retain) NSString *weights;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)autoResizeForAspectRatio:(float)arg1 useLowPriorityMode:(bool)arg2 gpuPriority:(int)arg3;
- (void)autoSetupNetBaseName:(id)arg1 weights:(id)arg2 scaleConfig:(int)arg3 setupMode:(int)arg4 computePath:(int)arg5 autoAspectRatio:(float)arg6 forceReset:(bool)arg7 useLowPriorityMode:(bool)arg8 gpuPriority:(int)arg9;
- (id)basename;
- (struct shared_ptr<Espresso::blob<float, 3> > { struct blob<float, 3> {} *x1; struct __shared_weak_count {} *x2; })boxBlobForScale:(int)arg1;
- (struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; })context_cpu;
- (struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; })context_metal;
- (int)cpin;
- (struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })cpu_net:(int)arg1;
- (void)dealloc;
- (int)default_retile_outputs;
- (id)errorForLayers;
- (int)forceMaxNScales;
- (void)forward_cpu_network_at_index:(int)arg1 pyr:(const struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; }*)arg2;
- (void)generatePyramid:(const struct shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2> >=^{blob<unsigned char __attribute__((ext_vector_type(4))), 2> {}*)arg1 tex:(id)arg2;
- (int)getNumScales;
- (double)getScale:(int)arg1;
- (struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })gpu_net:(int)arg1;
- (id)init;
- (float)maxScale;
- (int)mode;
- (bool)needRetiling:(int)arg1;
- (struct shared_ptr<Espresso::blob<float, 3> > { struct blob<float, 3> {} *x1; struct __shared_weak_count {} *x2; })probBlobForScale:(int)arg1;
- (void)processBlob:(const struct shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2> >=^{blob<unsigned char __attribute__((ext_vector_type(4))), 2> {}*)arg1 tex:(id)arg2;
- (void)processBlobNoRotation:(const struct shared_ptr<Espresso::blob<unsigned char __attribute__((ext_vector_type(4))), 2> >=^{blob<unsigned char __attribute__((ext_vector_type(4))), 2> {}*)arg1 tex:(id)arg2 doBGRA2RGBA:(bool)arg3;
- (void)processPyramid:(struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)processPyramid:(struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; })arg1 gpu_resizer:(id)arg2;
- (void)reset;
- (struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; })resizerAtIndex:(int)arg1;
- (int)resizerCount;
- (void)retile_and_forward_espresso_gpu_network_at_index:(int)arg1 net:(const struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; }*)arg2 pyr:(const struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; }*)arg3;
- (void)retile_and_forward_espresso_network_at_index:(int)arg1 net:(const struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; }*)arg2 pyr:(const struct shared_ptr<Espresso::fast_pyramid_resizer> { struct fast_pyramid_resizer {} *x1; struct __shared_weak_count {} *x2; }*)arg3;
- (void)retryLoadingCaffeNet:(struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; }*)arg1 name:(id)arg2 weights:(id)arg3 context:(struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; })arg4 cp:(int)arg5;
- (int)scaleConfig;
- (int)scalingMode;
- (void)setBasename:(id)arg1;
- (void)setContext_cpu:(struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setContext_metal:(struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setCpin:(int)arg1;
- (void)setForceMaxNScales:(int)arg1;
- (void)setMaxScale:(float)arg1;
- (void)setMode:(int)arg1;
- (void)setScaleConfig:(int)arg1;
- (void)setScalingMode:(int)arg1;
- (void)setUseGPUScaler:(bool)arg1;
- (void)setWeights:(id)arg1;
- (void)setup_retile;
- (void)storeDataForPruning:(struct shared_ptr<Espresso::blob<float, 4> > { struct blob<float, 4> {} *x1; struct __shared_weak_count {} *x2; })arg1 prob:(float)arg2;
- (struct net_strides_configuration { int x1; struct vector<int, std::__1::allocator<int> > { int *x_2_1_1; int *x_2_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_2_1_3; } x2; struct vector<int, std::__1::allocator<int> > { int *x_3_1_1; int *x_3_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_3_1_3; } x3; struct vector<int, std::__1::allocator<int> > { int *x_4_1_1; int *x_4_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_4_1_3; } x4; })strideConfiguration;
- (bool)useGPUScaler;
- (id)weights;
- (void)wipeLayersMemory;

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