<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSDShapeLibrary.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSDShapeLibrary.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSDShapeLibrary : NSObject <TSDShapeSearchResultProviding> {
    NSArray * _categories;
    NSArray * _categorySort;
    long long  _dataLoadStatus;
    NSDictionary * _library;
    NSURL * _libraryURL;
    TSULocale * _locale;
    TSDShapeSearchIndex * _searchIndex;
    long long  _searchIndexStatus;
    NSCache * _shapeCache;
    NSSet * _shapeIDsToRemove;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, readonly) long long dataLoadStatus;
@property (nonatomic, readonly) TSULocale *locale;
@property (nonatomic, retain) NSArray *p_categorySort;
@property (nonatomic, retain) NSDictionary *p_library;
@property (nonatomic, retain) NSURL *p_libraryURL;
@property (nonatomic, retain) TSDShapeSearchIndex *p_searchIndex;
@property (nonatomic) long long p_searchIndexStatus;
@property (nonatomic, retain) NSCache *p_shapeCache;
@property (nonatomic, readonly) NSSet *p_shapeIDsToRemove;

+ (void)loadDataWithCompletion:(id /* block */)arg1;
+ (id)sharedLibrary;

- (void).cxx_destruct;
- (id)categories;
- (long long)dataLoadStatus;
- (id)initWithShapeLibraryURL:(id)arg1 categorySortURL:(id)arg2 locale:(id)arg3;
- (id)locale;
- (void)p_cacheDataAfterParsingWithSearchIndex:(id)arg1;
- (id)p_categorySort;
- (void)p_createSearchIndexWithCompletionHandler:(id /* block */)arg1;
- (id)p_keywordDelimiterFromLibrary:(id)arg1;
- (id)p_library;
- (id)p_libraryByRemovingBlacklistedShapes:(id)arg1;
- (id)p_libraryURL;
- (void)p_loadCategoriesAndSearchIndexIfNeeded;
- (void)p_loadDataWithCompletion:(id /* block */)arg1;
- (id)p_parseLibraryFromJSON;
- (id)p_searchIndex;
- (long long)p_searchIndexStatus;
- (long long)p_setupLibrary;
- (void)p_setupLibraryIfNeeded;
- (id)p_shapeCache;
- (id)p_shapeDictionariesByID;
- (id)p_shapeDictionariesByIDFromLibrary:(id)arg1;
- (id)p_shapeIDByLocalizationKeyFromLibrary:(id)arg1;
- (id)p_shapeIDsToRemove;
- (id)p_sortedCategoriesFromLibrary:(id)arg1;
- (id)resultsForSearchTerm:(id)arg1;
- (void)setDataLoadStatus:(long long)arg1;
- (void)setP_categorySort:(id)arg1;
- (void)setP_library:(id)arg1;
- (void)setP_libraryURL:(id)arg1;
- (void)setP_searchIndex:(id)arg1;
- (void)setP_searchIndexStatus:(long long)arg1;
- (void)setP_shapeCache:(id)arg1;
- (id)shapeFromSearchResult:(id)arg1;
- (id)shapeWithID:(id)arg1;
- (id)shapeWithLocalizationKey:(id)arg1;

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
