<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TCSSuggestions.h</title>
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

/PrivateFrameworks/TinCanShared.framework/TCSSuggestions.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared (1)
 */

@interface TCSSuggestions : NSObject <IDSBatchIDQueryControllerDelegate, TCSContactsObserver> {
    CNContactStore * _contactStore;
    TCSContacts * _contacts;
    NSObject<OS_dispatch_queue> * _coreRecentsQueue;
    NSUserDefaults * _defaults;
    int  _firstUnlockToken;
    NSObject<OS_dispatch_queue> * _generationQueue;
    bool  _generationTimerEnabled;
    int  _npsInitialSyncToken;
    NPSManager * _npsManager;
    NSHashTable * _observers;
    IDSBatchIDQueryController * _queryController;
    bool  _shouldObserveSuggestionsDefaultChanges;
    NSMutableDictionary * _suggestedDestinationToStatus;
    NSArray * _suggestedDestinations;
    NSTimer * _suggestionGenerationTimer;
    NSMutableDictionary * _suggestions;
    CNCoalescingTimer * _suggestionsSaveTimer;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) TCSContacts *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool generationTimerEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldObserveSuggestionsDefaultChanges;
@property (nonatomic, retain) NSArray *suggestedDestinations;
@property (nonatomic, retain) NSMutableDictionary *suggestions;
@property (readonly) Class superclass;

+ (id)_descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)_addSuggestedDestination:(id)arg1 withTimestamp:(id)arg2;
- (void)_deleteSuggestions;
- (id)_destinationsFromCallHistory;
- (id)_destinationsFromCoreRecents;
- (id)_destinationsFromFavorites;
- (void)_deviceDidPair:(id)arg1;
- (void)_generateNewSuggestions;
- (void)_invalidate;
- (void)_notifyObserversSuggestionsChanged;
- (id)_performHousekeepingOnSuggestions:(id)arg1;
- (void)_performIDQueryForSuggestions:(id)arg1;
- (void)_saveSuggestions;
- (bool)_shouldGenerateNewSuggestions;
- (void)_startGenerationTimerWithFireDate:(id)arg1;
- (void)_stopGenerationTimer;
- (void)_syncSuggestions;
- (void)_updateGenerationTimestamps;
- (void)addObserver:(id)arg1;
- (id)contactStore;
- (id)contacts;
- (void)dealloc;
- (id)defaults;
- (void)destinationsDidChange:(id)arg1;
- (void)generateNewSuggestionsIfNecessary;
- (bool)generationTimerEnabled;
- (void)idStatusUpdatedForDestinations:(id)arg1;
- (id)initWithContactStore:(id)arg1 contacts:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setGenerationTimerEnabled:(bool)arg1;
- (void)setShouldObserveSuggestionsDefaultChanges:(bool)arg1;
- (void)setSuggestedDestinations:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (bool)shouldObserveSuggestionsDefaultChanges;
- (id)suggestedDestinations;
- (id)suggestions;

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