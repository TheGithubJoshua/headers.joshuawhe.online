<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUSearchResultsSection.h</title>
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

/Frameworks/PhotosUI.framework/PUSearchResultsSection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUSearchResultsSection : NSObject {
    bool  _expanded;
    NSMutableSet * _mutableSearchResultUUIDs;
    NSMutableArray * _mutableSearchResults;
    unsigned long long  _sectionType;
    NSArray * _sortDescriptors;
    bool  _sorted;
    NSString * _title;
}

@property (readonly) NSDictionary *debugDictionary;
@property (getter=isExpandable, nonatomic, readonly) bool expandable;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, readonly) NSMutableSet *mutableSearchResultUUIDs;
@property (nonatomic, readonly) NSMutableArray *mutableSearchResults;
@property (nonatomic, readonly) NSArray *searchResults;
@property (nonatomic, readonly) unsigned long long sectionType;
@property (nonatomic, copy) NSArray *sortDescriptors;
@property (getter=isSorted, nonatomic) bool sorted;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long visibleCount;

+ (unsigned long long)_sectionTypeForCategory:(unsigned long long)arg1;
+ (id)_stringForCategory:(unsigned long long)arg1;
+ (id)sectionTitleForCategoryMask:(unsigned long long)arg1;
+ (unsigned long long)sectionTypeForCategoryMask:(unsigned long long)arg1 isMomentSection:(bool)arg2 isTopAssetSection:(bool)arg3;

- (void).cxx_destruct;
- (void)addSearchResult:(id)arg1;
- (id)debugDictionary;
- (id)description;
- (id)init;
- (id)initWithTitle:(id)arg1 withSectionType:(unsigned long long)arg2;
- (bool)isExpandable;
- (bool)isExpanded;
- (bool)isSorted;
- (id)mutableSearchResultUUIDs;
- (id)mutableSearchResults;
- (id)searchResults;
- (unsigned long long)sectionType;
- (void)setExpanded:(bool)arg1;
- (void)setSortDescriptors:(id)arg1;
- (void)setSorted:(bool)arg1;
- (id)sortDescriptors;
- (id)title;
- (unsigned long long)visibleCount;

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
