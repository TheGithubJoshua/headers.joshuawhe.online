<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SiriCoreSiriConnectionInfo.h</title>
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

/PrivateFrameworks/SiriCore.framework/SiriCoreSiriConnectionInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore (1)
 */

@interface SiriCoreSiriConnectionInfo : NSObject {
    NSString * _aceHost;
    NSString * _assistantIdentifier;
    NSString * _connectionId;
    SAConnectionPolicy * _connectionPolicy;
    SAConnectionPolicyRoute * _connectionPolicyRoute;
    bool  _enableSiriServerLogging;
    bool  _forceReconnect;
    bool  _imposePolicyBan;
    NSString * _languageCode;
    NSString * _peerAssistantIdentifier;
    bool  _prefersWWAN;
    bool  _requiresURLSession;
    bool  _skipPeer;
    NSError * _skipPeerErrorReason;
    double  _timeout;
    NSURL * _url;
    bool  _useWiFiHint;
}

@property (nonatomic, copy) NSString *aceHost;
@property (nonatomic, copy) NSString *assistantIdentifier;
@property (nonatomic, copy) NSString *connectionId;
@property (nonatomic, copy) SAConnectionPolicy *connectionPolicy;
@property (nonatomic, copy) SAConnectionPolicyRoute *connectionPolicyRoute;
@property (getter=isSiriServerLoggingEnabled, nonatomic) bool enableSiriServerLogging;
@property (nonatomic) bool forceReconnect;
@property (nonatomic) bool imposePolicyBan;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *peerAssistantIdentifier;
@property (nonatomic) bool prefersWWAN;
@property (nonatomic) bool requiresURLSession;
@property (nonatomic) bool skipPeer;
@property (nonatomic, copy) NSError *skipPeerErrorReason;
@property (nonatomic) double timeout;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic) bool useWiFiHint;

- (void).cxx_destruct;
- (void)_appendPotentiallyNilString:(id)arg1 toMutableString:(id)arg2;
- (id)aceHost;
- (id)assistantIdentifier;
- (id)connectionId;
- (id)connectionPolicy;
- (id)connectionPolicyRoute;
- (id)description;
- (bool)forceReconnect;
- (bool)imposePolicyBan;
- (bool)isSiriServerLoggingEnabled;
- (id)languageCode;
- (id)peerAssistantIdentifier;
- (bool)prefersWWAN;
- (bool)requiresURLSession;
- (void)setAceHost:(id)arg1;
- (void)setAssistantIdentifier:(id)arg1;
- (void)setConnectionId:(id)arg1;
- (void)setConnectionPolicy:(id)arg1;
- (void)setConnectionPolicyRoute:(id)arg1;
- (void)setEnableSiriServerLogging:(bool)arg1;
- (void)setForceReconnect:(bool)arg1;
- (void)setImposePolicyBan:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setPeerAssistantIdentifier:(id)arg1;
- (void)setPrefersWWAN:(bool)arg1;
- (void)setRequiresURLSession:(bool)arg1;
- (void)setSkipPeer:(bool)arg1;
- (void)setSkipPeerErrorReason:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUrl:(id)arg1;
- (void)setUseWiFiHint:(bool)arg1;
- (bool)skipPeer;
- (id)skipPeerErrorReason;
- (double)timeout;
- (id)url;
- (bool)useWiFiHint;

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
