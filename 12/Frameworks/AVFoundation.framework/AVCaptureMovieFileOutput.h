<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVCaptureMovieFileOutput.h</title>
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

/Frameworks/AVFoundation.framework/AVCaptureMovieFileOutput.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation (1550.4)
 */

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {
    AVCaptureMovieFileOutputInternal * _internal;
}

@property (nonatomic, readonly) NSArray *availableVideoCodecTypes;
@property (nonatomic, copy) NSArray *metadata;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;

+ (bool)consolidateMovieFragmentsInFile:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (id)new;
+ (long long)nextMovieFileSettingsID;
+ (bool)updateMovieMetadataInFile:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3;

- (id)_avErrorUserInfoDictionaryForError:(int)arg1 wrapper:(id)arg2 payload:(id)arg3;
- (bool)_recordingInProgress;
- (void)_removeRecordingDelegateWrapper:(id)arg1;
- (void)_startRecording:(id)arg1;
- (int)_stopRecording;
- (void)_updateAvailableVideoCodecTypesForSourceDevice:(id)arg1;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)availableVideoCodecTypes;
- (id)bravoCameraSelectionBehaviorForRecording;
- (bool)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
- (void)dealloc;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)handleDidStopRecordingNotificationForWrapper:(id)arg1 withPayload:(id)arg2 demoof:(bool)arg3 addMetadata:(bool)arg4;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)init;
- (bool)isRecording;
- (bool)isRecordingPaused;
- (id)metadata;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)outputFileURL;
- (id)outputSettingsForConnection:(id)arg1;
- (struct CGSize { double x1; double x2; })outputSizeForSourceFormat:(id)arg1;
- (void)pauseRecording;
- (bool)recordsVideoOrientationAndMirroringChangesAsMetadataTrackForConnection:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)resumeRecording;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (bool)sendsLastVideoPreviewFrame;
- (void)setBravoCameraSelectionBehaviorForRecording:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setOutputSettings:(id)arg1 forConnection:(id)arg2;
- (void)setRecordsVideoOrientationAndMirroringChanges:(bool)arg1 asMetadataTrackForConnection:(id)arg2;
- (void)setSendsLastVideoPreviewFrame:(bool)arg1;
- (void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2;
- (void)stopRecording;
- (id)supportedOutputSettingsKeysForConnection:(id)arg1;

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
