<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PCPersistentInterfaceManager.h</title>
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

/PrivateFrameworks/PersistentConnection.framework/PCPersistentInterfaceManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection (1.0)
 */

@interface PCPersistentInterfaceManager : NSObject <CoreTelephonyClientDataDelegate, PCInterfaceMonitorDelegate> {
    int  _WWANContextIdentifier;
    NSString * _WWANInterfaceName;
    struct __CFSet { } * _WiFiAutoAssociationDelegates;
    PCSimpleTimer * _WiFiAutoAssociationDisableTimer;
    CoreTelephonyClient * _ctClient;
    bool  _ctIsWWANInHomeCountry;
    void * _ctServerConnection;
    CTXPCServiceSubscriptionContext * _currentDataSimContext;
    NSMapTable * _delegatesAndQueues;
    bool  _hasWWANStatusIndicator;
    NSTimer * _inCallWWANOverrideTimer;
    void * _interfaceAssertion;
    bool  _isInCall;
    bool  _isPowerStateDetectionSupported;
    bool  _isWWANInterfaceActivationPermitted;
    bool  _isWWANInterfaceDataActive;
    bool  _isWWANInterfaceInProlongedHighPowerState;
    bool  _isWWANInterfaceSuspended;
    bool  _isWWANInterfaceUp;
    bool  _isWakeOnWiFiEnabled;
    bool  _isWakeOnWiFiSupported;
    double  _lastActivationTime;
    NSRecursiveLock * _lock;
    bool  _shouldOverrideOnCallBehavior;
    struct __CFSet { } * _wakeOnWiFiDelegates;
    PCSimpleTimer * _wakeOnWiFiDisableTimer;
}

@property (readonly) NSString *WWANInterfaceName;
@property (readonly) bool areAllNetworkInterfacesDisabled;
@property (nonatomic, readonly) NSString *currentLinkQualityString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool doesWWANInterfaceExist;
@property (readonly) unsigned long long hash;
@property (readonly) bool isInCall;
@property (readonly) bool isInternetReachable;
@property (readonly) bool isInternetReachableViaWiFi;
@property (readonly) bool isPowerStateDetectionSupported;
@property (readonly) bool isWWANBetterThanWiFi;
@property (readonly) bool isWWANInHomeCountry;
@property (readonly) bool isWWANInterfaceActivationPermitted;
@property (readonly) bool isWWANInterfaceInProlongedHighPowerState;
@property (readonly) bool isWWANInterfaceSuspended;
@property (readonly) bool isWWANInterfaceUp;
@property (readonly) bool isWakeOnWiFiSupported;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)WWANInterfaceName;
- (void)_adjustWakeOnWiFi;
- (void)_adjustWakeOnWiFiLocked;
- (void)_adjustWiFiAutoAssociation;
- (void)_adjustWiFiAutoAssociationLocked;
- (bool)_allowBindingToWWAN;
- (void)_clearInCallWWANOverrideTimerLocked;
- (void)_createCTConnection;
- (void)_ctConnectionAttempt;
- (void)_inCallWWANOverrideTimerFired;
- (bool)_isCellularCall:(struct __CTCall { }*)arg1;
- (bool)_isCurrentDataSimContextLocked:(id)arg1;
- (bool)_isInternetReachableLocked;
- (bool)_isWWANInHomeCountryLocked;
- (bool)_isWiFiUsable;
- (void)_mainThreadCTConnectionAttempt;
- (id)_nonCellularMonitor;
- (void)_processCallStatusChanged:(id)arg1;
- (void)_processConnectionStatusLocked:(id)arg1;
- (void)_processCurrentDataSimChangedLocked:(id)arg1;
- (void)_processDataStatusLocked:(id)arg1;
- (void)_scheduleCalloutsForSelector:(SEL)arg1;
- (void)_updateCTIsWWANInHomeCountry:(bool)arg1 isWWANInterfaceDataActive:(bool)arg2;
- (void)_updateWWANInterfaceAssertions;
- (void)_updateWWANInterfaceAssertionsLocked;
- (void)_updateWWANInterfaceUpState;
- (void)_updateWWANInterfaceUpStateLocked;
- (bool)_wantsWWANInterfaceAssertion;
- (bool)_wantsWakeOnWiFiEnabled;
- (bool)_wifiIsPoorLinkQuality;
- (bool)_wwanIsPoorLinkQuality;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (bool)areAllNetworkInterfacesDisabled;
- (void)bindCFStream:(struct __CFReadStream { }*)arg1 toWWANInterface:(bool)arg2;
- (void)bindCFStreamToWWANInterface:(struct __CFReadStream { }*)arg1;
- (void)connectionActivationError:(id)arg1 connection:(int)arg2 error:(int)arg3;
- (void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3;
- (void)currentDataSimChanged:(id)arg1;
- (id)currentLinkQualityString;
- (void)cutWiFiManagerDeviceAttached:(id)arg1;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (void)dealloc;
- (bool)doesWWANInterfaceExist;
- (void)enableWakeOnWiFi:(bool)arg1 forDelegate:(id)arg2;
- (void)enableWiFiAutoAssociation:(bool)arg1 forDelegate:(id)arg2;
- (void)handleMachMessage:(void*)arg1;
- (id)init;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceReachabilityChanged:(id)arg1;
- (bool)isInCall;
- (bool)isInternetReachable;
- (bool)isInternetReachableViaWiFi;
- (bool)isPowerStateDetectionSupported;
- (bool)isWWANBetterThanWiFi;
- (bool)isWWANInHomeCountry;
- (bool)isWWANInterfaceActivationPermitted;
- (bool)isWWANInterfaceInProlongedHighPowerState;
- (bool)isWWANInterfaceSuspended;
- (bool)isWWANInterfaceUp;
- (bool)isWakeOnWiFiSupported;
- (void)removeDelegate:(id)arg1;
- (id)urlConnectionBoundToWWANInterface:(bool)arg1 withRequest:(id)arg2 delegate:(id)arg3 usesCache:(bool)arg4 maxContentLength:(long long)arg5 startImmediately:(bool)arg6 connectionProperties:(id)arg7;
- (id)urlConnectionBoundToWWANInterfaceWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(bool)arg3 maxContentLength:(long long)arg4 startImmediately:(bool)arg5 connectionProperties:(id)arg6;

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
