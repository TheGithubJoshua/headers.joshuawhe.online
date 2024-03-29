<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HKHealthServicesManager.h</title>
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

/Frameworks/HealthKit.framework/HKHealthServicesManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit (1)
 */

@interface HKHealthServicesManager : NSObject <HKHealthServicesClientInterface> {
    id /* block */  _bluetoothStatusHandler;
    NSMutableDictionary * _discoveries;
    NSMutableSet * _discoveriesEnded;
    HKHealthServicesManager * _healthServicesManager;
    HKHealthStore * _healthStore;
    NSMutableDictionary * _sessions;
    NSMutableSet * _sessionsEnded;
}

@property (nonatomic, copy) id /* block */ bluetoothStatusHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *discoveries;
@property (nonatomic, retain) NSMutableSet *discoveriesEnded;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthServicesManager *healthServicesManager;
@property (nonatomic) HKHealthStore *healthStore;
@property (nonatomic, retain) NSMutableDictionary *sessions;
@property (nonatomic, retain) NSMutableSet *sessionsEnded;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addEndedDiscovery:(id)arg1;
- (void)_addEndedSession:(id)arg1;
- (void)_fetchSupportedServiceIDsWithCompletion:(id /* block */)arg1;
- (void)_startHealthServiceExtendedDiscovery:(id)arg1 withHandler:(id /* block */)arg2;
- (id)activeHealthServiceDiscoveries;
- (id)activeHealthServiceSessions;
- (void)addHealthServicePairing:(id)arg1 withCompletion:(id /* block */)arg2;
- (id /* block */)bluetoothStatusHandler;
- (void)clientQueue_handleInterruption;
- (void)clientRemote_deliverBluetoothStatus:(long long)arg1 withError:(id)arg2;
- (void)clientRemote_deliverDiscoveryHealthService:(id)arg1 toClient:(unsigned long long)arg2 finished:(bool)arg3 withError:(id)arg4;
- (void)clientRemote_deliverSessionCharacteristics:(id)arg1 forService:(id)arg2 toClient:(unsigned long long)arg3 withError:(id)arg4;
- (void)clientRemote_deliverSessionHealthServiceStatus:(long long)arg1 toClient:(unsigned long long)arg2 finished:(bool)arg3 withError:(id)arg4;
- (id)discoveries;
- (id)discoveriesEnded;
- (void)endBluetoothStatusUpdates;
- (void)endHealthServiceDiscovery:(id)arg1;
- (void)endHealthServiceSession:(id)arg1;
- (void)getEnabledStatusForPeripheral:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getHealthServiceProperty:(id)arg1 forSession:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getHealthServicePropertyNamesWithHandler:(id /* block */)arg1;
- (void)healthPeripheralsWithFilter:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)healthServicePairingsWithHandler:(id /* block */)arg1;
- (id)healthServicesManager;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (void)performHealthServiceOperation:(id)arg1 onSession:(id)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (void)registerPeripheralIdentifier:(id)arg1 name:(id)arg2 services:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)removeHealthServicePairing:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)sessions;
- (id)sessionsEnded;
- (void)setBluetoothStatusHandler:(id /* block */)arg1;
- (void)setDiscoveries:(id)arg1;
- (void)setDiscoveriesEnded:(id)arg1;
- (void)setEnabledStatus:(bool)arg1 forPeripheral:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setHealthStore:(id)arg1;
- (void)setSessions:(id)arg1;
- (void)setSessionsEnded:(id)arg1;
- (id)startAllHealthServicesDiscoveryWithHandler:(id /* block */)arg1;
- (void)startBluetoothStatusUpdates:(id /* block */)arg1;
- (void)startHealthServiceDiscovery:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startHealthServiceSession:(id)arg1 withHandler:(id /* block */)arg2;
- (void)unregisterPeripheralIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;

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
