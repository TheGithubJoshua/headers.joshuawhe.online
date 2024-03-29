<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOTrafficBannerText.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOTrafficBannerText.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOTrafficBannerText : PBCodable <NSCopying> {
    GEOFormattedString * _bannerLargeText;
    GEOFormattedString * _bannerSmallText;
    int  _bannerStyle;
    bool  _disableFasterRerouteByDefault;
    struct { 
        unsigned int bannerStyle : 1; 
        unsigned int hideAtDistance : 1; 
        unsigned int incidentDistance : 1; 
        unsigned int incidentIndex : 1; 
        unsigned int previousBannerChange : 1; 
        unsigned int secondsSaved : 1; 
        unsigned int showAtDistance : 1; 
        unsigned int disableFasterRerouteByDefault : 1; 
    }  _has;
    unsigned int  _hideAtDistance;
    unsigned int  _incidentDistance;
    unsigned int  _incidentIndex;
    NSMutableArray * _localizedIncidentBanners;
    NSMutableArray * _localizedIncidentSpokenTexts;
    NSMutableArray * _localizedIncidentSubBanners;
    int  _previousBannerChange;
    unsigned int  _secondsSaved;
    unsigned int  _showAtDistance;
    GEOFormattedString * _spokenPrompt;
}

@property (nonatomic, retain) GEOFormattedString *bannerLargeText;
@property (nonatomic, retain) GEOFormattedString *bannerSmallText;
@property (nonatomic) int bannerStyle;
@property (nonatomic) bool disableFasterRerouteByDefault;
@property (nonatomic, readonly) bool hasBannerLargeText;
@property (nonatomic, readonly) bool hasBannerSmallText;
@property (nonatomic) bool hasBannerStyle;
@property (nonatomic) bool hasDisableFasterRerouteByDefault;
@property (nonatomic) bool hasHideAtDistance;
@property (nonatomic) bool hasIncidentDistance;
@property (nonatomic) bool hasIncidentIndex;
@property (nonatomic) bool hasPreviousBannerChange;
@property (nonatomic) bool hasSecondsSaved;
@property (nonatomic) bool hasShowAtDistance;
@property (nonatomic, readonly) bool hasSpokenPrompt;
@property (nonatomic) unsigned int hideAtDistance;
@property (nonatomic) unsigned int incidentDistance;
@property (nonatomic) unsigned int incidentIndex;
@property (nonatomic, retain) NSMutableArray *localizedIncidentBanners;
@property (nonatomic, retain) NSMutableArray *localizedIncidentSpokenTexts;
@property (nonatomic, retain) NSMutableArray *localizedIncidentSubBanners;
@property (nonatomic) int previousBannerChange;
@property (nonatomic) unsigned int secondsSaved;
@property (nonatomic) unsigned int showAtDistance;
@property (nonatomic, retain) GEOFormattedString *spokenPrompt;

+ (Class)localizedIncidentBannerType;
+ (Class)localizedIncidentSpokenTextType;
+ (Class)localizedIncidentSubBannerType;

- (void).cxx_destruct;
- (int)StringAsBannerStyle:(id)arg1;
- (int)StringAsPreviousBannerChange:(id)arg1;
- (void)addLocalizedIncidentBanner:(id)arg1;
- (void)addLocalizedIncidentSpokenText:(id)arg1;
- (void)addLocalizedIncidentSubBanner:(id)arg1;
- (id)bannerLargeText;
- (id)bannerSmallText;
- (int)bannerStyle;
- (id)bannerStyleAsString:(int)arg1;
- (void)clearLocalizedIncidentBanners;
- (void)clearLocalizedIncidentSpokenTexts;
- (void)clearLocalizedIncidentSubBanners;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)disableFasterRerouteByDefault;
- (bool)hasBannerLargeText;
- (bool)hasBannerSmallText;
- (bool)hasBannerStyle;
- (bool)hasDisableFasterRerouteByDefault;
- (bool)hasHideAtDistance;
- (bool)hasIncidentDistance;
- (bool)hasIncidentIndex;
- (bool)hasPreviousBannerChange;
- (bool)hasSecondsSaved;
- (bool)hasShowAtDistance;
- (bool)hasSpokenPrompt;
- (unsigned long long)hash;
- (unsigned int)hideAtDistance;
- (unsigned int)incidentDistance;
- (unsigned int)incidentIndex;
- (bool)isEqual:(id)arg1;
- (id)localizedIncidentBannerAtIndex:(unsigned long long)arg1;
- (id)localizedIncidentBanners;
- (unsigned long long)localizedIncidentBannersCount;
- (id)localizedIncidentSpokenTextAtIndex:(unsigned long long)arg1;
- (id)localizedIncidentSpokenTexts;
- (unsigned long long)localizedIncidentSpokenTextsCount;
- (id)localizedIncidentSubBannerAtIndex:(unsigned long long)arg1;
- (id)localizedIncidentSubBanners;
- (unsigned long long)localizedIncidentSubBannersCount;
- (void)mergeFrom:(id)arg1;
- (int)previousBannerChange;
- (id)previousBannerChangeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)secondsSaved;
- (void)setBannerLargeText:(id)arg1;
- (void)setBannerSmallText:(id)arg1;
- (void)setBannerStyle:(int)arg1;
- (void)setDisableFasterRerouteByDefault:(bool)arg1;
- (void)setHasBannerStyle:(bool)arg1;
- (void)setHasDisableFasterRerouteByDefault:(bool)arg1;
- (void)setHasHideAtDistance:(bool)arg1;
- (void)setHasIncidentDistance:(bool)arg1;
- (void)setHasIncidentIndex:(bool)arg1;
- (void)setHasPreviousBannerChange:(bool)arg1;
- (void)setHasSecondsSaved:(bool)arg1;
- (void)setHasShowAtDistance:(bool)arg1;
- (void)setHideAtDistance:(unsigned int)arg1;
- (void)setIncidentDistance:(unsigned int)arg1;
- (void)setIncidentIndex:(unsigned int)arg1;
- (void)setLocalizedIncidentBanners:(id)arg1;
- (void)setLocalizedIncidentSpokenTexts:(id)arg1;
- (void)setLocalizedIncidentSubBanners:(id)arg1;
- (void)setPreviousBannerChange:(int)arg1;
- (void)setSecondsSaved:(unsigned int)arg1;
- (void)setShowAtDistance:(unsigned int)arg1;
- (void)setSpokenPrompt:(id)arg1;
- (unsigned int)showAtDistance;
- (id)spokenPrompt;
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
