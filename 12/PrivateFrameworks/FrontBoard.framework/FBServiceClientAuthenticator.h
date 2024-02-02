<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FBServiceClientAuthenticator.h</title>
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

/PrivateFrameworks/FrontBoard.framework/FBServiceClientAuthenticator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard (486.52)
 */

@interface FBServiceClientAuthenticator : NSObject <BSDescriptionProviding> {
    unsigned long long  _credentials;
    NSString * _entitlement;
}

@property (nonatomic, readonly) unsigned long long credentials;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *entitlement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_errorForCode:(long long)arg1 process:(id)arg2 failedEntitlement:(id)arg3;
+ (bool)authenticateAuditToken:(struct { unsigned int x1[8]; })arg1 forEntitlement:(id)arg2 error:(out id*)arg3;
+ (id)sharedForegroundUIAppClientAuthenticator;
+ (id)sharedSystemClientAuthenticator;
+ (id)sharedUIAppClientAuthenticator;

- (void).cxx_destruct;
- (int)_authenticateProcessHandle:(id)arg1 entitlement:(id)arg2 error:(out id*)arg3 withResult:(id /* block */)arg4;
- (bool)authenticateAuditToken:(id)arg1;
- (bool)authenticateAuditToken:(id)arg1 error:(out id*)arg2;
- (int)authenticateAuditToken:(struct { unsigned int x1[8]; }*)arg1 forEntitlement:(id)arg2 withResult:(id /* block */)arg3;
- (int)authenticateAuditToken:(struct { unsigned int x1[8]; }*)arg1 withResult:(id /* block */)arg2;
- (bool)authenticateClient:(id)arg1;
- (bool)authenticateClient:(id)arg1 error:(out id*)arg2;
- (int)authenticateClient:(id)arg1 withResult:(id /* block */)arg2;
- (unsigned long long)credentials;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)entitlement;
- (id)init;
- (id)initWithCredentials:(unsigned long long)arg1;
- (id)initWithEntitlement:(id)arg1;
- (id)initWithEntitlement:(id)arg1 additionalCredentials:(unsigned long long)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

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