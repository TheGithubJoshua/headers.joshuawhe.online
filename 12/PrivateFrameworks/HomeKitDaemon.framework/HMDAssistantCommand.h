<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HMDAssistantCommand.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/HMDAssistantCommand.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface HMDAssistantCommand : SAHACommand <AFServiceCommand, HMFLogging> {
    HMDAssistantCommandHelper * _assistantCommandHelper;
    bool  _completionHandlerCalled;
    NSString * _currentHomeName;
    NSUUID * _currentHomeUUID;
    HMDAssistantGather * _gather;
    HMDHome * _home;
    NSArray * _homeKitObjects;
    HMDHomeManager * _homeManager;
    long long  _numberOfHomes;
    NSString * _primaryHomeName;
    NSUUID * _primaryHomeUUID;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _startTime;
}

@property (nonatomic, retain) HMDAssistantCommandHelper *assistantCommandHelper;
@property (nonatomic) bool completionHandlerCalled;
@property (nonatomic, retain) NSString *currentHomeName;
@property (nonatomic, retain) NSUUID *currentHomeUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDAssistantGather *gather;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDHome *home;
@property (nonatomic, retain) NSArray *homeKitObjects;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic) long long numberOfHomes;
@property (nonatomic, retain) NSString *primaryHomeName;
@property (nonatomic, retain) NSUUID *primaryHomeUUID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long startTime;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_logEvent:(id)arg1;
- (void)addActivationCharacteristicsIfNeeded:(id)arg1 forCharacteristic:(id)arg2;
- (void)addBridgedAcessoryCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3;
- (void)addCharacteristicWithType:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3 assistantObjects:(id)arg4;
- (id)addCharacteristicsFromRelatedServicesFor:(id)arg1 assistantObjects:(id)arg2;
- (void)addIfNeededActivationCharacteristic:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3;
- (void)addLinkedServiceCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3;
- (id)addStatusCharacteristicsIfNeeded:(id)arg1;
- (id)adjustGetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;
- (id)adjustSetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;
- (id)assistantCommandHelper;
- (id)compareCurrentValue:(id)arg1 newValue:(id)arg2 withMetadata:(id)arg3;
- (id)compareForBoundary:(id)arg1 withMetadata:(id)arg2;
- (bool)completionHandlerCalled;
- (id)convertValue:(id)arg1 fromUnits:(id)arg2 toUnits:(id)arg3;
- (id)currentHomeName;
- (id)currentHomeUUID;
- (id)entityFromActionSet:(id)arg1;
- (void)executeActionSet:(id)arg1 action:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)filterObjects:(id)arg1 byAttribute:(id)arg2 forActionType:(id)arg3;
- (id)filterObjects:(id)arg1 byCharacteristicType:(id)arg2;
- (id)filterObjects:(id)arg1 forCharacteristicTypes:(id)arg2;
- (id)filterObjects:(id)arg1 forCharacteristics:(id)arg2;
- (id)filterObjects:(id)arg1 forGroup:(id)arg2;
- (id)filterObjects:(id)arg1 forRoom:(id)arg2 andZone:(id)arg3;
- (id)gather;
- (id)getLocaleUnits:(id)arg1;
- (id)getReportingUnits:(id)arg1 hapCharacteristicType:(id)arg2 attribute:(id)arg3;
- (id)getValueOfType:(id)arg1 action:(id)arg2;
- (id)getoverridingHomeUUIDFromName:(id)arg1;
- (void)handleCommandWithCompletionHandler:(id /* block */)arg1;
- (void)handleGetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleGetColor:(id)arg1 forObjects:(id)arg2 serviceType:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleGetMetadataActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)handleReadWriteResponses:(id)arg1 error:(id)arg2 forAction:(id)arg3 inServiceType:(id)arg4 results:(id)arg5 forObjects:(id)arg6;
- (void)handleSetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleSetColor:(id)arg1 forObjects:(id)arg2 service:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)handleUpdateActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)home;
- (id)homeKitObjects;
- (id)homeManager;
- (bool)isAttributeValue:(id)arg1 equalTo:(id)arg2;
- (long long)numberOfHomes;
- (id)objectsWithIdentifierList:(id)arg1;
- (id)objectsWithSearchFilter:(id)arg1 inHome:(id)arg2 overrideServiceTypeIfNeeded:(id*)arg3;
- (id)parseColorEncoding:(id)arg1;
- (void)performWithGather:(id)arg1 queue:(id)arg2 msgDispatcher:(id)arg3 completion:(id /* block */)arg4;
- (bool)populateColorResult:(id)arg1 serviceType:(id)arg2 service:(id)arg3 action:(id)arg4 responses:(id)arg5 forObjects:(id)arg6;
- (bool)populateResult:(id)arg1 fromResponse:(id)arg2 responses:(id)arg3 forAction:(id)arg4 serviceType:(id)arg5 forObjects:(id)arg6;
- (bool)populateResult:(id)arg1 withObject:(id)arg2 serviceType:(id)arg3 action:(id)arg4;
- (bool)populateResult:(id)arg1 withService:(id)arg2 serviceType:(id)arg3 characteristic:(id)arg4 resultAttribute:(id)arg5 action:(id)arg6;
- (bool)populateResultWithEntity:(id)arg1 action:(id)arg2 entity:(id)arg3;
- (id)primaryHomeName;
- (id)primaryHomeUUID;
- (id)queue;
- (id)readRequestsForCharacteristic:(id)arg1;
- (void)reportOutcome:(id)arg1 results:(id)arg2 handler:(id /* block */)arg3;
- (void)reportResults:(id)arg1 handler:(id /* block */)arg2;
- (void)reportUnlockRequired:(id /* block */)arg1;
- (void)returnResults:(id)arg1 serviceType:(id)arg2 forAction:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)serviceFromObject:(id)arg1;
- (void)setAssistantCommandHelper:(id)arg1;
- (void)setCompletionHandlerCalled:(bool)arg1;
- (void)setCurrentHomeName:(id)arg1;
- (void)setCurrentHomeUUID:(id)arg1;
- (void)setGather:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeKitObjects:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setNumberOfHomes:(long long)arg1;
- (void)setPrimaryHomeName:(id)arg1;
- (void)setPrimaryHomeUUID:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (id)setValue:(id)arg1 format:(id)arg2 units:(id)arg3;
- (unsigned long long)startTime;
- (id)updateValue:(id)arg1 forAction:(id)arg2;
- (id)updateValueToBoundary:(id)arg1 valueType:(id)arg2 fudgeMinimum:(bool)arg3 metadata:(id)arg4;

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