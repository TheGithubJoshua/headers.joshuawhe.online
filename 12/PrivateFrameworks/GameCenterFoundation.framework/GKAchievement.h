<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GKAchievement.h</title>
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

/PrivateFrameworks/GameCenterFoundation.framework/GKAchievement.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation (577.8)
 */

@interface GKAchievement : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    GKGame * _game;
    GKAchievementInternal * _internal;
    GKPlayer * _player;
    bool  _showsCompletionBanner;
}

@property (getter=isCompleted, nonatomic, readonly) bool completed;
@property (nonatomic) GKGame *game;
@property (nonatomic, readonly, copy) NSString *groupIdentifier;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, copy) NSString *identifier;
@property (retain) GKAchievementInternal *internal;
@property (nonatomic, copy) NSDate *lastReportedDate;
@property (nonatomic) double percentComplete;
@property (nonatomic, readonly, retain) GKPlayer *player;
@property (nonatomic, copy) NSString *playerID;
@property (nonatomic) bool showsCompletionBanner;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(id /* block */)arg4;
+ (void)loadAchievementsForGameV2:(id)arg1 player:(id)arg2 includeUnreported:(bool)arg3 includeHidden:(bool)arg4 withCompletionHandler:(id /* block */)arg5;
+ (void)loadAchievementsForGameV2:(id)arg1 players:(id)arg2 includeUnreported:(bool)arg3 includeHidden:(bool)arg4 withCompletionHandler:(id /* block */)arg5;
+ (void)loadAchievementsWithCompletionHandler:(id /* block */)arg1;
+ (void)reportAchievements:(id)arg1 whileScreeningChallenges:(bool)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(id /* block */)arg4;
+ (void)reportAchievements:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)resetAchievementsWithCompletionHandler:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (id)_achievementDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)game;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forPlayer:(id)arg2;
- (id)initWithIdentifier:(id)arg1 player:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2;
- (id)internal;
- (bool)isCompleted;
- (bool)isEqual:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)player;
- (id)playerID;
- (void)reportAchievementWithCompletionHandler:(id /* block */)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setGame:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setShowsCompletionBanner:(bool)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (bool)showsCompletionBanner;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (void)reportAchievements:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(id /* block */)arg3;

- (void)_gkSetSharingInfo:(id)arg1;
- (id)_gkSharingInfo;
- (long long)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewControllerSubject:(id)arg1;
- (bool)canBeShared;
- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)fetchSharingInfo;
- (id)imageURL;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;
- (void)loadImageWithCompletionHandler:(id /* block */)arg1;
- (void)selectChallengeablePlayerIDs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)selectChallengeablePlayers:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)showBanner;

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
