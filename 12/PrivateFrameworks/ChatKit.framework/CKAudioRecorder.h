<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKAudioRecorder.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKAudioRecorder.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKAudioRecorder : NSObject <CKVoiceControllerDelegate> {
    bool  _cancelled;
    id /* block */  _completion;
    <CKAudioRecorderDelegate> * _delegate;
    struct OpaqueAudioFileID { } * _fileID;
    NSURL * _fileURL;
    bool  _recording;
    bool  _recordingEmpty;
    bool  _shouldPlayStartSound;
    bool  _shouldPlayStopSound;
    NSDate * _startDate;
    long long  _totalPacketsCount;
    CKVoiceController * _voiceController;
}

@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKAudioRecorderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic) struct OpaqueAudioFileID { }*fileID;
@property (nonatomic, retain) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (getter=isRecording, nonatomic) bool recording;
@property (getter=isRecordingEmpty, nonatomic) bool recordingEmpty;
@property (nonatomic) bool shouldPlayStartSound;
@property (nonatomic) bool shouldPlayStopSound;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic) long long totalPacketsCount;
@property (nonatomic, retain) CKVoiceController *voiceController;

- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)cancelRecording;
- (id /* block */)completion;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (struct OpaqueAudioFileID { }*)fileID;
- (id)fileURL;
- (id)init;
- (bool)isCancelled;
- (bool)isRecording;
- (bool)isRecordingEmpty;
- (void)resetState;
- (void)setCancelled:(bool)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileID:(struct OpaqueAudioFileID { }*)arg1;
- (void)setFileURL:(id)arg1;
- (void)setRecording:(bool)arg1;
- (void)setRecordingEmpty:(bool)arg1;
- (void)setShouldPlayStartSound:(bool)arg1;
- (void)setShouldPlayStopSound:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTotalPacketsCount:(long long)arg1;
- (void)setVoiceController:(id)arg1;
- (bool)shouldPlayStartSound;
- (bool)shouldPlayStopSound;
- (id)startDate;
- (void)startRecordingAndPlaySound:(bool)arg1;
- (void)startRecordingForRaiseGesture;
- (void)startRecordingForRaiseGesture:(bool)arg1 shouldPlaySound:(bool)arg2;
- (void)stopRecording:(id /* block */)arg1;
- (void)stopRecordingAndPlaySound:(bool)arg1 completion:(id /* block */)arg2;
- (long long)totalPacketsCount;
- (id)voiceController;
- (void)voiceController:(id)arg1 didUpdateAveragePower:(float)arg2;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)voiceControllerDidFinishRecording:(id)arg1 successfully:(bool)arg2;
- (void)voiceControllerDidStartRecording:(id)arg1;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;

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