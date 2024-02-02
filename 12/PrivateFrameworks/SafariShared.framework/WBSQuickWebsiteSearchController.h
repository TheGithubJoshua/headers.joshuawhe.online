<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WBSQuickWebsiteSearchController.h</title>
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

/PrivateFrameworks/SafariShared.framework/WBSQuickWebsiteSearchController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared (607.3.18)
 */

@interface WBSQuickWebsiteSearchController : NSObject <WBSQuickWebsiteSearchProviderDelegate> {
    bool  _hasBegunLoadingFromDisk;
    NSMutableDictionary * _hostSetsByOpenSearchDescriptionDocumentURLString;
    NSMutableDictionary * _openSearchDescriptionsByDescriptionDocumentURLString;
    NSMutableDictionary * _quickWebsiteSearchProvidersByHost;
    NSObject<OS_dispatch_queue> * _quickWebsiteSearchProvidersBySourcePageURLStringAccessQueue;
    bool  _quickWebsiteSearchProvidersLoadedFromDisk;
    NSURL * _searchDescriptionsURL;
    WBSCoalescedAsynchronousWriter * _writer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *quickWebsiteSearchHosts;
@property bool quickWebsiteSearchProvidersLoadedFromDisk;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_addHost:(id)arg1 toOpenSearchDescriptionWithDocumentURL:(id)arg2;
- (id)_dictionaryRepresentation;
- (void)_didCollectOpenSearchDescription:(id)arg1;
- (void)_didFinishLoadingFromDisk;
- (id)_initWithSearchDescriptionsURL:(id)arg1;
- (void)_loadFromDisk;
- (void)_pruneUnusedQuickWebsiteSearchProviders;
- (bool)_quickWebsiteSearchProviderHasSearchURLTemplateStringOnAccessQueue:(id)arg1;
- (void)_removeHost:(id)arg1 fromOpenSearchDescriptionWithDocumentURL:(id)arg2;
- (void)_resetCachedDataWithCompletionHandler:(id /* block */)arg1;
- (void)_saveToDiskSoon;
- (void)_sendNotification:(id)arg1 forQuickWebsiteSearchProvider:(id)arg2;
- (bool)_shouldRemoveQuickWebsiteSearchProvider:(id)arg1;
- (void)beginLoadingFromDiskIfNeeded;
- (void)clear;
- (void)didPerformSearchWithProvider:(id)arg1;
- (void)noteProvidersAreStale;
- (id)openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg1;
- (id)providerForSourcePageURLString:(id)arg1;
- (id)providersMatchingQueryString:(id)arg1;
- (id)quickWebsiteSearchHosts;
- (id)quickWebsiteSearchProvider:(id)arg1 openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg2;
- (bool)quickWebsiteSearchProvidersLoadedFromDisk;
- (void)removeProviderWithHost:(id)arg1;
- (void)removeProvidersAddedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (void)removeProvidersWithHosts:(id)arg1;
- (void)savePendingChangesBeforeTermination;
- (void)setOpenSearchDescriptionURLString:(id)arg1 forSourcePageURLString:(id)arg2;
- (void)setQuickWebsiteSearchProvidersLoadedFromDisk:(bool)arg1;
- (void)setSearchURLTemplateFromForm:(id)arg1 forSourcePageURLString:(id)arg2;

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