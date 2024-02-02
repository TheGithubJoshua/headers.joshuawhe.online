<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKHostPlugIn.h</title>
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

/PrivateFrameworks/PlugInKit.framework/PKHostPlugIn.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit (1)
 */

@interface PKHostPlugIn : PKPlugInCore <NSXPCConnectionDelegate, PKPlugInPrivate> {
    NSObject<OS_dispatch_queue> * __replyQueue;
    NSObject<OS_dispatch_queue> * __startQueue;
    NSObject<OS_dispatch_queue> * __syncQueue;
    NSDate * _beganUsingAt;
    NSUserDefaults * _defaults;
    NSDictionary * _discoveryExtensions;
    NSBundle * _embeddedBundle;
    id  _embeddedPrincipal;
    NSDictionary * _environment;
    NSUUID * _multipleInstanceUUID;
    id /* block */  _notificationBlock;
    id  _plugInPrincipal;
    NSXPCConnection * _pluginConnection;
    id  _queuedHostPrincipal;
    Protocol * _queuedHostProtocol;
    NSArray * _sandboxExtensions;
    <PKCorePlugInProtocol> * _service;
    NSString * _serviceExtension;
    NSDictionary * _sourceForm;
    unsigned long long  _state;
    <PKPlugIn> * _supersededBy;
    NSUUID * _supersedingUUID;
    <PKCorePlugInProtocol> * _syncService;
    bool  _terminating;
    unsigned int  _useCount;
}

@property (retain) NSObject<OS_dispatch_queue> *_replyQueue;
@property (retain) NSObject<OS_dispatch_queue> *_startQueue;
@property (retain) NSObject<OS_dispatch_queue> *_syncQueue;
@property (readonly) bool active;
@property (readonly) NSDictionary *attributes;
@property (retain) NSDate *beganUsingAt;
@property (readonly) NSDictionary *bundleInfoDictionary;
@property (readonly) NSURL *containingUrl;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUserDefaults *defaults;
@property (readonly, copy) NSString *description;
@property (retain) NSDictionary *discoveryExtensions;
@property (readonly) NSUUID *effectiveUUID;
@property (retain) NSBundle *embeddedBundle;
@property (retain) id embeddedPrincipal;
@property (readonly) NSDictionary *entitlements;
@property (retain) NSDictionary *environment;
@property (retain) NSDictionary *extensionState;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *identifier;
@property (readonly) NSString *localizedContainingName;
@property (readonly) NSDictionary *localizedFileProviderActionNames;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedShortName;
@property (retain) NSUUID *multipleInstanceUUID;
@property (copy) id /* block */ notificationBlock;
@property (readonly) bool onSystemVolume;
@property (readonly) NSDictionary *plugInDictionary;
@property (retain) id plugInPrincipal;
@property (retain) NSXPCConnection *pluginConnection;
@property (retain) id queuedHostPrincipal;
@property (retain) Protocol *queuedHostProtocol;
@property (retain) NSArray *sandboxExtensions;
@property (retain) <PKCorePlugInProtocol> *service;
@property (retain) NSString *serviceExtension;
@property (retain) NSDictionary *sourceForm;
@property (readonly) bool spent;
@property unsigned long long state;
@property (readonly) Class superclass;
@property (retain) <PKPlugIn> *supersededBy;
@property (retain) NSUUID *supersedingUUID;
@property (retain) <PKCorePlugInProtocol> *syncService;
@property bool terminating;
@property (readonly) NSDate *timestamp;
@property (readonly) NSURL *url;
@property unsigned int useCount;
@property long long userElection;
@property (readonly) NSUUID *uuid;
@property (readonly) NSString *version;

- (void).cxx_destruct;
- (id)_replyQueue;
- (id)_startQueue;
- (id)_syncQueue;
- (bool)active;
- (id)beganUsingAt;
- (void)beginUsing:(id /* block */)arg1;
- (bool)beginUsingWithError:(id*)arg1;
- (void)changeState:(unsigned long long)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (id)createInstanceWithUUID:(id)arg1;
- (id)defaults;
- (id)description;
- (id)discoveryExtensions;
- (id)effectiveUUID;
- (id)embeddedBundle;
- (id)embeddedPrincipal;
- (void)endUsing:(id /* block */)arg1;
- (id)environment;
- (id)extensionState;
- (id)initWithForm:(id)arg1;
- (bool)loadExtensions:(id)arg1 error:(id*)arg2;
- (void)messageTraceUsage;
- (id)multipleInstanceUUID;
- (id /* block */)notificationBlock;
- (id)plugInPrincipal;
- (id)pluginConnection;
- (void)preparePlugInUsingService:(id)arg1 completion:(id /* block */)arg2;
- (id)queuedHostPrincipal;
- (id)queuedHostProtocol;
- (void)resume;
- (id)sandboxExtensions;
- (id)service;
- (id)serviceExtension;
- (void)setBeganUsingAt:(id)arg1;
- (void)setBootstrap;
- (void)setDiscoveryExtensions:(id)arg1;
- (void)setEmbeddedBundle:(id)arg1;
- (void)setEmbeddedPrincipal:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setExtensionState:(id)arg1;
- (void)setHostPrincipal:(id)arg1 withProtocol:(id)arg2;
- (void)setMultipleInstanceUUID:(id)arg1;
- (void)setNotificationBlock:(id /* block */)arg1;
- (void)setPlugInPrincipal:(id)arg1;
- (void)setPluginConnection:(id)arg1;
- (void)setQueuedHostPrincipal:(id)arg1;
- (void)setQueuedHostProtocol:(id)arg1;
- (void)setReplyQueue:(id)arg1;
- (void)setSandboxExtensions:(id)arg1;
- (void)setService:(id)arg1;
- (void)setServiceExtension:(id)arg1;
- (void)setSourceForm:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setSupersededBy:(id)arg1;
- (void)setSupersedingUUID:(id)arg1;
- (void)setSyncService:(id)arg1;
- (void)setTerminating:(bool)arg1;
- (void)setUseCount:(unsigned int)arg1;
- (void)setUserElection:(long long)arg1;
- (void)set_replyQueue:(id)arg1;
- (void)set_startQueue:(id)arg1;
- (void)set_syncQueue:(id)arg1;
- (id)sourceForm;
- (bool)spent;
- (void)startPlugInSynchronously:(bool)arg1 completion:(id /* block */)arg2;
- (unsigned long long)state;
- (id)supersededBy;
- (id)supersedingUUID;
- (void)suspend;
- (id)syncService;
- (bool)terminating;
- (void)unwind:(unsigned long long)arg1 force:(bool)arg2;
- (void)updateFromForm:(id)arg1;
- (bool)useBundle:(id)arg1 error:(id*)arg2;
- (unsigned int)useCount;
- (long long)userElection;

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