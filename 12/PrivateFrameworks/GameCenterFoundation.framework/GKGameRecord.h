<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GKGameRecord.h</title>
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

/PrivateFrameworks/GameCenterFoundation.framework/GKGameRecord.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation (577.8)
 */

@interface GKGameRecord : GKGame {
    GKPlayer * _player;
}

@property (nonatomic, readonly) unsigned long long achievementPoints;
@property (nonatomic, readonly) unsigned long long achievements;
@property (nonatomic, readonly) NSString *defaultLeaderboardIdentifier;
@property (nonatomic, readonly) unsigned long long friendRank;
@property (readonly, retain) GKGameRecordInternal *internal;
@property (nonatomic, readonly) NSDate *lastPlayedDate;
@property (nonatomic, readonly) unsigned long long maxAchievementPoints;
@property (nonatomic, readonly) unsigned long long maxAchievements;
@property (nonatomic, readonly) unsigned long long maxFriendRank;
@property (nonatomic, readonly) unsigned long long maxRank;
@property (nonatomic, readonly) unsigned long long numberOfCategories;
@property (nonatomic, readonly) unsigned long long numberOfLeaderboardSets;
@property (nonatomic, readonly) unsigned long long numberOfLeaderboards;
@property (nonatomic, readonly) bool played;
@property (nonatomic, retain) GKPlayer *player;
@property (nonatomic, readonly) NSDate *purchaseDate;
@property (nonatomic, readonly) unsigned long long rank;
@property (nonatomic, readonly) bool supportsAchievements;
@property (nonatomic, readonly) bool supportsLeaderboardSets;
@property (nonatomic, readonly) bool supportsLeaderboards;

+ (id)cacheKeyForPlayer:(id)arg1 game:(id)arg2;
+ (id)cacheKeyForPlayer:(id)arg1 internal:(id)arg2;
+ (id)gameRecordForPlayer:(id)arg1 game:(id)arg2;
+ (id)internalRepresentationCache;
+ (id)internalRepresentationForPlayer:(id)arg1 game:(id)arg2;
+ (void)invalidateCaches;
+ (void)loadGameRecordForPlayer:(id)arg1 game:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)loadGameRecordsForPlayer:(id)arg1 games:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)partitionGameRecords:(id)arg1 returniOS:(id*)arg2 returnMac:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 player:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)played;
- (id)player;
- (void)setPlayer:(id)arg1;

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