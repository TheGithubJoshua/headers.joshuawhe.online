<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GKTurnBasedMatchInternal.h</title>
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

/PrivateFrameworks/GameCenterFoundation.framework/GKTurnBasedMatchInternal.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation (577.8)
 */

@interface GKTurnBasedMatchInternal : GKInternalRepresentation {
    NSString * _bundleID;
    NSString * _bundleVersion;
    NSDate * _creationDate;
    BOOL  _currentParticipant;
    GKPlayerInternal * _currentPlayer;
    NSDate * _deletionDate;
    NSArray * _exchanges;
    GKGameInternal * _game;
    NSDate * _lastTurnDate;
    NSString * _lastTurnPlayerID;
    NSDictionary * _localizableMessage;
    NSData * _matchData;
    NSString * _matchDataVersion;
    NSString * _matchID;
    unsigned char  _maxPlayers;
    NSString * _message;
    unsigned char  _minPlayers;
    NSArray * _participants;
    NSString * _reason;
    NSString * _shortBundleVersion;
    unsigned int  _state;
    NSString * _status;
    unsigned int  _turnNumber;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *bundleVersion;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic) BOOL currentParticipant;
@property (nonatomic, retain) GKPlayerInternal *currentPlayer;
@property (nonatomic, retain) NSDate *deletionDate;
@property (nonatomic, retain) NSArray *exchanges;
@property (nonatomic, retain) GKGameInternal *game;
@property (nonatomic, retain) NSDate *lastTurnDate;
@property (nonatomic, retain) NSString *lastTurnPlayerID;
@property (nonatomic, retain) NSDictionary *localizableMessage;
@property (nonatomic, retain) NSData *matchData;
@property (nonatomic, retain) NSString *matchDataVersion;
@property (nonatomic, retain) NSString *matchID;
@property (nonatomic) unsigned char maxPlayers;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) unsigned char minPlayers;
@property (nonatomic, retain) NSArray *participants;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSString *shortBundleVersion;
@property (nonatomic) unsigned int state;
@property (nonatomic, retain) NSString *status;
@property (nonatomic) unsigned int turnNumber;

+ (id)secureCodedPropertyKeys;

- (long long)activeExchangeCount;
- (id)bundleID;
- (id)bundleVersion;
- (id)creationDate;
- (BOOL)currentParticipant;
- (id)currentPlayer;
- (void)dealloc;
- (id)deletionDate;
- (id)descriptionSubstitutionMap;
- (id)exchanges;
- (id)game;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastTurnDate;
- (id)lastTurnPlayerID;
- (long long)localPlayerParticipantIndex;
- (id)localizableMessage;
- (id)matchData;
- (id)matchDataVersion;
- (id)matchID;
- (unsigned char)maxPlayers;
- (id)message;
- (unsigned char)minPlayers;
- (id)participants;
- (long long)previousParticipantIndex;
- (id)reason;
- (void)setBundleID:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCurrentParticipant:(BOOL)arg1;
- (void)setCurrentPlayer:(id)arg1;
- (void)setDeletionDate:(id)arg1;
- (void)setExchanges:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setLastTurnDate:(id)arg1;
- (void)setLastTurnPlayerID:(id)arg1;
- (void)setLocalizableMessage:(id)arg1;
- (void)setMatchData:(id)arg1;
- (void)setMatchDataVersion:(id)arg1;
- (void)setMatchID:(id)arg1;
- (void)setMaxPlayers:(unsigned char)arg1;
- (void)setMessage:(id)arg1;
- (void)setMinPlayers:(unsigned char)arg1;
- (void)setParticipants:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setShortBundleVersion:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setStatus:(id)arg1;
- (void)setTurnNumber:(unsigned int)arg1;
- (id)shortBundleVersion;
- (unsigned int)state;
- (id)status;
- (unsigned int)turnNumber;

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