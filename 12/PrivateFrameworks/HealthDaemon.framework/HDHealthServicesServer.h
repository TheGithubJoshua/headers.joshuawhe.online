<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDHealthServicesServer.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDHealthServicesServer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDHealthServicesServer : HDSubserver <HDHealthServicesServerInterface> {
    <HKHealthStoreClientInterface> * _clientRemoteObjectProxy;
    HDIdentifierTable * _healthDeviceSessionServerIDs;
    NSMutableSet * _healthServiceClosedSessionClientIDs;
    NSMutableSet * _healthServiceClosedSessionServerIDs;
    NSMutableDictionary * _healthServiceDiscoveryClientIDs;
    HDIdentifierTable * _healthServiceDiscoveryServerIDs;
    HDHealthServiceManager * _healthServiceManager;
    NSMutableDictionary * _healthServiceSessionClientIDs;
    NSUUID * _subserverUUID;
}

@property (nonatomic, retain) <HKHealthStoreClientInterface> *clientRemoteObjectProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDIdentifierTable *healthDeviceSessionServerIDs;
@property (nonatomic, retain) NSMutableSet *healthServiceClosedSessionClientIDs;
@property (nonatomic, retain) NSMutableSet *healthServiceClosedSessionServerIDs;
@property (nonatomic, retain) NSMutableDictionary *healthServiceDiscoveryClientIDs;
@property (nonatomic, retain) HDIdentifierTable *healthServiceDiscoveryServerIDs;
@property (nonatomic, retain) HDHealthServiceManager *healthServiceManager;
@property (nonatomic, retain) NSMutableDictionary *healthServiceSessionClientIDs;
@property (nonatomic, retain) NSUUID *subserverUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeDiscoveryBetweenServer:(unsigned long long)arg1 andClient:(unsigned long long)arg2;
- (void)_closeSessionBetweenServer:(unsigned long long)arg1 andClient:(unsigned long long)arg2;
- (unsigned long long)_discoveryServerIdentifierForClientIdentifier:(unsigned long long)arg1;
- (id)_filterOnlyUserManageablePeripheralsFromServices:(id)arg1;
- (unsigned long long)_healthDeviceClientDiscoveryIdentifier:(unsigned long long)arg1;
- (unsigned long long)_healthDeviceClientSessionIdentifier:(unsigned long long)arg1;
- (bool)_isClientSessionValid:(unsigned long long)arg1;
- (bool)_isServerSessionValid:(unsigned long long)arg1;
- (unsigned long long)_sessionClientIdentifierForServerIdentifier:(unsigned long long)arg1;
- (unsigned long long)_sessionServerIdentifierForClientIdentifier:(unsigned long long)arg1;
- (id)clientRemoteObjectProxy;
- (id)healthDeviceSessionServerIDs;
- (id)healthServiceClosedSessionClientIDs;
- (id)healthServiceClosedSessionServerIDs;
- (id)healthServiceDiscoveryClientIDs;
- (id)healthServiceDiscoveryServerIDs;
- (id)healthServiceManager;
- (id)healthServiceSessionClientIDs;
- (id)initWithParentServer:(id)arg1;
- (void)invalidate;
- (void)remote_addPairingForHealthService:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_addPeripheral:(id)arg1 name:(id)arg2 forServices:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)remote_beginBluetoothStatusUpdates:(id /* block */)arg1 client:(id)arg2;
- (void)remote_endBluetoothStatusUpdates;
- (void)remote_endHealthServiceDiscovery:(unsigned long long)arg1;
- (void)remote_endHealthServiceSession:(unsigned long long)arg1;
- (void)remote_fetchSupportedServiceIDsWithCompletion:(id /* block */)arg1;
- (void)remote_getEnabledStatusForPeripheral:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_getHealthPeripheralsWithFilter:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)remote_getHealthServiceProperty:(id)arg1 forSession:(unsigned long long)arg2 withHandler:(id /* block */)arg3;
- (void)remote_getSupportedPropertyNamesWithHandler:(id /* block */)arg1;
- (void)remote_performHealthServiceOperation:(id)arg1 onSession:(unsigned long long)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_removePairingForHealthService:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_removePeripheral:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)remote_setEnabledStatus:(bool)arg1 forPeripheral:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)remote_startHealthServiceDiscovery:(long long)arg1 client:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)remote_startHealthServiceSession:(id)arg1 client:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setClientRemoteObjectProxy:(id)arg1;
- (void)setHealthDeviceSessionServerIDs:(id)arg1;
- (void)setHealthServiceClosedSessionClientIDs:(id)arg1;
- (void)setHealthServiceClosedSessionServerIDs:(id)arg1;
- (void)setHealthServiceDiscoveryClientIDs:(id)arg1;
- (void)setHealthServiceDiscoveryServerIDs:(id)arg1;
- (void)setHealthServiceManager:(id)arg1;
- (void)setHealthServiceSessionClientIDs:(id)arg1;
- (void)setSubserverUUID:(id)arg1;
- (id)subserverUUID;

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