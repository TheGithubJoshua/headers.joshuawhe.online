<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IMSystemMonitor.h</title>
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

/PrivateFrameworks/IMFoundation.framework/IMSystemMonitor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation (1000)
 */

@interface IMSystemMonitor : NSObject {
    bool  _active;
    bool  _backingUp;
    int  _dataProtectionState;
    NSDate * _dateScreenLightLastChanged;
    NSDate * _dateSystemLockLastChanged;
    double  _delayTime;
    NSMutableArray * _earlyListeners;
    bool  _idleOverride;
    NSDate * _idleStart;
    bool  _inBackground;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _ivarLock;
    NSMutableArray * _listeners;
    bool  _receivesMemoryWarnings;
    long long  _resignActiveCount;
    bool  _screenLit;
    bool  _screenLocked;
    bool  _screensaverActive;
    bool  _switchedOut;
    bool  _systemLocked;
    NSTimer * _timer;
    bool  _underFirstLock;
    NSString * _userID;
    int  _userIdleToken;
    bool  _usesPowerNotifications;
    bool  _usesSystemIdleState;
    bool  _watchesDataProtectionLockState;
    bool  _watchesScreenLightState;
    bool  _watchesSystemLockState;
    bool  _willSleep;
}

@property (nonatomic) int _dataProtectionState;
@property (nonatomic) double _delayTime;
@property (nonatomic, retain) NSMutableArray *_earlyListeners;
@property (nonatomic) bool _idleOverride;
@property (nonatomic, retain) NSDate *_idleStart;
@property (nonatomic, retain) NSMutableArray *_listeners;
@property (nonatomic, retain) NSTimer *_timer;
@property (nonatomic) bool _underFirstLock;
@property (nonatomic, retain) NSString *_userID;
@property (nonatomic, readonly, retain) NSDate *dateScreenLightLastChanged;
@property (nonatomic, readonly, retain) NSDate *dateSystemLockLastChanged;
@property (setter=setActive:, nonatomic) bool isActive;
@property (nonatomic, readonly) bool isBackingUp;
@property (nonatomic) bool isFastUserSwitched;
@property (nonatomic, readonly) bool isInBackground;
@property (nonatomic, readonly) bool isScreenLit;
@property (nonatomic, readonly) bool isScreenLocked;
@property (nonatomic, readonly) bool isScreenSaverActive;
@property (nonatomic, readonly) bool isSetup;
@property (nonatomic, readonly) bool isSystemIdle;
@property (nonatomic, readonly) bool isSystemLocked;
@property (nonatomic, readonly) bool isUnderDataProtectionLock;
@property (nonatomic, readonly) bool isUnderFirstDataProtectionLock;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; } ivarLock;
@property (nonatomic) bool receivesMemoryWarnings;
@property (nonatomic) long long resignActiveCount;
@property (nonatomic, readonly) double systemIdleTime;
@property (nonatomic, readonly) bool systemIsShuttingDown;
@property (nonatomic, readonly) bool systemIsSleeping;
@property (nonatomic) int userIdleToken;
@property (nonatomic) bool usesPowerNotifications;
@property (nonatomic) bool usesSystemIdleState;
@property (nonatomic) bool watchesDataProtectionLockState;
@property (nonatomic) bool watchesScreenLightState;
@property (nonatomic) bool watchesSystemLockState;

+ (id)sharedInstance;

- (void)_addEarlyListener:(id)arg1;
- (void)_alreadyLocked_clearIdleTimer;
- (bool)_alreadyLocked_isSystemIdle;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_armIdleTimer;
- (void)_checkIdleTime:(id)arg1;
- (void)_checkRestoredFromBackup;
- (void)_clearIdleTimer;
- (int)_dataProtectionState;
- (double)_delayTime;
- (void)_deliverNotificationSelector:(SEL)arg1;
- (bool)_deviceStillUnderFirstLock;
- (id)_earlyListeners;
- (void)_forceResumed;
- (void)_forceSuspended;
- (void)_handleLoginWindowNotification:(id)arg1;
- (bool)_idleOverride;
- (id)_idleStart;
- (bool)_isUnderDataProtectionLockForState:(int)arg1;
- (id)_listeners;
- (void)_notificationCenterDidDisappear:(id)arg1;
- (void)_notificationCenterWillAppear:(id)arg1;
- (void)_overrideAndDisableIdleTimer:(bool)arg1;
- (void)_postScreenLocked;
- (void)_postScreenSaverStarted;
- (void)_receivedMemoryNotification;
- (void)_registerForLoginWindowNotifications;
- (void)_registerForRestoreNotifications;
- (void)_removeEarlyListener:(id)arg1;
- (void)_restoreDidStart;
- (void)_restoreDidStop;
- (void)_resume:(id)arg1;
- (void)_resumeEventsOnly:(id)arg1;
- (void)_screenLocked:(id)arg1;
- (void)_screenSaverStarted:(id)arg1;
- (void)_screenSaverStopped:(id)arg1;
- (void)_screenUnlocked:(id)arg1;
- (void)_setDataProtectionLockState:(int)arg1;
- (void)_setIdleState:(bool)arg1;
- (void)_setSystemLockState:(bool)arg1;
- (void)_setSystemScreenState:(bool)arg1;
- (void)_setupStateChanged;
- (void)_suspend:(id)arg1;
- (void)_suspendEventsOnly:(id)arg1;
- (void)_systemDidWake;
- (void)_systemWillShutdown;
- (void)_systemWillSleep;
- (id)_timer;
- (bool)_underFirstLock;
- (void)_unregisterForLoginWindowNotifications;
- (void)_unregisterForRestoreNotifications;
- (void)_updateIdleState;
- (id)_userID;
- (void)addListener:(id)arg1;
- (id)dateScreenLightLastChanged;
- (id)dateSystemLockLastChanged;
- (void)dealloc;
- (id)init;
- (bool)isActive;
- (bool)isBackingUp;
- (bool)isFastUserSwitched;
- (bool)isInBackground;
- (bool)isScreenLit;
- (bool)isScreenLocked;
- (bool)isScreenSaverActive;
- (bool)isSetup;
- (bool)isSystemIdle;
- (bool)isSystemLocked;
- (bool)isUnderDataProtectionLock;
- (bool)isUnderFirstDataProtectionLock;
- (struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })ivarLock;
- (bool)receivesMemoryWarnings;
- (void)removeListener:(id)arg1;
- (long long)resignActiveCount;
- (void)setActive:(bool)arg1;
- (void)setIsFastUserSwitched:(bool)arg1;
- (void)setIvarLock:(struct _opaque_pthread_mutex_t { long long x1; BOOL x2[56]; })arg1;
- (void)setReceivesMemoryWarnings:(bool)arg1;
- (void)setResignActiveCount:(long long)arg1;
- (void)setUserIdleToken:(int)arg1;
- (void)setUsesPowerNotifications:(bool)arg1;
- (void)setUsesSystemIdleState:(bool)arg1;
- (void)setWatchesDataProtectionLockState:(bool)arg1;
- (void)setWatchesScreenLightState:(bool)arg1;
- (void)setWatchesSystemLockState:(bool)arg1;
- (void)set_dataProtectionState:(int)arg1;
- (void)set_delayTime:(double)arg1;
- (void)set_earlyListeners:(id)arg1;
- (void)set_idleOverride:(bool)arg1;
- (void)set_idleStart:(id)arg1;
- (void)set_listeners:(id)arg1;
- (void)set_timer:(id)arg1;
- (void)set_underFirstLock:(bool)arg1;
- (void)set_userID:(id)arg1;
- (double)systemIdleTime;
- (bool)systemIsShuttingDown;
- (bool)systemIsSleeping;
- (int)userIdleToken;
- (bool)usesPowerNotifications;
- (bool)usesSystemIdleState;
- (bool)watchesDataProtectionLockState;
- (bool)watchesScreenLightState;
- (bool)watchesSystemLockState;

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