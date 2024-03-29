<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVOutputContext.h</title>
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

/Frameworks/AVFoundation.framework/AVOutputContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation (1550.4)
 */

@interface AVOutputContext : NSObject <NSSecureCoding> {
    AVOutputContextInternal * _outputContext;
}

@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) struct OpaqueFigRoutingContext { }*figRoutingContext;

+ (id)allOutputContextImplClasses;
+ (id)auxiliaryOutputContext;
+ (id /* block */)commChannelUUIDCommunicationChannelManagerCreator;
+ (id)currentRoutingContextFactory;
+ (id /* block */)defaultCommunicationChannelManagerCreator;
+ (Class)defaultOutputContextImplClass;
+ (id)iTunesAudioContext;
+ (void)initialize;
+ (id)outputContext;
+ (bool)outputContextExistsWithRemoteOutputDevice;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1;
+ (id)outputContextForControllingOutputDeviceGroupWithID:(id)arg1 options:(id)arg2;
+ (id)outputContextForID:(id)arg1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)arg1;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)arg1 communicationChannelManagerCreator:(id /* block */)arg2;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)arg1 outputDeviceTranslator:(id)arg2;
+ (id)outputContextWithFigRoutingContextCreator:(id /* block */)arg1 volumeController:(struct OpaqueFigVolumeControllerState { }*)arg2;
+ (id)preferredOutputDevicesForAudioSession:(id)arg1;
+ (void)resetOutputDeviceForAllOutputContexts;
+ (void)resetRoutingContextFactoryForQueue:(id)arg1;
+ (void)setRoutingContextFactory:(id)arg1 forQueue:(id)arg2;
+ (id)sharedAudioPresentationOutputContext;
+ (id)sharedSystemAudioContext;
+ (id)sharedSystemScreenContext;
+ (bool)supportsSecureCoding;

- (id)ID;
- (void)addOutputDevice:(id)arg1;
- (void)addOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (int)applicationProcessID;
- (id)associatedAudioDeviceID;
- (bool)canSetVolume;
- (id)communicationChannelDelegate;
- (id)contextID;
- (void)dealloc;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (struct OpaqueFigRoutingContext { }*)figRoutingContext;
- (unsigned long long)hash;
- (id)impl;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOutputContextImpl:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)muteAllOutputDevicesWithCompletionHandler:(id /* block */)arg1;
- (id)openCommunicationChannelWithOptions:(id)arg1 error:(id*)arg2;
- (id)outgoingCommunicationChannel;
- (void)outputContextImpl:(id)arg1 didChangeOutputDeviceWithInitiator:(id)arg2;
- (void)outputContextImpl:(id)arg1 didChangeOutputDevicesWithInitiator:(id)arg2;
- (void)outputContextImpl:(id)arg1 didCloseCommunicationChannel:(id)arg2;
- (void)outputContextImpl:(id)arg1 didExpireWithReplacement:(id)arg2;
- (void)outputContextImpl:(id)arg1 didInitiateDestinationChange:(id)arg2;
- (void)outputContextImpl:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3;
- (void)outputContextImplDidChangeCanSetVolume:(id)arg1;
- (void)outputContextImplDidChangeGlobalOutputDeviceConfiguration:(id)arg1;
- (void)outputContextImplDidChangeProvidesControlForAllVolumeFeatures:(id)arg1;
- (void)outputContextImplDidChangeVolume:(id)arg1;
- (void)outputContextImplOutgoingCommunicationChannelDidBecomeAvailable:(id)arg1;
- (id)outputContextType;
- (id)outputDevice;
- (unsigned long long)outputDeviceFeatures;
- (id)outputDevices;
- (void)pausePlaybackOnAllOutputDevicesWithCompletionHandler:(id /* block */)arg1;
- (bool)providesControlForAllVolumeFeatures;
- (void)removeOutputDevice:(id)arg1;
- (void)setApplicationProcessID:(int)arg1;
- (void)setCommunicationChannelDelegate:(id)arg1;
- (bool)setOutputDevice:(id)arg1 forFeatures:(unsigned long long)arg2;
- (void)setOutputDevice:(id)arg1 options:(id)arg2;
- (void)setOutputDevice:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setOutputDevices:(id)arg1;
- (void)setOutputDevices:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setVolume:(float)arg1;
- (bool)supportsMultipleOutputDevices;
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
