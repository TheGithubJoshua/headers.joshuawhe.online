<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CUSystemMonitorImp.h</title>
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

/PrivateFrameworks/CoreUtils.framework/CUSystemMonitorImp.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils (592.2)
 */

@interface CUSystemMonitorImp : NSObject <CXCallObserverDelegate, FMFSessionDelegate> {
    int  _activeCallCount;
    struct { 
        unsigned char bytes[6]; 
    }  _bluetoothAddress48;
    NSData * _bluetoothAddressData;
    CUBluetoothClient * _bluetoothClient;
    CXCallObserver * _callObserver;
    int  _connectedCallCount;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _familyFailed;
    NSArray * _familyMembers;
    bool  _familyObserving;
    CUSystemMonitor * _familyPrimaryIPMonitor;
    int  _familyUpdatedToken;
    int  _firstUnlockToken;
    bool  _firstUnlocked;
    int  _fmfDevicesChangedToken;
    bool  _manateeAvailable;
    bool  _manateeObserving;
    int  _meDeviceChangedToken;
    NSString * _meDeviceFMFDeviceID;
    NSString * _meDeviceIDSDeviceID;
    bool  _meDeviceIsMe;
    NSString * _meDeviceName;
    int  _meDeviceRetryToken;
    bool  _meDeviceValid;
    struct NSMutableSet { Class x1; } * _monitors;
    unsigned int  _netFlags;
    CUNetInterfaceMonitor * _netInterfaceMonitor;
    int  _powerSourceToken;
    bool  _powerUnlimited;
    bool  _primaryAppleIDActive;
    bool  _primaryAppleIDIsHSA2;
    int  _primaryAppleIDNotifyToken;
    bool  _primaryAppleIDObserving;
    union { 
        struct sockaddr { 
            unsigned char sa_len; 
            unsigned char sa_family; 
            BOOL sa_data[14]; 
        } sa; 
        struct sockaddr_in { 
            unsigned char sin_len; 
            unsigned char sin_family; 
            unsigned short sin_port; 
            struct in_addr { 
                unsigned int s_addr; 
            } sin_addr; 
            BOOL sin_zero[8]; 
        } v4; 
        struct sockaddr_in6 { 
            unsigned char sin6_len; 
            unsigned char sin6_family; 
            unsigned short sin6_port; 
            unsigned int sin6_flowinfo; 
            struct in6_addr { 
                union { 
                    unsigned char __u6_addr8[16]; 
                    unsigned short __u6_addr16[8]; 
                    unsigned int __u6_addr32[4]; 
                } __u6_addr; 
            } sin6_addr; 
            unsigned int sin6_scope_id; 
        } v6; 
    }  _primaryIPv4Addr;
    union { 
        struct sockaddr { 
            unsigned char sa_len; 
            unsigned char sa_family; 
            BOOL sa_data[14]; 
        } sa; 
        struct sockaddr_in { 
            unsigned char sin_len; 
            unsigned char sin_family; 
            unsigned short sin_port; 
            struct in_addr { 
                unsigned int s_addr; 
            } sin_addr; 
            BOOL sin_zero[8]; 
        } v4; 
        struct sockaddr_in6 { 
            unsigned char sin6_len; 
            unsigned char sin6_family; 
            unsigned short sin6_port; 
            unsigned int sin6_flowinfo; 
            struct in6_addr { 
                union { 
                    unsigned char __u6_addr8[16]; 
                    unsigned short __u6_addr16[8]; 
                    unsigned int __u6_addr32[4]; 
                } __u6_addr; 
            } sin6_addr; 
            unsigned int sin6_scope_id; 
        } v6; 
    }  _primaryIPv6Addr;
    NSString * _primaryNetworkSignature;
    struct { 
        unsigned char bytes[6]; 
    }  _rotatingIdentifier48;
    NSData * _rotatingIdentifierData;
    NSObject<OS_dispatch_source> * _rotatingIdentifierTimer;
    int  _screenBlankedToken;
    bool  _screenLocked;
    int  _screenLockedToken;
    bool  _screenOn;
    bool  _screenSaverActive;
    int  _systemLockState;
    int  _systemLockStateToken;
    unsigned int  _wifiFlags;
    CUWiFiManager * _wifiManager;
    int  _wifiState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_activeCallCountUnached;
- (void)_bluetoothAddressMonitorStart;
- (void)_bluetoothAddressMonitorStop;
- (void)_callMonitorStart;
- (void)_callMonitorStop;
- (int)_connectedCallCountUnached;
- (void)_familyGetMembers:(bool)arg1;
- (void)_familyMonitorStart;
- (void)_familyMonitorStop;
- (void)_familyNetworkChanged;
- (void)_familyUpdated:(id)arg1;
- (void)_firstUnlockMonitorCheck:(bool)arg1;
- (void)_firstUnlockMonitorStart;
- (void)_firstUnlockMonitorStop;
- (bool)_hasMonitorPassingTest:(id /* block */)arg1;
- (void)_invokeBlock:(id /* block */)arg1 passingTest:(id /* block */)arg2;
- (void)_manateeChanged:(id)arg1;
- (void)_manateeMonitorStart;
- (void)_manateeMonitorStop;
- (void)_meDeviceCheckCompletion:(id)arg1 error:(id)arg2 firstCheck:(bool)arg3;
- (void)_meDeviceCheckStart:(bool)arg1;
- (void)_meDeviceMonitorStart;
- (void)_meDeviceMonitorStop;
- (void)_netInterfaceMonitorStart;
- (void)_netInterfaceMonitorStop;
- (void)_powerUnlimitedMonitorStart;
- (void)_powerUnlimitedMonitorStop;
- (id)_primaryAppleIDAccount;
- (void)_primaryAppleIDChanged:(id)arg1;
- (void)_primaryAppleIDMonitorStart;
- (void)_primaryAppleIDMonitorStop;
- (void)_rotatingIdentifierMonitorStart;
- (void)_rotatingIdentifierMonitorStop;
- (void)_rotatingIdentifierTimerFired;
- (void)_screenChanged:(bool)arg1;
- (void)_screenLockedChanged;
- (void)_screenLockedMonitorStart;
- (void)_screenLockedMonitorStop;
- (void)_screenOnMonitorStart;
- (void)_screenOnMonitorStop;
- (void)_screenSaverMonitorStart;
- (void)_screenSaverMonitorStop;
- (void)_systemLockStateMonitorStart;
- (void)_systemLockStateMonitorStop;
- (void)_systemLockStateUpdate:(bool)arg1;
- (void)_update;
- (void)_wifiMonitorStart;
- (void)_wifiMonitorStateChanged:(bool)arg1;
- (void)_wifiMonitorStop;
- (void)addMonitor:(id)arg1 completion:(id /* block */)arg2;
- (void)callObserver:(id)arg1 callChanged:(id)arg2;
- (id)init;
- (void)removeMonitor:(id)arg1;
- (void)updateWithQueue:(id)arg1 completion:(id /* block */)arg2;

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
