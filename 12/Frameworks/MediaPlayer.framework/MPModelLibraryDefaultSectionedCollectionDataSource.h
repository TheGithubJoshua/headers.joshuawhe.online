<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPModelLibraryDefaultSectionedCollectionDataSource.h</title>
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

/Frameworks/MediaPlayer.framework/MPModelLibraryDefaultSectionedCollectionDataSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPModelLibraryDefaultSectionedCollectionDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    struct map<long long, unsigned long, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, unsigned long> > > { 
        struct __tree<std::__1::__value_type<long long, unsigned long>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, unsigned long>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, unsigned long> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, unsigned long>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, unsigned long>, std::__1::less<long long>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _allowedItemPersistentIDToItemQueryResultsIndexMap;
    struct vector<long long, std::__1::allocator<long long> > { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long long *, std::__1::allocator<long long> > { 
            long long *__value_; 
        } __end_cap_; 
    }  _allowedItemPersistentIDs;
    bool  _contentItemIDPredetermined;
    MPMediaLibraryEntityTranslationContext * _entityTranslationContext;
    NSDictionary * _indexPathToContentItemIDMap;
    struct shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > > { 
        struct vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _itemIdentifierQueryResults;
    struct shared_ptr<mlcore::EntityQueryResult> { 
        struct EntityQueryResult {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _itemQueryResults;
    MPModelLibraryRequest * _request;
}

@property (getter=isContentItemIDPredetermined, nonatomic) bool contentItemIDPredetermined;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *indexPathToContentItemIDMap;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>' */ struct  itemIdentifierQueryResults; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > >}^{__shared_weak_count}} */
@property (nonatomic, readonly) struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; } itemQueryResults;
@property (nonatomic, readonly) MPModelLibraryRequest *request;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_adjustedGlobalIndexForIndexPath:(id)arg1;
- (bool)_allowedEntityIdentifiersContainsAllPersistentIDs;
- (id)_buildIndexPathToContentItemIDMapFromItemQueryResults:(struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)_contentItemIDForItemPersistentID:(long long)arg1 atIndexPath:(id)arg2;
- (id)_contentItemIDForItemPersistentID:(long long)arg1 withOccurrenceCount:(long long)arg2;
- (void)_populateIndexMap;
- (bool)_usesSections;
- (bool)hasSameContentAsDataSource:(id)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (long long)indexOfSectionForSectionIndexTitleAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;
- (id)indexPathToContentItemIDMap;
- (id)initWithRequest:(id)arg1 itemQueryResults:(struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; })arg2 itemIdentifierQueryResults:(struct shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > > { struct vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > {} *x1; struct __shared_weak_count {} *x2; })arg3;
- (bool)isContentItemIDPredetermined;
- (id)itemAtIndexPath:(id)arg1;
- (struct shared_ptr<std::__1::vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > > { struct vector<std::__1::shared_ptr<mlcore::Entity>, std::__1::allocator<std::__1::shared_ptr<mlcore::Entity> > > {} *x1; struct __shared_weak_count {} *x2; })itemIdentifierQueryResults;
- (struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; })itemQueryResults;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })optionalSectionIndexTitlesRange;
- (id)request;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)sectionIndexTitles;
- (void)setContentItemIDPredetermined:(bool)arg1;
- (void)setIndexPathToContentItemIDMap:(id)arg1;

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
