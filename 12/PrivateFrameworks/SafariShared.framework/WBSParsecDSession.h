<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WBSParsecDSession.h</title>
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

/PrivateFrameworks/SafariShared.framework/WBSParsecDSession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared (607.3.18)
 */

@interface WBSParsecDSession : NSObject <PARSessionDelegate, WBSParsecSearchSession> {
    WBSCompletionQuery * _currentQuery;
    unsigned long long  _currentQueryID;
    <WBSParsecSearchSessionDelegate> * _delegate;
    WBSParsecDFeedbackDispatcher * _feedbackDispatcher;
    GEOUserSessionEntity * _geoUserSessionEntity;
    PARSession * _parsecdSession;
    NSObject<OS_dispatch_queue> * _requestProcessingQueue;
    bool  _skipAutoFillDataUpdates;
    double  _uiScale;
    bool  _valid;
}

@property (nonatomic, retain) WBSCompletionQuery *currentQuery;
@property unsigned long long currentQueryID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WBSParsecSearchSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <WBSParsecFeedbackDispatcher> *feedbackDispatcher;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PARSession *parsecdSession;
@property (nonatomic, readonly) bool skipAutoFillDataUpdates;
@property (readonly) Class superclass;
@property (setter=setUIScale:, nonatomic) double uiScale;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (void)_updateAutoFillCorrectionSetsIfNeededForSession:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)_updateAutoFillTLDsIfNeededForSession:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)sharedCorrectionsProcessor;
+ (id)sharedDomainPolicyProvider;
+ (id)sharedPARSession;

- (void).cxx_destruct;
- (void)_didReceiveResponse:(id)arg1 error:(id)arg2 forTask:(id)arg3 query:(id)arg4;
- (void)_startUpdatingAutoFillDataInBackgroundIfPossibleForSession:(id)arg1;
- (id)currentQuery;
- (unsigned long long)currentQueryID;
- (id)delegate;
- (id)feedbackDispatcher;
- (id)initWithParsecdSession:(id)arg1 skipAutoFillDataUpdates:(bool)arg2;
- (bool)isValid;
- (id)parsecdSession;
- (void)session:(id)arg1 bag:(id)arg2 didLoadWithError:(id)arg3;
- (void)setCurrentQuery:(id)arg1;
- (void)setCurrentQueryID:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setParsecdSession:(id)arg1;
- (void)setUIScale:(double)arg1;
- (bool)skipAutoFillDataUpdates;
- (double)uiScale;

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
