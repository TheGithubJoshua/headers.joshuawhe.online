<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GKCollectionDataSource.h</title>
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

/PrivateFrameworks/GameCenterPrivateUI.framework/GKCollectionDataSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI (577.8)
 */

@interface GKCollectionDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate_Private> {
    NSString * _analyticsKey;
    bool  _onDarkBackground;
    UIViewController * _presentationViewController;
    NSArray * _searchTerms;
    NSString * _searchText;
    bool  _useStandardHeaders;
}

@property (nonatomic) NSString *analyticsKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSearching;
@property (nonatomic, readonly) long long itemCount;
@property (nonatomic) bool onDarkBackground;
@property (nonatomic, readonly) double preferredCollectionHeight;
@property (nonatomic) UIViewController *presentationViewController;
@property (nonatomic, retain) NSArray *searchTerms;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic, readonly) NSString *sectionHeaderText;
@property (readonly) Class superclass;
@property (nonatomic) bool useStandardHeaders;

- (id)analyticsKey;
- (bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (void)dismissViewController:(id)arg1;
- (id)headerTextForSection:(long long)arg1;
- (bool)isSearching;
- (long long)itemCount;
- (id)itemForIndexPath:(id)arg1;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (bool)onDarkBackground;
- (double)preferredCollectionHeight;
- (id)presentationViewController;
- (id)searchKeyForSection:(long long)arg1;
- (bool)searchMatchesItem:(id)arg1 inSection:(long long)arg2;
- (id)searchTerms;
- (id)searchText;
- (void)searchTextHasChanged;
- (id)sectionHeaderText;
- (void)setAnalyticsKey:(id)arg1;
- (void)setOnDarkBackground:(bool)arg1;
- (void)setPresentationViewController:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setUseStandardHeaders:(bool)arg1;
- (void)setupCollectionView:(id)arg1;
- (void)showViewController:(id)arg1 popoverSourceView:(id)arg2;
- (bool)useStandardHeaders;

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