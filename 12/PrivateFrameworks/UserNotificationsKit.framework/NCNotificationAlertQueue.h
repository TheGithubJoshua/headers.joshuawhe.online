<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NCNotificationAlertQueue.h</title>
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

/PrivateFrameworks/UserNotificationsKit.framework/NCNotificationAlertQueue.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit (1)
 */

@interface NCNotificationAlertQueue : NSObject <NCNotificationAlertDestination, NCNotificationAlertDestinationDelegate> {
    NCNotificationRequest * _coalescingRequest;
    <NCNotificationAlertDestinationDelegate> * _delegate;
    NCNotificationDestinationsRegistry * _destinationsRegistry;
    NCNotificationCollapsingQueue * _queue;
    NCNotificationStore * _store;
}

@property (nonatomic, retain) NCNotificationRequest *coalescingRequest;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationDestinationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NCNotificationDestinationsRegistry *destinationsRegistry;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NCNotificationCollapsingQueue *queue;
@property (nonatomic, retain) NCNotificationStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_destinations:(id)arg1 canReceiveNotificationRequest:(id)arg2;
- (bool)_performDestinationOperationForRequest:(id)arg1 block:(id /* block */)arg2;
- (void)_postEnqueuedNotificationRequestsCoalescingWith:(id)arg1;
- (void)_postNextNotificationRequest;
- (void)_postNextNotificationRequestPassingTest:(id /* block */)arg1;
- (bool)_postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)_prepareDestinationsToReceiveCriticalNotificationRequest:(id)arg1;
- (bool)_readyToReceiveForNotificationRequest:(id)arg1;
- (bool)canReceiveNotificationRequest:(id)arg1;
- (id)coalescingRequest;
- (id)delegate;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)arg2;
- (void)destination:(id)arg1 didBecomeReadyToReceiveNotificationsPassingTest:(id /* block */)arg2;
- (void)destination:(id)arg1 didDismissNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 didPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(bool)arg4 withParameters:(id)arg5 completion:(id /* block */)arg6;
- (void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(id /* block */)arg5;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2;
- (void)destination:(id)arg1 requestsClearingNotificationRequests:(id)arg2 fromDestinations:(id)arg3;
- (void)destination:(id)arg1 requestsClearingNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)destination:(id)arg1 requestsClearingNotificationRequestsInSections:(id)arg2;
- (void)destination:(id)arg1 setAllowsCriticalAlerts:(bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 setAllowsNotifications:(bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 setDeliverQuietly:(bool)arg2 forSectionIdentifier:(id)arg3;
- (void)destination:(id)arg1 willDismissNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2;
- (void)destination:(id)arg1 willPresentNotificationRequest:(id)arg2 suppressAlerts:(bool)arg3;
- (void)destinationDidBecomeReadyToReceiveNotifications:(id)arg1;
- (id)destinationsForRequestDestinations:(id)arg1;
- (id)destinationsRegistry;
- (id)identifier;
- (id)init;
- (id)initWithNotificationStore:(id)arg1;
- (bool)isRegisteredDestination:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)notificationSectionSettingsForDestination:(id)arg1;
- (id)notificationSectionSettingsForDestination:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)queue;
- (void)registerDestination:(id)arg1;
- (void)setCoalescingRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestination:(id)arg1 enabled:(bool)arg2;
- (void)setDestination:(id)arg1 ready:(bool)arg2;
- (void)setDestinationsRegistry:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (void)unregisterDestination:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;

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
