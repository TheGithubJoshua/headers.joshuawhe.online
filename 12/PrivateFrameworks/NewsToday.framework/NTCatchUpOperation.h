<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NTCatchUpOperation.h</title>
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

/PrivateFrameworks/NewsToday.framework/NTCatchUpOperation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday (2166)
 */

@interface NTCatchUpOperation : FCOperation {
    <FCNewsAppConfiguration> * _appConfiguration;
    NSMutableArray * _articleIDsRequests;
    NSMutableArray * _articleListRequests;
    id /* block */  _catchUpCompletionHandler;
    <FCContentContext> * _contentContext;
    <FCFeedPersonalizing> * _feedPersonalizer;
    NSDate * _fetchDate;
    bool  _forYouEnabled;
    NTCatchUpOperationForYouFetchInfo * _forYouFetchInfo;
    NTCatchUpOperationForYouRequest * _forYouRequest;
    NTCatchUpOperationResults * _forYouResults;
    unsigned long long  _maximumCachedAgeForForYou;
    NSDictionary * _resultsByArticleIDsRequestID;
    NSDictionary * _resultsByArticleListID;
    id /* block */  _sessionProvider;
    NSDictionary * _todayConfigOperationHeldRecordsByType;
}

@property (nonatomic, copy) <FCNewsAppConfiguration> *appConfiguration;
@property (nonatomic, retain) NSMutableArray *articleIDsRequests;
@property (nonatomic, retain) NSMutableArray *articleListRequests;
@property (nonatomic, copy) id /* block */ catchUpCompletionHandler;
@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (nonatomic, copy) NSDate *fetchDate;
@property (getter=isForYouEnabled, nonatomic) bool forYouEnabled;
@property (nonatomic, copy) NTCatchUpOperationForYouFetchInfo *forYouFetchInfo;
@property (nonatomic, copy) NTCatchUpOperationForYouRequest *forYouRequest;
@property (nonatomic, copy) NTCatchUpOperationResults *forYouResults;
@property (nonatomic) unsigned long long maximumCachedAgeForForYou;
@property (nonatomic, copy) NSDictionary *resultsByArticleIDsRequestID;
@property (nonatomic, copy) NSDictionary *resultsByArticleListID;
@property (nonatomic, copy) id /* block */ sessionProvider;
@property (nonatomic, retain) NSDictionary *todayConfigOperationHeldRecordsByType;

- (void).cxx_destruct;
- (void)_fetchArticleListAndArticleIDsResultsIfNeededWithCompletion:(id /* block */)arg1;
- (void)_fetchForYouResultsIfNeededWithCompletion:(id /* block */)arg1;
- (void)addArticleIDsRequest:(id)arg1;
- (void)addArticleListRequest:(id)arg1;
- (id)appConfiguration;
- (id)articleIDsRequests;
- (id)articleListRequests;
- (id /* block */)catchUpCompletionHandler;
- (id)contentContext;
- (id)feedPersonalizer;
- (id)fetchDate;
- (id)forYouFetchInfo;
- (id)forYouRequest;
- (id)forYouResults;
- (id)init;
- (bool)isForYouEnabled;
- (unsigned long long)maximumCachedAgeForForYou;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)resultsByArticleIDsRequestID;
- (id)resultsByArticleListID;
- (id /* block */)sessionProvider;
- (void)setAppConfiguration:(id)arg1;
- (void)setArticleIDsRequests:(id)arg1;
- (void)setArticleListRequests:(id)arg1;
- (void)setCatchUpCompletionHandler:(id /* block */)arg1;
- (void)setContentContext:(id)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setFetchDate:(id)arg1;
- (void)setForYouEnabled:(bool)arg1;
- (void)setForYouFetchInfo:(id)arg1;
- (void)setForYouRequest:(id)arg1;
- (void)setForYouResults:(id)arg1;
- (void)setMaximumCachedAgeForForYou:(unsigned long long)arg1;
- (void)setResultsByArticleIDsRequestID:(id)arg1;
- (void)setResultsByArticleListID:(id)arg1;
- (void)setSessionProvider:(id /* block */)arg1;
- (void)setTodayConfigOperationHeldRecordsByType:(id)arg1;
- (id)todayConfigOperationHeldRecordsByType;
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
