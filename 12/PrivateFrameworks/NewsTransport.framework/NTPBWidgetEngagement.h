<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTPBWidgetEngagement.h</title>
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

/PrivateFrameworks/NewsTransport.framework/NTPBWidgetEngagement.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport (2166)
 */

@interface NTPBWidgetEngagement : PBCodable <NSCopying> {
    NSString * _articleId;
    NSData * _articleViewingSessionId;
    NSString * _engagementTargetUrl;
    struct { 
        unsigned int widgetArticleCount : 1; 
        unsigned int widgetArticleCountInSection : 1; 
        unsigned int widgetArticleRank : 1; 
        unsigned int widgetArticleRankInSection : 1; 
        unsigned int widgetContentType : 1; 
        unsigned int widgetEngagementType : 1; 
        unsigned int widgetSectionDisplayRank : 1; 
        unsigned int widgetVideoPresentationReason : 1; 
    }  _has;
    NSMutableArray * _otherVisibleSections;
    NSString * _sourceChannelId;
    NSString * _webEmbedId;
    int  _widgetArticleCount;
    int  _widgetArticleCountInSection;
    int  _widgetArticleRank;
    int  _widgetArticleRankInSection;
    int  _widgetContentType;
    int  _widgetEngagementType;
    int  _widgetSectionDisplayRank;
    NSString * _widgetSectionId;
    NSString * _widgetUserId;
    int  _widgetVideoPresentationReason;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic, retain) NSString *engagementTargetUrl;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasArticleViewingSessionId;
@property (nonatomic, readonly) bool hasEngagementTargetUrl;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic, readonly) bool hasWebEmbedId;
@property (nonatomic) bool hasWidgetArticleCount;
@property (nonatomic) bool hasWidgetArticleCountInSection;
@property (nonatomic) bool hasWidgetArticleRank;
@property (nonatomic) bool hasWidgetArticleRankInSection;
@property (nonatomic) bool hasWidgetContentType;
@property (nonatomic) bool hasWidgetEngagementType;
@property (nonatomic) bool hasWidgetSectionDisplayRank;
@property (nonatomic, readonly) bool hasWidgetSectionId;
@property (nonatomic, readonly) bool hasWidgetUserId;
@property (nonatomic) bool hasWidgetVideoPresentationReason;
@property (nonatomic, retain) NSMutableArray *otherVisibleSections;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic, retain) NSString *webEmbedId;
@property (nonatomic) int widgetArticleCount;
@property (nonatomic) int widgetArticleCountInSection;
@property (nonatomic) int widgetArticleRank;
@property (nonatomic) int widgetArticleRankInSection;
@property (nonatomic) int widgetContentType;
@property (nonatomic) int widgetEngagementType;
@property (nonatomic) int widgetSectionDisplayRank;
@property (nonatomic, retain) NSString *widgetSectionId;
@property (nonatomic, retain) NSString *widgetUserId;
@property (nonatomic) int widgetVideoPresentationReason;

+ (Class)otherVisibleSectionsType;

- (void).cxx_destruct;
- (int)StringAsWidgetContentType:(id)arg1;
- (int)StringAsWidgetVideoPresentationReason:(id)arg1;
- (void)addOtherVisibleSections:(id)arg1;
- (id)articleId;
- (id)articleViewingSessionId;
- (void)clearOtherVisibleSections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)engagementTargetUrl;
- (bool)hasArticleId;
- (bool)hasArticleViewingSessionId;
- (bool)hasEngagementTargetUrl;
- (bool)hasSourceChannelId;
- (bool)hasWebEmbedId;
- (bool)hasWidgetArticleCount;
- (bool)hasWidgetArticleCountInSection;
- (bool)hasWidgetArticleRank;
- (bool)hasWidgetArticleRankInSection;
- (bool)hasWidgetContentType;
- (bool)hasWidgetEngagementType;
- (bool)hasWidgetSectionDisplayRank;
- (bool)hasWidgetSectionId;
- (bool)hasWidgetUserId;
- (bool)hasWidgetVideoPresentationReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)otherVisibleSections;
- (id)otherVisibleSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)otherVisibleSectionsCount;
- (bool)readFrom:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setEngagementTargetUrl:(id)arg1;
- (void)setHasWidgetArticleCount:(bool)arg1;
- (void)setHasWidgetArticleCountInSection:(bool)arg1;
- (void)setHasWidgetArticleRank:(bool)arg1;
- (void)setHasWidgetArticleRankInSection:(bool)arg1;
- (void)setHasWidgetContentType:(bool)arg1;
- (void)setHasWidgetEngagementType:(bool)arg1;
- (void)setHasWidgetSectionDisplayRank:(bool)arg1;
- (void)setHasWidgetVideoPresentationReason:(bool)arg1;
- (void)setOtherVisibleSections:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setWebEmbedId:(id)arg1;
- (void)setWidgetArticleCount:(int)arg1;
- (void)setWidgetArticleCountInSection:(int)arg1;
- (void)setWidgetArticleRank:(int)arg1;
- (void)setWidgetArticleRankInSection:(int)arg1;
- (void)setWidgetContentType:(int)arg1;
- (void)setWidgetEngagementType:(int)arg1;
- (void)setWidgetSectionDisplayRank:(int)arg1;
- (void)setWidgetSectionId:(id)arg1;
- (void)setWidgetUserId:(id)arg1;
- (void)setWidgetVideoPresentationReason:(int)arg1;
- (id)sourceChannelId;
- (id)webEmbedId;
- (int)widgetArticleCount;
- (int)widgetArticleCountInSection;
- (int)widgetArticleRank;
- (int)widgetArticleRankInSection;
- (int)widgetContentType;
- (id)widgetContentTypeAsString:(int)arg1;
- (int)widgetEngagementType;
- (int)widgetSectionDisplayRank;
- (id)widgetSectionId;
- (id)widgetUserId;
- (int)widgetVideoPresentationReason;
- (id)widgetVideoPresentationReasonAsString:(int)arg1;
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