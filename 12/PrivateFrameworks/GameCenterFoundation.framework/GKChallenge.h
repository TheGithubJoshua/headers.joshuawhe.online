<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GKChallenge.h</title>
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

/PrivateFrameworks/GameCenterFoundation.framework/GKChallenge.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation (577.8)
 */

@interface GKChallenge : NSObject <NSCoding, NSSecureCoding> {
    GKChallengeInternal * _internal;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *challengeID;
@property (nonatomic, readonly, copy) NSOrderedSet *compatibleBundleIDs;
@property (nonatomic, readonly, retain) NSDate *completionDate;
@property (nonatomic, readonly) bool detailsLoaded;
@property (nonatomic, readonly) GKGame *game;
@property (retain) GKChallengeInternal *internal;
@property (nonatomic, readonly, retain) NSDate *issueDate;
@property (nonatomic, readonly, copy) GKPlayer *issuingPlayer;
@property (nonatomic, readonly, copy) NSString *issuingPlayerID;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) GKPlayer *receivingPlayer;
@property (nonatomic, readonly, copy) NSString *receivingPlayerID;
@property (nonatomic, readonly) long long state;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withAchievement:(id)arg3;
+ (id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withScore:(id)arg3;
+ (id)challengeForInternalRepresentation:(id)arg1;
+ (void)getCountOfChallenges:(id /* block */)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (void)loadChallengesForGame:(id)arg1 receivingPlayer:(id)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)loadChallengesForReceivingPlayer:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadReceivedChallengesWithCompletionHandler:(id /* block */)arg1;
+ (id)stringForState:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)decline;
- (void)declineWithCompletionHandler:(id /* block */)arg1;
- (bool)detailsLoaded;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)game;
- (bool)hasLoadedUIDetails;
- (unsigned long long)hash;
- (id)infoTextForIssuingPlayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (void)issueToPlayers:(id)arg1 message:(id)arg2;
- (id)issuingPlayer;
- (id)issuingPlayerID;
- (void)loadDetailsWithCompletionHandler:(id /* block */)arg1;
- (void)loadUIDetailsWithHandler:(id /* block */)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)receivingPlayer;
- (id)receivingPlayerID;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (id)alertGoalText;
- (id)composeGoalText;
- (id)detailFromText;
- (id)detailGoalText;
- (id)iconSource;
- (id)iconURLString;
- (id)listGoalText;
- (id)listTitleText;
- (void)loadBannerImageWithHandler:(id /* block */)arg1;
- (void)loadImageWithCompletionHandler:(id /* block */)arg1;
- (void)loadImageWithSource:(id)arg1 URLString:(id)arg2 withHandler:(id /* block */)arg3;
- (id)smallIconURLString;

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