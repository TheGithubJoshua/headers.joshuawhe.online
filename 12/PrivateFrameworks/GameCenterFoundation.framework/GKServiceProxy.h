<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GKServiceProxy.h</title>
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

/PrivateFrameworks/GameCenterFoundation.framework/GKServiceProxy.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation (577.8)
 */

@interface GKServiceProxy : NSObject {
    GKDaemonProxy * _baseProxy;
    GKPlayerInternal * _localPlayer;
    GKThreadsafeDictionary * _pendingRequests;
    unsigned int  _serviceGeneration;
    NSDictionary * _serviceLookup;
}

@property (retain) GKDaemonProxy *baseProxy;
@property (retain) GKPlayerInternal *localPlayer;
@property (retain) GKThreadsafeDictionary *pendingRequests;
@property unsigned int serviceGeneration;
@property (retain) NSDictionary *serviceLookup;

- (id)accountService;
- (id)accountServicePrivate;
- (void)addService:(id)arg1 forProtocol:(id)arg2 toLookup:(id)arg3;
- (id)analyticsService;
- (id)analyticsServicePrivate;
- (id)baseProxy;
- (void)buildServiceLookup;
- (void)buildServiceLookupIfNeccessary;
- (id)bulletinService;
- (id)bulletinServicePrivate;
- (id)challengeService;
- (id)challengeServicePrivate;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)friendService;
- (id)friendServicePrivate;
- (id)gameService;
- (id)gameServicePrivate;
- (id)gameSessionService;
- (id)gameSessionServicePrivate;
- (id)gameStatService;
- (id)gameStatServicePrivate;
- (id)initWithPlayer:(id)arg1;
- (id)localPlayer;
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)multiplayerService;
- (id)multiplayerServicePrivate;
- (id)pendingRequests;
- (id)profileService;
- (id)profileServicePrivate;
- (void)replyToDuplicatesForRequest:(id)arg1 withInvocation:(id)arg2 queue:(id)arg3;
- (id)requestIdentifierForInvocation:(id)arg1;
- (unsigned int)serviceGeneration;
- (id)serviceLookup;
- (void)setBaseProxy:(id)arg1;
- (void)setLocalPlayer:(id)arg1;
- (void)setPendingRequests:(id)arg1;
- (void)setServiceGeneration:(unsigned int)arg1;
- (void)setServiceLookup:(id)arg1;
- (id)turnBasedService;
- (id)turnBasedServicePrivate;
- (id)utilityService;
- (id)utilityServicePrivate;

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