<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDAWDHealthKitHeartDailyAnalytics.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDAWDHealthKitHeartDailyAnalytics.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDAWDHealthKitHeartDailyAnalytics : PBCodable <NSCopying> {
    unsigned int  _atrialFibrillationHeartRate50To120;
    long long  _ecgCount;
    struct { 
        unsigned int ecgCount : 1; 
        unsigned int irregularRhythmNotificationCount : 1; 
        unsigned int timestamp : 1; 
        unsigned int weeksSinceEcgOnboarded : 1; 
        unsigned int atrialFibrillationHeartRate50To120 : 1; 
        unsigned int heartRateAbove120 : 1; 
        unsigned int heartRateBelow50 : 1; 
        unsigned int inconclusiveOther : 1; 
        unsigned int inconclusivePoorReading : 1; 
        unsigned int notSet : 1; 
        unsigned int sinusRhythmHeartRate50To100 : 1; 
        unsigned int unknown : 1; 
        unsigned int isEcgOnboarded : 1; 
        unsigned int isImproveHealthAndActivityAllowed : 1; 
    }  _has;
    unsigned int  _heartRateAbove120;
    unsigned int  _heartRateBelow50;
    unsigned int  _inconclusiveOther;
    unsigned int  _inconclusivePoorReading;
    long long  _irregularRhythmNotificationCount;
    bool  _isEcgOnboarded;
    bool  _isImproveHealthAndActivityAllowed;
    unsigned int  _notSet;
    unsigned int  _sinusRhythmHeartRate50To100;
    unsigned long long  _timestamp;
    unsigned int  _unknown;
    long long  _weeksSinceEcgOnboarded;
}

@property (nonatomic) unsigned int atrialFibrillationHeartRate50To120;
@property (nonatomic) long long ecgCount;
@property (nonatomic) bool hasAtrialFibrillationHeartRate50To120;
@property (nonatomic) bool hasEcgCount;
@property (nonatomic) bool hasHeartRateAbove120;
@property (nonatomic) bool hasHeartRateBelow50;
@property (nonatomic) bool hasInconclusiveOther;
@property (nonatomic) bool hasInconclusivePoorReading;
@property (nonatomic) bool hasIrregularRhythmNotificationCount;
@property (nonatomic) bool hasIsEcgOnboarded;
@property (nonatomic) bool hasIsImproveHealthAndActivityAllowed;
@property (nonatomic) bool hasNotSet;
@property (nonatomic) bool hasSinusRhythmHeartRate50To100;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUnknown;
@property (nonatomic) bool hasWeeksSinceEcgOnboarded;
@property (nonatomic) unsigned int heartRateAbove120;
@property (nonatomic) unsigned int heartRateBelow50;
@property (nonatomic) unsigned int inconclusiveOther;
@property (nonatomic) unsigned int inconclusivePoorReading;
@property (nonatomic) long long irregularRhythmNotificationCount;
@property (nonatomic) bool isEcgOnboarded;
@property (nonatomic) bool isImproveHealthAndActivityAllowed;
@property (nonatomic) unsigned int notSet;
@property (nonatomic) unsigned int sinusRhythmHeartRate50To100;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int unknown;
@property (nonatomic) long long weeksSinceEcgOnboarded;

- (unsigned int)atrialFibrillationHeartRate50To120;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)ecgCount;
- (bool)hasAtrialFibrillationHeartRate50To120;
- (bool)hasEcgCount;
- (bool)hasHeartRateAbove120;
- (bool)hasHeartRateBelow50;
- (bool)hasInconclusiveOther;
- (bool)hasInconclusivePoorReading;
- (bool)hasIrregularRhythmNotificationCount;
- (bool)hasIsEcgOnboarded;
- (bool)hasIsImproveHealthAndActivityAllowed;
- (bool)hasNotSet;
- (bool)hasSinusRhythmHeartRate50To100;
- (bool)hasTimestamp;
- (bool)hasUnknown;
- (bool)hasWeeksSinceEcgOnboarded;
- (unsigned long long)hash;
- (unsigned int)heartRateAbove120;
- (unsigned int)heartRateBelow50;
- (unsigned int)inconclusiveOther;
- (unsigned int)inconclusivePoorReading;
- (long long)irregularRhythmNotificationCount;
- (bool)isEcgOnboarded;
- (bool)isEqual:(id)arg1;
- (bool)isImproveHealthAndActivityAllowed;
- (void)mergeFrom:(id)arg1;
- (unsigned int)notSet;
- (bool)readFrom:(id)arg1;
- (void)setAtrialFibrillationHeartRate50To120:(unsigned int)arg1;
- (void)setEcgCount:(long long)arg1;
- (void)setHasAtrialFibrillationHeartRate50To120:(bool)arg1;
- (void)setHasEcgCount:(bool)arg1;
- (void)setHasHeartRateAbove120:(bool)arg1;
- (void)setHasHeartRateBelow50:(bool)arg1;
- (void)setHasInconclusiveOther:(bool)arg1;
- (void)setHasInconclusivePoorReading:(bool)arg1;
- (void)setHasIrregularRhythmNotificationCount:(bool)arg1;
- (void)setHasIsEcgOnboarded:(bool)arg1;
- (void)setHasIsImproveHealthAndActivityAllowed:(bool)arg1;
- (void)setHasNotSet:(bool)arg1;
- (void)setHasSinusRhythmHeartRate50To100:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUnknown:(bool)arg1;
- (void)setHasWeeksSinceEcgOnboarded:(bool)arg1;
- (void)setHeartRateAbove120:(unsigned int)arg1;
- (void)setHeartRateBelow50:(unsigned int)arg1;
- (void)setInconclusiveOther:(unsigned int)arg1;
- (void)setInconclusivePoorReading:(unsigned int)arg1;
- (void)setIrregularRhythmNotificationCount:(long long)arg1;
- (void)setIsEcgOnboarded:(bool)arg1;
- (void)setIsImproveHealthAndActivityAllowed:(bool)arg1;
- (void)setNotSet:(unsigned int)arg1;
- (void)setSinusRhythmHeartRate50To100:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnknown:(unsigned int)arg1;
- (void)setWeeksSinceEcgOnboarded:(long long)arg1;
- (unsigned int)sinusRhythmHeartRate50To100;
- (unsigned long long)timestamp;
- (unsigned int)unknown;
- (long long)weeksSinceEcgOnboarded;
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