<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPVolumeControllerRouteDataSource.h</title>
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

/Frameworks/MediaPlayer.framework/MPVolumeControllerRouteDataSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPVolumeControllerRouteDataSource : NSObject <MPVolumeControllerDataSource> {
    float  _EUVolumeLimit;
    <MPVolumeControllerDataSourceDelegate> * _delegate;
    MPAVRoute * _groupRoute;
    bool  _hasPendingVolume;
    bool  _hasVolumeInFlight;
    bool  _muted;
    MPAVRoute * _outputDeviceRoute;
    float  _pendingVolume;
    float  _volume;
    bool  _volumeCapabilitiesInitialized;
    bool  _volumeControlAvailable;
    bool  _volumeInitialized;
    bool  _volumeWarningEnabled;
    long long  _volumeWarningState;
}

@property (nonatomic, readonly) float EUVolumeLimit;
@property (nonatomic, readonly) bool applicationShouldOverrideHardwareVolumeBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPVolumeControllerDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MPAVRoute *groupRoute;
@property (readonly) unsigned long long hash;
@property (getter=isMuted, nonatomic) bool muted;
@property (nonatomic, retain) MPAVRoute *outputDeviceRoute;
@property (readonly) Class superclass;
@property (nonatomic) float volume;
@property (getter=isVolumeControlAvailable, nonatomic, readonly) bool volumeControlAvailable;
@property (nonatomic, readonly, copy) NSString *volumeControlLabel;
@property (nonatomic, readonly) bool volumeWarningEnabled;
@property (nonatomic, readonly) long long volumeWarningState;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (void)_routeVolumeControlCapabilitiesDidChangeNotification:(id)arg1;
- (void)_routeVolumeDidChangeNotification:(id)arg1;
- (void)_sendVolumeButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 down:(bool)arg3;
- (void)_setPendingVolumeIfNeeded;
- (void)_updateVolumeControlCapabilities:(unsigned int)arg1;
- (void)adjustVolumeValue:(float)arg1;
- (bool)applicationShouldOverrideHardwareVolumeBehavior;
- (void)beginDecreasingRelativeVolume;
- (void)beginIncreasingRelativeVolume;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endDecreasingRelativeVolume;
- (void)endIncreasingRelativeVolume;
- (void)getVolumeValueWithCompletion:(id /* block */)arg1;
- (id)groupRoute;
- (id)initWithGroupRoute:(id)arg1 outputDeviceRoute:(id)arg2;
- (void)initializeVolume;
- (bool)isMuted;
- (bool)isVolumeControlAvailable;
- (id)outputDeviceRoute;
- (void)reload;
- (void)setDelegate:(id)arg1;
- (void)setGroupRoute:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setOutputDeviceRoute:(id)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (id)volumeControlLabel;
- (bool)volumeWarningEnabled;
- (long long)volumeWarningState;

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
