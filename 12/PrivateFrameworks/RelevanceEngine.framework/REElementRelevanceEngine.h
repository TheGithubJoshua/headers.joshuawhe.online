<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>REElementRelevanceEngine.h</title>
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

/PrivateFrameworks/RelevanceEngine.framework/REElementRelevanceEngine.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine (204.1.32)
 */

@interface REElementRelevanceEngine : RERelevanceEngineSubsystem <REMLModelManagerObserver, REPredictorObserver, RERelevanceProviderEnvironmentDelegate, RESectionDelegate> {
    REDataSourceManager * _dataSourceManager;
    <REElementRelevanceEngineDelegate> * _delegate;
    bool  _deviceIsLocked;
    NSMutableSet * _elementsNeedingRelevanceUpdate;
    REFeatureTransmuter * _featureTransmuter;
    REKeyMultiValueMap * _identifierElementIdentifierMap;
    bool  _ignoreDeviceLockState;
    NSMutableDictionary * _predictedElements;
    REPredictorManager * _predictorManager;
    RERelevanceProviderEnvironment * _providerEnvironment;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _relevanceProviderElementMap;
    REUpNextScheduler * _scheduler;
    NSMutableDictionary * _sections;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <REElementRelevanceEngineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *sections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allCurrentElements;
- (void)_checkPreferences;
- (id)_elementIdentifierForIdentifier:(id)arg1;
- (bool)_elementIsFullyLoaded:(id)arg1;
- (void)_enumerateAndGenerateSectionComparators:(id /* block */)arg1;
- (id)_identifierForElementIdentifier:(id)arg1;
- (void)_onqueue_async:(id /* block */)arg1;
- (void)_performUpdatesToDelegate:(id /* block */)arg1;
- (id)_queue_featureMapForElement:(id)arg1 trainingContext:(id)arg2;
- (id)_queue_featureMapForElementWithId:(id)arg1 trainingContext:(id)arg2;
- (void)_queue_scheduleRelevanceUpdateForElement:(id)arg1;
- (void)_queue_updateElementRelevance;
- (void)addElement:(id)arg1 section:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)elementAtPath:(id)arg1;
- (id)featureMapForElement:(id)arg1 trainingContext:(id)arg2;
- (id)featureMapForPredictedElement:(id)arg1 trainingContext:(id)arg2;
- (id)initWithRelevanceEngine:(id)arg1;
- (void)modelManagerDidUpdateModel:(id)arg1;
- (unsigned long long)numberOfElementsInSection:(id)arg1;
- (id)pathForElement:(id)arg1;
- (void)pause;
- (id)predictionForElement:(id)arg1;
- (void)predictorDidUpdate:(id)arg1;
- (void)refreshContent;
- (void)relevanceEnvironment:(id)arg1 didUpdateRelevanceProvider:(id)arg2;
- (id)relevanceProviderEnvironment;
- (void)removeElement:(id)arg1;
- (void)resume;
- (id)section:(id)arg1 groupForIdentifier:(id)arg2;
- (void)sectionDidUpdateContentOrder:(id)arg1;
- (id)sectionForElement:(id)arg1;
- (id)sections;
- (void)setDelegate:(id)arg1;

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
