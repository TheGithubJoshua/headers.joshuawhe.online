<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SAConnectionPolicy.h</title>
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

/PrivateFrameworks/SAObjects.framework/SAConnectionPolicy.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects (1)
 */

@interface SAConnectionPolicy : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *disableMPTCP;
@property (nonatomic, copy) NSNumber *enableOptimisticDNS;
@property (nonatomic, copy) NSNumber *enableTLS13;
@property (nonatomic, copy) NSNumber *enableTLS13ZeroRTT;
@property (nonatomic, copy) NSNumber *enableTcpFastOpen;
@property (nonatomic) bool enabled;
@property (nonatomic, copy) NSNumber *globalTimeout;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *mptcpFallbackPort;
@property (nonatomic, copy) NSString *policyId;
@property (nonatomic, copy) NSArray *routes;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *timeToLive;

+ (id)connectionPolicy;
+ (id)connectionPolicyWithDictionary:(id)arg1 context:(id)arg2;

- (id)disableMPTCP;
- (id)enableOptimisticDNS;
- (id)enableTLS13;
- (id)enableTLS13ZeroRTT;
- (id)enableTcpFastOpen;
- (bool)enabled;
- (id)encodedClassName;
- (id)globalTimeout;
- (id)groupIdentifier;
- (id)mptcpFallbackPort;
- (id)policyId;
- (id)routes;
- (void)setDisableMPTCP:(id)arg1;
- (void)setEnableOptimisticDNS:(id)arg1;
- (void)setEnableTLS13:(id)arg1;
- (void)setEnableTLS13ZeroRTT:(id)arg1;
- (void)setEnableTcpFastOpen:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGlobalTimeout:(id)arg1;
- (void)setMptcpFallbackPort:(id)arg1;
- (void)setPolicyId:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)setTimeToLive:(id)arg1;
- (id)timeToLive;

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
