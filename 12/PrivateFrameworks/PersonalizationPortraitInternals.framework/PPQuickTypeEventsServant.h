<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PPQuickTypeEventsServant.h</title>
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

/PrivateFrameworks/PersonalizationPortraitInternals.framework/PPQuickTypeEventsServant.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals (1)
 */

@interface PPQuickTypeEventsServant : NSObject <PPQuickTypeServantProtocol> {
    PPContactScorer * _contactScorer;
    PPLocalEventStore * _localEventStore;
}

- (void).cxx_destruct;
- (bool)_areAllPeopleOfInterest:(id)arg1 inAttendeeList:(id)arg2;
- (id)_busyEventsFromEvents:(id)arg1 people:(id)arg2 explanationSet:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_dateRangeForQuery:(id)arg1;
- (bool)_eventIsHappening:(id)arg1;
- (id)_filterEvents:(id)arg1 time:(unsigned char)arg2 people:(id)arg3 busy:(bool)arg4 fields:(unsigned int)arg5 explanationSet:(id)arg6;
- (id)_freeEventsAndGapsFromEvents:(id)arg1 explanationSet:(id)arg2;
- (id)_fuzzyNextEvents:(id)arg1 minimumCount:(unsigned long long)arg2;
- (bool)_isFreeTime:(id)arg1;
- (id)_labelForEvent:(id)arg1 value:(id)arg2 fields:(unsigned int)arg3 formatter:(id)arg4;
- (id)_lastBusyEventsFromEvents:(id)arg1 people:(id)arg2 explanationSet:(id)arg3;
- (id)_lastFreeEventsFromEvents:(id)arg1 explanationSet:(id)arg2;
- (id)_nextBusyEventsFromEvents:(id)arg1 people:(id)arg2 explanationSet:(id)arg3;
- (id)_nextFreeEventsFromEvents:(id)arg1 explanationSet:(id)arg2;
- (id)_quickTypeItemsForEvent:(id)arg1 fields:(unsigned int)arg2 formatter:(id)arg3;
- (id)_quickTypeItemsForEvents:(id)arg1 fields:(unsigned int)arg2 limit:(unsigned long long)arg3 formatter:(id)arg4 explanationSet:(id)arg5;
- (bool)_shouldTreatAsUnscheduledFreeTime:(id)arg1;
- (id)_unscheduledFreeTimeEventFrom:(id)arg1 to:(id)arg2;
- (bool)_userDidOrganizeEvent:(id)arg1;
- (bool)_userIsInvitedToEvent:(id)arg1;
- (long long)_userStatusForEvent:(id)arg1;
- (id)_valuesForPrediction:(id)arg1 fields:(unsigned int)arg2 formatter:(id)arg3;
- (void)_warmUpFormatters;
- (id)init;
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (void)setContactScorer:(id)arg1;

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