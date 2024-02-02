<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AUPasscodeEncoder.h</title>
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

/PrivateFrameworks/AudioPasscode.framework/AUPasscodeEncoder.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode (1)
 */

@interface AUPasscodeEncoder : AUAudioUnit {
    struct map<unsigned int, apc::Any, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, apc::Any> > > { 
        struct __tree<std::__1::__value_type<unsigned int, apc::Any>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, apc::Any> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, apc::Any>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, apc::Any>, std::__1::less<unsigned int>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _apcEncoderConfig;
    id /* block */  _assetEndedAndSilencedHandler;
    long long  _assetLength;
    long long  _assetSampleCount;
    unsigned long long  _beginningTime;
    AUPasscodeCodecConfiguration * _codecConfig;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _embedPasscode;
    struct unique_ptr<EOFReachedMessage, std::__1::default_delete<EOFReachedMessage> > { 
        struct __compressed_pair<EOFReachedMessage *, std::__1::default_delete<EOFReachedMessage> > { 
            struct EOFReachedMessage {} *__value_; 
        } __ptr_; 
    }  _eofMessage;
    unsigned int  _fadeOutNumSamples;
    unsigned int  _fadeOutSampleIndex;
    float  _fadeOutTimeSeconds;
    struct BufferedInputBus { 
        AUAudioUnitBus *bus; 
        unsigned int maxFrames; 
        AVAudioPCMBuffer *pcmBuffer; 
        struct AudioBufferList {} *originalAudioBufferList; 
        struct AudioBufferList {} *mutableAudioBufferList; 
    }  _inputBus;
    AUAudioUnitBusArray * _inputBusArray;
    struct unique_ptr<APCEncoderBase, std::__1::default_delete<APCEncoderBase> > { 
        struct __compressed_pair<APCEncoderBase *, std::__1::default_delete<APCEncoderBase> > { 
            struct APCEncoderBase {} *__value_; 
        } __ptr_; 
    }  _kernel;
    unsigned long long  _loopNumber;
    unsigned long long  _numLoopsToStopAfter;
    AUAudioUnitBus * _outputBus;
    AUAudioUnitBusArray * _outputBusArray;
    bool  _outputIsSilenced;
    NSMutableDictionary * _passcodeEmbedInfo;
    NSData * _payload;
    struct unique_ptr<RealtimeMessenger, std::__1::default_delete<RealtimeMessenger> > { 
        struct __compressed_pair<RealtimeMessenger *, std::__1::default_delete<RealtimeMessenger> > { 
            struct RealtimeMessenger {} *__value_; 
        } __ptr_; 
    }  _rtMessenger;
    bool  _silenceOutputOnNextAssetEnding;
    bool  _triggerFadeOut;
}

@property (nonatomic, copy) id /* block */ assetEndedAndSilencedHandler;
@property (nonatomic) long long assetLength;
@property (nonatomic, retain) AUPasscodeCodecConfiguration *codecConfig;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) bool embedPasscode;
@property (nonatomic) float fadeOutTimeSeconds;
@property (nonatomic) unsigned long long numLoopsToStopAfter;
@property (nonatomic, retain) NSMutableDictionary *passcodeEmbedInfo;
@property (nonatomic, copy) NSData *payload;
@property (nonatomic) bool silenceOutputOnNextAssetEnding;
@property (nonatomic) bool triggerFadeOut;

+ (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })getAUDesc;
+ (void)registerAU;
+ (id)supportedEncoders;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (id /* block */)assetEndedAndSilencedHandler;
- (long long)assetLength;
- (bool)canProcessInPlace;
- (id)codecConfig;
- (void)dealloc;
- (void)deallocateRenderResources;
- (id)dispatchQueue;
- (bool)embedPasscode;
- (float)fadeOutTimeSeconds;
- (void)handleEOFReachedForAsset;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)inputBusses;
- (id /* block */)internalRenderBlock;
- (unsigned long long)numLoopsToStopAfter;
- (id)outputBusses;
- (id)passcodeEmbedInfo;
- (id)payload;
- (void)reset;
- (void)setAssetEndedAndSilencedHandler:(id /* block */)arg1;
- (void)setAssetLength:(long long)arg1;
- (void)setCodecConfig:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEmbedPasscode:(bool)arg1;
- (void)setFadeOutTimeSeconds:(float)arg1;
- (void)setNumLoopsToStopAfter:(unsigned long long)arg1;
- (void)setPasscodeEmbedInfo:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setSilenceOutputOnNextAssetEnding:(bool)arg1;
- (void)setTriggerFadeOut:(bool)arg1;
- (bool)silenceOutputOnNextAssetEnding;
- (bool)triggerFadeOut;

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