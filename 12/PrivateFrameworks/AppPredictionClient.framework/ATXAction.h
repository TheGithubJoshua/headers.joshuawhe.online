<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ATXAction.h</title>
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

/PrivateFrameworks/AppPredictionClient.framework/ATXAction.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient (1)
 */

@interface ATXAction : NSObject <CRContent, NSCopying, NSSecureCoding> {
    unsigned long long  _actionType;
    NSUUID * _actionUUID;
    NSString * _bundleId;
    CSSearchableItemAttributeSet * _contentAttributeSet;
    ATXActionCriteria * _criteria;
    NSString * _heuristic;
    NSDictionary * _heuristicMetadata;
    INIntent * _intent;
    bool  _isFutureMedia;
    bool  _isTVWhiteListedLongFormMedia;
    NSString * _itemIdentifier;
    ATXAVRouteInfo * _routeInfo;
    NSString * _subtitle;
    NSString * _title;
    NSUserActivity * _userActivity;
    unsigned long long  _userActivityHash;
    NSString * _userActivityString;
}

@property (nonatomic, readonly) unsigned long long actionType;
@property (nonatomic, readonly) NSUUID *actionUUID;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) CSSearchableItemAttributeSet *contentAttributeSet;
@property (nonatomic, readonly) ATXActionCriteria *criteria;
@property (nonatomic, readonly) NSString *customSubtitle;
@property (nonatomic, readonly) NSString *customTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *heuristic;
@property (nonatomic, readonly) NSDictionary *heuristicMetadata;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) bool isFutureMedia;
@property (nonatomic, readonly) bool isHeuristic;
@property (nonatomic, readonly) bool isTVWhiteListedLongFormMedia;
@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) ATXAVRouteInfo *routeInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUserActivity *userActivity;
@property (nonatomic, readonly) NSString *userActivityString;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (id)_extractValueInKeyValueBlob:(id)arg1 withKey:(id)arg2;
+ (bool)_isTVWhiteListedLongFormMediaIntent:(id)arg1 bundleId:(id)arg2;
+ (unsigned long long)_userActivityHashForUserInfoDict:(id)arg1 activityType:(id)arg2 webpageURL:(id)arg3;
+ (id)getActionKeyForBundleId:(id)arg1 actionType:(id)arg2;
+ (id)getDateFromUserActivityString:(id)arg1 forActionKey:(id)arg2;
+ (id)getNSUATypefromActivityType:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bundleIdForDisplay;
- (id)_spotlightContentType;
- (id)actionDescription;
- (id)actionKey;
- (id)actionSubtitle;
- (id)actionTitle;
- (unsigned long long)actionType;
- (id)actionUUID;
- (id)atx_actionWithRouteInfo:(id)arg1;
- (id)bundleId;
- (id)contentAttributeSet;
- (id)copyWithParameterWhitelist:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)criteria;
- (id)customSubtitle;
- (id)customTitle;
- (id)dateForAction;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasActionTitle;
- (unsigned long long)hash;
- (id)heuristic;
- (id)heuristicMetadata;
- (id)init;
- (id)initWithActivity:(id)arg1 activityString:(id)arg2 itemIdentifier:(id)arg3 contentAttributeSet:(id)arg4 intent:(id)arg5 actionUUID:(id)arg6 bundleId:(id)arg7 type:(unsigned long long)arg8 heuristic:(id)arg9 heuristicMetadata:(id)arg10 criteria:(id)arg11 isFutureMedia:(bool)arg12 routeInfo:(id)arg13 title:(id)arg14 subtitle:(id)arg15;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 heuristic:(id)arg4 criteria:(id)arg5 isFutureMedia:(bool)arg6 title:(id)arg7 subtitle:(id)arg8;
- (id)initWithIntent:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 heuristic:(id)arg4 heuristicMetadata:(id)arg5 criteria:(id)arg6 isFutureMedia:(bool)arg7 title:(id)arg8 subtitle:(id)arg9;
- (id)initWithNSUserActivity:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 contentAttributeSet:(id)arg4 itemIdentifier:(id)arg5 heuristic:(id)arg6 criteria:(id)arg7 isFutureMedia:(bool)arg8 title:(id)arg9 subtitle:(id)arg10;
- (id)initWithNSUserActivity:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 contentAttributeSet:(id)arg4 itemIdentifier:(id)arg5 heuristic:(id)arg6 heuristicMetadata:(id)arg7 criteria:(id)arg8 isFutureMedia:(bool)arg9 title:(id)arg10 subtitle:(id)arg11;
- (id)initWithNSUserActivityString:(id)arg1 actionUUID:(id)arg2 bundleId:(id)arg3 itemIdentifier:(id)arg4 contentAttributeSet:(id)arg5 heuristic:(id)arg6 isFutureMedia:(bool)arg7 title:(id)arg8 subtitle:(id)arg9;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAction:(id)arg1;
- (bool)isFutureMedia;
- (bool)isHeuristic;
- (bool)isTVWhiteListedLongFormMedia;
- (id)itemIdentifier;
- (id)json;
- (id)predictionTypeStringForPET;
- (id)routeInfo;
- (void)setCriteria:(id)arg1;
- (void)setHeuristic:(id)arg1;
- (id)underlyingInteraction;
- (id)userActivity;
- (unsigned long long)userActivityHash;
- (id)userActivityString;

// Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI

+ (bool)apui_isSupportedForCardRequests;

- (id)apui_intent;

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
