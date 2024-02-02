<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ASCompetition.h</title>
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

/PrivateFrameworks/ActivitySharing.framework/ASCompetition.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing (1)
 */

@interface ASCompetition : NSObject <NSCopying> {
    NSUUID * _UUID;
    long long  _currentCacheIndex;
    NSDate * _currentDateOverride;
    NSDateComponents * _durationDateComponents;
    long long  _lastPushedCacheIndex;
    unsigned long long  _maximumNumberOfPointsPerDay;
    NSArray * _opponentScores;
    NSArray * _preferredVictoryBadgeStyles;
    NSArray * _scores;
    NSDateComponents * _startDateComponents;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic) long long currentCacheIndex;
@property (nonatomic, retain) NSDate *currentDateOverride;
@property (nonatomic, retain) NSDateComponents *durationDateComponents;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) long long endDateCacheIndex;
@property (nonatomic, readonly) bool hasCalculatedFinalScore;
@property (nonatomic, readonly) bool hasPushedFinalScore;
@property (nonatomic, readonly) bool isDailyScoreCapped;
@property (nonatomic, readonly) bool isFirstDayOfCompetition;
@property (nonatomic, readonly) bool isLastDayOfCompetition;
@property (nonatomic, readonly) bool isScoreTied;
@property (nonatomic, readonly) NSDate *lastDayOfCompetition;
@property (nonatomic) long long lastPushedCacheIndex;
@property (nonatomic) unsigned long long maximumNumberOfPointsPerDay;
@property (nonatomic, readonly) unsigned long long myDailyAverageScore;
@property (nonatomic, readonly) unsigned long long myTotalScore;
@property (nonatomic, readonly) unsigned long long numberOfDaysRemaining;
@property (nonatomic, readonly) unsigned long long opponentDailyAverageScore;
@property (nonatomic, retain) NSArray *opponentScores;
@property (nonatomic, readonly) unsigned long long opponentTotalScore;
@property (nonatomic, retain) NSArray *preferredVictoryBadgeStyles;
@property (nonatomic, retain) NSArray *scores;
@property (nonatomic, readonly) long long stage;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, retain) NSDateComponents *startDateComponents;
@property (nonatomic, readonly) unsigned int victoryBadgeStyle;

+ (id)codableDatabaseCompetitionsFromCompetitions:(id)arg1 withFriendWithUUID:(id)arg2 withType:(long long)arg3;
+ (id)competitionWithCodableCompetition:(id)arg1;

- (void).cxx_destruct;
- (id)UUID;
- (id)_scoresForParticipant:(long long)arg1;
- (id)codableCompetition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentCacheIndex;
- (id)currentDate;
- (id)currentDateOverride;
- (unsigned long long)dailyScoreForParticipant:(long long)arg1 onDate:(id)arg2;
- (id)daysWonByParticipant:(long long)arg1;
- (id)description;
- (id)durationDateComponents;
- (id)endDate;
- (long long)endDateCacheIndex;
- (bool)hasCalculatedFinalScore;
- (bool)hasPushedFinalScore;
- (id)init;
- (bool)isDailyScoreCapped;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCompetition:(id)arg1;
- (bool)isFirstDayOfCompetition;
- (bool)isLastDayOfCompetition;
- (bool)isParticipantWinning:(long long)arg1;
- (bool)isScoreTied;
- (id)lastDayOfCompetition;
- (long long)lastPushedCacheIndex;
- (unsigned long long)maximumNumberOfPointsPerDay;
- (unsigned long long)myDailyAverageScore;
- (unsigned long long)myTotalScore;
- (unsigned long long)numberOfDaysRemaining;
- (unsigned long long)opponentDailyAverageScore;
- (id)opponentScores;
- (unsigned long long)opponentTotalScore;
- (id)preferredVictoryBadgeStyles;
- (id)scores;
- (void)setCurrentCacheIndex:(long long)arg1;
- (void)setCurrentDateOverride:(id)arg1;
- (void)setDurationDateComponents:(id)arg1;
- (void)setLastPushedCacheIndex:(long long)arg1;
- (void)setMaximumNumberOfPointsPerDay:(unsigned long long)arg1;
- (void)setOpponentScores:(id)arg1;
- (void)setPreferredVictoryBadgeStyles:(id)arg1;
- (void)setScores:(id)arg1;
- (void)setStartDateComponents:(id)arg1;
- (void)setUUID:(id)arg1;
- (long long)stage;
- (id)startDate;
- (id)startDateComponents;
- (unsigned int)victoryBadgeStyle;

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