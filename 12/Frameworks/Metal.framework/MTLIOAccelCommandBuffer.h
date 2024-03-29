<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MTLIOAccelCommandBuffer.h</title>
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

/Frameworks/Metal.framework/MTLIOAccelCommandBuffer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Metal.framework/Metal (161.6.2)
 */

@interface MTLIOAccelCommandBuffer : _MTLCommandBuffer {
    NSObject<OS_dispatch_semaphore> * _commitAndResetSem;
    void * _completedCallbackBlockPtr;
    MTLIOAccelDevice<MTLDevice> * _device;
    void * _scheduledCallbackBlockPtr;
    struct MTLIOAccelCommandBufferStorage { id x1; struct MTLIOAccelCommandBufferStoragePool {} *x2; struct { struct MTLIOAccelCommandBufferStorage {} *x_3_1_1; struct MTLIOAccelCommandBufferStorage {} **x_3_1_2; } x3; id x4; char *x5; char *x6; char *x7; id x8; char *x9; char *x10; struct IOAccelSegmentListHeader {} *x11; struct IOAccelSegmentResourceListHeader {} *x12; struct IOAccelSegmentResourceDescriptorGroup {} *x13; struct IOAccelResourceList { unsigned short x_14_1_1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x_14_1_2; unsigned long long x_14_1_3; unsigned long long x_14_1_4; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; int (*x_14_1_12)(); void *x_14_1_13; } x14; id x15; id x16; unsigned long long x17; unsigned long long x18; id *x19; struct MTLIOAccelCommandBufferResourceInfo {} *x20; id x21; id *x22; unsigned int x23; unsigned long long x24; struct IOAccelSegmentListShmemHeader {} *x25; struct IOAccelSegmentKernelCommmandListHeader {} *x26; } * _storage;
    unsigned long long * _submitToHardwareTimeStampPointer;
}

@property (readonly) struct MTLIOAccelCommandBufferResourceInfo { unsigned long long x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; id x5; struct IOAccelResourceInfo { struct __IOSurface {} *x_6_1_1; unsigned int x_6_1_2 : 56; unsigned int x_6_1_3 : 8; unsigned int x_6_1_4; } x6; }*commandBufferResourceInfo;
@property (readonly) struct MTLIOAccelCommandBufferStorage { id x1; struct MTLIOAccelCommandBufferStoragePool {} *x2; struct { struct MTLIOAccelCommandBufferStorage {} *x_3_1_1; struct MTLIOAccelCommandBufferStorage {} **x_3_1_2; } x3; id x4; char *x5; char *x6; char *x7; id x8; char *x9; char *x10; struct IOAccelSegmentListHeader {} *x11; struct IOAccelSegmentResourceListHeader {} *x12; struct IOAccelSegmentResourceDescriptorGroup {} *x13; struct IOAccelResourceList { unsigned short x_14_1_1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x_14_1_2; unsigned long long x_14_1_3; unsigned long long x_14_1_4; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; int (*x_14_1_12)(); void *x_14_1_13; } x14; id x15; id x16; unsigned long long x17; unsigned long long x18; id *x19; struct MTLIOAccelCommandBufferResourceInfo {} *x20; id x21; id *x22; unsigned int x23; unsigned long long x24; struct IOAccelSegmentListShmemHeader {} *x25; struct IOAccelSegmentKernelCommmandListHeader {} *x26; }*commandBufferStorage;
@property (readonly) <MTLDevice> *device;
@property (readonly) struct IOAccelResourceList { unsigned short x1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; int (*x12)(); void *x13; }*ioAccelResourceList;

- (void)_debugBytes:(const char *)arg1 length:(unsigned long long)arg2 output_type:(unsigned int)arg3;
- (void*)_reserveKernelCommandBufferSpace:(unsigned long long)arg1;
- (void)addPurgedHeap:(id)arg1;
- (void)addPurgedResource:(id)arg1;
- (id)akPrivateResourceList;
- (id)akResourceList;
- (void)allocCommandBufferResourceAtIndex:(unsigned int)arg1;
- (void)beginSegment:(void*)arg1;
- (struct MTLIOAccelCommandBufferResourceInfo { unsigned long long x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; id x5; struct IOAccelResourceInfo { struct __IOSurface {} *x_6_1_1; unsigned int x_6_1_2 : 56; unsigned int x_6_1_3 : 8; unsigned int x_6_1_4; } x6; }*)commandBufferResourceInfo;
- (struct MTLIOAccelCommandBufferStorage { id x1; struct MTLIOAccelCommandBufferStoragePool {} *x2; struct { struct MTLIOAccelCommandBufferStorage {} *x_3_1_1; struct MTLIOAccelCommandBufferStorage {} **x_3_1_2; } x3; id x4; char *x5; char *x6; char *x7; id x8; char *x9; char *x10; struct IOAccelSegmentListHeader {} *x11; struct IOAccelSegmentResourceListHeader {} *x12; struct IOAccelSegmentResourceDescriptorGroup {} *x13; struct IOAccelResourceList { unsigned short x_14_1_1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x_14_1_2; unsigned long long x_14_1_3; unsigned long long x_14_1_4; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; int (*x_14_1_12)(); void *x_14_1_13; } x14; id x15; id x16; unsigned long long x17; unsigned long long x18; id *x19; struct MTLIOAccelCommandBufferResourceInfo {} *x20; id x21; id *x22; unsigned int x23; unsigned long long x24; struct IOAccelSegmentListShmemHeader {} *x25; struct IOAccelSegmentKernelCommmandListHeader {} *x26; }*)commandBufferStorage;
- (void)commit;
- (void)commitAndReset;
- (void)commitEncoder;
- (void)dealloc;
- (id)device;
- (void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeSubmitSleepMS:(unsigned int)arg1;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)endCurrentSegment;
- (void)getCurrentKernelCommandBufferPointer:(void**)arg1 end:(void**)arg2;
- (void)getCurrentKernelCommandBufferStart:(void**)arg1 current:(void**)arg2 end:(void**)arg3;
- (struct IOAccelSegmentListHeader { unsigned long long x1; unsigned int x2; unsigned int x3; struct IOAccelSegmentResourceListHeader { unsigned long long x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; struct IOAccelSegmentResourceDescriptorGroup { unsigned int x_6_2_1[6]; unsigned long long x_6_2_2[6]; unsigned short x_6_2_3[6]; unsigned short x_6_2_4; unsigned short x_6_2_5; } x_4_1_6[0]; } x4[0]; }*)getSegmentListHeader;
- (void)getSegmentListPointerStart:(void**)arg1 current:(void**)arg2 end:(void**)arg3;
- (void)growKernelCommandBuffer:(unsigned long long)arg1;
- (void)growSegmentList;
- (id)initWithQueue:(id)arg1 retainedReferences:(bool)arg2;
- (id)initWithQueue:(id)arg1 retainedReferences:(bool)arg2 synchronousDebugMode:(bool)arg3;
- (struct IOAccelResourceList { unsigned short x1[256]; struct IOAccelSegmentResourceDescriptorGroup {} *x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; int (*x12)(); void *x13; }*)ioAccelResourceList;
- (void)kernelCommandCollectTimeStamp;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)setCurrentCommandEncoder:(id)arg1;
- (void)setCurrentKernelCommandBufferPointer:(void*)arg1;
- (void)setCurrentSegmentListPointer:(void*)arg1;
- (void)setLabel:(id)arg1;
- (void)validate;

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
