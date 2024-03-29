<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WRM_iRATInterface.h</title>
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

/PrivateFrameworks/WirelessCoexManager.framework/WRM_iRATInterface.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager (1)
 */

@interface WRM_iRATInterface : WRMClientInterface {
    NSMutableArray * mAppLists;
    bool  mBBAssertionBGAppActive;
    bool  mClientSupportsMultipleAppTypes;
    bool  mLinkPreferenceSubscriptionEnabled;
    bool  mLocationAssertionEnabled;
    int  mLocationState;
    id /* block */  mObserver;
    id /* block */  mOppModeObserver;
    bool  mProximityGetLinkRecommendationEnabled;
    id /* block */  mProximityGetLinkRecommendationHandler;
    NSMutableArray * mProximityLinkRecommendationList;
    bool  mProximitySubscribeLinkRecommendationEnabled;
    id /* block */  mProximitySubscribeLinkRecommendationHandler;
    bool  mTelephoneAssertionEnabled;
    bool  mTelephonyStateEnabled;
}

- (void)_expediteBBAssertionBGAppActive_sync:(bool)arg1 handler:(id /* block */)arg2;
- (void)addAppType:(id)arg1;
- (void)addProximityLinkRecommendationType:(id)arg1;
- (void)assertCommCenterBaseBand:(int)arg1;
- (void)assertCommCenterBaseBandMode:(int)arg1;
- (void)dealloc;
- (void)expediteBBAssertionBGAppActive:(bool)arg1 handler:(id /* block */)arg2;
- (void)expediteBBAssertionBGAppActiveAppType:(int)arg1 :(bool)arg2 handler:(id /* block */)arg3;
- (void)getProximityLinkRecommendation:(bool)arg1 recommendation:(id /* block */)arg2;
- (int)getStatusUpdateMessageType:(int)arg1;
- (int)getSubscribeMessageType:(int)arg1;
- (void)handleNotification:(id)arg1 :(bool)arg2;
- (id)init;
- (void)processNotificationList:(id)arg1;
- (void)processNotificationListForTerminus:(id)arg1;
- (void)processOperatingModeNotification:(id)arg1;
- (void)reConnect;
- (void)registerClient:(int)arg1 queue:(id)arg2;
- (void)removeAppType:(id)arg1;
- (void)removeProximityLinkRecommendationType:(id)arg1;
- (void)setTelephonyEnabled:(bool)arg1;
- (void)statusUpdateAppLinkPreference:(int)arg1 status:(bool)arg2;
- (void)statusUpdateAppType:(int)arg1 linkType:(int)arg2 serviceStatus:(bool)arg3;
- (void)subscribeAppType:(struct { int x1; int x2; int x3; int x4; })arg1 observer:(id /* block */)arg2;
- (void)subscribeMultipleAppTypes:(id)arg1 observer:(id /* block */)arg2;
- (void)subscribeOperatingModeChangeNotification:(id /* block */)arg1;
- (void)subscribeProximityLinkRecommendation:(id /* block */)arg1;
- (void)unregisterClient;

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
