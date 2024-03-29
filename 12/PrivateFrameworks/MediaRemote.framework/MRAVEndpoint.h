<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MRAVEndpoint.h</title>
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

/PrivateFrameworks/MediaRemote.framework/MRAVEndpoint.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote (1)
 */

@interface MRAVEndpoint : NSObject {
    NSOperationQueue * _connectionHandlerOperationQueue;
    NSTimer * _connectionTimeoutTimer;
    long long  _connectionType;
    NSString * _localizedName;
    bool  _outputDevicesDidChangeNotificationScheduled;
    NSMutableArray * _pendingConnectionHandlers;
    bool  _proxyGroupPlayer;
    bool  _registeredForConnectionStateDidChangeNotifications;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) bool canModifyGroupMembership;
@property (nonatomic, readonly) long long connectionType;
@property (nonatomic, readonly) NSString *debugName;
@property (nonatomic, readonly) _MRAVEndpointDescriptorProtobuf *descriptor;
@property (nonatomic, readonly) MRAVOutputDevice *designatedGroupLeader;
@property (nonatomic, readonly) MRExternalDevice *externalDevice;
@property (nonatomic, readonly) NSDictionary *jsonEncodableDictionaryRepresentation;
@property (getter=isLocalEndpoint, nonatomic, readonly) bool localEndpoint;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, readonly) unsigned long long logicalOutputDeviceCount;
@property (nonatomic, readonly) NSArray *outputDeviceUIDs;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (getter=isProxyGroupPlayer, nonatomic) bool proxyGroupPlayer;
@property (nonatomic, readonly) NSString *shortDescription;
@property (nonatomic, retain) NSString *uniqueIdentifier;

+ (void)_modifyOutputDevices:(id)arg1 inGroup:(id)arg2 queue:(id)arg3 modifyDevices:(id /* block */)arg4 completion:(id /* block */)arg5;
+ (id)_notificationSerialQueue;
+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)arg1;

- (void).cxx_destruct;
- (void)_callAllCompletionHandlersWithError:(id)arg1;
- (void)_externalDeviceConnectionStateDidChangeNotification:(id)arg1;
- (id)_init;
- (void)_requestSharedAudioPresentationOutputContextModificationWithAddingDevices:(id)arg1 removingDevices:(id)arg2 settingDevices:(id)arg3 replyQueue:(id)arg4 completion:(id /* block */)arg5;
- (void)addOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(id /* block */)arg3;
- (bool)canModifyGroupMembership;
- (void)connectToExternalDeviceWithCompletion:(id /* block */)arg1;
- (long long)connectionType;
- (bool)containsOutputDevice:(id)arg1;
- (void)dealloc;
- (id)debugName;
- (id)description;
- (id)descriptor;
- (id)designatedGroupLeader;
- (bool)effectivelyEqual:(id)arg1;
- (id)externalDevice;
- (bool)isEqual:(id)arg1;
- (bool)isLocalEndpoint;
- (bool)isProxyGroupPlayer;
- (bool)isVolumeControlAvailable;
- (id)jsonEncodableDictionaryRepresentation;
- (id)localizedName;
- (unsigned long long)logicalOutputDeviceCount;
- (id)outputDeviceUIDs;
- (id)outputDeviceUIDsMatchingPredicate:(id /* block */)arg1;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)outputDevices;
- (id)outputDevicesMatchingPredicate:(id /* block */)arg1;
- (void)removeOutputDeviceFromParentGroup:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (void)removeOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)scheduleEndpointOutputDevicesDidChangeNotification;
- (void)setLocalizedName:(id)arg1;
- (void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)setOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)setProxyGroupPlayer:(bool)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)shortDescription;
- (id)uniqueIdentifier;
- (void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;

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
