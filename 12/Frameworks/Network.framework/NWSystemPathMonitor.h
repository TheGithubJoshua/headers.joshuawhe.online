<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NWSystemPathMonitor.h</title>
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

/Frameworks/Network.framework/NWSystemPathMonitor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Network.framework/Network (1)
 */

@interface NWSystemPathMonitor : NSObject {
    BKSApplicationStateMonitor * _applicationMonitor;
    bool  _ethernetPrimary;
    struct tcp_connection_fallback_watch_s { } * _fallbackWatcher;
    NSObject<OS_dispatch_source> * _mptcpWatcher;
    NSMutableDictionary * _perAppVPNEvaluators;
    NWPathEvaluator * _primaryEvaluator;
    NSObject<OS_dispatch_source> * _smoothingTimer;
    bool  _vpnActive;
    NWMonitor * _vpnMonitor;
    int  _vpnNotifyToken;
    bool  _wifiPrimary;
}

@property (retain) BKSApplicationStateMonitor *applicationMonitor;
@property (getter=isEthernetPrimary, nonatomic) bool ethernetPrimary;
@property struct tcp_connection_fallback_watch_s { }*fallbackWatcher;
@property NSObject<OS_dispatch_source> *mptcpWatcher;
@property (retain) NSMutableDictionary *perAppVPNEvaluators;
@property (retain) NWPathEvaluator *primaryEvaluator;
@property (retain) NSObject<OS_dispatch_source> *smoothingTimer;
@property (getter=isVPNActive, nonatomic) bool vpnActive;
@property (retain) NWMonitor *vpnMonitor;
@property int vpnNotifyToken;
@property (getter=isWiFiPrimary, nonatomic) bool wifiPrimary;

+ (id)sharedSystemPathMonitor;

- (void).cxx_destruct;
- (void)appStateChangedWithUserInfo:(id)arg1;
- (id)applicationMonitor;
- (void)dealloc;
- (void)eventFired;
- (struct tcp_connection_fallback_watch_s { }*)fallbackWatcher;
- (id)init;
- (bool)isEthernetPrimary;
- (bool)isVPNActive;
- (bool)isWiFiPrimary;
- (id)mptcpWatcher;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)perAppVPNEvaluators;
- (id)primaryEvaluator;
- (void)registerForVPNNotifications;
- (void)setApplicationMonitor:(id)arg1;
- (void)setEthernetPrimary:(bool)arg1;
- (void)setFallbackWatcher:(struct tcp_connection_fallback_watch_s { }*)arg1;
- (void)setMptcpWatcher:(id)arg1;
- (void)setPerAppVPNEvaluators:(id)arg1;
- (void)setPrimaryEvaluator:(id)arg1;
- (void)setSmoothingTimer:(id)arg1;
- (void)setVpnActive:(bool)arg1;
- (void)setVpnMonitor:(id)arg1;
- (void)setVpnNotifyToken:(int)arg1;
- (void)setWifiPrimary:(bool)arg1;
- (id)smoothingTimer;
- (void)startWatchingApplicationStates;
- (void)stopWatchingApplicationStates;
- (void)updateFlags;
- (void)updateVPNMonitor;
- (id)vpnMonitor;
- (int)vpnNotifyToken;

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