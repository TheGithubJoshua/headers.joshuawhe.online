<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMCameraProfile.h</title>
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

/Frameworks/HomeKit.framework/HMCameraProfile.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit (484.7.17.1)
 */

@interface HMCameraProfile : HMAccessoryProfile <HFUserNotificationServiceSettingsProviding> {
    HMCameraAudioControl * _microphoneControl;
    HMCameraSettingsControl * _settingsControl;
    HMCameraSnapshotControl * _snapshotControl;
    HMCameraAudioControl * _speakerControl;
    HMCameraStreamControl * _streamControl;
}

@property (nonatomic, readonly) _HMCameraProfile *cameraProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFCameraManager *hf_cameraManager;
@property (nonatomic, readonly, copy) HFUserNotificationServiceSettings *hf_userNotificationSettings;
@property (nonatomic, retain) HMCameraAudioControl *microphoneControl;
@property (nonatomic, retain) HMCameraSettingsControl *settingsControl;
@property (nonatomic, retain) HMCameraSnapshotControl *snapshotControl;
@property (nonatomic, retain) HMCameraAudioControl *speakerControl;
@property (nonatomic, retain) HMCameraStreamControl *streamControl;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)cameraProfile;
- (id)initWithCameraProfile:(id)arg1;
- (id)microphoneControl;
- (id)services;
- (void)setMicrophoneControl:(id)arg1;
- (void)setSettingsControl:(id)arg1;
- (void)setSnapshotControl:(id)arg1;
- (void)setSpeakerControl:(id)arg1;
- (void)setStreamControl:(id)arg1;
- (id)settingsControl;
- (id)snapshotControl;
- (id)speakerControl;
- (id)streamControl;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)_hf_associatedDoorbellService;
- (id)hf_cameraManager;
- (id)hf_updateUserNotificationSettings:(id)arg1;
- (id)hf_userNotificationSettings;

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