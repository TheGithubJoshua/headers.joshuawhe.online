<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NFHardwareManager.h</title>
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

/PrivateFrameworks/NearField.framework/NFHardwareManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField (296.3)
 */

@interface NFHardwareManager : NSObject <NFHardwareManagerCallbacks, NSXPCConnectionDelegate> {
    NSXPCConnection * _connection;
    bool  _didPreWarm;
    NSMutableSet * _eventListeners;
    bool  _hasEventListener;
    unsigned int  _hwSupport;
    NSArray * _secureElements;
    NSDictionary * _secureElementsById;
    NSMutableSet * _sessions;
}

@property (readonly) NSUUID *blessedUser;
@property (readonly) NFHardwareControllerInfo *controllerInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBackgroundTagReadingAvailable;
@property (readonly) Class superclass;
@property (nonatomic) bool suspendBackgroundTagReading;

+ (id)sharedHardwareManager;

- (void)_connectIfNeeded;
- (void)actOnUserInitiatedSystemShutDown:(unsigned int)arg1 completion:(id /* block */)arg2;
- (bool)areFeaturesSupported:(unsigned long long)arg1 outError:(id*)arg2;
- (bool)areSessionsAllowed;
- (id)blessedUser;
- (id)boosterInfo;
- (unsigned int)checkUserBlessing:(id)arg1;
- (id)configureHeadlessFactoryMode:(bool)arg1;
- (id)controllerInfo;
- (id)controllerInfoWithError:(id*)arg1;
- (void)dealloc;
- (void)didInterruptXPCConnection:(id)arg1;
- (void)didInvalidateXPCConnection:(id)arg1;
- (id)disableHeadless;
- (id)enableHeadlessTestMode:(unsigned short)arg1;
- (bool)expressModesEnabled;
- (id)expressTransitIdentifier;
- (id)getBoosterInfo;
- (id)getControllerInfo;
- (id)getDieID;
- (id)getDieIDWithError:(id*)arg1;
- (bool)getHeadlessFactoryMode:(id*)arg1;
- (id)getHeadlessModeFlags:(unsigned int*)arg1;
- (unsigned int)getHwSupport;
- (id)getSecureElementInfo;
- (id)getUniqueFDRKey:(id*)arg1;
- (bool)hasCard;
- (id)hostEmulationLog;
- (id)init;
- (void)invalidateConnection;
- (bool)isBackgroundTagReadingAvailable;
- (bool)isExpressAppletTypeSupported:(unsigned char)arg1;
- (bool)isExpressModeSupported;
- (bool)isInRestrictedMode;
- (bool)preWarm;
- (id)pushSignedRF:(id)arg1;
- (unsigned int)queryHardwareSupport:(id*)arg1;
- (void)refreshSecureElements;
- (void)registerEventListener:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)rfSettings;
- (bool)secureElementBootHistory:(id*)arg1;
- (id)secureElementWithIdentifier:(id)arg1;
- (void)secureElementWithIdentifier:(id)arg1 didChangeRestrictedMode:(bool)arg2;
- (id)secureElements;
- (void)sessionDidEnd:(id)arg1;
- (void)setAuthorization:(id)arg1;
- (unsigned int)setBlessedUser:(id)arg1 keybagUUID:(id)arg2 withAuthorization:(id)arg3;
- (unsigned int)setBlessedUser:(id)arg1 withAuthorization:(id)arg2;
- (bool)setFieldDetectEnabled:(bool)arg1;
- (void)setSuspendBackgroundTagReading:(bool)arg1;
- (id)startContactlessPaymentSession:(id /* block */)arg1;
- (id)startContactlessSession:(id /* block */)arg1;
- (id)startContactlessUICCSession:(id /* block */)arg1;
- (id)startECommercePaymentSession:(id /* block */)arg1;
- (id)startFieldDetectSession:(id /* block */)arg1;
- (id)startLoyaltyAndContactlessPaymentSession:(id /* block */)arg1;
- (id)startNdefTagSession:(id /* block */)arg1;
- (id)startNdefTagSessionWithBluetoothLESecureOOBData:(id)arg1 callback:(id /* block */)arg2;
- (id)startPeerPaymentSession:(id /* block */)arg1;
- (id)startReaderSession:(id /* block */)arg1;
- (id)startSecureElementManagerSession:(id /* block */)arg1;
- (id)startSecureElementManagerSessionWithPriority:(id /* block */)arg1;
- (id)startSecureElementSession:(id)arg1 didStartCallback:(id /* block */)arg2;
- (id)startSesHatSession:(id /* block */)arg1;
- (id)startTrustSession:(id /* block */)arg1;
- (id)startValueAddedServiceSession:(id /* block */)arg1;
- (id)startValueAddedServiceSession:(id)arg1 callback:(id /* block */)arg2;
- (bool)suspendBackgroundTagReading;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)toggleGPIO:(unsigned short)arg1;
- (bool)triggerDelayedWake:(unsigned char)arg1;
- (void)unregisterEventListener:(id)arg1;
- (id)updateHWSupport;

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
