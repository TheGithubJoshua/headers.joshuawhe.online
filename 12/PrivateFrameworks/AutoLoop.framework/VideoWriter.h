<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VideoWriter.h</title>
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

/PrivateFrameworks/AutoLoop.framework/VideoWriter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop (1)
 */

@interface VideoWriter : NSObject {
    AVAssetWriter * _assetWriter;
    long long  _currFrameTime;
    long long  _frameIncr;
    NSObject<OS_dispatch_queue> * _frameWriteQueue;
    bool  _initFailed;
    AVAssetWriterInputPixelBufferAdaptor * _inputAdaptor;
    NSConditionLock * _inputLock;
    AVAssetWriterInput * _writerInput;
    long long  currFrame;
    float  fps;
    unsigned int  imgHeight;
    unsigned int  imgWidth;
    NSError * lastError;
    unsigned int  pixelFormat;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  preferredTransform;
    int  timeScale;
}

@property (retain) AVAssetWriter *assetWriter;
@property (readonly) long long currFrame;
@property long long currFrameTime;
@property (readonly) float fps;
@property long long frameIncr;
@property (retain) NSObject<OS_dispatch_queue> *frameWriteQueue;
@property (readonly) unsigned int imgHeight;
@property (readonly) unsigned int imgWidth;
@property bool initFailed;
@property (retain) AVAssetWriterInputPixelBufferAdaptor *inputAdaptor;
@property (retain) NSConditionLock *inputLock;
@property (readonly) NSError *lastError;
@property (readonly) unsigned int pixelFormat;
@property (readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (readonly) int timeScale;
@property (retain) AVAssetWriterInput *writerInput;

- (void).cxx_destruct;
- (id)addFrame:(struct CGImage { }*)arg1;
- (id)addFrameAsPixelBuf:(struct __CVBuffer { }*)arg1;
- (id)addFrameAsPixelBuf:(struct __CVBuffer { }*)arg1 atFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)assetWriter;
- (struct __CVBuffer { }*)createPixelBuffer;
- (long long)currFrame;
- (long long)currFrameTime;
- (void)endSessionAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)endSessionInfer;
- (id)finish;
- (float)fps;
- (long long)frameIncr;
- (id)frameWriteQueue;
- (unsigned int)imgHeight;
- (unsigned int)imgWidth;
- (bool)initFailed;
- (id)initForPath:(const char *)arg1 fileType:(id)arg2 codecType:(id)arg3 imgWidth:(unsigned int)arg4 imgHeight:(unsigned int)arg5 fps:(float)arg6 pixFormat:(unsigned int)arg7 metadata:(id)arg8;
- (id)initForURL:(id)arg1 fileType:(id)arg2 codecType:(id)arg3 imgWidth:(unsigned int)arg4 imgHeight:(unsigned int)arg5 fps:(float)arg6 pixFormat:(unsigned int)arg7 metadata:(id)arg8;
- (id)initForURL:(id)arg1 fileType:(id)arg2 codecType:(id)arg3 imgWidth:(unsigned int)arg4 imgHeight:(unsigned int)arg5 fps:(float)arg6 timeScale:(int)arg7 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg8 pixFormat:(unsigned int)arg9 metadata:(id)arg10;
- (id)inputAdaptor;
- (id)inputLock;
- (id)lastError;
- (unsigned int)pixelFormat;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (void)setAssetWriter:(id)arg1;
- (void)setCurrFrameTime:(long long)arg1;
- (void)setFrameIncr:(long long)arg1;
- (void)setFrameWriteQueue:(id)arg1;
- (void)setInitFailed:(bool)arg1;
- (void)setInputAdaptor:(id)arg1;
- (void)setInputLock:(id)arg1;
- (void)setInputReady;
- (void)setWriterInput:(id)arg1;
- (int)timeScale;
- (id)writerInput;

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
