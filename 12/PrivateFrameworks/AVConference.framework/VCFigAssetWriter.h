<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VCFigAssetWriter.h</title>
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

/PrivateFrameworks/AVConference.framework/VCFigAssetWriter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference (1475.1.8)
 */

@interface VCFigAssetWriter : NSObject <VCMovieWriterProtocol> {
    struct OpaqueFigAssetWriter { } * _assetWriter;
    struct __CVPixelBufferPool { } * _bufferPool;
    struct OpaqueVTCompressionSession { } * _compressionSession;
    unsigned int  _endRTPTimeStamp;
    bool  _isEndRTPTimestampSet;
    bool  _isVideoStarted;
    int  _localAudioTrackID;
    int  _metadataTrackID;
    NSURL * _outputURL;
    int  _remoteAudioTrackID;
    bool  _resize;
    unsigned int  _startRTPTimeStamp;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startTime;
    unsigned char  _stillImageCameraStatusBit;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageTime;
    NSString * _transactionID;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
    int  _videoTrackID;
    unsigned char  _writerMode;
}

@property unsigned int endRTPTimeStamp;
@property (nonatomic, retain) NSURL *outputURL;
@property unsigned int startRTPTimeStamp;
@property (readonly) unsigned char writerMode;

- (int)_setupWriter;
- (void)appendAudioSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 mediaType:(unsigned char)arg2;
- (void)appendVideoSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 cameraStatus:(unsigned char)arg2 mediaType:(unsigned char)arg3;
- (struct OpaqueVTCompressionSession { }*)compressionSessionWithWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)dealloc;
- (int)encodeAndAppendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (unsigned int)endRTPTimeStamp;
- (void)finishWritingWithHandler:(id /* block */)arg1;
- (id)initWithOutputURL:(id)arg1 transactionID:(id)arg2;
- (id)outputURL;
- (void)setEndRTPTimeStamp:(unsigned int)arg1;
- (void)setEndRTPTimestampWithTimestamp:(unsigned int)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setStartRTPTimeStamp:(unsigned int)arg1;
- (void)setStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setStillImageTimeInternal;
- (void)setupLivePhotoStillImageCameraStatusBit:(unsigned char)arg1 resize:(bool)arg2 videoVisibleWidth:(int)arg3 height:(int)arg4;
- (void)setupWriterWithMode:(unsigned char)arg1;
- (bool)shouldAppendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 RTPtimeStamp:(unsigned int)arg2;
- (bool)shouldFinishWritingSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 RTPtimeStamp:(unsigned int)arg2;
- (unsigned int)startRTPTimeStamp;
- (int)trackIDForMediaType:(unsigned char)arg1;
- (void)writeIdentifierMetadata:(id)arg1;
- (unsigned char)writerMode;

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