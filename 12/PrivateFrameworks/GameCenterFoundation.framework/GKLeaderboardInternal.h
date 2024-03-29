<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GKLeaderboardInternal.h</title>
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

/PrivateFrameworks/GameCenterFoundation.framework/GKLeaderboardInternal.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation (577.8)
 */

@interface GKLeaderboardInternal : GKInternalRepresentation {
    unsigned short  _friendRank;
    unsigned short  _friendRankCount;
    NSString * _groupIdentifier;
    NSDictionary * _icons;
    NSString * _identifier;
    NSDate * _lastSubmittedDate;
    NSString * _leaderboardSetIdentifier;
    unsigned int  _maxRank;
    unsigned int  _overallRank;
    unsigned int  _overallRankCount;
    GKScoreInternal * _playerScore;
    NSArray * _scores;
    NSString * _title;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic) unsigned short friendRank;
@property (nonatomic) unsigned short friendRankCount;
@property (nonatomic, retain) NSString *groupIdentifier;
@property (nonatomic, retain) NSDictionary *icons;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSDate *lastSubmittedDate;
@property (nonatomic, retain) NSString *leaderboardSetIdentifier;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long maxRange;
@property (nonatomic) unsigned int maxRank;
@property (nonatomic) unsigned int overallRank;
@property (nonatomic) unsigned int overallRankCount;
@property (nonatomic, retain) GKScoreInternal *playerScore;
@property (nonatomic, retain) NSArray *scores;
@property (nonatomic, retain) NSString *title;

+ (id)secureCodedPropertyKeys;

- (id)category;
- (void)dealloc;
- (unsigned short)friendRank;
- (unsigned short)friendRankCount;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)icons;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)lastSubmittedDate;
- (id)leaderboardSetIdentifier;
- (id)localizedTitle;
- (unsigned long long)maxRange;
- (unsigned int)maxRank;
- (unsigned int)overallRank;
- (unsigned int)overallRankCount;
- (id)playerScore;
- (id)scores;
- (void)setCategory:(id)arg1;
- (void)setFriendRank:(unsigned short)arg1;
- (void)setFriendRankCount:(unsigned short)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastSubmittedDate:(id)arg1;
- (void)setLeaderboardSetIdentifier:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMaxRank:(unsigned int)arg1;
- (void)setOverallRank:(unsigned int)arg1;
- (void)setOverallRankCount:(unsigned int)arg1;
- (void)setPlayerScore:(id)arg1;
- (void)setScores:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

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
