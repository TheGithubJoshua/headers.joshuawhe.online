<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FCNotificationController.h</title>
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

/PrivateFrameworks/NewsCore.framework/FCNotificationController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore (2166)
 */

@interface FCNotificationController : NSObject <FCUserInfoObserving> {
    bool  _appleNewsNotificationsAllowed;
    <FCBundleSubscriptionManagerType> * _bundleSubscriptionManager;
    FCCommandQueue * _commandQueue;
    <FCCoreConfigurationManager> * _configurationManager;
    NSString * _deviceToken;
    NSString * _notificationsUserID;
    bool  _publisherNotificationsAllowed;
    FCUserInfo * _userInfo;
}

@property (nonatomic) bool appleNewsNotificationsAllowed;
@property (nonatomic, retain) <FCBundleSubscriptionManagerType> *bundleSubscriptionManager;
@property (nonatomic, retain) FCCommandQueue *commandQueue;
@property (nonatomic, retain) <FCCoreConfigurationManager> *configurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *notificationsUserID;
@property (nonatomic) bool publisherNotificationsAllowed;
@property (readonly) Class superclass;
@property (nonatomic, retain) FCUserInfo *userInfo;

- (void).cxx_destruct;
- (unsigned long long)_bundleSubscriptionState;
- (void)_registerDeviceToken:(id)arg1;
- (id)appendBreakingNewsIfNeededToChannelIDs:(id)arg1;
- (bool)appleNewsNotificationsAllowed;
- (id)bundleSubscriptionManager;
- (id)commandQueue;
- (id)configurationManager;
- (void)dealloc;
- (id)deviceToken;
- (id)init;
- (id)initWithUserInfo:(id)arg1 commandQueue:(id)arg2 configurationManager:(id)arg3 bundleSubscriptionManager:(id)arg4 publisherNotificationsAllowed:(bool)arg5 appleNewsNotificationsAllowed:(bool)arg6;
- (id)notificationsUserID;
- (bool)publisherNotificationsAllowed;
- (bool)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2;
- (void)refreshNotificationsFromAppleNews;
- (void)registerDeviceToken:(id)arg1;
- (bool)registerNotificationsForTagID:(id)arg1 isPaid:(bool)arg2;
- (void)setAppleNewsNotificationsAllowed:(bool)arg1;
- (void)setBundleSubscriptionManager:(id)arg1;
- (void)setCommandQueue:(id)arg1;
- (void)setConfigurationManager:(id)arg1;
- (void)setDeviceToken:(id)arg1;
- (bool)setMarketingNotificationsEnabled:(bool)arg1 error:(id*)arg2;
- (void)setNewIssueNotificationsEnabled:(bool)arg1;
- (void)setNotificationsUserID:(id)arg1;
- (void)setPublisherNotificationsAllowed:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)unregisterNotificationsForTagID:(id)arg1;
- (id)userInfo;
- (void)userInfoDidChangeNotificationsUserID:(id)arg1;

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
