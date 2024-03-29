<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTPBBinningConfig.h</title>
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

/PrivateFrameworks/NewsTransport.framework/NTPBBinningConfig.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport (2166)
 */

@interface NTPBBinningConfig : PBCodable <NSCopying> {
    double  _decreaseConsumptionThreshold;
    int  _defaultChannelBin;
    int  _defaultTopicBin;
    bool  _enabled;
    long long  _evaluationFrequency;
    struct { 
        unsigned int decreaseConsumptionThreshold : 1; 
        unsigned int evaluationFrequency : 1; 
        unsigned int historyLength : 1; 
        unsigned int increaseConsumptionThreshold : 1; 
        unsigned int minimumArticleCount : 1; 
        unsigned int defaultChannelBin : 1; 
        unsigned int defaultTopicBin : 1; 
        unsigned int enabled : 1; 
    }  _has;
    long long  _historyLength;
    double  _increaseConsumptionThreshold;
    long long  _minimumArticleCount;
}

@property (nonatomic) double decreaseConsumptionThreshold;
@property (nonatomic) int defaultChannelBin;
@property (nonatomic) int defaultTopicBin;
@property (nonatomic) bool enabled;
@property (nonatomic) long long evaluationFrequency;
@property (nonatomic) bool hasDecreaseConsumptionThreshold;
@property (nonatomic) bool hasDefaultChannelBin;
@property (nonatomic) bool hasDefaultTopicBin;
@property (nonatomic) bool hasEnabled;
@property (nonatomic) bool hasEvaluationFrequency;
@property (nonatomic) bool hasHistoryLength;
@property (nonatomic) bool hasIncreaseConsumptionThreshold;
@property (nonatomic) bool hasMinimumArticleCount;
@property (nonatomic) long long historyLength;
@property (nonatomic) double increaseConsumptionThreshold;
@property (nonatomic) long long minimumArticleCount;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)decreaseConsumptionThreshold;
- (int)defaultChannelBin;
- (int)defaultTopicBin;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enabled;
- (long long)evaluationFrequency;
- (bool)hasDecreaseConsumptionThreshold;
- (bool)hasDefaultChannelBin;
- (bool)hasDefaultTopicBin;
- (bool)hasEnabled;
- (bool)hasEvaluationFrequency;
- (bool)hasHistoryLength;
- (bool)hasIncreaseConsumptionThreshold;
- (bool)hasMinimumArticleCount;
- (unsigned long long)hash;
- (long long)historyLength;
- (double)increaseConsumptionThreshold;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)minimumArticleCount;
- (bool)readFrom:(id)arg1;
- (void)setDecreaseConsumptionThreshold:(double)arg1;
- (void)setDefaultChannelBin:(int)arg1;
- (void)setDefaultTopicBin:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEvaluationFrequency:(long long)arg1;
- (void)setHasDecreaseConsumptionThreshold:(bool)arg1;
- (void)setHasDefaultChannelBin:(bool)arg1;
- (void)setHasDefaultTopicBin:(bool)arg1;
- (void)setHasEnabled:(bool)arg1;
- (void)setHasEvaluationFrequency:(bool)arg1;
- (void)setHasHistoryLength:(bool)arg1;
- (void)setHasIncreaseConsumptionThreshold:(bool)arg1;
- (void)setHasMinimumArticleCount:(bool)arg1;
- (void)setHistoryLength:(long long)arg1;
- (void)setIncreaseConsumptionThreshold:(double)arg1;
- (void)setMinimumArticleCount:(long long)arg1;
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
