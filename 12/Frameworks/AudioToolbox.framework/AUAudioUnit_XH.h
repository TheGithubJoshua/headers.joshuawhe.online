<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AUAudioUnit_XH.h</title>
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

/Frameworks/AudioToolbox.framework/AUAudioUnit_XH.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox (1.8)
 */

@interface AUAudioUnit_XH : AUAudioUnit {
    AUParameterTree * _cachedParameterTree;
    bool  _canProcess;
    bool  _canRender;
    struct OpaqueAudioComponentInstance { } * _componentInstance;
    struct unique_ptr<AUProcAndUserData, std::__1::default_delete<AUProcAndUserData> > { 
        struct __compressed_pair<AUProcAndUserData *, std::__1::default_delete<AUProcAndUserData> > { 
            struct AUProcAndUserData {} *__value_; 
        } __ptr_; 
    }  _elementCountListenerToken;
    NSExtension * _extension;
    AUAudioUnitBusArray_XH * _inputBusses;
    bool  _installedParamTreeObserver;
    AUAudioUnitBusArray_XH * _outputBusses;
    struct recursive_mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _propListenerMutex;
    struct vector<AUAudioUnit_XH_PropListener, std::__1::allocator<AUAudioUnit_XH_PropListener> > { 
        struct AUAudioUnit_XH_PropListener {} *__begin_; 
        struct AUAudioUnit_XH_PropListener {} *__end_; 
        struct __compressed_pair<AUAudioUnit_XH_PropListener *, std::__1::allocator<AUAudioUnit_XH_PropListener> > { 
            struct AUAudioUnit_XH_PropListener {} *__value_; 
        } __end_cap_; 
    }  _propListeners;
    int  _remotePID;
    bool  _removingObserverWithContext;
    struct IPCAURenderingClient { 
        int (**_vptr$IPCAURenderingClient)(); 
        NSXPCConnection *mXPCConnection; 
        bool mInitialized; 
        bool mRenderPrioritySet; 
        bool mIsOffline; 
        bool mSentWorkInterval; 
        struct IPCAUSharedMemory { 
            int (**_vptr$SharableMemoryBase)(); 
            bool mIsOwner; 
            bool mWasMapped; 
            unsigned long long mSize; 
            void *mBuffer; 
            unsigned int mPort; 
            int mFileDesc; 
            int mSerial; 
            NSObject<OS_xpc_object> *mXPCObject; 
            unsigned int mHeaderSize; 
            struct vector<IPCAUSharedMemoryBase::Element, std::__1::allocator<IPCAUSharedMemoryBase::Element> > { 
                struct Element {} *__begin_; 
                struct Element {} *__end_; 
                struct __compressed_pair<IPCAUSharedMemoryBase::Element *, std::__1::allocator<IPCAUSharedMemoryBase::Element> > { 
                    struct Element {} *__value_; 
                } __end_cap_; 
            } mElements; 
            unsigned int mMaxFrames; 
            bool mInitializing; 
            unsigned int mMIDIOutputBufferSize; 
        } mSharedMemory; 
        struct unique_ptr<SemaphoreIOMessenger_Sender, std::__1::default_delete<SemaphoreIOMessenger_Sender> > { 
            struct __compressed_pair<SemaphoreIOMessenger_Sender *, std::__1::default_delete<SemaphoreIOMessenger_Sender> > { 
                struct SemaphoreIOMessenger_Sender {} *__value_; 
            } __ptr_; 
        } mMessenger; 
        unsigned int mWorkIntervalPort; 
        double mOutputSampleRate; 
        struct CAMutex { 
            int (**_vptr$CAMutex)(); 
            char *mName; 
            struct _opaque_pthread_t {} *mOwner; 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } mMutex; 
        } mMessageBufferLock; 
        struct CAMutex { 
            int (**_vptr$CAMutex)(); 
            char *mName; 
            struct _opaque_pthread_t {} *mOwner; 
            struct _opaque_pthread_mutex_t { 
                long long __sig; 
                BOOL __opaque[56]; 
            } mMutex; 
        } mConnectionLock; 
        struct HostCallbackInfo { 
            void *hostUserData; 
            int (*beatAndTempoProc)(); 
            int (*musicalTimeLocationProc)(); 
            int (*transportStateProc)(); 
            int (*transportStateProc2)(); 
        } mHostCallbackInfo; 
        id /* block */ mMusicalContextBlock; 
        id /* block */ mTransportStateBlock; 
        id /* block */ mMIDIOutputEventBlock; 
        int mMIDIOutputBufferSizeHint; 
        id /* block */ mPullInputBlock; 
        int mNumInputs; 
        int mNumOutputs; 
        unsigned int mMaximumFramesToProcess; 
        double mLastRenderSampleTime; 
    }  _renderClient;
    NSUUID * _requestIdentifier;
    AUAudioUnit_XH * _strongInstance;
    NSObject<OS_dispatch_queue> * _viewControllerRequestQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) AUAudioUnit_XH *strongInstance;
@property (nonatomic) NSXPCConnection *xpcConnection;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)instantiateWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2 instance:(struct OpaqueAudioComponentInstance { }*)arg3 options:(unsigned int)arg4 completionHandler:(id /* block */)arg5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id*)arg3;
- (id)_getValueForKey:(id)arg1;
- (id)_getValueForProperty:(id)arg1;
- (void)_refreshBusses:(unsigned int)arg1;
- (bool)_setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 error:(id*)arg3;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (bool)allocateRenderResourcesAndReturnError:(id*)arg1;
- (void)dealloc;
- (void)deallocateRenderResources;
- (void)didCrash;
- (bool)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4;
- (void)doOpen:(id)arg1 completion:(id /* block */)arg2;
- (bool)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 error:(id*)arg4;
- (id)inputBusses;
- (void)internalInitWithExtension:(id)arg1 componentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg2 instance:(struct OpaqueAudioComponentInstance { }*)arg3 completion:(id /* block */)arg4;
- (id /* block */)internalRenderBlock;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputBusses;
- (id)parameterTree;
- (id)parametersForOverviewWithCount:(long long)arg1;
- (id)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2;
- (void)propertiesChanged:(id)arg1;
- (bool)providesUserInterface;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)requestViewControllerWithCompletionHandler:(id /* block */)arg1;
- (void)reset;
- (void)selectViewConfiguration:(id)arg1;
- (void)setStrongInstance:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setXpcConnection:(id)arg1;
- (id)strongInstance;
- (id)supportedViewConfigurations:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)xpcConnection;

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
