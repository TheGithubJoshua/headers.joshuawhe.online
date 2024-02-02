<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVCaptureStillImageOutput.h</title>
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

/Frameworks/AVFoundation.framework/AVCaptureStillImageOutput.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation (1550.4)
 */

@interface AVCaptureStillImageOutput : AVCaptureOutput {
    AVCaptureStillImageOutputInternal * _internal;
}

@property (nonatomic) bool automaticallyEnablesStillImageStabilizationWhenAvailable;
@property (nonatomic, readonly) NSArray *availableImageDataCVPixelFormatTypes;
@property (nonatomic, readonly) NSArray *availableImageDataCodecTypes;
@property (getter=isCapturingStillImage, readonly) bool capturingStillImage;
@property (getter=isHighResolutionStillImageOutputEnabled, nonatomic) bool highResolutionStillImageOutputEnabled;
@property (nonatomic, copy) NSDictionary *outputSettings;
@property (getter=isStillImageStabilizationActive, nonatomic, readonly) bool stillImageStabilizationActive;
@property (getter=isStillImageStabilizationSupported, nonatomic, readonly) bool stillImageStabilizationSupported;

+ (struct __CFDictionary { }*)_copyAttachmentsAndPropagateFaceRegionsToExifAuxDictionaryForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
+ (void)initialize;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer { }*)arg1;
+ (id)jpegStillImageNSDataRepresentationForSurface:(struct __IOSurface { }*)arg1 size:(unsigned long long)arg2 metadata:(id)arg3;
+ (unsigned long long)maxStillImageJPEGDataSize;
+ (id)new;

- (long long)HDRMode;
- (bool)_bracketedSettingsAreValid:(id)arg1 fromConnection:(id)arg2 exceptionReason:(id*)arg3;
- (id)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(id)arg1 fromConnection:(id)arg2;
- (id)_figCaptureStillImageSettingsForConnection:(id)arg1;
- (bool)_preparedForBracketedCaptureWithSettings:(id)arg1;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(bool)arg1;
- (void)_updateLensStabilizationDuringBracketedCaptureSupportedForDevice:(id)arg1;
- (void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (bool)automaticallyEnablesStillImageStabilizationWhenAvailable;
- (id)availableImageDataCVPixelFormatTypes;
- (id)availableImageDataCodecTypes;
- (bool)canAddConnectionForMediaType:(id)arg1;
- (void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)captureStillImageBracketAsynchronouslyFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearPreparedBracketIfNeeded;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)firstActiveConnection;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)handleNotificationForPrepareRequest:(id)arg1 withPayload:(id)arg2;
- (void)handleNotificationForRequest:(id)arg1 withPayload:(id)arg2 imageIsEV0:(bool*)arg3;
- (bool)highResolutionStillImageOutputEnabledChangeCausesCaptureSessionRestart;
- (unsigned int)imageDataFormatType;
- (id)init;
- (bool)isCapturingStillImage;
- (bool)isEV0CaptureEnabled;
- (bool)isHDRSupported;
- (bool)isHighResolutionStillImageOutputEnabled;
- (bool)isLensStabilizationDuringBracketedCaptureEnabled;
- (bool)isLensStabilizationDuringBracketedCaptureSupported;
- (bool)isNoiseReductionEnabled;
- (bool)isRawCaptureEnabled;
- (bool)isRawCaptureSupported;
- (bool)isStillImageStabilizationActive;
- (bool)isStillImageStabilizationSupported;
- (unsigned long long)maxBracketedCaptureStillImageCount;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputSettings;
- (struct CGSize { double x1; double x2; })outputSizeForSourceFormat:(id)arg1;
- (void)prepareToCaptureStillImageBracketFromConnection:(id)arg1 withSettingsArray:(id)arg2 completionHandler:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })previewImageSize;
- (void)removeConnection:(id)arg1;
- (bool)resumeVideoProcessing;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)setAutomaticallyEnablesStillImageStabilizationWhenAvailable:(bool)arg1;
- (void)setEV0CaptureEnabled:(bool)arg1;
- (void)setHDRMode:(long long)arg1;
- (void)setHighResolutionStillImageOutputEnabled:(bool)arg1;
- (void)setLensStabilizationDuringBracketedCaptureEnabled:(bool)arg1;
- (void)setNoiseReductionEnabled:(bool)arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setPreviewImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRawCaptureEnabled:(bool)arg1;
- (void)setShutterSound:(unsigned int)arg1;
- (void)setSquareCropEnabled:(bool)arg1;
- (void)setSuspendsVideoProcessingDuringStillImageCapture:(bool)arg1;
- (unsigned int)shutterSound;
- (bool)squareCropEnabled;
- (bool)suspendsVideoProcessingDuringStillImageCapture;
- (void)updateSISSupportedForSourceDevice:(id)arg1;

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