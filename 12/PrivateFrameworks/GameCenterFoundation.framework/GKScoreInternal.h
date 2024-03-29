<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GKScoreInternal.h</title>
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

/PrivateFrameworks/GameCenterFoundation.framework/GKScoreInternal.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation (577.8)
 */

@interface GKScoreInternal : GKInternalRepresentation {
    unsigned long long  _context;
    NSDate * _date;
    NSString * _formattedValue;
    NSString * _groupLeaderboardIdentifier;
    NSString * _leaderboardIdentifier;
    GKPlayerInternal * _player;
    unsigned int  _rank;
    long long  _value;
    bool  _valueSet;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic) unsigned long long context;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSString *formattedValue;
@property (nonatomic, retain) NSString *groupCategory;
@property (nonatomic, retain) NSString *groupLeaderboardIdentifier;
@property (nonatomic, retain) NSString *leaderboardIdentifier;
@property (nonatomic, retain) GKPlayerInternal *player;
@property (nonatomic, readonly) NSString *playerID;
@property (nonatomic) unsigned int rank;
@property (nonatomic) long long value;
@property (nonatomic) bool valueSet;

+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (id)category;
- (unsigned long long)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)formattedValue;
- (id)groupCategory;
- (id)groupLeaderboardIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)leaderboardIdentifier;
- (id)player;
- (id)playerID;
- (unsigned int)rank;
- (id)serverRepresentation;
- (void)setCategory:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setDate:(id)arg1;
- (void)setFormattedValue:(id)arg1;
- (void)setGroupCategory:(id)arg1;
- (void)setGroupLeaderboardIdentifier:(id)arg1;
- (void)setLeaderboardIdentifier:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setRank:(unsigned int)arg1;
- (void)setValue:(long long)arg1;
- (void)setValueSet:(bool)arg1;
- (long long)value;
- (bool)valueSet;

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
