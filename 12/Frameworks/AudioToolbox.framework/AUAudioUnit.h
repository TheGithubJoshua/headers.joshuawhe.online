<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AUAudioUnit.h</title>
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

/Frameworks/AudioToolbox.framework/AUAudioUnit.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox (1.8)
 */

@interface AUAudioUnit : NSObject {
    long long  _MIDIOutputBufferSizeHint;
    id /* block */  _MIDIOutputEventBlock;
    bool  _allParameterValues;
    NSString * _audioUnitShortName;
    struct UIViewController { Class x1; } * _cachedViewController;
    bool  _canProcessInPlace;
    NSArray * _channelMap;
    struct OpaqueAudioComponent { } * _component;
    struct AudioComponentDescription { 
        unsigned int componentType; 
        unsigned int componentSubType; 
        unsigned int componentManufacturer; 
        unsigned int componentFlags; 
        unsigned int componentFlagsMask; 
    }  _componentDescription;
    NSString * _componentName;
    unsigned int  _componentVersion;
    NSString * _contextName;
    AUAudioUnitPreset * _currentPreset;
    NSArray * _factoryPresets;
    double  _latency;
    unsigned int  _maximumFramesToRender;
    id /* block */  _musicalContextBlock;
    id /* block */  _profileChangedBlock;
    struct RealtimeState { 
        struct CAMutex { 
            int (**_vptr$CAMutex)(); 
            char *mName; 
            struct _opaque_pthread_t {} *mOwner; 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } mMutex; 
        } mMutex; 
        struct RenderObserverList { 
            struct TThreadSafeList<RenderObserver> { 
                struct NodeStack { 
                    struct Node {} *mHead; 
                } mActiveList; 
                struct NodeStack { 
                    struct Node {} *mHead; 
                } mPendingList; 
                struct NodeStack { 
                    struct Node {} *mHead; 
                } mFreeList; 
            } mObservers; 
            bool mTouched; 
        } renderObserverList; 
        struct AUEventSchedule { 
            struct AURenderEventAllocator {} *mAllocator; 
            struct TAtomicStack<AURenderEventStruct> { 
                struct AURenderEventStruct {} *mHead; 
            } mAddedEventStack; 
            union { _Atomic /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_0_2_1; byref void*x_0_2_2; in double x_0_2_3; void*x_0_2_4; const void*x_0_2_5; void x_0_2_6; void*x_0_2_7; in void*x_0_2_8; } *mScheduleHead; 
            AUAudioUnit *mOwningAU; 
        } eventSchedule; 
    }  _realtimeState;
    long long  _renderQuality;
    bool  _renderResourcesAllocated;
    bool  _renderingOffline;
    bool  _shouldBypassEffect;
    bool  _supportsMPE;
    double  _tailTime;
    id /* block */  _transportStateBlock;
    long long  _virtualMIDICableCount;
}

@property (nonatomic) long long MIDIOutputBufferSizeHint;
@property (nonatomic, copy) id /* block */ MIDIOutputEventBlock;
@property (nonatomic, readonly, copy) NSArray *MIDIOutputNames;
@property (nonatomic, readonly) bool allParameterValues;
@property (nonatomic, readonly, copy) NSString *audioUnitName;
@property (nonatomic, readonly, copy) NSString *audioUnitShortName;
@property (nonatomic, readonly) bool canProcessInPlace;
@property (nonatomic, readonly, copy) NSArray *channelCapabilities;
@property (nonatomic, copy) NSArray *channelMap;
@property (nonatomic, readonly) struct OpaqueAudioComponent { }*component;
@property (nonatomic, readonly) struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } componentDescription;
@property (nonatomic, readonly, copy) NSString *componentName;
@property (nonatomic, readonly) unsigned int componentVersion;
@property (nonatomic, copy) NSString *contextName;
@property (nonatomic, retain) AUAudioUnitPreset *currentPreset;
@property (nonatomic, readonly, copy) NSArray *factoryPresets;
@property (nonatomic, copy) NSDictionary *fullState;
@property (nonatomic, copy) NSDictionary *fullStateForDocument;
@property (nonatomic, readonly) AUAudioUnitBusArray *inputBusses;
@property (nonatomic, readonly) id /* block */ internalRenderBlock;
@property (nonatomic, readonly) double latency;
@property (nonatomic, readonly, copy) NSString *manufacturerName;
@property (nonatomic) unsigned int maximumFramesToRender;
@property (getter=isMusicDeviceOrEffect, nonatomic, readonly) bool musicDeviceOrEffect;
@property (nonatomic, copy) id /* block */ musicalContextBlock;
@property (nonatomic, readonly) AUAudioUnitBusArray *outputBusses;
@property (nonatomic, readonly) AUParameterTree *parameterTree;
@property (nonatomic, copy) id /* block */ profileChangedBlock;
@property (nonatomic, readonly) bool providesUserInterface;
@property (nonatomic, readonly) id /* block */ renderBlock;
@property (nonatomic) long long renderQuality;
@property (nonatomic, readonly) bool renderResourcesAllocated;
@property (getter=isRenderingOffline, nonatomic) bool renderingOffline;
@property (nonatomic, readonly) id /* block */ scheduleMIDIEventBlock;
@property (nonatomic, readonly) id /* block */ scheduleParameterBlock;
@property (nonatomic) bool shouldBypassEffect;
@property (nonatomic, readonly) bool supportsMPE;
@property (nonatomic, readonly) double tailTime;
@property (nonatomic, copy) id /* block */ transportStateBlock;
@property (nonatomic, readonly) long long virtualMIDICableCount;

+ (id)auAudioUnitForAudioUnit:(struct OpaqueAudioComponentInstance { }*)arg1;
+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
+ (id)keyPathsForValuesAffectingAllParameterValues;
+ (void)registerSubclass:(Class)arg1 asComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2 name:(id)arg3 version:(unsigned int)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)MIDIOutputBufferSizeHint;
- (id /* block */)MIDIOutputEventBlock;
- (id)MIDIOutputNames;
- (void)addRenderObserver:(int (*)arg1 userData:(void*)arg2;
- (bool)allParameterValues;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (id)audioUnitName;
- (id)audioUnitShortName;
- (struct UIViewController { Class x1; }*)cachedViewController;
- (bool)canProcessInPlace;
- (id)channelCapabilities;
- (id)channelMap;
- (struct OpaqueAudioComponent { }*)component;
- (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })componentDescription;
- (id)componentName;
- (unsigned int)componentVersion;
- (id)contextName;
- (id)currentPreset;
- (void)dealloc;
- (void)deallocateRenderResources;
- (bool)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4;
- (bool)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4;
- (struct AUEventSchedule { struct AURenderEventAllocator {} *x1; struct TAtomicStack<AURenderEventStruct> { struct AURenderEventStruct {} *x_2_1_1; } x2; union { _Atomic /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_3_1_1; byref void*x_3_1_2; in double x_3_1_3; void*x_3_1_4; const void*x_3_1_5; void x_3_1_6; void*x_3_1_7; in void*x_3_1_8; } *x3; id x4; }*)eventSchedule;
- (id)factoryPresets;
- (id)fullState;
- (id)fullStateForDocument;
- (id)init;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 error:(id*)arg2;
- (id)initWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)inputBusses;
- (id /* block */)internalRenderBlock;
- (void)invalidateAudioUnit;
- (bool)isMusicDeviceOrEffect;
- (bool)isRenderingOffline;
- (double)latency;
- (id)manufacturerName;
- (unsigned int)maximumFramesToRender;
- (id /* block */)musicalContextBlock;
- (id)outputBusses;
- (id)parameterTree;
- (id)parametersForOverviewWithCount:(long long)arg1;
- (id /* block */)profileChangedBlock;
- (id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2;
- (bool)providesUserInterface;
- (void)removeRenderObserver:(long long)arg1;
- (void)removeRenderObserver:(int (*)arg1 userData:(void*)arg2;
- (id /* block */)renderBlock;
- (long long)renderQuality;
- (bool)renderResourcesAllocated;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)reset;
- (id /* block */)scheduleMIDIEventBlock;
- (id /* block */)scheduleParameterBlock;
- (void)selectViewConfiguration:(id)arg1;
- (void)setCachedViewController:(struct UIViewController { Class x1; }*)arg1;
- (void)setChannelMap:(id)arg1;
- (void)setContextName:(id)arg1;
- (void)setCurrentPreset:(id)arg1;
- (void)setFullState:(id)arg1;
- (void)setFullStateForDocument:(id)arg1;
- (void)setMIDIOutputBufferSizeHint:(long long)arg1;
- (void)setMIDIOutputEventBlock:(id /* block */)arg1;
- (void)setMaximumFramesToRender:(unsigned int)arg1;
- (void)setMusicalContextBlock:(id /* block */)arg1;
- (void)setProfileChangedBlock:(id /* block */)arg1;
- (void)setRenderQuality:(long long)arg1;
- (void)setRenderResourcesAllocated:(bool)arg1;
- (void)setRenderingOffline:(bool)arg1;
- (void)setShouldBypassEffect:(bool)arg1;
- (void)setTransportStateBlock:(id /* block */)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (bool)shouldBypassEffect;
- (bool)shouldChangeToFormat:(id)arg1 forBus:(id)arg2;
- (id)supportedViewConfigurations:(id)arg1;
- (bool)supportsMPE;
- (double)tailTime;
- (long long)tokenByAddingRenderObserver:(id /* block */)arg1;
- (id /* block */)transportStateBlock;
- (id)valueForUndefinedKey:(id)arg1;
- (long long)virtualMIDICableCount;

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
