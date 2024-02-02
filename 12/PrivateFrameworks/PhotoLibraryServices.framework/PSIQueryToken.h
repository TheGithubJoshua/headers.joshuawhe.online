<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PSIQueryToken.h</title>
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

/PrivateFrameworks/PhotoLibraryServices.framework/PSIQueryToken.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices (1.0)
 */

@interface PSIQueryToken : NSObject <NSSecureCoding> {
    NSMutableSet * _assetIds;
    bool  _belongsToSearchText;
    NSMutableSet * _collectionIds;
    NSString * _identifier;
    bool  _isFullTextToken;
    unsigned long long  _matchType;
    PSIQueryToken * _parentToken;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeInSearchText;
    NSString * _resolvedText;
    NSIndexSet * _searchedCategories;
    NSString * _text;
    NSMutableSet * _tripIds;
    unsigned long long  _userCategory;
    bool  _userControlledCategoriesUseWildcard;
    bool  _usesWordEmbeddings;
    PSIWordEmbeddingMatch * _wordEmbeddingMatch;
}

@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, retain) NSMutableSet *assetIds;
@property (nonatomic) bool belongsToSearchText;
@property (nonatomic, readonly) unsigned long long collectionCount;
@property (nonatomic, retain) NSMutableSet *collectionIds;
@property (nonatomic, readonly) bool containsMarker;
@property (nonatomic, readonly, copy) NSString *groupMatchingText;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isFullTextToken;
@property (nonatomic, readonly) bool isTextSearchable;
@property (nonatomic, readonly) unsigned long long matchType;
@property (nonatomic, retain) PSIQueryToken *parentToken;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeInSearchText;
@property (nonatomic, copy) NSString *resolvedText;
@property (nonatomic, readonly) unsigned long long resultCount;
@property (nonatomic, copy) NSIndexSet *searchedCategories;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, readonly) unsigned long long tripCount;
@property (nonatomic, retain) NSMutableSet *tripIds;
@property (nonatomic) unsigned long long userCategory;
@property (nonatomic) bool userControlledCategoriesUseWildcard;
@property (nonatomic) bool usesWordEmbeddings;
@property (nonatomic, readonly, copy) NSString *wildcardResolvedText;
@property (nonatomic, retain) PSIWordEmbeddingMatch *wordEmbeddingMatch;

+ (id)personQueryTokensFromSocialGroupQueryToken:(id)arg1;
+ (id)stringForMatchType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (unsigned long long)assetCount;
- (id)assetIds;
- (bool)belongsToSearchText;
- (unsigned long long)collectionCount;
- (id)collectionIds;
- (bool)containsMarker;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupMatchingText;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 userCategory:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 userCategory:(unsigned long long)arg2 searchedCategories:(id)arg3;
- (id)initWithText:(id)arg1 resolvedText:(id)arg2 identifier:(id)arg3 userCategory:(unsigned long long)arg4 searchedCategories:(id)arg5 matchType:(unsigned long long)arg6;
- (id)initWithText:(id)arg1 resolvedText:(id)arg2 userCategory:(unsigned long long)arg3 matchType:(unsigned long long)arg4;
- (id)initWithText:(id)arg1 resolvedText:(id)arg2 userCategory:(unsigned long long)arg3 searchedCategories:(id)arg4 matchType:(unsigned long long)arg5;
- (id)initWithText:(id)arg1 userCategory:(unsigned long long)arg2 matchType:(unsigned long long)arg3;
- (id)initWithText:(id)arg1 userCategory:(unsigned long long)arg2 searchedCategories:(id)arg3 matchType:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isFullTextToken;
- (bool)isTextSearchable;
- (unsigned long long)matchType;
- (id)parentToken;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeInSearchText;
- (void)replaceIdentifier:(id)arg1;
- (id)resolvedText;
- (unsigned long long)resultCount;
- (id)searchedCategories;
- (void)setAssetIds:(id)arg1;
- (void)setBelongsToSearchText:(bool)arg1;
- (void)setCollectionIds:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsFullTextToken:(bool)arg1;
- (void)setParentToken:(id)arg1;
- (void)setRangeInSearchText:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setResolvedText:(id)arg1;
- (void)setSearchedCategories:(id)arg1;
- (void)setTripIds:(id)arg1;
- (void)setUserCategory:(unsigned long long)arg1;
- (void)setUserControlledCategoriesUseWildcard:(bool)arg1;
- (void)setUsesWordEmbeddings:(bool)arg1;
- (void)setWordEmbeddingMatch:(id)arg1;
- (id)text;
- (id)tokenByWordEmbeddingWithMatch:(id)arg1;
- (unsigned long long)tripCount;
- (id)tripIds;
- (unsigned long long)userCategory;
- (bool)userControlledCategoriesUseWildcard;
- (bool)usesWordEmbeddings;
- (id)wildcardResolvedText;
- (id)wordEmbeddingMatch;

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