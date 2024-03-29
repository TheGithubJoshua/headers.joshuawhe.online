<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPUQueryDataSource.h</title>
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

/PrivateFrameworks/MPUFoundation.framework/MPUQueryDataSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation (1)
 */

@interface MPUQueryDataSource : MPUDataSource {
    NSMutableSet * _additionalUniqueItemPropertiesToFetch;
    NSArray * _entities;
    bool  _hasValidEmpty;
    bool  _hasValidRepresentativeCollection;
    bool  _ignoringInvalidationDueToBackgroundApplicationState;
    bool  _invalidateWhenEnteringForeground;
    bool  _isEmpty;
    MPMediaQuery * _query;
    MPMediaItemCollection * _representativeCollection;
    MPMediaQuerySectionInfo * _sectionInfo;
}

@property (nonatomic) bool ignoringInvalidationDueToBackgroundApplicationState;
@property (nonatomic, readonly) MPMediaQuery *query;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (bool)_deleteHidesFromCloudForIndex:(unsigned long long)arg1 hidesAll:(out bool*)arg2;
- (void)_invalidateCalculatedEntities;
- (void)_invalidateForDisplayValuesChangeIfNeeded;
- (void)_invalidateIfNeeded;
- (void)_isCloudEnabledDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (id)_representativeCollection;
- (id)_sectionInfo;
- (void)addAdditionalMediaEntityPropertiesToFetch:(id)arg1;
- (bool)canEditEntityAtIndex:(unsigned long long)arg1;
- (bool)canSelectEntityAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)deleteEntityAtIndex:(unsigned long long)arg1;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entities;
- (unsigned long long)hash;
- (bool)ignoringInvalidationDueToBackgroundApplicationState;
- (unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(long long)arg1;
- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)localizedSectionIndexTitles;
- (id)localizedSectionTitleAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)query;
- (id)queryForEntityAtIndex:(unsigned long long)arg1;
- (id)queryForEntityAtIndexPath:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSectionAtIndex:(unsigned long long)arg1;
- (void)removeAdditionalMediaEntityPropertiesToFetch:(id)arg1;
- (void)setIgnoringInvalidationDueToBackgroundApplicationState:(bool)arg1;
- (bool)showsEntityCountFooter;
- (bool)showsIndexBar;

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
