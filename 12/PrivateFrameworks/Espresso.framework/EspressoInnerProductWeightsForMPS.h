<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EspressoInnerProductWeightsForMPS.h</title>
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

/PrivateFrameworks/Espresso.framework/EspressoInnerProductWeightsForMPS.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso (120)
 */

@interface EspressoInnerProductWeightsForMPS : NSObject <MPSCNNConvolutionDataSource> {
    struct shared_ptr<Espresso::blob<float, 1> > { 
        struct blob<float, 1> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  biases_blob;
    unsigned int  data_type;
    struct inner_product_uniforms { 
        unsigned int nC; 
        unsigned int nB; 
        int has_biases; 
        int has_relu; 
        int has_tanh; 
        float tanh_alpha; 
        float tanh_beta; 
        int has_prelu; 
        int is_lookup; 
        int quantization_mode; 
        int add_to_output; 
        int use_raw_buffers; 
        int fused_activation_mode; 
        float fused_activation_alpha; 
        float fused_activation_beta; 
        unsigned int m; 
        unsigned int k; 
        unsigned int n; 
        unsigned int Abytes; 
        unsigned int Bbytes; 
        unsigned int k4; 
        unsigned int n4; 
        unsigned int n8; 
        unsigned int n8_splitk; 
        int argmax_tree_n_clusters; 
        int argmax_tree_n_clusters_keep; 
    }  params;
    struct shared_ptr<Espresso::blob<float, 1> > { 
        struct blob<float, 1> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  quantization_lut;
    struct shared_ptr<Espresso::blob<float __attribute__((ext_vector_type(2))), 1> >="__ptr_"^{blob<float __attribute__((ext_vector_type(2))), 1> {}  quantization_ranges;
    struct shared_ptr<Espresso::blob<unsigned char, 2> > { 
        struct blob<unsigned char, 2> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  quantized_weights_blob;
    struct shared_ptr<Espresso::blob<float, 2> > { 
        struct blob<float, 2> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  weights_blob;
    struct shared_ptr<Espresso::blob<unsigned short, 2> > { 
        struct blob<unsigned short, 2> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  weights_f16_blob;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float*)biasTerms;
- (unsigned int)dataType;
- (id)descriptor;
- (id)initWithParams:(struct inner_product_uniforms { unsigned int x1; unsigned int x2; int x3; int x4; int x5; float x6; float x7; int x8; int x9; int x10; int x11; int x12; int x13; float x14; float x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; int x25; int x26; })arg1;
- (id)label;
- (bool)load;
- (float*)lookupTableForUInt8Kernel;
- (void)purge;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)rangesForUInt8Kernel;
- (bool)ready;
- (void*)weights;

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
