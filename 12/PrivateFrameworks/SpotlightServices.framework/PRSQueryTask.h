<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PRSQueryTask.h</title>
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

/PrivateFrameworks/SpotlightServices.framework/PRSQueryTask.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices (1191.57)
 */

@interface PRSQueryTask : NSObject <NSSecureCoding> {
    bool  _canceled;
    NSDictionary * _category_stats;
    NSString * _fbq;
    PRSSearchFeedback * _feedback;
    <PRSSearchQueryHandler> * _handler;
    NSString * _keyboardLanguage;
    NSArray * _parsecCategoryOrder;
    long long  _queryId;
    unsigned long long  _queryIdent;
    NSString * _queryString;
    NSObject<OS_dispatch_queue> * _queue;
    id  _representedObject;
    NSDictionary * _server_features;
    PRSSearchSession * _session;
    bool  _started;
    bool  _webSearch;
}

@property (nonatomic) bool canceled;
@property (nonatomic, retain) NSDictionary *category_stats;
@property (nonatomic, retain) NSString *fbq;
@property (retain) PRSSearchFeedback *feedback;
@property (nonatomic, retain) <PRSSearchQueryHandler> *handler;
@property (nonatomic, retain) NSString *keyboardLanguage;
@property (nonatomic, retain) NSArray *parsecCategoryOrder;
@property long long queryId;
@property unsigned long long queryIdent;
@property (nonatomic, retain) NSString *queryString;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) id representedObject;
@property (nonatomic, retain) NSDictionary *server_features;
@property (nonatomic) PRSSearchSession *session;
@property (nonatomic) bool started;
@property bool webSearch;

+ (void)initialize;
+ (void)resumeDecoding;
+ (bool)supportsSecureCoding;
+ (void)suspendDecoding;

- (void).cxx_destruct;
- (void)cancel;
- (bool)canceled;
- (id)category_stats;
- (void)encodeWithCoder:(id)arg1;
- (id)fbq;
- (id)feedback;
- (id)feedbackQueryIdentifier;
- (id)handler;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1 handler:(id)arg2 queue:(id)arg3 feedback:(id)arg4;
- (void)invalidateHandler;
- (id)keyboardLanguage;
- (id)parsecCategoryOrder;
- (long long)queryId;
- (unsigned long long)queryIdent;
- (id)queryString;
- (id)queue;
- (id)representedObject;
- (void)resume;
- (id)server_features;
- (id)session;
- (void)setCanceled:(bool)arg1;
- (void)setCategory_stats:(id)arg1;
- (void)setFbq:(id)arg1;
- (void)setFeedback:(id)arg1;
- (void)setHandler:(id)arg1;
- (void)setKeyboardLanguage:(id)arg1;
- (void)setParsecCategoryOrder:(id)arg1;
- (void)setQueryId:(long long)arg1;
- (void)setQueryIdent:(unsigned long long)arg1;
- (void)setQueryString:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setServer_features:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)setWebSearch:(bool)arg1;
- (bool)started;
- (bool)webSearch;

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
