<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PVVideoCompositing.h</title>
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

/PrivateFrameworks/ProVideo.framework/PVVideoCompositing.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo (398.0.87)
 */

@interface PVVideoCompositing : NSObject <AVVideoCompositing> {
    bool  _cancelsPendingRequests;
    bool  _didEnterBackground;
    struct deque<int, std::__1::allocator<int> > { 
        struct __split_buffer<int *, std::__1::allocator<int *> > { 
            int **__first_; 
            int **__begin_; 
            int **__end_; 
            struct __compressed_pair<int **, std::__1::allocator<int *> > { 
                int **__value_; 
            } __end_cap_; 
        } __map_; 
        unsigned long long __start_; 
        struct __compressed_pair<unsigned long, std::__1::allocator<int> > { 
            unsigned long long __value_; 
        } __size_; 
    }  _dropFrameTracker;
    bool  _droppedResolution;
    PVEffectScheduler * _effectScheduler;
    unsigned int  _frameCount;
    double  _frameDuration;
    bool  _hostAppIsShuttingDown;
    struct vector<HGRef<PVRenderJob>, std::__1::allocator<HGRef<PVRenderJob> > > { 
        struct HGRef<PVRenderJob> {} *__begin_; 
        struct HGRef<PVRenderJob> {} *__end_; 
        struct __compressed_pair<HGRef<PVRenderJob> *, std::__1::allocator<HGRef<PVRenderJob> > > { 
            struct HGRef<PVRenderJob> {} *__value_; 
        } __end_cap_; 
    }  _inFlightRenderJobs;
    NSLock * _inFlightRenderJobsLock;
    bool  _inPlayback;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _inPlaybackLock;
    unsigned int  _minimumRequestCompletionTimeMS;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _notificationStateLock;
    struct PVPerfStats { double x1; int x2; struct OnceStats { double x_3_1_1; double x_3_1_2; } x3; struct vector<PVPerfStats::FrameStats, std::__1::allocator<PVPerfStats::FrameStats> > { struct FrameStats {} *x_4_1_1; struct FrameStats {} *x_4_1_2; struct __compressed_pair<PVPerfStats::FrameStats *, std::__1::allocator<PVPerfStats::FrameStats> > { struct FrameStats {} *x_3_2_1; } x_4_1_3; } x4; bool x5; struct FrameStats { unsigned int x_6_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; bool x_6_1_6; bool x_6_1_7; unsigned int x_6_1_8; struct vector<double, std::__1::allocator<double> > { double *x_9_2_1; double *x_9_2_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_3_1; } x_9_2_3; } x_6_1_9; } x6; struct FrameStats { unsigned int x_7_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_7_1_2; double x_7_1_3; double x_7_1_4; double x_7_1_5; bool x_7_1_6; bool x_7_1_7; unsigned int x_7_1_8; struct vector<double, std::__1::allocator<double> > { double *x_9_2_1; double *x_9_2_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_3_1; } x_9_2_3; } x_7_1_9; } x7; } * _perfStats;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _perfStatsLock;
    NSDictionary * _pixelBufferPoolAttributes;
    id /* block */  _refreshCompletionBlock;
    NSObject<OS_dispatch_queue> * _refreshCompletionCallbackQueue;
    struct HGRef<PVRenderManager> { 
        struct PVRenderManager {} *m_Obj; 
    }  _renderManager;
    NSDictionary * _sourceAttributes;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _throttleLock;
    unsigned int  _throttleRequestHandling;
    bool  _thumbnailCompositing;
    bool  _trackStats;
    struct HGSynchronizable { int (**x1)(); struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; struct _opaque_pthread_t {} *x3; unsigned long long x4; struct _opaque_pthread_cond_t { long long x_5_1_1; BOOL x_5_1_2[40]; } x5; } * _trackerLock;
    AVVideoComposition * _videoComposition;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoCompositionDuration;
    int  _windowedDropTotal;
    PVVideoCompositingContext * videoCompositingContext;
}

@property (nonatomic) bool cancelsPendingRequests;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int minimumRequestCompletionTimeMS;
@property (nonatomic, copy) id /* block */ refreshCompletionBlock;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsWideColorSourceFrames;
@property (nonatomic) bool thumbnailCompositing;
@property (retain) PVVideoCompositingContext *videoCompositingContext;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFrameStats:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg1;
- (void)addRenderJobInFlight:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (void)applicationWillTerminate:(id)arg1;
- (double)averageStat:(int)arg1;
- (void)callRefreshCompletionBlock:(bool)arg1;
- (void)cancelAllPendingVideoCompositionRequests;
- (bool)cancelsPendingRequests;
- (void)checkAndReportDropFrames:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg1 job:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg2;
- (void)dealloc;
- (void)didEnterBackground:(id)arg1;
- (void)didRecieveMemoryWarning:(id)arg1;
- (double)getLastStat:(int)arg1;
- (id)getPreviousInstruction:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (double)getTimeSinceLast:(struct FrameStats { unsigned int x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; double x3; double x4; double x5; bool x6; bool x7; unsigned int x8; struct vector<double, std::__1::allocator<double> > { double *x_9_1_1; double *x_9_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_9_1_3; } x9; }*)arg1;
- (bool)inPlayback;
- (id)init;
- (unsigned int)minimumRequestCompletionTimeMS;
- (double)numFrames;
- (void)printAndClearStats;
- (id /* block */)refreshCompletionBlock;
- (void)removeRenderJobInFlight:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (void)renderContextChanged:(id)arg1;
- (void)renderRequestFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (id)requiredPixelBufferAttributesForRenderContext;
- (void)setCancelsPendingRequests:(bool)arg1;
- (void)setColorSpacesFromDestinationBuffer:(id)arg1;
- (void)setFrameDuration:(double)arg1;
- (void)setInPlayback:(bool)arg1;
- (void)setMinimumRequestCompletionTimeMS:(unsigned int)arg1;
- (void)setRefreshCompletionBlock:(id /* block */)arg1;
- (void)setThumbnailCompositing:(bool)arg1;
- (void)setVideoCompositingContext:(id)arg1;
- (void)setupEffectScheduler;
- (void)setupTextureFactories;
- (bool)shouldDoLowPowerExport;
- (void)signalScheduling:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 playerRate:(float)arg2;
- (void)signalSchedulingResetSearch;
- (id)sourcePixelBufferAttributes;
- (void)startVideoCompositionRequest:(id)arg1;
- (bool)supportsWideColorSourceFrames;
- (unsigned long long)taskResidentSize;
- (bool)thumbnailCompositing;
- (void)trackStats:(bool)arg1;
- (id)videoCompositingContext;
- (void)videoCompositionChanged:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (double)windowedFPS;

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