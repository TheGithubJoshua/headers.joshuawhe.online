<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ARRecordingTechnique.h</title>
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

/Frameworks/ARKit.framework/ARRecordingTechnique.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/ARKit.framework/ARKit (91.5)
 */

@interface ARRecordingTechnique : ARTechnique {
    NSMutableArray * _accelDataQueue;
    AVAssetWriterInput * _accelInput;
    AVAssetWriterInputMetadataAdaptor * _accelInputAdaptor;
    AVAssetWriterInputMetadataAdaptor * _accelInputAdaptor_CV3D;
    AVAssetWriterInput * _accelInput_CV3D;
    AVAssetWriter * _assetWriter;
    AVAssetWriterInput * _audioInput;
    AVAssetWriterInput * _customDataInput;
    AVAssetWriterInputMetadataAdaptor * _customDataInputAdaptor;
    AVAssetWriterInput * _depthInput;
    AVAssetWriterInputPixelBufferAdaptor * _depthInputAdaptor;
    AVAssetWriterInput * _deviceOrientationInput;
    AVAssetWriterInputMetadataAdaptor * _deviceOrientationInputAdaptor;
    bool  _expectAudioData;
    bool  _expectCustomData;
    bool  _expectDepthData;
    NSMutableArray * _gyroDataQueue;
    AVAssetWriterInput * _gyroInput;
    AVAssetWriterInputMetadataAdaptor * _gyroInputAdaptor;
    AVAssetWriterInputMetadataAdaptor * _gyroInputAdaptor_CV3D;
    AVAssetWriterInput * _gyroInput_CV3D;
    double  _imuTemperature;
    NSObject<OS_dispatch_semaphore> * _inputIsReadySemaphore;
    bool  _isWaitingUntilInputIsReady;
    NSMutableDictionary * _lastRecordedTimestamps;
    NSURL * _outputFileURL;
    NSObject<OS_dispatch_queue> * _processingQueue;
    NSSet * _recordableResultClasses;
    <ARRecordingTechniqueDelegate> * _recordingTechniqueDelegate;
    NSDictionary * _resultAdaptors;
    NSDictionary * _resultInputs;
    NSMutableArray * _sensorDataCache;
    unsigned long long  _sensorDataTypes;
    double  _sessionSourceTime;
    bool  _sessionStarted;
    bool  _shouldSaveVideoInPhotosLibrary;
    bool  _stopRecordingRequested;
    AVAssetWriterInput * _videoInput;
    AVAssetWriterInputPixelBufferAdaptor * _videoInputAdaptor;
    AVAssetWriterInput * _videoMetadataInput;
    AVAssetWriterInputMetadataAdaptor * _videoMetadataInputAdaptor;
    AVAssetWriterInputMetadataAdaptor * _videoMetadataInputAdaptor_CV3D;
    AVAssetWriterInput * _videoMetadataInput_CV3D;
}

@property (nonatomic) bool expectAudioData;
@property (nonatomic) bool expectCustomData;
@property (nonatomic) bool expectDepthData;
@property (nonatomic, readonly) NSURL *outputFileURL;
@property (nonatomic, readonly) NSSet *recordingResultDataClasses;
@property (nonatomic, readonly) unsigned long long recordingSensorDataTypes;
@property (nonatomic) <ARRecordingTechniqueDelegate> *recordingTechniqueDelegate;
@property (nonatomic) bool shouldSaveVideoInPhotosLibrary;

+ (id)metadataIdentifierForARRecordableResultsClass:(Class)arg1;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })computeVideoTransformForDeviceOrientationWithCameraPosition:(long long)arg1;
- (void)copyVideoToPhotoLibrary;
- (void)createAssetWriter;
- (id)createFileMetadata;
- (void)dealloc;
- (bool)expectAudioData;
- (bool)expectCustomData;
- (bool)expectDepthData;
- (void)finishRecording;
- (id)getJsonFriendlyCopy:(id)arg1;
- (id)getMetadataForBuffer:(struct __CVBuffer { }*)arg1 additionalMetadata:(id)arg2;
- (id)init;
- (void)initAssetWriterIfRequiredWithImageData:(id)arg1;
- (id)initWithFileURL:(id)arg1 recordingSensorDataTypes:(unsigned long long)arg2 recordingResultDataClasses:(id)arg3;
- (id)initWithFileURL:(id)arg1 sensorDataTypes:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidJSONObject:(id)arg1 path:(id)arg2;
- (id)makeMetaDataDictionaryItems:(id)arg1 withIdentifier:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputFileURL;
- (id)processData:(id)arg1;
- (void)recordCustomData:(id)arg1 forTimestamp:(double)arg2;
- (id)recordingResultDataClasses;
- (unsigned long long)recordingSensorDataTypes;
- (id)recordingTechniqueDelegate;
- (void)removeTemporaryVideoFile;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (void)setExpectAudioData:(bool)arg1;
- (void)setExpectCustomData:(bool)arg1;
- (void)setExpectDepthData:(bool)arg1;
- (void)setRecordingTechniqueDelegate:(id)arg1;
- (void)setShouldSaveVideoInPhotosLibrary:(bool)arg1;
- (void)setupCustomTrack;
- (void)setupResultTracks;
- (void)setupSensorTracksWithImageData:(id)arg1;
- (bool)shouldSaveVideoInPhotosLibrary;
- (void)startAssetWriterAtTimestamp:(double)arg1;
- (void)writeAccelerometerMetadata:(id)arg1;
- (void)writeAudioData:(id)arg1;
- (void)writeDepthMap:(id)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)writeDeviceOrientationMetadata:(id)arg1;
- (void)writeGyroscopeMetadata:(id)arg1;
- (void)writeImageData:(id)arg1;
- (void)writeImageMetadata:(id)arg1;
- (void)writeMetadata2:(id)arg1 withTimestamp:(double)arg2 toInputAdaptor:(id)arg3 withIdentifier:(id)arg4 withMetaItems:(id)arg5;
- (void)writeMetadata:(id)arg1 withTimestamp:(double)arg2 toInputAdaptor:(id)arg3 withIdentifier:(id)arg4;
- (void)writeOutCachedSensorDataIfPresent;
- (void)writePixelBuffer:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

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