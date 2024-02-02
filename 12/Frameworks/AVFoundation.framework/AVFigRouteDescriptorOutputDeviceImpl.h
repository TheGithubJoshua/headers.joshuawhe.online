<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVFigRouteDescriptorOutputDeviceImpl.h</title>
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

/Frameworks/AVFoundation.framework/AVFigRouteDescriptorOutputDeviceImpl.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation (1550.4)
 */

@interface AVFigRouteDescriptorOutputDeviceImpl : NSObject <AVOutputDeviceImpl> {
    AVOutputDevice * _parentDevice;
    struct __CFDictionary { } * _routeDescriptor;
    struct OpaqueFigRouteDiscoverer { } * _routeDiscoverer;
    <AVFigRoutingContextFactory> * _routingContextFactory;
    bool  _useRouteConfigUpdatedNotification;
    struct OpaqueFigVolumeControllerState { } * _volumeController;
    AVWeakReference * _weakObserver;
}

@property (nonatomic, readonly, copy) NSString *ID;
@property (nonatomic, readonly) NSDictionary *airPlayProperties;
@property (nonatomic, readonly) bool automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property (nonatomic, readonly) NSNumber *batteryLevel;
@property (nonatomic, readonly) bool canAccessAppleMusic;
@property (nonatomic, readonly) bool canAccessRemoteAssets;
@property (nonatomic, readonly) bool canAccessiCloudMusicLibrary;
@property (nonatomic, readonly) bool canBeGroupLeader;
@property (nonatomic, readonly) bool canBeGrouped;
@property (nonatomic, readonly) bool canCommunicateWithAllLogicalDeviceMembers;
@property (nonatomic, readonly) bool canFetchMediaDataFromSender;
@property (nonatomic, readonly) bool canPlayEncryptedProgressiveDownloadAssets;
@property (nonatomic, readonly) bool canRelayCommunicationChannel;
@property (readonly) bool canSetVolume;
@property (nonatomic, readonly) NSNumber *caseBatteryLevel;
@property (nonatomic, readonly, copy) NSArray *connectedPairedDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceFeatures;
@property (nonatomic, readonly) long long deviceSubType;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) NSString *firmwareVersion;
@property (nonatomic, readonly) bool groupContainsGroupLeader;
@property (nonatomic, readonly, copy) NSString *groupID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSData *identifyingMACAddress;
@property (getter=isInUseByPairedDevice, nonatomic, readonly) bool inUseByPairedDevice;
@property (nonatomic, readonly) bool isGroupLeader;
@property (nonatomic, readonly) bool isLogicalDeviceLeader;
@property (nonatomic, readonly) NSNumber *leftBatteryLevel;
@property (nonatomic, readonly) NSString *logicalDeviceID;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly, copy) NSString *modelID;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool onlyAllowsConnectionsFromPeersInHomeGroup;
@property AVOutputDevice *parentOutputDevice;
@property (nonatomic, readonly) bool participatesInGroupPlayback;
@property (nonatomic, readonly) bool presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property (nonatomic, readonly) bool requiresAuthorization;
@property (nonatomic, readonly) NSNumber *rightBatteryLevel;
@property (nonatomic, readonly) struct __CFDictionary { }*routeDescriptor;
@property (nonatomic, readonly) NSString *serialNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsBufferedAirPlay;
@property (readonly) float volume;

+ (void)initialize;

- (void).cxx_destruct;
- (id)ID;
- (void)_canSetEndpointVolumeDidChangeForEndpointWithID:(struct __CFString { }*)arg1;
- (void)_volumeDidChangeForEndpointWithID:(struct __CFString { }*)arg1;
- (id)airPlayProperties;
- (bool)automaticallyAllowsConnectionsFromPeersInHomeGroup;
- (id)batteryLevel;
- (bool)canAccessAppleMusic;
- (bool)canAccessRemoteAssets;
- (bool)canAccessiCloudMusicLibrary;
- (bool)canBeGroupLeader;
- (bool)canBeGrouped;
- (bool)canCommunicateWithAllLogicalDeviceMembers;
- (bool)canFetchMediaDataFromSender;
- (bool)canPlayEncryptedProgressiveDownloadAssets;
- (bool)canRelayCommunicationChannel;
- (bool)canSetVolume;
- (id)caseBatteryLevel;
- (void)configureUsingBlock:(id /* block */)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)connectedPairedDevices;
- (void)dealloc;
- (unsigned long long)deviceFeatures;
- (long long)deviceSubType;
- (long long)deviceType;
- (id)firmwareVersion;
- (bool)groupContainsGroupLeader;
- (id)groupID;
- (unsigned long long)hash;
- (id)identifyingMACAddress;
- (id)init;
- (id)initWithRouteDescriptor:(struct __CFDictionary { }*)arg1 routeDiscoverer:(struct OpaqueFigRouteDiscoverer { }*)arg2 volumeController:(struct OpaqueFigVolumeControllerState { }*)arg3 routingContextFactory:(id)arg4 useRouteConfigUpdatedNotification:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isGroupLeader;
- (bool)isInUseByPairedDevice;
- (bool)isLogicalDeviceLeader;
- (id)leftBatteryLevel;
- (id)logicalDeviceID;
- (id)manufacturer;
- (id)modelID;
- (id)name;
- (bool)onlyAllowsConnectionsFromPeersInHomeGroup;
- (id)parentOutputDevice;
- (bool)participatesInGroupPlayback;
- (bool)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
- (bool)requiresAuthorization;
- (id)rightBatteryLevel;
- (struct __CFDictionary { }*)routeDescriptor;
- (id)serialNumber;
- (void)setParentOutputDevice:(id)arg1;
- (void)setSecondDisplayEnabled:(bool)arg1;
- (void)setVolume:(float)arg1;
- (bool)supportsBufferedAirPlay;
- (float)volume;

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