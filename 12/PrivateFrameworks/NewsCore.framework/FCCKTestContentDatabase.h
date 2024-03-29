<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FCCKTestContentDatabase.h</title>
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

/PrivateFrameworks/NewsCore.framework/FCCKTestContentDatabase.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore (2166)
 */

@interface FCCKTestContentDatabase : FCCKContentDatabase {
    NSMutableSet * _droppedFeeds;
    FCCKTestFeedQueryEndpoint * _feedQueryEndpoint;
    NSSet * _fetchedKeys;
    FCCKTestMultiFetchQueryEndpoint * _multiFetchQueryEndpoint;
    FCCKTestOrderFeedQueryEndpoint * _orderFeedQueryEndpoint;
    NSMutableArray * _records;
    bool  _simulateNetworkError;
}

@property (nonatomic, retain) NSMutableSet *droppedFeeds;
@property (nonatomic, retain) FCCKTestFeedQueryEndpoint *feedQueryEndpoint;
@property (nonatomic, copy) NSSet *fetchedKeys;
@property (nonatomic, retain) FCCKTestMultiFetchQueryEndpoint *multiFetchQueryEndpoint;
@property (nonatomic, retain) FCCKTestOrderFeedQueryEndpoint *orderFeedQueryEndpoint;
@property (nonatomic, retain) NSMutableArray *records;
@property (nonatomic) bool simulateNetworkError;

+ (id)testingDatabase;

- (void).cxx_destruct;
- (id)addArticlesToTopOfFeed:(id)arg1 count:(unsigned long long)arg2;
- (void)addOperation:(id)arg1;
- (void)deleteArticleWithID:(id)arg1;
- (void)deleteFeedID:(id)arg1;
- (id)droppedFeeds;
- (id)feedQueryEndpoint;
- (id)fetchedKeys;
- (id)initWithContainerIdentifier:(id)arg1 productionEnvironment:(bool)arg2 networkBehaviorMonitor:(id)arg3;
- (void)insertArticleID:(id)arg1 atBottomOfFeedID:(id)arg2;
- (void)insertArticleID:(id)arg1 atTopOfFeedID:(id)arg2;
- (void)insertArticleID:(id)arg1 inFeedID:(id)arg2 withOrder:(unsigned long long)arg3;
- (void)insertArticleID:(id)arg1 inFeedID:(id)arg2 withOrder:(unsigned long long)arg3 subOrder:(unsigned long long)arg4;
- (void)insertRecord:(id)arg1;
- (id)insertTestArticle;
- (id)insertTestArticleListReferencingArticleIDs:(id)arg1;
- (void)insertTestArticleWithID:(id)arg1 properties:(id)arg2;
- (id)insertTestArticleWithProperties:(id)arg1;
- (id)insertTestForYouConfigWithProperties:(id)arg1;
- (id)insertTestIssueListReferencingIssueIDs:(id)arg1;
- (void)insertTestIssueWithID:(id)arg1 properties:(id)arg2;
- (id)insertTestIssueWithProperties:(id)arg1;
- (void)insertTestTagWithID:(id)arg1 type:(id)arg2 properties:(id)arg3;
- (id)insertTestTagWithType:(id)arg1 feedID:(id)arg2;
- (id)insertTestTagWithType:(id)arg1 feedID:(id)arg2 properties:(id)arg3;
- (id)insertTestTagWithType:(id)arg1 properties:(id)arg2;
- (id)multiFetchQueryEndpoint;
- (id)orderFeedQueryEndpoint;
- (unsigned long long)orderForArticleID:(id)arg1 feedID:(id)arg2;
- (void)populateWithBasicTestFeeds;
- (id)records;
- (id)records:(id)arg1 withDesiredKeys:(id)arg2;
- (void)setDroppedFeeds:(id)arg1;
- (void)setFeedQueryEndpoint:(id)arg1;
- (void)setFetchedKeys:(id)arg1;
- (void)setMultiFetchQueryEndpoint:(id)arg1;
- (void)setOrderFeedQueryEndpoint:(id)arg1;
- (void)setRecords:(id)arg1;
- (void)setSimulateNetworkError:(bool)arg1;
- (bool)shouldUseCloudd;
- (void)simulateDroppedFeedForFeedID:(id)arg1;
- (bool)simulateNetworkError;
- (void)updateArticleID:(id)arg1 inFeedID:(id)arg2 withProperties:(id)arg3;
- (void)updateArticleWithID:(id)arg1 modDate:(id)arg2 properties:(id)arg3;
- (void)updateArticleWithID:(id)arg1 properties:(id)arg2;
- (void)updateTagWithID:(id)arg1 properties:(id)arg2;

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
