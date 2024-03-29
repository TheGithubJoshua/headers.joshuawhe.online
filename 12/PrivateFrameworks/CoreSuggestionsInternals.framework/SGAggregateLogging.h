<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SGAggregateLogging.h</title>
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

/PrivateFrameworks/CoreSuggestionsInternals.framework/SGAggregateLogging.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals (680.125)
 */

@interface SGAggregateLogging : NSObject

+ (id)_appNameForApp:(unsigned long long)arg1;
+ (void)_pushValuesForContact:(id)arg1 usingDomain:(id)arg2 subdomain:(id)arg3 type:(id)arg4 action:(id)arg5 extraSignature:(id)arg6;
+ (void)addValueForScalarKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 action:(id)arg4 value:(long long)arg5;
+ (id)aggregateKeyForKeySuffix:(id)arg1;
+ (void)app:(id)arg1 performedAction:(id)arg2 onContacts:(id)arg3 withResult:(id)arg4 elapsedTime:(unsigned long long)arg5;
+ (void)app:(id)arg1 performedAction:(id)arg2 onEvents:(id)arg3 withResult:(id)arg4 elapsedTime:(unsigned long long)arg5;
+ (void)assetVersion;
+ (void)assetVersion:(long long)arg1;
+ (void)clearDistributionKey:(id)arg1;
+ (void)contactConfirmed:(id)arg1 inApp:(unsigned long long)arg2;
+ (void)contactRejected:(id)arg1 inApp:(unsigned long long)arg2;
+ (void)contactSuggestionImpressionsViaBanner:(int)arg1;
+ (void)contactsFoundOnDeviceEnabled:(bool)arg1;
+ (id)contactsFromEntity:(id)arg1;
+ (void)contactsSuggested:(id)arg1 withElapsedTime:(unsigned long long)arg2 inApp:(unsigned long long)arg3;
+ (void)databaseCorruptionDetectedViaCorruptionMarker;
+ (void)databaseCorruptionDetectedViaIntegrityCheck;
+ (void)detail:(id)arg1 confirmedForContact:(id)arg2;
+ (void)detail:(id)arg1 rejectedForContact:(id)arg2;
+ (void)eventConfirmed:(id)arg1 inApp:(unsigned long long)arg2;
+ (void)eventConfirmedByRecord:(id)arg1;
+ (void)eventRejected:(id)arg1 inApp:(unsigned long long)arg2;
+ (void)eventRejectedByRecord:(id)arg1;
+ (void)eventSuggestionImpressionsViaBanner:(int)arg1;
+ (void)eventsFoundOnDeviceEnabled:(bool)arg1;
+ (id)eventsFromEntity:(id)arg1;
+ (void)eventsSuggested:(id)arg1 withElapsedTime:(unsigned long long)arg2 inApp:(unsigned long long)arg3;
+ (void)flushSynchronously;
+ (void)harvestDrainedNumberOfMails:(int)arg1;
+ (void)harvestedEntity:(id)arg1 withElapsedTime:(unsigned long long)arg2;
+ (void)harvestedMessageInQueueSince:(double)arg1;
+ (void)hypotheticalContactSuggestionImpressionsIncludingInsignificant:(int)arg1;
+ (void)hypotheticalSuggestionImpressionsIncludingActedOn:(int)arg1;
+ (void)identityGroupSize:(unsigned long long)arg1;
+ (void)incrementKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3;
+ (void)incrementKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 action:(id)arg4;
+ (void)incrementKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 action:(id)arg4 by:(unsigned long long)arg5;
+ (void)incrementKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 by:(unsigned long long)arg4;
+ (void)incrementKeyWithDomain:(id)arg1 suffix:(id)arg2;
+ (void)incrementValuesInDomain:(id)arg1 subdomain:(id)arg2 type:(id)arg3 action:(id)arg4 withKeysAndIncrements:(id)arg5 extraSignature:(id)arg6;
+ (void)messagesAdded:(unsigned long long)arg1;
+ (void)messagesDeleted:(unsigned long long)arg1;
+ (void)messagesFound:(unsigned long long)arg1;
+ (void)messagesFoundAfterUndisplayablyLost:(unsigned long long)arg1;
+ (void)messagesLost:(unsigned long long)arg1;
+ (void)messagesPruned:(unsigned long long)arg1;
+ (void)messagesUndisplayablyLost:(long long)arg1;
+ (void)performedAction:(id)arg1 forApp:(id)arg2 onContact:(id)arg3;
+ (void)performedAction:(id)arg1 forApp:(id)arg2 onEvent:(id)arg3;
+ (void)performedAction:(id)arg1 onDetail:(id)arg2 forContact:(id)arg3;
+ (void)performedAction:(id)arg1 onEventInCalendar:(id)arg2;
+ (void)performedAction:(id)arg1 onRecordForContact:(id)arg2;
+ (void)persistInMemoryStatisticsToDatabase;
+ (void)persistInMemoryStatisticsToDatabaseInternal:(id)arg1;
+ (void)platform_flushSynchronously;
+ (void)platform_persistInMemoryStatisticsToDatabase;
+ (void)platform_popMetricsFromDatabaseAndSendToMessageTracer;
+ (void)platform_setEntityStore:(id)arg1;
+ (void)popMetricsFromDatabaseAndSendToMessageTracer;
+ (void)pushValue:(double)arg1 toDistKeyWithDomain:(id)arg2 suffix:(id)arg3;
+ (void)pushValue:(double)arg1 toDistKeyWithSuffix:(id)arg2;
+ (void)pushValueForDistributionKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 action:(id)arg4 value:(long long)arg5;
+ (void)reMatched:(id)arg1;
+ (void)recordConfirmedForContact:(id)arg1;
+ (void)recordRejectedForContact:(id)arg1;
+ (void)setEntityStore:(id)arg1;
+ (void)setKeyWithDomain:(id)arg1 suffix:(id)arg2 toValue:(unsigned long long)arg3;
+ (void)setValueForScalarKeyWithDomain:(id)arg1 subdomain:(id)arg2 suffix:(id)arg3 action:(id)arg4 value:(long long)arg5;
+ (void)suggestionImpressionsViaBanner:(int)arg1;
+ (void)suggestionImpressionsViaBannerSuppressed:(int)arg1;
+ (unsigned long long)twoSigFigs:(id)arg1;

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
