<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WBSParsecDFeedbackDispatcher.h</title>
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

/PrivateFrameworks/SafariShared.framework/WBSParsecDFeedbackDispatcher.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared (607.3.18)
 */

@interface WBSParsecDFeedbackDispatcher : NSObject <WBSParsecFeedbackDispatcher, WBSParsecGlobalFeedbackDispatcher> {
    NSArray * _feedbackListeners;
    NSObject<OS_dispatch_queue> * _feedbackQueue;
    NSMapTable * _queriesToDictionariesFromSearchTypesToStartSearchFeedbacks;
    NSObject<OS_dispatch_queue> * _queriesToDictionariesMappingQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_customFeedbackOfType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (void)_postFeedbackOnFeedbackQueue:(id)arg1;
- (void)_setStartSearchFeedback:(id)arg1 forSearchOfType:(long long)arg2 withQuery:(id)arg3;
- (id)_takeStartSearchFeedbackForSearchOfType:(long long)arg1 forQuery:(id)arg2;
- (void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 endpoint:(unsigned long long)arg3;
- (void)didBeginSearchOfType:(long long)arg1 withQuery:(id)arg2 urlString:(id)arg3 headers:(id)arg4 endpoint:(unsigned long long)arg5;
- (void)didDisplayCompletionListItems:(id)arg1 forQuery:(id)arg2 forEvent:(long long)arg3;
- (void)didGenerateCompletionListItemsWithRankingObserver:(id)arg1;
- (void)didRankSections:(id)arg1 blendingDuration:(double)arg2 feedbackForHiddenAndDuplicateResults:(id)arg3;
- (void)didReceiveLocalResultsForQuery:(id)arg1;
- (void)didReceiveParsecResultsAfterTimeout:(id)arg1;
- (void)didReceiveWebSuggestionsForQuery:(id)arg1 fromSearchProvider:(id)arg2 responseSize:(long long)arg3 statusCode:(long long)arg4 networkTimingData:(id)arg5;
- (id)initWithSession:(id)arg1;
- (void)postFeedback:(id)arg1;
- (void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1;
- (void)searchViewAppearedBecauseOfEvent:(unsigned long long)arg1 isSafariReaderAvailable:(bool)arg2;
- (void)searchViewDisappearedBecauseOfEvent:(long long)arg1;
- (void)sendAppLaunchFeedback;
- (void)sendAppLostFocusFeedback;
- (void)sendAppQuitFeedback;
- (void)sendClearInputFeedbackWithTriggerEvent:(unsigned long long)arg1;
- (void)sendCrowdsourcedAutoFillFeedback:(id)arg1;
- (void)sendMapsPlaceCardEngagementFeedbackOfType:(int)arg1;
- (void)sendNewTabFeedback;
- (void)sendNewWindowFeedback;
- (void)sendSmartSearchFieldClickedFeedbackWithReaderAvailable:(bool)arg1;
- (void)sendWindowCloseByKeyboardFeedback;
- (void)sendWindowCloseByMouseFeedback;
- (void)sendWindowMiniaturizeByKeyboardFeedback;
- (void)sendWindowMiniaturizeByMouseFeedback;
- (void)userDidCancelSession;
- (void)userDidCancelSession:(long long)arg1;
- (void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(bool)arg2 method:(long long)arg3;
- (void)userDidEngageWithCompletionListItem:(id)arg1 onActionButton:(bool)arg2 method:(long long)arg3 doesMatchSiriSuggestion:(bool)arg4;
- (void)userTypedGoToSearch:(id)arg1 endpoint:(unsigned long long)arg2;
- (void)userTypedURLDirectly:(id)arg1;

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