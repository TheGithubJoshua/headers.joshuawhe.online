<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CLSEndpointConnection.h</title>
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

/Frameworks/ClassKit.framework/CLSEndpointConnection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit (144.0.27)
 */

@interface CLSEndpointConnection : NSObject <CLSClientDelegate, NSLocking> {
    bool  _connectionBorked;
    int  _devModeChangedToken;
    NSXPCListenerEndpoint * _endpoint;
    bool  _interrupted;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    id /* block */  _onConnect;
    id /* block */  _onInterupt;
    NSString * _overrideBundleIdentifier;
    int  _progressdAvailableToken;
    NSXPCConnection * _serverConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ onConnect;
@property (nonatomic, copy) id /* block */ onInterupt;
@property (nonatomic, copy) NSString *overrideBundleIdentifier;
@property (readonly) Class superclass;

+ (id)classKitEnvironment;
+ (id)instanceForEndpoint:(id)arg1;
+ (bool)isAllowedToMakeXPCCalls;
+ (bool)isClassKitEnabled;
+ (bool)isInDevelopmentEnvironment;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_envokeOnInteruptCallback;
- (void)_registerForDarwinNotifications;
- (void)_updateBundleIdentifier:(id)arg1 forConnection:(id)arg2 completion:(id /* block */)arg3;
- (void)accountChanged;
- (void)addBarrierBlock:(id /* block */)arg1;
- (void)connect;
- (void)connectionBorked;
- (void)connectionInterupted;
- (id)dataServer:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteAppWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)devModeChanged;
- (id)init;
- (id)initWithEndpoint:(id)arg1;
- (void)invalidate;
- (bool)isBorked;
- (void)listAppsWithCompletion:(id /* block */)arg1;
- (void)lock;
- (id /* block */)onConnect;
- (id /* block */)onInterupt;
- (id)overrideBundleIdentifier;
- (id)server:(id /* block */)arg1;
- (id)serverConnection;
- (void)setOnConnect:(id /* block */)arg1;
- (void)setOnInterupt:(id /* block */)arg1;
- (void)setOverrideBundleIdentifier:(id)arg1;
- (void)setOverrideBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)syncDataServer:(id /* block */)arg1;
- (id)syncServer:(id /* block */)arg1;
- (id)syncUtilityServer:(id /* block */)arg1;
- (void)unlock;
- (id)utilityServer:(id /* block */)arg1;

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
