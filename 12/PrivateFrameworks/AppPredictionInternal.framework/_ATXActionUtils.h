<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_ATXActionUtils.h</title>
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

/PrivateFrameworks/AppPredictionInternal.framework/_ATXActionUtils.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal (1)
 */

@interface _ATXActionUtils : NSObject

+ (id)_contactIdentifiersReferencedByAction:(id)arg1;
+ (id)_extractValueInKeyValueBlob:(id)arg1 withKey:(id)arg2;
+ (id /* block */)actionKeyFilterForCandidateBundleIds:(id)arg1 candidateActionTypes:(id)arg2 blacklist:(id)arg3;
+ (double)calculateWeightWith:(unsigned long long)arg1 strength:(double)arg2 termFreq:(unsigned long long)arg3 docFreq:(unsigned long long)arg4 docLength:(unsigned long long)arg5;
+ (id)filterContainersWithNilAction:(id)arg1;
+ (id)filterDuplicateActionPredictions:(id)arg1;
+ (id)filterDuplicateTVActionPredictions:(id)arg1;
+ (id)filterMissingOrBlockedRecipientPredictions:(id)arg1;
+ (id)filterRecentlyDeletedNotePredictions:(id)arg1;
+ (id)firstIntent:(id)arg1 inAppLaunchSession:(id)arg2;
+ (id)getActionTypeFromActionKey:(id)arg1;
+ (id)getActionTypesFromActionKeys:(id)arg1;
+ (id)getActivityTypeFromNSUAType:(id)arg1;
+ (id)getBundleIdAndActionTypeFromActionKey:(id)arg1;
+ (id)getBundleIdFromActionKey:(id)arg1;
+ (id)getBundleIdsFromActionKeys:(id)arg1;
+ (id)getDateFromUserActivityString:(id)arg1 forActionKey:(id)arg2;
+ (bool)isActionKey:(id)arg1;
+ (bool)isBlockedEmailAddressContainedInAddresses:(id)arg1;
+ (bool)isBlockedPhoneNumberContainedInNumbers:(id)arg1;
+ (bool)isContainmentBetweenAction:(id)arg1 other:(id)arg2;
+ (bool)isNSUAType:(id)arg1;
+ (bool)isTitleEquivalenceBetweenAction:(id)arg1 other:(id)arg2;
+ (id)limitParameterCombinations:(id)arg1 limit:(int)arg2;
+ (id)markTodayInTitleAndUserActivityString:(id)arg1 withActionKey:(id)arg2;
+ (id)partOfWeekStringForDate:(id)arg1;
+ (void)prefillActionHistograms;
+ (void)prefillActionSlotDatabase;
+ (id)recipientFromMessageIntent:(id)arg1;
+ (void)resetActionPredictions;
+ (id)sha256hex:(id)arg1;
+ (bool)shouldAcceptMessageContent:(id)arg1;
+ (bool)shouldPredictRecipient:(id)arg1 withDate:(id)arg2 andRecipientDate:(id)arg3;
+ (id)slotSetFromAction:(id)arg1;
+ (id)slotSetsForAction:(id)arg1;
+ (id)swapUserActivityString:(id)arg1 withActionKey:(id)arg2 withNewTitle:(id)arg3 withNewDateString:(id)arg4;
+ (id)timeOfDayAndDayOfWeekForDate:(id)arg1 timeZone:(id)arg2;
+ (bool)uniqueRecipientsMatchedBetweenIntent:(id)arg1 andIntent:(id)arg2;

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