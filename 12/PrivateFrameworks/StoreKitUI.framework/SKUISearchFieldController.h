<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKUISearchFieldController.h</title>
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

/PrivateFrameworks/StoreKitUI.framework/SKUISearchFieldController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI (1)
 */

@interface SKUISearchFieldController : NSObject <SKUISearchControllerDelegate, SKUITrendingSearchPageViewDelegate, UIPopoverPresentationControllerDelegate, UISearchBarDelegate, UISearchResultsUpdating, UITableViewDataSource, UITableViewDelegate> {
    SKUIClientContext * _clientContext;
    SKUICompletionList * _completionList;
    UIViewController * _contentsController;
    <SKUISearchFieldDelegate> * _delegate;
    struct { 
        unsigned int searchFieldControllerRequestSearch : 1; 
        unsigned int searchFieldControllerSearchBarDidChangeText : 1; 
        unsigned int searchFieldControllerShouldBeginEditing : 1; 
    }  _delegateRespondsTo;
    SSVLoadURLOperation * _loadOperation;
    long long  _numberOfSearchResults;
    NSOperationQueue * _operationQueue;
    NSString * _searchBarAccessoryText;
    SKUISearchController * _searchController;
    NSString * _searchHintsURLString;
    UITableViewController * _searchResultsController;
    NSString * _trendingSearchURLString;
}

@property (nonatomic, readonly) bool canBecomeActive;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, readonly) UIViewController *contentsController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUISearchFieldDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displaysSearchBarInNavigationBar;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long numberOfSearchResults;
@property (nonatomic, readonly) UISearchBar *searchBar;
@property (nonatomic, copy) NSString *searchBarAccessoryText;
@property (nonatomic, copy) NSString *searchHintsURLString;
@property (nonatomic) bool showsResultsForEmptyField;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *trendingSearchURLString;

- (void).cxx_destruct;
- (id)URLForTrendingSearchPageView:(id)arg1;
- (void)_adjustInsetsForResultsTableView:(id)arg1;
- (void)_loadResultsForSearchRequest:(id)arg1;
- (bool)_presentsInPopover:(id)arg1;
- (void)_reloadData;
- (void)_reloadTrendingVisibility;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (void)becomeActive;
- (bool)canBecomeActive;
- (id)clientContext;
- (id)contentsController;
- (id)delegate;
- (bool)displaysSearchBarInNavigationBar;
- (id)initWithContentsController:(id)arg1;
- (id)initWithContentsController:(id)arg1 clientContext:(id)arg2;
- (long long)numberOfSearchResults;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)presentSearchController:(id)arg1;
- (void)resignActive:(bool)arg1;
- (id)searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (id)searchBarAccessoryText;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (bool)searchBarShouldBeginEditing:(id)arg1;
- (bool)searchBarShouldClear:(id)arg1;
- (id)searchControllerClientContext:(id)arg1;
- (void)searchControllerWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)searchHintsURLString;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplaysSearchBarInNavigationBar:(bool)arg1;
- (void)setNumberOfSearchResults:(long long)arg1;
- (void)setSearchBarAccessoryText:(id)arg1;
- (void)setSearchHintsURLString:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setShowsResultsForEmptyField:(bool)arg1;
- (void)setTrendingSearchURLString:(id)arg1;
- (bool)showsResultsForEmptyField;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)trendingSearchPageView:(id)arg1 didSelectSearch:(id)arg2;
- (id)trendingSearchURLString;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

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