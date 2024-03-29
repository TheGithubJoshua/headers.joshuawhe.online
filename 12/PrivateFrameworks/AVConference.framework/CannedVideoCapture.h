<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CannedVideoCapture.h</title>
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

/PrivateFrameworks/AVConference.framework/CannedVideoCapture.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference (1475.1.8)
 */

@interface CannedVideoCapture : VCVideoCapture <VideoCaptureProtocol> {
    <CannedVideoFrameFeeder> * _frameFeeder;
    struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; int x2; id x3; int x4; struct OpaqueCMClock {} *x5; bool x6; bool x7; struct OpaqueFigThread {} *x8; bool x9; struct _opaque_pthread_mutex_t { long long x_10_1_1; BOOL x_10_1_2[56]; } x10; struct _opaque_pthread_cond_t { long long x_11_1_1; BOOL x_11_1_2[40]; } x11; struct OpaqueFigThread {} *x12; bool x13; struct _opaque_pthread_mutex_t { long long x_14_1_1; BOOL x_14_1_2[56]; } x14; struct _opaque_pthread_cond_t { long long x_15_1_1; BOOL x_15_1_2[40]; } x15; struct _opaque_pthread_mutex_t { long long x_16_1_1; BOOL x_16_1_2[56]; } x16; struct Frame {} *x17; int x18; } * _pimpl;
}

@property (nonatomic, retain) <CannedVideoFrameFeeder> *frameFeeder;
@property (nonatomic, readonly) struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; int x2; id x3; int x4; struct OpaqueCMClock {} *x5; bool x6; bool x7; struct OpaqueFigThread {} *x8; bool x9; struct _opaque_pthread_mutex_t { long long x_10_1_1; BOOL x_10_1_2[56]; } x10; struct _opaque_pthread_cond_t { long long x_11_1_1; BOOL x_11_1_2[40]; } x11; struct OpaqueFigThread {} *x12; bool x13; struct _opaque_pthread_mutex_t { long long x_14_1_1; BOOL x_14_1_2[56]; } x14; struct _opaque_pthread_cond_t { long long x_15_1_1; BOOL x_15_1_2[40]; } x15; struct _opaque_pthread_mutex_t { long long x_16_1_1; BOOL x_16_1_2[56]; } x16; struct Frame {} *x17; int x18; }*pimpl;

+ (int)cannedVideoTypeForPath:(id)arg1;
+ (int)createPixelBufferPool:(struct __CVPixelBufferPool {}**)arg1 withWidth:(int)arg2 height:(int)arg3;

- (bool)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;
- (int)copyColorInfo:(const struct __CFDictionary {}**)arg1;
- (void)dealloc;
- (int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
- (id)frameFeeder;
- (id)getCameraUID;
- (int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(bool)arg3;
- (id)initWithCaptureServer:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 cameraUID:(id)arg5 video:(id)arg6 error:(int*)arg7;
- (bool)isFrontCamera;
- (bool)isPreviewRunning;
- (struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long long x_1_1_1; BOOL x_1_1_2[56]; } x1; int x2; id x3; int x4; struct OpaqueCMClock {} *x5; bool x6; bool x7; struct OpaqueFigThread {} *x8; bool x9; struct _opaque_pthread_mutex_t { long long x_10_1_1; BOOL x_10_1_2[56]; } x10; struct _opaque_pthread_cond_t { long long x_11_1_1; BOOL x_11_1_2[40]; } x11; struct OpaqueFigThread {} *x12; bool x13; struct _opaque_pthread_mutex_t { long long x_14_1_1; BOOL x_14_1_2[56]; } x14; struct _opaque_pthread_cond_t { long long x_15_1_1; BOOL x_15_1_2[40]; } x15; struct _opaque_pthread_mutex_t { long long x_16_1_1; BOOL x_16_1_2[56]; } x16; struct Frame {} *x17; int x18; }*)pimpl;
- (int)setCameraWithUID:(id)arg1;
- (void)setFrameFeeder:(id)arg1;
- (int)setFrameRate:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (int)startPreview;
- (int)startThreads;
- (int)stop:(bool)arg1;
- (void)stopThreads;

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
