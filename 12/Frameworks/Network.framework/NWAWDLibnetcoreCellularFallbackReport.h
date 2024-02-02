<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NWAWDLibnetcoreCellularFallbackReport.h</title>
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

/Frameworks/Network.framework/NWAWDLibnetcoreCellularFallbackReport.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Network.framework/Network (1)
 */

@interface NWAWDLibnetcoreCellularFallbackReport : PBCodable <NSCopying> {
    NSMutableArray * _dataUsageSnapshotsAtNetworkEvents;
    int  _denyReason;
    unsigned long long  _fallbackTimerMsecs;
    bool  _fellback;
    struct { 
        unsigned int fallbackTimerMsecs : 1; 
        unsigned int denyReason : 1; 
        unsigned int fellback : 1; 
    }  _has;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _networkEvents;
    NSMutableArray * _primaryInterfaceAttemptStatisticsReports;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _timeToNetworkEventsMsecs;
}

@property (nonatomic, retain) NSMutableArray *dataUsageSnapshotsAtNetworkEvents;
@property (nonatomic) int denyReason;
@property (nonatomic) unsigned long long fallbackTimerMsecs;
@property (nonatomic) bool fellback;
@property (nonatomic) bool hasDenyReason;
@property (nonatomic) bool hasFallbackTimerMsecs;
@property (nonatomic) bool hasFellback;
@property (nonatomic, readonly) int*networkEvents;
@property (nonatomic, readonly) unsigned long long networkEventsCount;
@property (nonatomic, retain) NSMutableArray *primaryInterfaceAttemptStatisticsReports;
@property (nonatomic, readonly) unsigned long long*timeToNetworkEventsMsecs;
@property (nonatomic, readonly) unsigned long long timeToNetworkEventsMsecsCount;

+ (Class)dataUsageSnapshotsAtNetworkEventsType;
+ (Class)primaryInterfaceAttemptStatisticsReportsType;

- (void).cxx_destruct;
- (int)StringAsDenyReason:(id)arg1;
- (int)StringAsNetworkEvents:(id)arg1;
- (void)addDataUsageSnapshotsAtNetworkEvents:(id)arg1;
- (void)addNetworkEvents:(int)arg1;
- (void)addPrimaryInterfaceAttemptStatisticsReports:(id)arg1;
- (void)addTimeToNetworkEventsMsecs:(unsigned long long)arg1;
- (void)clearDataUsageSnapshotsAtNetworkEvents;
- (void)clearNetworkEvents;
- (void)clearPrimaryInterfaceAttemptStatisticsReports;
- (void)clearTimeToNetworkEventsMsecs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataUsageSnapshotsAtNetworkEvents;
- (id)dataUsageSnapshotsAtNetworkEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataUsageSnapshotsAtNetworkEventsCount;
- (void)dealloc;
- (int)denyReason;
- (id)denyReasonAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)fallbackTimerMsecs;
- (bool)fellback;
- (bool)hasDenyReason;
- (bool)hasFallbackTimerMsecs;
- (bool)hasFellback;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int*)networkEvents;
- (id)networkEventsAsString:(int)arg1;
- (int)networkEventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)networkEventsCount;
- (id)primaryInterfaceAttemptStatisticsReports;
- (id)primaryInterfaceAttemptStatisticsReportsAtIndex:(unsigned long long)arg1;
- (unsigned long long)primaryInterfaceAttemptStatisticsReportsCount;
- (bool)readFrom:(id)arg1;
- (void)setDataUsageSnapshotsAtNetworkEvents:(id)arg1;
- (void)setDenyReason:(int)arg1;
- (void)setFallbackTimerMsecs:(unsigned long long)arg1;
- (void)setFellback:(bool)arg1;
- (void)setHasDenyReason:(bool)arg1;
- (void)setHasFallbackTimerMsecs:(bool)arg1;
- (void)setHasFellback:(bool)arg1;
- (void)setNetworkEvents:(int*)arg1 count:(unsigned long long)arg2;
- (void)setPrimaryInterfaceAttemptStatisticsReports:(id)arg1;
- (void)setTimeToNetworkEventsMsecs:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (unsigned long long*)timeToNetworkEventsMsecs;
- (unsigned long long)timeToNetworkEventsMsecsAtIndex:(unsigned long long)arg1;
- (unsigned long long)timeToNetworkEventsMsecsCount;
- (void)writeTo:(id)arg1;

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