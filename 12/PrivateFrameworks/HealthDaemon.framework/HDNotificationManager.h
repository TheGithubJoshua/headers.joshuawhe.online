<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDNotificationManager.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDNotificationManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDNotificationManager : NSObject <HDDiagnosticObject> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSDate * _lastNotificationDate;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UNUserNotificationCenter *userNotificationCenter;

- (void).cxx_destruct;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)arg1;
- (id)_aggregateBadge;
- (id)_badgeForDomain:(long long)arg1 error:(out id*)arg2;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)arg1;
- (void)_postBadgesDidUpdateNotification;
- (void)_postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 url:(id)arg6 completion:(id /* block */)arg7;
- (id)_resourceQueue_badgeForDomain:(long long)arg1;
- (id)_resourceQueue_badgeForDomain:(long long)arg1 error:(out id*)arg2;
- (id)_resourceQueue_coaleseDomainBadges;
- (void)_resourceQueue_notifyObserversWithBadge:(id)arg1 domain:(long long)arg2;
- (void)_resourceQueue_notifyObserversWithNotification:(id)arg1;
- (bool)_resourceQueue_setBadge:(id)arg1 domain:(long long)arg2 error:(out id*)arg3;
- (void)_resourceQueue_updateApplicationBadge;
- (void)_sendCompanionUserNotificationResponse:(id /* block */)arg1 error:(id)arg2;
- (void)addNotificationObserver:(id)arg1;
- (void)badgeForDomain:(long long)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (bool)incrementBadgeForDomain:(long long)arg1 count:(long long)arg2 error:(out id*)arg3;
- (id)initWithProfile:(id)arg1;
- (void)postCompanionUserNotificationOfType:(long long)arg1 completion:(id /* block */)arg2;
- (void)postNotificationWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 completion:(id /* block */)arg4;
- (void)postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 completion:(id /* block */)arg6;
- (void)receivedCompanionUserNotificationRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)registerWithUserNotificationCenter;
- (void)removeNotificationObserver:(id)arg1;
- (void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(id /* block */)arg3;
- (void)setUserNotificationCenter:(id)arg1;
- (id)userNotificationCenter;

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