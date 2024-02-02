<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MusicStoreEntityProvider.h</title>
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

/PrivateFrameworks/FuseUI.framework/MusicStoreEntityProvider.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI (1)
 */

@interface MusicStoreEntityProvider : NSObject <MusicEntityProviding, NSCopying, NSSecureCoding> {
    long long  _entityType;
    NSArray * _filteredPlayableItemMetadataContexts;
    bool  _shouldIncludeUnplayableContent;
    bool  _shouldReloadEntityValueProvidersForInvalidation;
    bool  _shouldRespectSystemContentRestrictions;
    MPSparseArray * _storeEntityValueProviders;
    NSArray * _storeItemMetadataContexts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly, copy) NSArray *filteredPlayableItemMetadataContexts;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldIncludeUnplayableContent;
@property (nonatomic) bool shouldReloadEntityValueProvidersForInvalidation;
@property (nonatomic) bool shouldRespectSystemContentRestrictions;
@property (nonatomic, readonly, copy) NSArray *storeItemMetadataContexts;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configureEntityValueContextOutput:(id)arg1 forGlobalIndex:(unsigned long long)arg2;
- (unsigned long long)_entityCount;
- (long long)_entityType;
- (id)_filteredPlayableItemMetadataContextsWithItems:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_postInvalidationNotification;
- (void)_reloadFilteredPlayableItemMetadataContextsAllowingInvalidationNotification:(bool)arg1;
- (void)_restrictionMonitorAllowsExplicitContentDidChangeNotification:(id)arg1;
- (void)_setStoreItemMetadataContexts:(id)arg1 entityType:(long long)arg2 allowingInvalidationNotification:(bool)arg3;
- (id)_storeEntityValueProviderAtIndex:(unsigned long long)arg1;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (long long)entityType;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (id)filteredPlayableItemMetadataContexts;
- (bool)hasEntities;
- (bool)hasEntitiesNotInLibrary;
- (bool)hasExplicitContent;
- (bool)hasMultipleEntitiesIncludingStoreContent;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)indexPathForStoreItemMetadataContext:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfSections;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (void)setShouldIncludeUnplayableContent:(bool)arg1;
- (void)setShouldReloadEntityValueProvidersForInvalidation:(bool)arg1;
- (void)setShouldRespectSystemContentRestrictions:(bool)arg1;
- (void)setStoreItemMetadataContexts:(id)arg1 entityType:(long long)arg2;
- (bool)shouldIncludeUnplayableContent;
- (bool)shouldReloadEntityValueProvidersForInvalidation;
- (bool)shouldRespectSystemContentRestrictions;
- (id)storeItemMetadataContextAtIndexPath:(id)arg1;
- (id)storeItemMetadataContexts;

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