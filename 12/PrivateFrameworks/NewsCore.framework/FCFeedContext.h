<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FCFeedContext.h</title>
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

/PrivateFrameworks/NewsCore.framework/FCFeedContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore (2166)
 */

@interface FCFeedContext : NSObject <NSCopying> {
    NSString * _channelID;
    bool  _isCoverArticles;
    bool  _isEditorial;
    bool  _isEditorialGems;
    bool  _isHiddenFeed;
    bool  _isPaidBundleFeed;
    bool  _isTopStories;
    NSString * _sectionID;
    NSString * _topicID;
}

@property (nonatomic, copy) NSString *channelID;
@property (nonatomic) bool isCoverArticles;
@property (nonatomic) bool isEditorial;
@property (nonatomic) bool isEditorialGems;
@property (nonatomic) bool isHiddenFeed;
@property (nonatomic) bool isPaidBundleFeed;
@property (nonatomic) bool isTopStories;
@property (nonatomic, copy) NSString *sectionID;
@property (nonatomic, copy) NSString *topicID;

+ (id)feedContextForBreakingNewsChannelID:(id)arg1;
+ (id)feedContextForChannel:(id)arg1 sectionID:(id)arg2;
+ (id)feedContextForCoverArticlesFeed;
+ (id)feedContextForEditorialChannel:(id)arg1 editorialGemsSectionID:(id)arg2;
+ (id)feedContextForEditorialChannel:(id)arg1 sectionID:(id)arg2;
+ (id)feedContextForEditorialTag:(id)arg1;
+ (id)feedContextForHiddenFeed;
+ (id)feedContextForPaidBundleFeed;
+ (id)feedContextForTag:(id)arg1;
+ (id)feedContextForTopStoriesChannel:(id)arg1 sectionID:(id)arg2;
+ (id)feedContextForTopStoriesTag:(id)arg1;

- (void).cxx_destruct;
- (id)channelID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isCoverArticles;
- (bool)isEditorial;
- (bool)isEditorialGems;
- (bool)isHiddenFeed;
- (bool)isPaidBundleFeed;
- (bool)isTopStories;
- (id)sectionID;
- (void)setChannelID:(id)arg1;
- (void)setIsCoverArticles:(bool)arg1;
- (void)setIsEditorial:(bool)arg1;
- (void)setIsEditorialGems:(bool)arg1;
- (void)setIsHiddenFeed:(bool)arg1;
- (void)setIsPaidBundleFeed:(bool)arg1;
- (void)setIsTopStories:(bool)arg1;
- (void)setSectionID:(id)arg1;
- (void)setTopicID:(id)arg1;
- (id)topicID;

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