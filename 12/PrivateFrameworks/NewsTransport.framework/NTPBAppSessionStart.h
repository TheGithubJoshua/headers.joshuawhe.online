<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTPBAppSessionStart.h</title>
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

/PrivateFrameworks/NewsTransport.framework/NTPBAppSessionStart.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport (2166)
 */

@interface NTPBAppSessionStart : PBCodable <NSCopying> {
    int  _appsAutoSubscribeFeedCount;
    NSMutableArray * _autoSubscribedFeedIds;
    NSString * _campaignId;
    NSString * _campaignType;
    int  _channelSubscriptionCount;
    NSString * _creativeId;
    NSMutableArray * _groupableFeedIds;
    struct { 
        unsigned int lastAppSessionTimestamp : 1; 
        unsigned int appsAutoSubscribeFeedCount : 1; 
        unsigned int channelSubscriptionCount : 1; 
        unsigned int internalAutoSubscribeFeedCount : 1; 
        unsigned int notificationEnabledChannelsCount : 1; 
        unsigned int notificationType : 1; 
        unsigned int notitificationsEnabledChannelsCount : 1; 
        unsigned int portraitAutoSubscribeFeedCount : 1; 
        unsigned int safariAutoSubscribeFeedCount : 1; 
        unsigned int sessionStartMethod : 1; 
        unsigned int topicSubscriptionCount : 1; 
        unsigned int viewabilityState : 1; 
        unsigned int widgetArticleRank : 1; 
        unsigned int widgetSection : 1; 
        unsigned int widgetSectionArticleRank : 1; 
        unsigned int isMarketingNotificationEnabled : 1; 
        unsigned int isNewIssuesNotificationEnabled : 1; 
        unsigned int startedFromNotification : 1; 
    }  _has;
    int  _internalAutoSubscribeFeedCount;
    bool  _isMarketingNotificationEnabled;
    bool  _isNewIssuesNotificationEnabled;
    long long  _lastAppSessionTimestamp;
    NSString * _notificationArticleId;
    NSMutableArray * _notificationChannelIds;
    int  _notificationEnabledChannelsCount;
    NSString * _notificationId;
    NSString * _notificationSenderChannelId;
    NSString * _notificationSourceChannelId;
    int  _notificationType;
    int  _notitificationsEnabledChannelsCount;
    NSMutableArray * _paidSubscriptionChannelIds;
    int  _portraitAutoSubscribeFeedCount;
    NSString * _referringSourceApplication;
    NSString * _referringUrl;
    int  _safariAutoSubscribeFeedCount;
    int  _sessionStartMethod;
    bool  _startedFromNotification;
    NSMutableArray * _subscribedFeedIds;
    int  _topicSubscriptionCount;
    NSString * _userActivityType;
    int  _viewabilityState;
    NSMutableArray * _visibleViews;
    int  _widgetArticleRank;
    NTPBWidgetEngagement * _widgetEngagement;
    int  _widgetSection;
    int  _widgetSectionArticleRank;
}

@property (nonatomic) int appsAutoSubscribeFeedCount;
@property (nonatomic, retain) NSMutableArray *autoSubscribedFeedIds;
@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic, retain) NSString *campaignType;
@property (nonatomic) int channelSubscriptionCount;
@property (nonatomic, retain) NSString *creativeId;
@property (nonatomic, retain) NSMutableArray *groupableFeedIds;
@property (nonatomic) bool hasAppsAutoSubscribeFeedCount;
@property (nonatomic, readonly) bool hasCampaignId;
@property (nonatomic, readonly) bool hasCampaignType;
@property (nonatomic) bool hasChannelSubscriptionCount;
@property (nonatomic, readonly) bool hasCreativeId;
@property (nonatomic) bool hasInternalAutoSubscribeFeedCount;
@property (nonatomic) bool hasIsMarketingNotificationEnabled;
@property (nonatomic) bool hasIsNewIssuesNotificationEnabled;
@property (nonatomic) bool hasLastAppSessionTimestamp;
@property (nonatomic, readonly) bool hasNotificationArticleId;
@property (nonatomic) bool hasNotificationEnabledChannelsCount;
@property (nonatomic, readonly) bool hasNotificationId;
@property (nonatomic, readonly) bool hasNotificationSenderChannelId;
@property (nonatomic, readonly) bool hasNotificationSourceChannelId;
@property (nonatomic) bool hasNotificationType;
@property (nonatomic) bool hasNotitificationsEnabledChannelsCount;
@property (nonatomic) bool hasPortraitAutoSubscribeFeedCount;
@property (nonatomic, readonly) bool hasReferringSourceApplication;
@property (nonatomic, readonly) bool hasReferringUrl;
@property (nonatomic) bool hasSafariAutoSubscribeFeedCount;
@property (nonatomic) bool hasSessionStartMethod;
@property (nonatomic) bool hasStartedFromNotification;
@property (nonatomic) bool hasTopicSubscriptionCount;
@property (nonatomic, readonly) bool hasUserActivityType;
@property (nonatomic) bool hasViewabilityState;
@property (nonatomic) bool hasWidgetArticleRank;
@property (nonatomic, readonly) bool hasWidgetEngagement;
@property (nonatomic) bool hasWidgetSection;
@property (nonatomic) bool hasWidgetSectionArticleRank;
@property (nonatomic) int internalAutoSubscribeFeedCount;
@property (nonatomic) bool isMarketingNotificationEnabled;
@property (nonatomic) bool isNewIssuesNotificationEnabled;
@property (nonatomic) long long lastAppSessionTimestamp;
@property (nonatomic, retain) NSString *notificationArticleId;
@property (nonatomic, retain) NSMutableArray *notificationChannelIds;
@property (nonatomic) int notificationEnabledChannelsCount;
@property (nonatomic, retain) NSString *notificationId;
@property (nonatomic, retain) NSString *notificationSenderChannelId;
@property (nonatomic, retain) NSString *notificationSourceChannelId;
@property (nonatomic) int notificationType;
@property (nonatomic) int notitificationsEnabledChannelsCount;
@property (nonatomic, retain) NSMutableArray *paidSubscriptionChannelIds;
@property (nonatomic) int portraitAutoSubscribeFeedCount;
@property (nonatomic, retain) NSString *referringSourceApplication;
@property (nonatomic, retain) NSString *referringUrl;
@property (nonatomic) int safariAutoSubscribeFeedCount;
@property (nonatomic) int sessionStartMethod;
@property (nonatomic) bool startedFromNotification;
@property (nonatomic, retain) NSMutableArray *subscribedFeedIds;
@property (nonatomic) int topicSubscriptionCount;
@property (nonatomic, retain) NSString *userActivityType;
@property (nonatomic) int viewabilityState;
@property (nonatomic, retain) NSMutableArray *visibleViews;
@property (nonatomic) int widgetArticleRank;
@property (nonatomic, retain) NTPBWidgetEngagement *widgetEngagement;
@property (nonatomic) int widgetSection;
@property (nonatomic) int widgetSectionArticleRank;

+ (Class)autoSubscribedFeedIdsType;
+ (Class)groupableFeedIdsType;
+ (Class)notificationChannelIdsType;
+ (Class)paidSubscriptionChannelIdsType;
+ (Class)subscribedFeedIdsType;
+ (Class)visibleViewsType;

- (void).cxx_destruct;
- (int)StringAsWidgetSection:(id)arg1;
- (void)addAutoSubscribedFeedIds:(id)arg1;
- (void)addGroupableFeedIds:(id)arg1;
- (void)addNotificationChannelIds:(id)arg1;
- (void)addPaidSubscriptionChannelIds:(id)arg1;
- (void)addSubscribedFeedIds:(id)arg1;
- (void)addVisibleViews:(id)arg1;
- (int)appsAutoSubscribeFeedCount;
- (id)autoSubscribedFeedIds;
- (id)autoSubscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)autoSubscribedFeedIdsCount;
- (id)campaignId;
- (id)campaignType;
- (int)channelSubscriptionCount;
- (void)clearAutoSubscribedFeedIds;
- (void)clearGroupableFeedIds;
- (void)clearNotificationChannelIds;
- (void)clearPaidSubscriptionChannelIds;
- (void)clearSubscribedFeedIds;
- (void)clearVisibleViews;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creativeId;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupableFeedIds;
- (id)groupableFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupableFeedIdsCount;
- (bool)hasAppsAutoSubscribeFeedCount;
- (bool)hasCampaignId;
- (bool)hasCampaignType;
- (bool)hasChannelSubscriptionCount;
- (bool)hasCreativeId;
- (bool)hasInternalAutoSubscribeFeedCount;
- (bool)hasIsMarketingNotificationEnabled;
- (bool)hasIsNewIssuesNotificationEnabled;
- (bool)hasLastAppSessionTimestamp;
- (bool)hasNotificationArticleId;
- (bool)hasNotificationEnabledChannelsCount;
- (bool)hasNotificationId;
- (bool)hasNotificationSenderChannelId;
- (bool)hasNotificationSourceChannelId;
- (bool)hasNotificationType;
- (bool)hasNotitificationsEnabledChannelsCount;
- (bool)hasPortraitAutoSubscribeFeedCount;
- (bool)hasReferringSourceApplication;
- (bool)hasReferringUrl;
- (bool)hasSafariAutoSubscribeFeedCount;
- (bool)hasSessionStartMethod;
- (bool)hasStartedFromNotification;
- (bool)hasTopicSubscriptionCount;
- (bool)hasUserActivityType;
- (bool)hasViewabilityState;
- (bool)hasWidgetArticleRank;
- (bool)hasWidgetEngagement;
- (bool)hasWidgetSection;
- (bool)hasWidgetSectionArticleRank;
- (unsigned long long)hash;
- (int)internalAutoSubscribeFeedCount;
- (bool)isEqual:(id)arg1;
- (bool)isMarketingNotificationEnabled;
- (bool)isNewIssuesNotificationEnabled;
- (long long)lastAppSessionTimestamp;
- (void)mergeFrom:(id)arg1;
- (id)notificationArticleId;
- (id)notificationChannelIds;
- (id)notificationChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)notificationChannelIdsCount;
- (int)notificationEnabledChannelsCount;
- (id)notificationId;
- (id)notificationSenderChannelId;
- (id)notificationSourceChannelId;
- (int)notificationType;
- (int)notitificationsEnabledChannelsCount;
- (id)paidSubscriptionChannelIds;
- (id)paidSubscriptionChannelIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paidSubscriptionChannelIdsCount;
- (int)portraitAutoSubscribeFeedCount;
- (bool)readFrom:(id)arg1;
- (id)referringSourceApplication;
- (id)referringUrl;
- (int)safariAutoSubscribeFeedCount;
- (int)sessionStartMethod;
- (void)setAppsAutoSubscribeFeedCount:(int)arg1;
- (void)setAutoSubscribedFeedIds:(id)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setChannelSubscriptionCount:(int)arg1;
- (void)setCreativeId:(id)arg1;
- (void)setGroupableFeedIds:(id)arg1;
- (void)setHasAppsAutoSubscribeFeedCount:(bool)arg1;
- (void)setHasChannelSubscriptionCount:(bool)arg1;
- (void)setHasInternalAutoSubscribeFeedCount:(bool)arg1;
- (void)setHasIsMarketingNotificationEnabled:(bool)arg1;
- (void)setHasIsNewIssuesNotificationEnabled:(bool)arg1;
- (void)setHasLastAppSessionTimestamp:(bool)arg1;
- (void)setHasNotificationEnabledChannelsCount:(bool)arg1;
- (void)setHasNotificationType:(bool)arg1;
- (void)setHasNotitificationsEnabledChannelsCount:(bool)arg1;
- (void)setHasPortraitAutoSubscribeFeedCount:(bool)arg1;
- (void)setHasSafariAutoSubscribeFeedCount:(bool)arg1;
- (void)setHasSessionStartMethod:(bool)arg1;
- (void)setHasStartedFromNotification:(bool)arg1;
- (void)setHasTopicSubscriptionCount:(bool)arg1;
- (void)setHasViewabilityState:(bool)arg1;
- (void)setHasWidgetArticleRank:(bool)arg1;
- (void)setHasWidgetSection:(bool)arg1;
- (void)setHasWidgetSectionArticleRank:(bool)arg1;
- (void)setInternalAutoSubscribeFeedCount:(int)arg1;
- (void)setIsMarketingNotificationEnabled:(bool)arg1;
- (void)setIsNewIssuesNotificationEnabled:(bool)arg1;
- (void)setLastAppSessionTimestamp:(long long)arg1;
- (void)setNotificationArticleId:(id)arg1;
- (void)setNotificationChannelIds:(id)arg1;
- (void)setNotificationEnabledChannelsCount:(int)arg1;
- (void)setNotificationId:(id)arg1;
- (void)setNotificationSenderChannelId:(id)arg1;
- (void)setNotificationSourceChannelId:(id)arg1;
- (void)setNotificationType:(int)arg1;
- (void)setNotitificationsEnabledChannelsCount:(int)arg1;
- (void)setPaidSubscriptionChannelIds:(id)arg1;
- (void)setPortraitAutoSubscribeFeedCount:(int)arg1;
- (void)setReferringSourceApplication:(id)arg1;
- (void)setReferringUrl:(id)arg1;
- (void)setSafariAutoSubscribeFeedCount:(int)arg1;
- (void)setSessionStartMethod:(int)arg1;
- (void)setStartedFromNotification:(bool)arg1;
- (void)setSubscribedFeedIds:(id)arg1;
- (void)setTopicSubscriptionCount:(int)arg1;
- (void)setUserActivityType:(id)arg1;
- (void)setViewabilityState:(int)arg1;
- (void)setVisibleViews:(id)arg1;
- (void)setWidgetArticleRank:(int)arg1;
- (void)setWidgetEngagement:(id)arg1;
- (void)setWidgetSection:(int)arg1;
- (void)setWidgetSectionArticleRank:(int)arg1;
- (bool)startedFromNotification;
- (id)subscribedFeedIds;
- (id)subscribedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subscribedFeedIdsCount;
- (int)topicSubscriptionCount;
- (id)userActivityType;
- (int)viewabilityState;
- (id)visibleViews;
- (id)visibleViewsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibleViewsCount;
- (int)widgetArticleRank;
- (id)widgetEngagement;
- (int)widgetSection;
- (int)widgetSectionArticleRank;
- (id)widgetSectionAsString:(int)arg1;
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