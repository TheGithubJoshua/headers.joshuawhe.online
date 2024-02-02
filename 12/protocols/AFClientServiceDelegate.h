<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AFClientServiceDelegate.h</title>
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

/protocols/AFClientServiceDelegate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol AFClientServiceDelegate <NSObject>

@required

- (oneway void)aceConnectionWillRetryOnError:(NSError *)arg1;
- (oneway void)acousticIDRequestDidFinishWithSuccess:(bool)arg1;
- (oneway void)acousticIDRequestWillStart;
- (oneway void)audioPlaybackRequestDidNotStart:(AFAudioPlaybackRequest *)arg1 error:(NSError *)arg2;
- (oneway void)audioPlaybackRequestDidStart:(AFAudioPlaybackRequest *)arg1;
- (oneway void)audioPlaybackRequestDidStop:(AFAudioPlaybackRequest *)arg1 error:(NSError *)arg2;
- (oneway void)audioPlaybackRequestWillStart:(AFAudioPlaybackRequest *)arg1;
- (oneway void)audioSessionDidBecomeActive:(bool)arg1;
- (oneway void)audioSessionDidBeginInterruption;
- (oneway void)audioSessionDidEndInterruption:(bool)arg1;
- (oneway void)audioSessionIDChanged:(unsigned int)arg1;
- (oneway void)audioSessionWillBecomeActive:(bool)arg1;
- (oneway void)cacheImage:(INImage *)arg1;
- (oneway void)extensionRequestFinishedForApplication:(NSString *)arg1 error:(NSError *)arg2;
- (oneway void)extensionRequestWillStartForApplication:(NSString *)arg1;
- (oneway void)getBulletinContext:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (oneway void)getClockContext:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AFClockAlarmSnapshot *, AFClockTimerSnapshot *, void*
- (oneway void)invalidateCurrentUserActivity;
- (oneway void)musicWasDetected;
- (oneway void)quickStopWasHandledWithActions:(unsigned long long)arg1;
- (oneway void)requestDidReceiveCommand:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: AceObject<SAAceCommand> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AceObject<SAAceCommand> *, void*
- (oneway void)requestHandleCommand:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: AceObject<SAAceCommand> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AceObject<SAAceCommand> *, NSError *, void*
- (oneway void)requestRequestedDismissAssistant;
- (oneway void)requestRequestedOpenApplicationWithBundleID:(void *)arg1 URL:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)requestRequestedOpenURL:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)setUserActivityInfo:(NSDictionary *)arg1 webpageURL:(NSURL *)arg2;
- (oneway void)shouldSpeakChanged:(bool)arg1;
- (oneway void)speechRecognitionDidFail:(NSError *)arg1;
- (oneway void)speechRecognized:(SASSpeechRecognized *)arg1;
- (oneway void)speechRecognizedAdditionalInterpretation:(AFSpeechInterpretation *)arg1 refId:(NSString *)arg2;
- (oneway void)speechRecognizedPartialResult:(SASSpeechPartialResult *)arg1;
- (oneway void)speechRecordingDidBeginOnAVRecordRoute:(NSString *)arg1 audioSessionID:(unsigned int)arg2;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidChangeAVRecordRoute:(NSString *)arg1 isDucking:(bool)arg2 isTwoShot:(bool)arg3 speechEndHostTime:(unsigned long long)arg4;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidFail:(NSError *)arg1;
- (oneway void)speechRecordingDidFinishRecognitionUpdateWithError:(NSError *)arg1;
- (oneway void)speechRecordingDidRecognizePhrases:(NSArray *)arg1 utterances:(NSArray *)arg2;
- (oneway void)speechRecordingDidUpdateRecognitionPhrases:(NSArray *)arg1 utterances:(NSArray *)arg2 refId:(NSString *)arg3;
- (oneway void)speechRecordingPerformTwoShotPromptWithType:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, double, NSError *, void*
- (oneway void)speechRecordingStartpointDetected;
- (oneway void)speechRecordingWillBeginRecognitionUpdateForTask:(NSString *)arg1;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(AFXPCWrapper *)arg1;
- (oneway void)startPlaybackDidFail:(long long)arg1;
- (oneway void)startUIRequestWithText:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)willProcessStartPlayback:(long long)arg1;

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