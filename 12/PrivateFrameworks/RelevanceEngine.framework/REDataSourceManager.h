<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>REDataSourceManager.h</title>
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

/PrivateFrameworks/RelevanceEngine.framework/REDataSourceManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine (204.1.32)
 */

@interface REDataSourceManager : RERelevanceEngineSubsystem <RELoggable> {
    NSSet * _availableDataSourceIdentifiers;
    bool  _completedFirstElementLoad;
    NSSet * _currentDataSourceIdentifiers;
    NSArray * _currentDataSources;
    NSMutableArray * _dataSourceControllers;
    unsigned long long  _dataSourceState;
    <REDataSourceManagerObserver> * _delegate;
    NSSet * _disabledDataSources;
    REConcurrentDictionary * _elementGroupMap;
    NSSet * _elementGroupSupportingConfigurations;
    NSDictionary * _identifierApplicationIdentifierMap;
    NSDictionary * _identifierDataSourceMap;
    NSDictionary * _identifierOperatingSystemVersionMap;
    REDataSourceLoader * _loader;
    bool  _locationAllowed;
}

@property (retain) NSSet *availableDataSourceIdentifiers;
@property (getter=hasCompletedFirstElementLoad, nonatomic, readonly) bool completedFirstElementLoad;
@property (retain) NSSet *currentDataSourceIdentifiers;
@property (retain) NSArray *currentDataSources;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <REDataSourceManagerObserver> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) REDataSourceLoader *loader;
@property (readonly) Class superclass;

+ (bool)_isPrioritizedDataSourceClass:(Class)arg1;
+ (id)_prioritizedDataSourceClasses;

- (void).cxx_destruct;
- (void)_handleApplicationStateChange;
- (bool)_isApplicationRemovedOrRestrictedForIdentifier:(id)arg1;
- (void)_queue_availableDataSourcesDidChange;
- (void)_queue_loadDataSourceWithIdentifier:(id)arg1;
- (void)_queue_unloadDataSourceWithIdentifier:(id)arg1;
- (void)_queue_updateAvailableDataSourceIdentifiers;
- (void)_updatePreferences;
- (id)availableDataSourceIdentifiers;
- (Class)classForDataSourceIdentifier:(id)arg1;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)currentDataSourceIdentifiers;
- (id)currentDataSources;
- (void)dealloc;
- (id)delegate;
- (id)elementGroupForIdentifier:(id)arg1;
- (void)enumerateElementDataSourceControllers:(id /* block */)arg1;
- (bool)hasCompletedFirstElementLoad;
- (id)initWithRelevanceEngine:(id)arg1 dataSourceLoader:(id)arg2 withDelegate:(id)arg3;
- (id)loader;
- (struct { long long x1; long long x2; long long x3; })minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)arg1;
- (void)pause;
- (void)resume;
- (void)setAvailableDataSourceIdentifiers:(id)arg1;
- (void)setCurrentDataSourceIdentifiers:(id)arg1;
- (void)setCurrentDataSources:(id)arg1;

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
