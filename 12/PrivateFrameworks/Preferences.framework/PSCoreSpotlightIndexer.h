<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PSCoreSpotlightIndexer.h</title>
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

/PrivateFrameworks/Preferences.framework/PSCoreSpotlightIndexer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences (1.0)
 */

@interface PSCoreSpotlightIndexer : NSObject {
    NSMutableArray * _indexFromControllerLog;
    CSSearchableIndex * _prefsSearchableIndex;
    CSTopHitSearchQuery * _searchQuery;
    NSObject<OS_dispatch_queue> * _spotlightIndexQueue;
}

@property (nonatomic, retain) NSMutableArray *indexFromControllerLog;
@property (nonatomic, readonly) NSDate *lastIndexDate;
@property (nonatomic, readonly) bool needsIndex;
@property (nonatomic, retain) CSSearchableIndex *prefsSearchableIndex;
@property (nonatomic, retain) CSTopHitSearchQuery *searchQuery;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *spotlightIndexQueue;

+ (id)searchIndexIdentifier;
+ (id)sharedInstance;
+ (char *)spotlightIndexQueueIdentifier;

- (void).cxx_destruct;
- (id)_bundleForSpecifier:(id)arg1 parentBundle:(id)arg2;
- (id)_childSpecifiersForSpecifier:(id)arg1 bundle:(id)arg2 childBundleToUpdate:(id*)arg3;
- (void)_deleteSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 completion:(id /* block */)arg6;
- (id)_descriptionForSpecifierName:(id)arg1 withParentSpecifierNames:(id)arg2;
- (id)_indexItemForSpecifier:(id)arg1 category:(id)arg2 keywords:(id)arg3 url:(id)arg4 description:(id)arg5;
- (id)_indexItemsFromManifestForSpecifier:(id)arg1 bundle:(id)arg2;
- (void)_indexSearchableItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_indexSpecifierForURL:(id)arg1 specifiers:(id)arg2 bundle:(id)arg3 withURLPrefix:(id)arg4 waitForCompletion:(bool)arg5 completion:(id /* block */)arg6;
- (id)_indexSpecifiers:(id)arg1 bundle:(id)arg2 category:(id)arg3 pathURL:(id)arg4 withURLPrefix:(id)arg5 parentSpecifierNames:(id)arg6 completion:(id /* block */)arg7;
- (id)_keyValueDictionaryForURL:(id)arg1;
- (id)_rankingHintScoreForURL:(id)arg1;
- (void)_reIndexNonRootSpecifier:(id)arg1 parentSpecifiers:(id)arg2 bundle:(id)arg3 category:(id)arg4 baseURL:(id)arg5 withURLPrefix:(id)arg6 waitForCompletion:(bool)arg7 completion:(id /* block */)arg8;
- (void)_reIndexRootSpecifier:(id)arg1 childSpecifiers:(id)arg2 parentSpecifierNames:(id)arg3 bundle:(id)arg4 childBundle:(id)arg5 category:(id)arg6 baseURL:(id)arg7 withURLPrefix:(id)arg8 waitForCompletion:(bool)arg9 completion:(id /* block */)arg10;
- (id)_specifiersForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3;
- (id)_specifiersPlistPathForSpecifier:(id)arg1 bundle:(id)arg2 parentBundle:(id)arg3;
- (id)_urlForSpecifier:(id)arg1 identifier:(id)arg2 category:(id)arg3 childCategory:(id*)arg4 prefix:(id)arg5 path:(id*)arg6 baseURL:(id)arg7 shouldLinkToRow:(bool)arg8;
- (id)_urlsFromManifestForSpecifier:(id)arg1 bundle:(id)arg2;
- (id)blacklistedControllers;
- (bool)controllerIsBlacklisted:(id)arg1;
- (void)deleteIndexWithCompletionBlock:(id /* block */)arg1;
- (void)deleteSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(bool)arg4 completion:(id /* block */)arg5;
- (id)descriptionForCSSearchableItem:(id)arg1;
- (id)descriptionForCSSearchableItems:(id)arg1;
- (id)indexFromControllerLog;
- (void)indexSpecifiers:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(bool)arg4 completion:(id /* block */)arg5;
- (void)indexSpecifiersWithURLs:(id)arg1 topLevelSpecifiers:(id)arg2 bundle:(id)arg3 withURLPrefix:(id)arg4 waitForCompletion:(bool)arg5 completion:(id /* block */)arg6;
- (id)lastIndexBuild;
- (id)lastIndexDate;
- (id)lastIndexLanguage;
- (bool)needsIndex;
- (id)prefsSearchableIndex;
- (void)reindexSpecifiersIfNeeded:(id)arg1 bundle:(id)arg2 withURLPrefix:(id)arg3 waitForCompletion:(bool)arg4 setHasIndexed:(bool)arg5 completion:(id /* block */)arg6;
- (id)searchQuery;
- (id)searchableItemAttributeSetClassIdenfitier;
- (id)searchableItemClassIdentifier;
- (void)setIndexFromControllerLog:(id)arg1;
- (void)setLastIndexBuild:(id)arg1;
- (void)setLastIndexDate:(id)arg1;
- (void)setLastIndexLanguage:(id)arg1;
- (void)setNeedsIndex;
- (void)setNeedsIndex:(bool)arg1;
- (void)setPrefsSearchableIndex:(id)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setSpotlightIndexQueue:(id)arg1;
- (id)spotlightIndexQueue;
- (void)topHitSearchForString:(id)arg1 keyboardLanguage:(id)arg2 foundItemsHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;

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
