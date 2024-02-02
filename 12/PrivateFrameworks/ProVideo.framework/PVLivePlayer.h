<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PVLivePlayer.h</title>
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

/PrivateFrameworks/ProVideo.framework/PVLivePlayer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo (398.0.87)
 */

@interface PVLivePlayer : NSObject {
    unsigned int  _activeRenderLinkJobCount;
    bool  _bypassRenderLink;
    _Atomic unsigned int  _frameCount;
    double  _lastCompletedHostTime;
    struct unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock> > { 
        struct __compressed_pair<PVGCDLock *, std::__1::default_delete<PVGCDLock> > { 
            struct PVGCDLock {} *__value_; 
        } __ptr_; 
    }  _lock;
    bool  _lowerGCDPriority;
    bool  _lowerGPUPriority;
    NSString * _name;
    _Atomic unsigned int  _parentCode;
    struct unique_ptr<PVPerfStats, std::__1::default_delete<PVPerfStats> > { 
        struct __compressed_pair<PVPerfStats *, std::__1::default_delete<PVPerfStats> > { 
            struct PVPerfStats {} *__value_; 
        } __ptr_; 
    }  _perfStats;
    struct unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock> > { 
        struct __compressed_pair<PVGCDLock *, std::__1::default_delete<PVGCDLock> > { 
            struct PVGCDLock {} *__value_; 
        } __ptr_; 
    }  _perfStatsLock;
    struct HGRef<HGRenderQueue> { 
        struct HGRenderQueue {} *m_Obj; 
    }  _playerQueue;
    unsigned int  _playerQueueUnitCount;
    _Atomic int  _playerStatus;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _previousSignalTime;
    bool  _previousSignalTimeValid;
    PVLivePlayer * _primaryPlayer;
    _Atomic unsigned int  _queueSize;
    PVLivePlayerRenderLink * _renderLink;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _renderTime;
    PVRenderer * _renderer;
    struct map<unsigned int, id<PVLivePlayerSource>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, id<PVLivePlayerSource> > > > { 
        struct __tree<std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, id<PVLivePlayerSource> > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, id<PVLivePlayerSource> >, std::__1::less<unsigned int>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _sourceMap;
    struct unique_ptr<PerfTimer, std::__1::default_delete<PerfTimer> > { 
        struct __compressed_pair<PerfTimer *, std::__1::default_delete<PerfTimer> > { 
            struct PerfTimer {} *__value_; 
        } __ptr_; 
    }  _statLogTimer;
    PVLivePlayerThermalThrottlingPolicy * _thermalThrottlingPolicy;
    PVTaskTokenPool * _tokenPool;
    bool  _trackStats;
    <PVLivePlayerDelegate> * _weakDelegate;
}

@property (nonatomic) bool bypassRenderLink;
@property (nonatomic) bool lowerGCDPriority;
@property (nonatomic) bool lowerGPUPriority;
@property (nonatomic) unsigned int queueSize;
@property (nonatomic, retain) PVLivePlayerRenderLink *renderLink;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } renderTime;
@property (nonatomic, readonly) int status;
@property (nonatomic, retain) PVLivePlayerThermalThrottlingPolicy *thermalThrottlingPolicy;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_dropFrameForFullQueue;
- (bool)_dropFrameForSaturatedPrimaryPlayer;
- (void)_notifyDelegateOfDroppedFrame:(int)arg1;
- (void)_renderLinkSignal:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_statsLogCheck;
- (unsigned int)_throttledQueueSize_NoLock;
- (void)addStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg1;
- (bool)bypassRenderLink;
- (void)bypassRenderLink:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob {} *x1; })arg1;
- (void)dealloc;
- (unsigned long long)getPackedFamilyCode:(unsigned int)arg1;
- (id)getTaskToken;
- (void)handleRenderLinkJob:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob {} *x1; })arg1;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;
- (bool)lowerGCDPriority;
- (bool)lowerGPUPriority;
- (id)playerSources;
- (void)printAndClearStats:(bool)arg1;
- (unsigned int)queueSize;
- (id)readSourceFrameSets:(double)arg1;
- (id)renderLink;
- (void)renderLinkJobFinished:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob {} *x1; })arg1;
- (void)renderLinkSignal:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)renderLinkSignalDropped;
- (void)renderLinkSignalSkipped;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })renderTime;
- (void)resetRenderTime;
- (void)setBypassRenderLink:(bool)arg1;
- (void)setLowerGCDPriority:(bool)arg1;
- (void)setLowerGPUPriority:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setParentCode:(unsigned int)arg1;
- (void)setPrimaryPlayer:(id)arg1;
- (void)setQueueSize:(unsigned int)arg1;
- (void)setRenderLink:(id)arg1;
- (void)setSource:(id)arg1 inputID:(unsigned int)arg2;
- (void)setStatus:(int)arg1;
- (void)setThermalThrottlingPolicy:(id)arg1;
- (void)shutdown;
- (void)start;
- (int)status;
- (void)stop;
- (bool)testOutOfOrderCompletion:(struct HGRef<PVRenderLinkJob> { struct PVRenderLinkJob {} *x1; })arg1;
- (id)thermalThrottlingPolicy;
- (bool)throttledBypassRenderLink;
- (void)trackStats:(bool)arg1;
- (void)updateRenderQueueUnits;

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