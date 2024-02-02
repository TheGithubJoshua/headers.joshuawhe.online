<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTPBUserOnboardingResult.h</title>
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

/PrivateFrameworks/NewsTransport.framework/NTPBUserOnboardingResult.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport (2166)
 */

@interface NTPBUserOnboardingResult : PBCodable <NSCopying> {
    NSMutableArray * _channelIds;
    struct { 
        unsigned int resultType : 1; 
        unsigned int totalChannelSelections : 1; 
        unsigned int totalResets : 1; 
        unsigned int totalTopicSelections : 1; 
        unsigned int icloudAccountMatch : 1; 
        unsigned int sawEmailOptIn : 1; 
    }  _has;
    bool  _icloudAccountMatch;
    NSString * _onboardAbandonStage;
    int  _resultType;
    bool  _sawEmailOptIn;
    NSMutableArray * _topicIds;
    int  _totalChannelSelections;
    int  _totalResets;
    int  _totalTopicSelections;
}

@property (nonatomic, retain) NSMutableArray *channelIds;
@property (nonatomic) bool hasIcloudAccountMatch;
@property (nonatomic, readonly) bool hasOnboardAbandonStage;
@property (nonatomic) bool hasResultType;
@property (nonatomic) bool hasSawEmailOptIn;
@property (nonatomic) bool hasTotalChannelSelections;
@property (nonatomic) bool hasTotalResets;
@property (nonatomic) bool hasTotalTopicSelections;
@property (nonatomic) bool icloudAccountMatch;
@property (nonatomic, retain) NSString *onboardAbandonStage;
@property (nonatomic) int resultType;
@property (nonatomic) bool sawEmailOptIn;
@property (nonatomic, retain) NSMutableArray *topicIds;
@property (nonatomic) int totalChannelSelections;
@property (nonatomic) int totalResets;
@property (nonatomic) int totalTopicSelections;

+ (Class)channelIdType;
+ (Class)topicIdType;

- (void).cxx_destruct;
- (void)addChannelId:(id)arg1;
- (void)addTopicId:(id)arg1;
- (id)channelIdAtIndex:(unsigned long long)arg1;
- (id)channelIds;
- (unsigned long long)channelIdsCount;
- (void)clearChannelIds;
- (void)clearTopicIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIcloudAccountMatch;
- (bool)hasOnboardAbandonStage;
- (bool)hasResultType;
- (bool)hasSawEmailOptIn;
- (bool)hasTotalChannelSelections;
- (bool)hasTotalResets;
- (bool)hasTotalTopicSelections;
- (unsigned long long)hash;
- (bool)icloudAccountMatch;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)onboardAbandonStage;
- (bool)readFrom:(id)arg1;
- (int)resultType;
- (bool)sawEmailOptIn;
- (void)setChannelIds:(id)arg1;
- (void)setHasIcloudAccountMatch:(bool)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setHasSawEmailOptIn:(bool)arg1;
- (void)setHasTotalChannelSelections:(bool)arg1;
- (void)setHasTotalResets:(bool)arg1;
- (void)setHasTotalTopicSelections:(bool)arg1;
- (void)setIcloudAccountMatch:(bool)arg1;
- (void)setOnboardAbandonStage:(id)arg1;
- (void)setResultType:(int)arg1;
- (void)setSawEmailOptIn:(bool)arg1;
- (void)setTopicIds:(id)arg1;
- (void)setTotalChannelSelections:(int)arg1;
- (void)setTotalResets:(int)arg1;
- (void)setTotalTopicSelections:(int)arg1;
- (id)topicIdAtIndex:(unsigned long long)arg1;
- (id)topicIds;
- (unsigned long long)topicIdsCount;
- (int)totalChannelSelections;
- (int)totalResets;
- (int)totalTopicSelections;
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