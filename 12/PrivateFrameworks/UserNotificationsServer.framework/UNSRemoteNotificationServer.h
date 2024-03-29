<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>UNSRemoteNotificationServer.h</title>
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

/PrivateFrameworks/UserNotificationsServer.framework/UNSRemoteNotificationServer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer ()
 */

@interface UNSRemoteNotificationServer : NSObject <APSConnectionDelegate> {
    NSObject<OS_dispatch_queue> * _apsQueue;
    UNSAttachmentsService * _attachmentsService;
    NSSet * _backgroundAppRefreshBlackList;
    NSMutableSet * _bundleIdentifiersNeedingToken;
    NSMutableDictionary * _bundleIdentifiersToDescriptions;
    NSMutableDictionary * _bundleIdentifiersToRegistration;
    <_DASActivityScheduler> * _duetActivityScheduler;
    NSMutableDictionary * _environmentsToConnections;
    NSObject<OS_dispatch_queue> * _extensionQueue;
    NSMutableSet * _foregroundBundleIdentifiers;
    UNSNotificationRepository * _notificationRepository;
    UNSNotificationSettingsService * _notificationSettingsService;
    <UNSRemoteNotificationServerObserver> * _observer;
    UNSPushRegistrationRepository * _pushRegistrationRepository;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _runningBundleIdentifiers;
    UNSNotificationServiceExtensionManager * _serviceExtensionManager;
    NSMutableSet * _userNotificationEnabledBundleIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <UNSRemoteNotificationServerObserver> *observer;
@property (readonly) Class superclass;

+ (id)_newPushServiceConnectionWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3;

- (void).cxx_destruct;
- (void)_extensionQueue_modifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3 extension:(id)arg4;
- (id)_initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 attachmentsService:(id)arg3 pushRegistrationRepository:(id)arg4 queue:(id)arg5 extensionQueue:(id)arg6 apsQueue:(id)arg7 duetActivityScheduler:(id)arg8 serviceExtensionManager:(id)arg9;
- (id)_portNameForEnvironmentName:(id)arg1;
- (void)_queue_addNotificationSourceDescriptions:(id)arg1;
- (id)_queue_allTopicsForApplication:(id)arg1;
- (void)_queue_applicationDidBecomeBackground:(id)arg1;
- (void)_queue_applicationDidBecomeForeground:(id)arg1;
- (void)_queue_applicationDidLaunch:(id)arg1;
- (void)_queue_applicationDidTerminate:(id)arg1;
- (void)_queue_applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)_queue_applicationsDidDenyNotificationSettings:(id)arg1;
- (void)_queue_backgroundRefreshApplicationsDidChange;
- (void)_queue_calculateTopics;
- (bool)_queue_canDeliverMessageToBundle:(id)arg1;
- (void)_queue_connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)_queue_connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)_queue_deliverNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3;
- (void)_queue_didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)_queue_didCompleteInitialization;
- (void)_queue_didReceiveIncomingMessage:(id)arg1;
- (void)_queue_invalidateTokenForBundleIdentifier:(id)arg1;
- (bool)_queue_isApplicationForeground:(id)arg1;
- (bool)_queue_isApplicationRunning:(id)arg1;
- (bool)_queue_isBackgroundAppRefreshAllowedForBundleIdentifier:(id)arg1;
- (bool)_queue_isContentAvailableRemoteNotificationSupportedForBundleIdentifier:(id)arg1;
- (bool)_queue_isPushedEnabledForApplication:(id)arg1;
- (bool)_queue_isUserNotificationEnabled:(id)arg1;
- (bool)_queue_isUserNotificationEnabledForApplication:(id)arg1;
- (void)_queue_moveTopicsForApplication:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3;
- (void)_queue_performMigration;
- (void)_queue_registerApplicationWithBundleIdentifier:(id)arg1 forEnvironment:(id)arg2;
- (void)_queue_reloadBackgroundAppRefreshBlackList;
- (void)_queue_reloadRegistrations;
- (void)_queue_removeClientForBundleIdentifier:(id)arg1;
- (void)_queue_removeNotificationSourceDescriptionForBundleIdentifier:(id)arg1;
- (id)_queue_sourceDescriptionForBundleIdentifier:(id)arg1;
- (void)_queue_tryToModifyNotificationRequest:(id)arg1 bundleIdentifier:(id)arg2 message:(id)arg3;
- (void)_scheduleContentAvailablePushActivityForMessage:(id)arg1 bundleIdentifier:(id)arg2;
- (bool)allowsRemoteNotificationsForBundleIdentifier:(id)arg1;
- (void)applicationsDidAuthorizeNotificationSettings:(id)arg1;
- (void)applicationsDidDenyNotificationSettings:(id)arg1;
- (void)backgroundRefreshApplicationsDidChange;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)dealloc;
- (void)didChangeApplicationState:(unsigned int)arg1 forBundleIdentifier:(id)arg2;
- (void)didCompleteInitialization;
- (id)initWithSettingsService:(id)arg1 notificationRepository:(id)arg2 attachmentsService:(id)arg3 pushRegistrationRepository:(id)arg4;
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(id)arg1;
- (void)notificationSourcesDidInstall:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (id)observer;
- (void)performMigration;
- (void)requestRemoteNotificationTokenWithEnvironment:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setObserver:(id)arg1;

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
