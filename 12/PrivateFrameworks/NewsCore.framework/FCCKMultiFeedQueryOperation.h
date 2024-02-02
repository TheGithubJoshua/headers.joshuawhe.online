<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FCCKMultiFeedQueryOperation.h</title>
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

/PrivateFrameworks/NewsCore.framework/FCCKMultiFeedQueryOperation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore (2166)
 */

@interface FCCKMultiFeedQueryOperation : FCOperation {
    NSArray * _articleLinkKeys;
    FCCKContentDatabase * _database;
    NSArray * _desiredKeys;
    NSArray * _feedRequests;
    NSArray * _networkEvents;
    id /* block */  _queryCompletionHandler;
    long long  _queryPriority;
    NSError * _resultError;
    NSArray * _resultFeedItemAndArticleRecords;
    NSArray * _resultFeedResponses;
    NSArray * _resultIssueRecords;
    NSArray * _resultTagRecords;
    unsigned long long  _resultsLimit;
    long long  _sortingFunction;
}

@property (nonatomic, copy) NSArray *articleLinkKeys;
@property (nonatomic, retain) FCCKContentDatabase *database;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic, copy) NSArray *feedRequests;
@property (nonatomic, copy) NSArray *networkEvents;
@property (nonatomic, copy) id /* block */ queryCompletionHandler;
@property (nonatomic) long long queryPriority;
@property (nonatomic, retain) NSError *resultError;
@property (nonatomic, retain) NSArray *resultFeedItemAndArticleRecords;
@property (nonatomic, retain) NSArray *resultFeedResponses;
@property (nonatomic, retain) NSArray *resultIssueRecords;
@property (nonatomic, retain) NSArray *resultTagRecords;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) long long sortingFunction;

- (void).cxx_destruct;
- (id)_constructFeedQuery;
- (id)_feedRelativeDictionaryFromResultsArray:(id)arg1;
- (id)_predicateForPerFeedFieldName:(id)arg1 key:(id)arg2 defaultValue:(id)arg3;
- (void)_processResultsRecord:(id)arg1 feedItemAndArticleRecords:(id)arg2 tagRecords:(id)arg3 issueRecords:(id)arg4;
- (id)_requiredKeys;
- (id)articleLinkKeys;
- (id)database;
- (id)desiredKeys;
- (id)feedRequests;
- (id)networkEvents;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id /* block */)queryCompletionHandler;
- (long long)queryPriority;
- (void)resetForRetry;
- (id)resultError;
- (id)resultFeedItemAndArticleRecords;
- (id)resultFeedResponses;
- (id)resultIssueRecords;
- (id)resultTagRecords;
- (unsigned long long)resultsLimit;
- (void)setArticleLinkKeys:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setFeedRequests:(id)arg1;
- (void)setNetworkEvents:(id)arg1;
- (void)setQueryCompletionHandler:(id /* block */)arg1;
- (void)setQueryPriority:(long long)arg1;
- (void)setResultError:(id)arg1;
- (void)setResultFeedItemAndArticleRecords:(id)arg1;
- (void)setResultFeedResponses:(id)arg1;
- (void)setResultIssueRecords:(id)arg1;
- (void)setResultTagRecords:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setSortingFunction:(long long)arg1;
- (long long)sortingFunction;
- (bool)validateOperation;

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