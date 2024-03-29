<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CARAutomaticDNDStatus.h</title>
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

/PrivateFrameworks/CarKit.framework/CARAutomaticDNDStatus.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit (1)
 */

@interface CARAutomaticDNDStatus : NSObject {
    NSObject<OS_dispatch_queue> * _automaticDNDQueue;
    unsigned long long  _cachedAutomaticDNDActiveState;
    id /* block */  _exitConfirmationChangeObserver;
    id /* block */  _statusChangeObserver;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *automaticDNDQueue;
@property (nonatomic, readonly) unsigned long long cachedAutomaticDNDActiveState;
@property (nonatomic, copy) id /* block */ exitConfirmationChangeObserver;
@property (nonatomic, copy) id /* block */ statusChangeObserver;

- (void).cxx_destruct;
- (void)_completeDNDBuddyWithOption:(unsigned long long)arg1 withReply:(id /* block */)arg2;
- (void)_detachObservers;
- (void)_fetchStatusForObserver;
- (void)_notifyExitConfirmationActive:(bool)arg1;
- (void)_performCARPreferencesBlock:(id /* block */)arg1 forReading:(bool)arg2;
- (void)_resetUserDNDSettingsWithReply:(id /* block */)arg1;
- (void)_xpcFetchWithServiceBlock:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)allowedAutoReplyAudience:(id /* block */)arg1;
- (void)autoReplyMessageWithReply:(id /* block */)arg1;
- (id)automaticDNDInternalAutoReplyWhitelist;
- (id)automaticDNDQueue;
- (unsigned long long)automaticDNDTriggeringMethod;
- (unsigned long long)cachedAutomaticDNDActiveState;
- (void)dealloc;
- (void)disableDNDUntilEndOfDriveWithReply:(id /* block */)arg1;
- (id)disableTimerTimestamp;
- (id /* block */)exitConfirmationChangeObserver;
- (void)fetchAutomaticDNDAssertionWithReply:(id /* block */)arg1;
- (void)fetchAutomaticDNDExitConfirmationWithReply:(id /* block */)arg1;
- (void)fetchAutomaticDNDTriggerPreferenceWithReply:(id /* block */)arg1;
- (id)firstBuddyPresentationFirstMoment;
- (bool)hasAdjustedTriggerMethod;
- (bool)hasCompletedFirstRidePreference;
- (bool)hasOptedOutOfAutomaticDND;
- (bool)hasStartedFirstRidePreference;
- (id)init;
- (bool)isAutomaticDNDInternalExitConfirmationOverrideEnabledPreference;
- (bool)isAutomaticDNDInternalForceOverrideEnabledPreference;
- (bool)isAutomaticDNDInternalShowGeofencingAlertsEnabledPreference;
- (bool)isAutomaticDNDInternalShowUserAlertsEnabledPreference;
- (double)mostRecentTriggerMethodChange;
- (void)outputOfDiagnosticUtilityWithReply:(id /* block */)arg1;
- (bool)platformSupportsSendingAutoReplies;
- (bool)platformSupportsUrgentMessages;
- (void)setAllowedAutoReplyAudience:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)setAutoReplyMessage:(id)arg1 reply:(id /* block */)arg2;
- (void)setAutomaticDNDActive:(bool)arg1 withReply:(id /* block */)arg2;
- (void)setAutomaticDNDInternalAutoReplyWhitelist:(id)arg1;
- (void)setAutomaticDNDInternalExitConfirmationOverrideEnabledPreference:(bool)arg1;
- (void)setAutomaticDNDInternalForceOverrideEnabledPreference:(bool)arg1;
- (void)setAutomaticDNDInternalShowGeofencingAlertsEnabledPreference:(bool)arg1;
- (void)setAutomaticDNDInternalShowUserAlertsEnabledPreference:(bool)arg1;
- (void)setAutomaticDNDQueue:(id)arg1;
- (void)setAutomaticDNDTriggerPreference:(unsigned long long)arg1 withReply:(id /* block */)arg2;
- (void)setAutomaticDNDTriggeringMethod:(unsigned long long)arg1;
- (void)setCompletedFirstRidePreference:(bool)arg1;
- (void)setDisableTimerTimestamp:(id)arg1;
- (void)setExitConfirmationChangeObserver:(id /* block */)arg1;
- (void)setFirstBuddyPresentationFirstMoment:(id)arg1;
- (void)setHasAdjustedTriggerMethod:(bool)arg1;
- (void)setMostRecentTriggerMethodChange:(double)arg1;
- (void)setOptedOutOfAutomaticDND:(bool)arg1;
- (void)setStartedFirstRidePreference:(bool)arg1;
- (void)setStatusChangeObserver:(id /* block */)arg1;
- (bool)shouldEnforceInternalWhitelist;
- (id /* block */)statusChangeObserver;

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
