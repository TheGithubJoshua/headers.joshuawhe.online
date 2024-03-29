<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CAMStillImageCaptureRequest.h</title>
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

/PrivateFrameworks/CameraUI.framework/CAMStillImageCaptureRequest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI (1)
 */

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <CAMBurstIdentifierProvider, CAMBurstRequest, CAMEffectFilterTypeProvider, CAMIrisRequest, CAMTimelapseRequest, NSCopying, NSMutableCopying> {
    NSString * _EV0IrisIdentifier;
    NSURL * _EV0LocalVideoDestinationURL;
    NSString * _EV0PersistenceUUID;
    NSString * _EV0VideoPersistenceUUID;
    NSArray * _adjustmentFilters;
    NSString * _burstIdentifier;
    <CAMStillImageCaptureRequestDelegate> * _delegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _desiredPreviewSize;
    long long  _effectFilterType;
    long long  _flashMode;
    long long  _hdrMode;
    NSString * _irisIdentifier;
    long long  _irisMode;
    long long  _lightingEffectType;
    NSURL * _localVideoDestinationURL;
    double  _loggingVideoZoomFactor;
    long long  _loggingZoomInteractionType;
    unsigned long long  _maximumBurstLength;
    NSArray * _originalFilters;
    NSString * _timelapseIdentifier;
    unsigned long long  _userInitiationTime;
    bool  _usesStillImageStabilization;
    NSString * _videoPersistenceUUID;
    bool  _wantsAudioForCapture;
    bool  _wantsAutoDualCameraFusion;
    bool  _wantsHighResolutionStills;
    bool  _wantsPortraitEffect;
    bool  _wantsSquareCrop;
}

@property (nonatomic, readonly, copy) NSString *EV0IrisIdentifier;
@property (nonatomic, readonly, copy) NSURL *EV0LocalVideoDestinationURL;
@property (nonatomic, readonly, copy) NSString *EV0PersistenceUUID;
@property (nonatomic, readonly, copy) NSString *EV0VideoPersistenceUUID;
@property (nonatomic, readonly) NSArray *adjustmentFilters;
@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CAMStillImageCaptureRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } desiredPreviewSize;
@property (nonatomic, readonly) long long effectFilterType;
@property (nonatomic, readonly) long long flashMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long hdrMode;
@property (nonatomic, readonly, copy) NSString *irisIdentifier;
@property (nonatomic, readonly) long long irisMode;
@property (nonatomic, readonly) long long lightingEffectType;
@property (nonatomic, readonly, copy) NSURL *localVideoDestinationURL;
@property (nonatomic, readonly) double loggingVideoZoomFactor;
@property (nonatomic, readonly) long long loggingZoomInteractionType;
@property (nonatomic, readonly) unsigned long long maximumBurstLength;
@property (nonatomic, readonly) NSArray *originalFilters;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *timelapseIdentifier;
@property (nonatomic, readonly) unsigned long long userInitiationTime;
@property (nonatomic, readonly) bool usesStillImageStabilization;
@property (nonatomic, readonly, copy) NSString *videoPersistenceUUID;
@property (nonatomic, readonly) bool wantsAudioForCapture;
@property (nonatomic, readonly) bool wantsAutoDualCameraFusion;
@property (nonatomic, readonly) bool wantsHighResolutionStills;
@property (nonatomic, readonly) bool wantsPortraitEffect;
@property (nonatomic, readonly) bool wantsSquareCrop;

- (void).cxx_destruct;
- (id)EV0IrisIdentifier;
- (id)EV0LocalVideoDestinationURL;
- (id)EV0PersistenceUUID;
- (id)EV0VideoPersistenceUUID;
- (id)adjustmentFilters;
- (id)burstIdentifier;
- (id)captureRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (struct CGSize { double x1; double x2; })desiredPreviewSize;
- (long long)effectFilterType;
- (long long)flashMode;
- (long long)hdrMode;
- (id)init;
- (id)initWithRequest:(id)arg1 distinctPersistence:(bool)arg2;
- (id)irisIdentifier;
- (id)irisIdentifierForEV0:(bool)arg1;
- (id)irisLocalVideoDestinationURLForEV0:(bool)arg1;
- (long long)irisMode;
- (id)irisStillImagePersistenceUUIDForEV0:(bool)arg1;
- (id)irisVideoPersistenceUUIDForEV0:(bool)arg1;
- (bool)isEV0LocalVideoDestinationURL:(id)arg1;
- (long long)lightingEffectType;
- (id)localVideoDestinationURL;
- (double)loggingVideoZoomFactor;
- (long long)loggingZoomInteractionType;
- (unsigned long long)maximumBurstLength;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)originalFilters;
- (bool)shouldPersistToLivePhotoDirectory;
- (id)timelapseIdentifier;
- (unsigned long long)userInitiationTime;
- (bool)usesStillImageStabilization;
- (id)videoPersistenceUUID;
- (bool)wantsAudioForCapture;
- (bool)wantsAutoDualCameraFusion;
- (bool)wantsHighResolutionStills;
- (bool)wantsPortraitEffect;
- (bool)wantsSquareCrop;

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
