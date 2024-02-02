<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CAMTimelapseMovieWriter.h</title>
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

/PrivateFrameworks/CameraUI.framework/CAMTimelapseMovieWriter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI (1)
 */

@interface CAMTimelapseMovieWriter : NSObject <CAMTimelapseMovieWriterProtocol> {
    NSMutableDictionary * __availableImageData;
    NSMutableDictionary * __availablePixelBuffers;
    id /* block */  __completion;
    long long  __currentOutputFrameIndex;
    NSArray * __frameFilePaths;
    long long  __framesPerSecond;
    NSOperationQueue * __imageDecodeQueue;
    NSOperationQueue * __imageReadQueue;
    NSMutableSet * __inFlightReadFrameIndexes;
    NSObject<OS_dispatch_queue> * __movieWritingQueue;
    long long  __nextReadFileIndex;
    long long  __nextWriteFileIndex;
    AVAssetWriterInputPixelBufferAdaptor * __pixelBufferAdaptor;
    long long  __residentImageDataCount;
    long long  __residentPixelBufferCount;
    NSObject<OS_dispatch_queue> * __synchronizationQueue;
    AVAssetWriterInput * __videoInput;
    AVAssetWriter * __writer;
    bool  _suspended;
}

@property (nonatomic, readonly) NSMutableDictionary *_availableImageData;
@property (nonatomic, readonly) NSMutableDictionary *_availablePixelBuffers;
@property (nonatomic, readonly, copy) id /* block */ _completion;
@property (nonatomic, readonly) long long _currentOutputFrameIndex;
@property (nonatomic, readonly) NSArray *_frameFilePaths;
@property (nonatomic, readonly) long long _framesPerSecond;
@property (nonatomic, readonly) NSOperationQueue *_imageDecodeQueue;
@property (nonatomic, readonly) NSOperationQueue *_imageReadQueue;
@property (nonatomic, readonly) NSMutableSet *_inFlightReadFrameIndexes;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_movieWritingQueue;
@property (nonatomic, readonly) long long _nextReadFileIndex;
@property (nonatomic, readonly) long long _nextWriteFileIndex;
@property (nonatomic, readonly) AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
@property (nonatomic, readonly) long long _residentImageDataCount;
@property (nonatomic, readonly) long long _residentPixelBufferCount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_synchronizationQueue;
@property (nonatomic, readonly) AVAssetWriterInput *_videoInput;
@property (nonatomic, readonly) AVAssetWriter *_writer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) bool suspended;

- (void).cxx_destruct;
- (bool)_appendPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)_availableImageData;
- (id)_availablePixelBuffers;
- (id /* block */)_completion;
- (long long)_currentOutputFrameIndex;
- (struct CGSize { double x1; double x2; })_desiredOutputSizeForFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_enqueueNextDecode;
- (void)_enqueueNextRead;
- (void)_enqueueNextWrite;
- (void)_finishMovieWithCompletionHandler:(id /* block */)arg1;
- (id)_frameFilePaths;
- (long long)_framesPerSecond;
- (id)_imageDecodeQueue;
- (id)_imageReadQueue;
- (id)_inFlightReadFrameIndexes;
- (id)_movieWritingQueue;
- (long long)_nextReadFileIndex;
- (long long)_nextWriteFileIndex;
- (id)_pixelBufferAdaptor;
- (void)_reset;
- (long long)_residentImageDataCount;
- (long long)_residentPixelBufferCount;
- (void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg1;
- (bool)_startWritingWithOutputPath:(id)arg1 width:(long long)arg2 height:(long long)arg3 videoFormatDescription:(struct opaqueCMFormatDescription { }*)arg4 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 framesPerSecond:(long long)arg6 frameCount:(long long)arg7 preferHEVC:(bool)arg8 videoMetadata:(id)arg9;
- (id)_synchronizationQueue;
- (id)_videoInput;
- (id)_writer;
- (id)init;
- (bool)isSuspended;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setSuspended:(bool)arg1;
- (void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg6 framesPerSecond:(long long)arg7 preferHEVC:(bool)arg8 completionHandler:(id /* block */)arg9;

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