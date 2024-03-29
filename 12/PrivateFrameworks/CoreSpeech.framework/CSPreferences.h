<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CSPreferences.h</title>
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

/PrivateFrameworks/CoreSpeech.framework/CSPreferences.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech ()
 */

@interface CSPreferences : NSObject

+ (id)sharedPreferences;

- (id)CSSATBasePath;
- (id)_CSSATDownloadPath;
- (id)_CSSATDownloadPathForNewerZone;
- (id)_CSSATLegacyUploadPath;
- (id)_CSSATUploadPath;
- (id)_getEnrolledLanguageList;
- (id)_getUserVoiceProfileUpdateDirectoryWithUpdatePath:(id)arg1;
- (bool)_isDirectory:(id)arg1;
- (bool)_markSATEnrollmentMigratedForLanguageCode:(id)arg1;
- (bool)_markSATEnrollmentSuccessForLanguageCode:(id)arg1;
- (bool)_markSATEnrollmentWithMarker:(id)arg1 forLanguage:(id)arg2;
- (bool)_storeModeEnabled;
- (id)assistantAudioFileLogDirectory;
- (id)assistantLogDirectory;
- (bool)audioInjectionEnabled;
- (id)audioInjectionFilePath;
- (double)audioSessionActivationDelay;
- (id)baseDir;
- (bool)enableAudioInjection:(bool)arg1;
- (bool)fileLoggingIsEnabled;
- (id)fileLoggingLevel;
- (long long)getJarvisTriggerMode;
- (id)getUserVoiceProfileFileList;
- (id)getUserVoiceProfileUpdateDirectory;
- (id)getUserVoiceProfileUpdateDirectoryForNewerZone;
- (id)getUserVoiceProfileUploadPathWithEnrolledLanguageList:(id*)arg1;
- (id)interstitialAbsoluteDirForLevel:(long long)arg1;
- (id)interstitialRelativeDirForLevel:(long long)arg1;
- (bool)jarvisAudioLoggingEnabled;
- (void)markSATEnrollmentSuccessForLanguageCode:(id)arg1;
- (unsigned long long)maxNumLoggingFiles;
- (bool)myriadFileLoggingEnabled;
- (void)notifyUserVoiceProfileDownloadReadyForUser:(id)arg1 getData:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)notifyUserVoiceProfileUpdateReady;
- (void)notifyUserVoiceProfileUploadComplete;
- (void)notifyUserVoiceProfileUploadComplete:(id)arg1;
- (float)overwritingRemoteVADScore;
- (double)remoteVoiceTriggerDelayTime;
- (double)remoteVoiceTriggerEndpointTimeoutWithDefault:(double)arg1;
- (bool)secondPassAudioLoggingEnabled;
- (void)setAudioInjectionFilePath:(id)arg1;
- (void)setFileLoggingIsEnabled:(bool)arg1;
- (void)setFileLoggingLevel:(id)arg1;
- (void)setHearstFirstPassModelVersion:(id)arg1;
- (void)setHearstSecondPassModelVersion:(id)arg1;
- (void)setJarvisTriggerMode:(long long)arg1;
- (bool)shouldOverwriteRemoteVADScore;
- (bool)smartSiriVolumeSoftVolumeEnabled;
- (bool)speakerIdEnabled;
- (bool)twoShotNotificationEnabled;
- (void)uploadUserVoiceProfile:(id /* block */)arg1 completion:(id /* block */)arg2;
- (bool)useSiriActivationSPIForHomePod;
- (id)voiceTriggerAudioLogDirectory;
- (bool)voiceTriggerEnabled;
- (bool)voiceTriggerInCoreSpeech;

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
