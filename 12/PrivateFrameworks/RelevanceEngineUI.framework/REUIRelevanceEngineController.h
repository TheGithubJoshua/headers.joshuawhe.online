<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>REUIRelevanceEngineController.h</title>
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

/PrivateFrameworks/RelevanceEngineUI.framework/REUIRelevanceEngineController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI (204.1.32)
 */

@interface REUIRelevanceEngineController : NSObject <RERelevanceEngineObserver, _REUIControllerTrainingContextDelegate> {
    bool  _allowsLocationUse;
    NSMutableDictionary * _currentElementStates;
    <REUIRelevanceEngineControllerDelegate> * _delegate;
    struct { 
        unsigned int implementsPerformBatchUpdate : 1; 
        unsigned int implementsReloadElement : 1; 
        unsigned int implementsRemoveElement : 1; 
        unsigned int implementsInsertElement : 1; 
        unsigned int implementsMoveElement : 1; 
        unsigned int implementsIndexPathVisibility : 1; 
    }  _delegateCallbacks;
    RERelevanceEngine * _engine;
    NSMutableSet * _hiddenBundleIdentifiers;
    NSArray * _hiddenIndices;
    bool  _isShowingContentElements;
    NSMutableArray * _pendingOperations;
    bool  _performingBatch;
    RERelevanceEnginePreferences * _preferences;
    NSMutableDictionary * _sectionNameOrdering;
    NSArray * _sectionOrder;
    _REUIControllerTrainingContext * _trainingContext;
    bool  _wantsIdealizedContent;
    bool  _wantsLiveDataSources;
}

@property (nonatomic) bool allowsLocationUse;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <REUIRelevanceEngineControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *disabledDataSources;
@property (nonatomic, readonly) RERelevanceEngine *engine;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumNegativeDwellTime;
@property (nonatomic) double minimumPositiveDwellTime;
@property (nonatomic) unsigned long long onScreenElementCount;
@property (nonatomic, readonly) NSArray *sectionOrder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) REUITrainingContext *trainingContext;
@property (nonatomic) bool wantsIdealizedContent;
@property (nonatomic) bool wantsLiveDataSources;

- (void).cxx_destruct;
- (id)_contentAtIndexPath:(id)arg1;
- (id)_contentForElement:(id)arg1;
- (id)_controllerIndexPathForEngineIndexPath:(id)arg1;
- (id)_elementAtIndexPath:(id)arg1;
- (id)_engineIndexPathForControllerIndexPath:(id)arg1;
- (void)_enumerateEngineElementsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (long long)_indexForSection:(id)arg1;
- (id)_indexPathForElementWithIdentifier:(id)arg1;
- (id)_indexPathForSectionPath:(id)arg1;
- (bool)_isElementHidden:(id)arg1;
- (void)_loadNewRelevanceEngine:(id)arg1 withCompletion:(id /* block */)arg2;
- (unsigned long long)_numberOfItemsInSectionAtIndex:(unsigned long long)arg1;
- (void)_performBatchUpdateUsingBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_performOperations:(id)arg1 toSection:(unsigned long long)arg2;
- (void)_performOrEnqueueOperation:(id)arg1;
- (id)_sectionAtIndex:(long long)arg1;
- (bool)_sectionHasContent:(id)arg1;
- (id)_sectionPathForIndexPath:(id)arg1;
- (id)_sectionSupportingNoContentElements;
- (void)_setElement:(id)arg1 atIndexPath:(id)arg2 hidden:(bool)arg3;
- (id)actionAtIndexPath:(id)arg1;
- (bool)allowsLocationUse;
- (id)contentAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)disabledDataSources;
- (void)elemenAtIndexPathDidDisplay:(id)arg1;
- (void)elementAtIndexPathDidEndDisplay:(id)arg1;
- (void)elementAtIndexPathWasSelected:(id)arg1;
- (id)elementIdentifierAtIndexPath:(id)arg1;
- (bool)elementIsAvailable:(id)arg1;
- (id)elementsOrdered:(unsigned long long)arg1 relativeToElement:(id)arg2;
- (id)engine;
- (id)identifierForElementAtIndexPath:(id)arg1;
- (id)indexPathForElementWithIdentifier:(id)arg1;
- (id)initWithRelevanceEngine:(id)arg1;
- (id)initWithRelevanceEngine:(id)arg1 sectionOrder:(id)arg2;
- (id)interactionTypeForElement:(id)arg1;
- (bool)isDataSourceEnabled:(id)arg1;
- (void)makeCurrent;
- (double)maximumNegativeDwellTime;
- (id)metadataForElementWithIdentifier:(id)arg1;
- (double)minimumPositiveDwellTime;
- (unsigned long long)numberOfItemsInSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (unsigned long long)onScreenElementCount;
- (id)predictionForElementAtIndexPath:(id)arg1;
- (void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
- (void)relevanceEngine:(id)arg1 didReloadElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
- (bool)relevanceEngine:(id)arg1 isElementAtPathVisible:(id)arg2;
- (void)relevanceEngine:(id)arg1 performBatchUpdateBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)resignCurrent;
- (id)sectionOrder;
- (void)setAllowsLocationUse:(bool)arg1;
- (void)setDataSource:(id)arg1 enabled:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMaximumNegativeDwellTime:(double)arg1;
- (void)setMinimumPositiveDwellTime:(double)arg1;
- (void)setOnScreenElementCount:(unsigned long long)arg1;
- (void)setWantsIdealizedContent:(bool)arg1;
- (void)setWantsLiveDataSources:(bool)arg1;
- (id)trainingContext;
- (bool)wantsIdealizedContent;
- (bool)wantsLiveDataSources;

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