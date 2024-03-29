<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SiriCoreSiriConnection.h</title>
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

/protocols/SiriCoreSiriConnection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol SiriCoreSiriConnection <NSObject>

@required

- (NSString *)aceHost;
- (NSString *)assistantIdentifier;
- (void)barrier:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)cancelSynchronously:(void *)arg1 onQueue:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSString *)connectionId;
- (<SiriCoreSiriConnectionDelegate> *)delegate;
- (bool)deviceIsInWalkaboutExperimentGroup;
- (bool)forceReconnect;
- (void)getAnalysisInfo:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriCoreAceConnectionAnalysisInfo *, void*
- (void)getConnectionMetricsSynchronously:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriCoreConnectionMetrics *, void*
- (bool)imposePolicyBan;
- (NSString *)languageCode;
- (NSString *)peerAssistantIdentifier;
- (Class)peerProviderClass;
- (NSString *)peerType;
- (NSString *)peerVersion;
- (bool)prefersWWAN;
- (void)probeConnection;
- (NSString *)productTypePrefix;
- (void)sendCommand:(void *)arg1 errorHandler:(void *)arg2; // needs 2 arg types, found 7: <SiriCoreSessionObject> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendCommands:(void *)arg1 errorHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SiriCoreSessionObject> *, NSError *, void*
- (void)setAceHost:(NSString *)arg1;
- (void)setAssistantIdentifier:(NSString *)arg1;
- (void)setConnectionId:(NSString *)arg1;
- (void)setDelegate:(id <SiriCoreSiriConnectionDelegate>)arg1;
- (void)setDeviceIsInWalkaboutExperimentGroup:(bool)arg1;
- (void)setForceReconnect:(bool)arg1;
- (void)setImposePolicyBan:(bool)arg1;
- (void)setLanguageCode:(NSString *)arg1;
- (void)setPeerAssistantIdentifier:(NSString *)arg1;
- (void)setPeerProviderClass:(Class)arg1;
- (void)setPeerType:(NSString *)arg1;
- (void)setPeerVersion:(NSString *)arg1;
- (void)setPrefersWWAN:(bool)arg1;
- (void)setProductTypePrefix:(NSString *)arg1;
- (void)setSendPings:(bool)arg1;
- (void)setSiriConnectionUsesPeerManagedSync:(bool)arg1;
- (void)setSkipPeer:(bool)arg1;
- (void)setSkipPeerError:(NSError *)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUrl:(NSURL *)arg1;
- (void)setUseWiFiHint:(bool)arg1;
- (void)setUsesProxyConnection:(bool)arg1;
- (bool)siriConnectionUsesPeerManagedSync;
- (bool)skipPeer;
- (NSError *)skipPeerError;
- (void)start;
- (double)timeout;
- (NSURL *)url;
- (bool)useWiFiHint;
- (bool)usesProxyConnection;

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
