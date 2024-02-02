<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTPBTodayWidgetExposure.h</title>
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

/PrivateFrameworks/NewsTransport.framework/NTPBTodayWidgetExposure.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport (2166)
 */

@interface NTPBTodayWidgetExposure : PBCodable <NSCopying> {
    struct { 
        unsigned int widgetAppearanceType : 1; 
        unsigned int widgetArticleCount : 1; 
        unsigned int widgetHeadlineExposureCount : 1; 
    }  _has;
    int  _widgetAppearanceType;
    int  _widgetArticleCount;
    int  _widgetHeadlineExposureCount;
    NSMutableArray * _widgetPersonalizationFeatureCTRPairs;
    NSMutableArray * _widgetSectionsArticleCountPairs;
}

@property (nonatomic) bool hasWidgetAppearanceType;
@property (nonatomic) bool hasWidgetArticleCount;
@property (nonatomic) bool hasWidgetHeadlineExposureCount;
@property (nonatomic) int widgetAppearanceType;
@property (nonatomic) int widgetArticleCount;
@property (nonatomic) int widgetHeadlineExposureCount;
@property (nonatomic, retain) NSMutableArray *widgetPersonalizationFeatureCTRPairs;
@property (nonatomic, retain) NSMutableArray *widgetSectionsArticleCountPairs;

+ (Class)widgetPersonalizationFeatureCTRPairType;
+ (Class)widgetSectionsArticleCountPairType;

- (void).cxx_destruct;
- (void)addWidgetPersonalizationFeatureCTRPair:(id)arg1;
- (void)addWidgetSectionsArticleCountPair:(id)arg1;
- (void)clearWidgetPersonalizationFeatureCTRPairs;
- (void)clearWidgetSectionsArticleCountPairs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasWidgetAppearanceType;
- (bool)hasWidgetArticleCount;
- (bool)hasWidgetHeadlineExposureCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasWidgetAppearanceType:(bool)arg1;
- (void)setHasWidgetArticleCount:(bool)arg1;
- (void)setHasWidgetHeadlineExposureCount:(bool)arg1;
- (void)setWidgetAppearanceType:(int)arg1;
- (void)setWidgetArticleCount:(int)arg1;
- (void)setWidgetHeadlineExposureCount:(int)arg1;
- (void)setWidgetPersonalizationFeatureCTRPairs:(id)arg1;
- (void)setWidgetSectionsArticleCountPairs:(id)arg1;
- (int)widgetAppearanceType;
- (int)widgetArticleCount;
- (int)widgetHeadlineExposureCount;
- (id)widgetPersonalizationFeatureCTRPairAtIndex:(unsigned long long)arg1;
- (id)widgetPersonalizationFeatureCTRPairs;
- (unsigned long long)widgetPersonalizationFeatureCTRPairsCount;
- (id)widgetSectionsArticleCountPairAtIndex:(unsigned long long)arg1;
- (id)widgetSectionsArticleCountPairs;
- (unsigned long long)widgetSectionsArticleCountPairsCount;
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