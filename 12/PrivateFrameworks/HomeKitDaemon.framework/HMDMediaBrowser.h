<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDMediaBrowser.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDMediaBrowser.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDMediaBrowser : HMFObject <HMFLogging, HMFTimerDelegate> {
    NSMutableSet * _accessoryAdvertisements;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMDMediaBrowserDelegate> * _delegate;
    bool  _discoverAssociatedAccessories;
    bool  _discoverUnassociatedAccessories;
    HMFTimer * _discoveryPollTimer;
    void * _discoverySession;
    void * _discoverySessionCallbackToken;
    HMDHomeManager * _homeManager;
    NSMutableSet * _identifiersOfAssociatedMediaAccessories;
    NSMutableSet * _mediaEndpoints;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _updateAvailableOutputDevices;
}

@property (readonly, copy) NSArray *accessoryAdvertisements;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) HMDUnassociatedMediaAccessory *currentAccessory;
@property (readonly, copy) NSString *debugDescription;
@property <HMDMediaBrowserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMFTimer *discoveryPollTimer;
@property (nonatomic, readonly) void*discoverySession;
@property (nonatomic) void*discoverySessionCallbackToken;
@property (readonly) unsigned long long hash;
@property HMDHomeManager *homeManager;
@property (nonatomic, retain) NSMutableSet *identifiersOfAssociatedMediaAccessories;
@property (nonatomic, retain) NSMutableSet *mediaEndpoints;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic) bool updateAvailableOutputDevices;

+ (id)advertisementsFromOutputDevices:(struct __CFArray { }*)arg1;
+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_addAdvertisements:(id)arg1;
- (void)_handleAvailableOutputDevices:(struct __CFArray { }*)arg1;
- (void)_notifyDelegateOfAddedAdvertisements:(id)arg1;
- (void)_notifyDelegateOfRemovedAdvertisements:(id)arg1;
- (void)_notifyDelegateOfUpdatedEndpoints:(id)arg1;
- (void)_removeAdvertisements:(id)arg1;
- (void)_startDiscoveringAccessories;
- (void)_stopDiscoveringAccessories;
- (void)_updateSessionForAccessory:(id)arg1;
- (void)_updateSessionsForAccessories:(id)arg1;
- (id)accessoryAdvertisements;
- (void)checkForUpdatedAvailableOutputDevices:(struct __CFArray { }*)arg1;
- (id)clientQueue;
- (id)currentAccessory;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (void)deregisterAccessories:(id)arg1;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1 additionalDescription:(id)arg2;
- (id)discoveryPollTimer;
- (void*)discoverySession;
- (void*)discoverySessionCallbackToken;
- (id)dumpDescription;
- (id)homeManager;
- (id)identifiersOfAssociatedMediaAccessories;
- (id)initWithHomeManager:(id)arg1;
- (id)mediaEndpoints;
- (id)messageDispatcher;
- (id)propertyQueue;
- (void)registerAccessories:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDiscoveryPollTimer:(id)arg1;
- (void)setDiscoverySessionCallbackToken:(void*)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setIdentifiersOfAssociatedMediaAccessories:(id)arg1;
- (void)setMediaEndpoints:(id)arg1;
- (void)setUpdateAvailableOutputDevices:(bool)arg1;
- (id)shortDescription;
- (void)startDiscoveringAssociatedAccessories;
- (void)startDiscoveringUnassociatedAccessories;
- (void)stopDiscoveringAssociatedAccessories;
- (void)stopDiscoveringUnassociatedAccessories;
- (void)timerDidFire:(id)arg1;
- (id)unassociatedAccessoryFromAdvertisementData:(id)arg1;
- (bool)updateAvailableOutputDevices;
- (void)updateSessionsForAccessories:(id)arg1;

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