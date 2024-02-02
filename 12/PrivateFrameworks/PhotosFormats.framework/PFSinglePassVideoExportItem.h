<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PFSinglePassVideoExportItem.h</title>
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

/PrivateFrameworks/PhotosFormats.framework/PFSinglePassVideoExportItem.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats (1)
 */

@interface PFSinglePassVideoExportItem : NSObject {
    NSArray * _additionalMetadata;
    NSArray * _additionalReaderTrackOutputs;
    NSArray * _additionalTracks;
    NSArray * _additionalWriterInputs;
    AVAssetReader * _assetReader;
    AVAssetWriter * _assetWriter;
    PFVideoExportRangeCoordinator * _availableRangeCoordinator;
    PFProportionalIntegralController * _bitRateController;
    struct OpaqueVTCompressionSession { } * _compressionSession;
    NSFileHandle * _conversionOutputFileHandle;
    long long  _currentEncodingBitRate;
    NSURL * _destinationFileURL;
    NSString * _identifier;
    AVAsset * _inputAsset;
    NSObject<OS_dispatch_group> * _inputReadingCompletionGroup;
    bool  _maximizePowerEfficiency;
    unsigned long long  _minimumChunkLength;
    bool  _needsCurrentEncodingBitRateUpdate;
    unsigned long long  _outputFileLastEndOffset;
    NSObject<OS_dispatch_source> * _outputFileSizeChangeSource;
    NSProgress * _progress;
    bool  _shouldDeleteDestinationURLOnDeallocation;
    unsigned long long  _state;
    NSObject<OS_dispatch_queue> * _stateQueue;
    PFSinglePassVideoExportItemStatistics * _statistics;
    unsigned long long  _targetOutputFileSize;
    long long  _targetOutputMediaDataSize;
    AVAssetReaderTrackOutput * _videoReaderTrackOutput;
    AVAssetTrack * _videoTrack;
    AVAssetWriterInput * _videoWriterInput;
}

@property (nonatomic, copy) NSArray *additionalMetadata;
@property (retain) NSArray *additionalReaderTrackOutputs;
@property (retain) NSArray *additionalTracks;
@property (retain) NSArray *additionalWriterInputs;
@property (retain) AVAssetReader *assetReader;
@property (retain) AVAssetWriter *assetWriter;
@property (retain) PFVideoExportRangeCoordinator *availableRangeCoordinator;
@property (retain) PFProportionalIntegralController *bitRateController;
@property struct OpaqueVTCompressionSession { }*compressionSession;
@property (retain) NSFileHandle *conversionOutputFileHandle;
@property long long currentEncodingBitRate;
@property (retain) NSURL *destinationFileURL;
@property (retain) NSString *identifier;
@property (retain) AVAsset *inputAsset;
@property (retain) NSObject<OS_dispatch_group> *inputReadingCompletionGroup;
@property bool maximizePowerEfficiency;
@property unsigned long long minimumChunkLength;
@property bool needsCurrentEncodingBitRateUpdate;
@property unsigned long long outputFileLastEndOffset;
@property (retain) NSObject<OS_dispatch_source> *outputFileSizeChangeSource;
@property (retain) NSProgress *progress;
@property bool shouldDeleteDestinationURLOnDeallocation;
@property unsigned long long state;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain) PFSinglePassVideoExportItemStatistics *statistics;
@property (nonatomic) unsigned long long targetOutputFileSize;
@property long long targetOutputMediaDataSize;
@property (retain) AVAssetReaderTrackOutput *videoReaderTrackOutput;
@property (retain) AVAssetTrack *videoTrack;
@property (retain) AVAssetWriterInput *videoWriterInput;

- (void).cxx_destruct;
- (void)_cancel;
- (id)additionalMetadata;
- (id)additionalReaderTrackOutputs;
- (id)additionalTracks;
- (id)additionalWriterInputs;
- (id)assetReader;
- (id)assetWriter;
- (id)availableRangeCoordinator;
- (id)bitRateController;
- (id)bitRateControllerForTargetEncodingBitRate:(long long)arg1;
- (struct OpaqueVTCompressionSession { }*)compressionSession;
- (id)conversionOutputFileHandle;
- (long long)currentEncodingBitRate;
- (void)dealloc;
- (id)destinationFileURL;
- (long long)estimatedOutputBitRate;
- (id)identifier;
- (id)init;
- (id)inputAsset;
- (double)inputAssetDuration;
- (id)inputReadingCompletionGroup;
- (bool)maximizePowerEfficiency;
- (unsigned long long)minimumChunkLength;
- (bool)needsCurrentEncodingBitRateUpdate;
- (void)notifyDataAvailableToHandler:(id /* block */)arg1 ignoreMinimumChunkLength:(bool)arg2;
- (id)outputDataInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 waitUntilAvailableWithTimeout:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)outputFileLastEndOffset;
- (id)outputFileSizeChangeSource;
- (bool)preflight;
- (void)processCompressedSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 presentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)progress;
- (void)setAdditionalMetadata:(id)arg1;
- (void)setAdditionalReaderTrackOutputs:(id)arg1;
- (void)setAdditionalTracks:(id)arg1;
- (void)setAdditionalWriterInputs:(id)arg1;
- (void)setAssetReader:(id)arg1;
- (void)setAssetWriter:(id)arg1;
- (void)setAvailableRangeCoordinator:(id)arg1;
- (void)setBitRateController:(id)arg1;
- (void)setCompressionSession:(struct OpaqueVTCompressionSession { }*)arg1;
- (void)setConversionOutputFileHandle:(id)arg1;
- (void)setCurrentEncodingBitRate:(long long)arg1;
- (void)setDestinationFileURL:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInputAsset:(id)arg1;
- (void)setInputReadingCompletionGroup:(id)arg1;
- (void)setMaximizePowerEfficiency:(bool)arg1;
- (void)setMinimumChunkLength:(unsigned long long)arg1;
- (void)setNeedsCurrentEncodingBitRateUpdate:(bool)arg1;
- (void)setOutputFileLastEndOffset:(unsigned long long)arg1;
- (void)setOutputFileSizeChangeSource:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setShouldDeleteDestinationURLOnDeallocation:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setStateQueue:(id)arg1;
- (void)setStatistics:(id)arg1;
- (void)setTargetOutputFileSize:(unsigned long long)arg1;
- (void)setTargetOutputMediaDataSize:(long long)arg1;
- (void)setVideoReaderTrackOutput:(id)arg1;
- (void)setVideoTrack:(id)arg1;
- (void)setVideoWriterInput:(id)arg1;
- (bool)setupConversionWithError:(id*)arg1;
- (void)setupOutputFileSourceWithOutputAvailableHandler:(id /* block */)arg1;
- (bool)shouldDeleteDestinationURLOnDeallocation;
- (bool)startConversionWithError:(id*)arg1 outputAvailableHandler:(id /* block */)arg2;
- (void)startReadingInputAssetWithOutputAvailableHandler:(id /* block */)arg1;
- (unsigned long long)state;
- (id)stateQueue;
- (id)statistics;
- (unsigned long long)targetOutputFileSize;
- (long long)targetOutputMediaDataSize;
- (id)videoReaderTrackOutput;
- (id)videoTrack;
- (id)videoWriterInput;

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