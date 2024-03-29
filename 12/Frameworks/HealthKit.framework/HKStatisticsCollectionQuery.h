<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HKStatisticsCollectionQuery.h</title>
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

/Frameworks/HealthKit.framework/HKStatisticsCollectionQuery.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit (1)
 */

@interface HKStatisticsCollectionQuery : HKQuery <HKStatisticsCollectionQueryClientInterface> {
    NSDate * _anchorDate;
    bool  _hasReceivedInitialResults;
    id /* block */  _initialResultsHandler;
    NSDateComponents * _intervalComponents;
    NSNumber * _lastAnchor;
    unsigned long long  _mergeStrategy;
    unsigned long long  _options;
    NSMutableArray * _results;
    HKStatisticsCollection * _statisticsCollection;
    id /* block */  _statisticsUpdateHandler;
}

@property (readonly) NSDate *anchorDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ initialResultsHandler;
@property (readonly, copy) NSDateComponents *intervalComponents;
@property (retain) NSNumber *lastAnchor;
@property (nonatomic) unsigned long long mergeStrategy;
@property (readonly) unsigned long long options;
@property (retain) HKStatisticsCollection *statisticsCollection;
@property (nonatomic, copy) id /* block */ statisticsUpdateHandler;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)_queue_deliverInitialStatisticsObjects:(id)arg1 anchor:(id)arg2 queryUUID:(id)arg3;
- (void)_queue_deliverResetStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (void)_queue_deliverStatisticsObjects:(id)arg1 forQuery:(id)arg2;
- (id)anchorDate;
- (void)client_deliverStatisticsBatch:(id)arg1 resetStatistics:(bool)arg2 isFinal:(bool)arg3 anchor:(id)arg4 query:(id)arg5;
- (void)client_deliverUpdatedStatistics:(id)arg1 anchor:(id)arg2 query:(id)arg3;
- (id)initWithQuantityType:(id)arg1 quantitySamplePredicate:(id)arg2 options:(unsigned long long)arg3 anchorDate:(id)arg4 intervalComponents:(id)arg5;
- (id /* block */)initialResultsHandler;
- (id)intervalComponents;
- (id)lastAnchor;
- (unsigned long long)mergeStrategy;
- (unsigned long long)options;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;
- (void)setInitialResultsHandler:(id /* block */)arg1;
- (void)setLastAnchor:(id)arg1;
- (void)setMergeStrategy:(unsigned long long)arg1;
- (void)setStatisticsCollection:(id)arg1;
- (void)setStatisticsUpdateHandler:(id /* block */)arg1;
- (id)statisticsCollection;
- (id /* block */)statisticsUpdateHandler;

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
