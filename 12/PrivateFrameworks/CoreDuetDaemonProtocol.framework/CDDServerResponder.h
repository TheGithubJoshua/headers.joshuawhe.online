<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CDDServerResponder.h</title>
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

/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CDDServerResponder.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol (1)
 */

@interface CDDServerResponder : NSObject {
    CDDebug * _debug;
}

@property (readonly) CDDebug *debug;

- (void).cxx_destruct;
- (id)debug;
- (id)init;
- (id)makeStashWithId:(unsigned long long)arg1;
- (bool)respondIndicatingProtocolErrorOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 protocolErrorNumber:(long long)arg4 error:(id*)arg5;
- (bool)respondToAdmissionCheckAndStartedOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 admissionGranted:(bool)arg4 grantValiditySeconds:(unsigned long long)arg5 admissionCondition:(unsigned long long)arg6 error:(id*)arg7;
- (bool)respondToAdmissionCheckOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 admissionGranted:(bool)arg4 grantValiditySeconds:(unsigned long long)arg5 admissionCondition:(unsigned long long)arg6 error:(id*)arg7;
- (bool)respondToAppsLaunchedButNotPrewarmedSinceDateOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToAssociateToBudgetOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToAttributeNamesOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToAttributeOccurredOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToAttributeRepeatedStatisticOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 statisticsArray:(id)arg4 error:(id*)arg5;
- (bool)respondToAttributeReset:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToAttributeStatisticOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 statisticsDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToBackgroundLaunchOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToBroadcastSystemDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToBudgetsForAttributeIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToBundleIdChangeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToBundleIdEntriesOlderThanDateOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 status:(bool)arg4 error:(id*)arg5;
- (bool)respondToCompareAndSwapPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 finalValue:(long long)arg4 error:(id*)arg5;
- (bool)respondToDebugBitmapOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToDecrementPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 decrementedValue:(long long)arg4 error:(id*)arg5;
- (bool)respondToDeleteAllDatabaseEntriesOlderThanDateOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToDeleteAttributeIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToDeleteBundleIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToDeleteDataForClientIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToDeletePoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToDeregisterTrendableAppOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToForecastAttributeIdOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToGetCtlOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 mitigationDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToGetDeviceFromDescriptionOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToGetDevicesOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToGetRemoteSystemDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToHistoryQueryOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToIdForAttributeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 attributeId:(unsigned long long)arg4 error:(id*)arg5;
- (bool)respondToIdForPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5;
- (bool)respondToIncrementPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 incrementedValue:(long long)arg4 error:(id*)arg5;
- (bool)respondToLiveAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToLocalFocalAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToMeteringForAttributeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 meterToken:(unsigned long long)arg4 error:(id*)arg5;
- (bool)respondToPoolNamesOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 resultDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToReadPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 readValue:(long long)arg4 error:(id*)arg5;
- (bool)respondToReadRemoteRequestResultOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseKey:(const char *)arg4 responseDictionary:(id)arg5 error:(id*)arg6;
- (bool)respondToReadSystemDataFromDeviceOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToRegisterAttributeOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 registeredAttributeId:(unsigned long long)arg4 error:(id*)arg5;
- (bool)respondToRegisterChildPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 initialValue:(long long)arg4 integerId:(unsigned long long)arg5 error:(id*)arg6;
- (bool)respondToRegisterForSignoff:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToRegisterPoolOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 initialValue:(long long)arg4 integerId:(unsigned long long)arg5 error:(id*)arg6;
- (bool)respondToRegisterTrendableAppOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToRemoteFocalAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToRequestAdmissionLogFromDeviceOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToRequestDeviceForecastDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToRequestDeviceStatisticDataOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToRequestSystemDataFromDeviceOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToResetAdmissionMask:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToSetAdmissionMask:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToSetCategoryOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToSetCtlOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToSetNonAppFocalOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToSignoffConditionsChangedOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToTrendingAppsOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 responseDictionary:(id)arg4 error:(id*)arg5;
- (bool)respondToTriggerSystemDataExchange:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)respondToVersionOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 error:(id*)arg4;
- (bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 dictionaryKey:(id)arg5 dictionary:(id)arg6 error:(id*)arg7;
- (bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 error:(id*)arg5;
- (bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 nameKey:(id)arg5 name:(id)arg6 dictionaryKey:(id)arg7 dictionary:(id)arg8 error:(id*)arg9;
- (bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 nameKey:(id)arg5 name:(id)arg6 error:(id*)arg7;
- (bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 nameKey:(id)arg5 name:(id)arg6 valueKey:(id)arg7 value:(long long)arg8 error:(id*)arg9;
- (bool)sendMessageOnConnection:(id)arg1 usingMessage:(id)arg2 withSequenceNumber:(unsigned long long)arg3 type:(long long)arg4 valueKey:(id)arg5 value:(unsigned long long)arg6 error:(id*)arg7;

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
