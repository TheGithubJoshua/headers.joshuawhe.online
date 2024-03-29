<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CNContactListViewController.h</title>
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

/Frameworks/ContactsUI.framework/CNContactListViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI (492)
 */

@interface CNContactListViewController : UITableViewController <CNAvatarCardControllerDelegate, CNAvatarViewControllerDelegate, CNContactDataSourceDelegate, CNContactListBannerViewDelegate, CNContactViewControllerDelegate, CNUIObjectViewControllerDelegate, CNUIPeopleGroupsGridViewControllerDelegate, CNVCardImportControllerDelegate, CNVCardImportControllerPresentationDelegate, UIGestureRecognizerDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDragDestinationDelegate, UITableViewDragSourceDelegate> {
    bool  _allowsSearching;
    CNAvatarCardController * _cardController;
    CNContactFormatter * _contactFormatter;
    double  _contentOffsetDueToMeContactBanner;
    NSObject<CNContactDataSource> * _dataSource;
    <CNContactListViewControllerDelegate> * _delegate;
    CNUIContactsEnvironment * _environment;
    CNUIPeopleGroupsGridViewController * _groupsGridController;
    CNAvatarViewController * _meBannerAvatarController;
    CNContactListBannerView * _meContactBanner;
    NSString * _meContactBannerFootnoteLabel;
    NSString * _meContactBannerFootnoteValue;
    _UIContentUnavailableView * _noContactsView;
    NSArray * _pendingLayoutBlocks;
    bool  _pendingSearchControllerActivation;
    NSString * _pendingSearchQuery;
    CNContact * _preferredForNameMeContact;
    bool  _presentsSearchUI;
    UISearchBar * _searchBar;
    id /* block */  _searchCompletionBlock;
    UISearchController * _searchController;
    CNContactListViewController * _searchResultsController;
    bool  _shouldAllowDrags;
    bool  _shouldAllowDrops;
    bool  _shouldAutoHideMeContactBanner;
    bool  _shouldDisplayGroupsGrid;
    bool  _shouldDisplayMeContactBanner;
    bool  _shouldUseLargeTitle;
    NSArray * _tableViewHeaderConstraints;
    CNVCardImportController * _vCardImportController;
}

@property (nonatomic) bool allowsSearching;
@property (nonatomic, retain) CNAvatarCardController *cardController;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, readonly) double contentOffsetDueToMeContactBanner;
@property (nonatomic, retain) NSObject<CNContactDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNUIContactsEnvironment *environment;
@property (nonatomic, retain) CNUIPeopleGroupsGridViewController *groupsGridController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNAvatarViewController *meBannerAvatarController;
@property (nonatomic, retain) CNContactListBannerView *meContactBanner;
@property (nonatomic, copy) NSString *meContactBannerFootnoteLabel;
@property (nonatomic, copy) NSString *meContactBannerFootnoteValue;
@property (nonatomic, readonly) _UIContentUnavailableView *noContactsView;
@property (nonatomic, readonly) <CNContactDataSource> *originalDataSource;
@property (nonatomic, retain) NSArray *pendingLayoutBlocks;
@property (nonatomic) bool pendingSearchControllerActivation;
@property (nonatomic, retain) NSString *pendingSearchQuery;
@property (nonatomic, readonly) CNContact *preferredForNameMeContact;
@property (nonatomic, readonly) bool presentsSearchUI;
@property (nonatomic, retain) UISearchBar *searchBar;
@property (nonatomic, copy) id /* block */ searchCompletionBlock;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) CNContactListViewController *searchResultsController;
@property (getter=isSearching, nonatomic, readonly) bool searching;
@property (nonatomic, readonly) NSArray *selectedContacts;
@property (nonatomic) bool shouldAllowDrags;
@property (nonatomic) bool shouldAllowDrops;
@property (nonatomic) bool shouldAutoHideMeContactBanner;
@property (nonatomic) bool shouldDisplayGroupsGrid;
@property (nonatomic) bool shouldDisplayMeContactBanner;
@property (nonatomic, readonly) bool shouldUseLargeTitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *tableViewHeaderConstraints;
@property (nonatomic, retain) CNVCardImportController *vCardImportController;

+ (id)emptyContact;

- (void).cxx_destruct;
- (void)_applicationEnteringForeground:(id)arg1;
- (id)_contactAtIndexPath:(id)arg1;
- (void)_contactCountTelemetry:(unsigned long long)arg1;
- (void)_searchBarDidEndEditing:(id)arg1;
- (id)_sections;
- (bool)_tableView:(id)arg1 canHandleDropSession:(id)arg2;
- (id)_tableView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (id)_tableView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint { double x1; double x2; })arg4;
- (id)_tableView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (void)_tableView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (void)_updateCountStringNow:(bool)arg1;
- (void)_updateTableViewRowHeight;
- (bool)allowsSearching;
- (long long)avatarCardController:(id)arg1 presentationResultForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)avatarCardControllerWillBeginPreviewInteraction:(id)arg1;
- (void)bannerView:(id)arg1 wasSelectedToPresentMeContact:(id)arg2;
- (void)beginSearch:(id)arg1;
- (bool)canBecomeFirstResponder;
- (bool)canSelectContactAtIndexPath:(id)arg1;
- (void)cancelSearch:(id)arg1;
- (id)cardController;
- (void)configureNavigationBarForLargeTitles;
- (void)contactDataSourceDidChange:(id)arg1;
- (void)contactDataSourceDidChangeDisplayName:(id)arg1;
- (void)contactDataSourceMeContactDidChange:(id)arg1;
- (id)contactFormatter;
- (void)contactStoreDidChangeWithNotification:(id)arg1;
- (double)contentOffsetDueToMeContactBanner;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)createTableView;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)didDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)didUpdateContentForAvatarViewController:(id)arg1;
- (id)dragItemsForIndexPath:(id)arg1;
- (id)environment;
- (id)groupsGridController;
- (bool)hasNoContacts;
- (id)hostingViewControllerForController:(id)arg1;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2 shouldUseLargeTitle:(bool)arg3;
- (id)initWithDataSource:(id)arg1 searchable:(bool)arg2 environment:(id)arg3 shouldUseLargeTitle:(bool)arg4;
- (id)initWithDataSource:(id)arg1 shouldUseLargeTitle:(bool)arg2;
- (id)initWithStyle:(long long)arg1;
- (bool)isContactWithIdentifierMeContactOrLinkedToMeContact:(id)arg1;
- (bool)isHandlingSearch;
- (bool)isSearching;
- (void)loadView;
- (id)meBannerAvatarController;
- (id)meContactBanner;
- (id)meContactBannerFootnoteLabel;
- (id)meContactBannerFootnoteValue;
- (id)noContactsView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)originalDataSource;
- (id)pendingLayoutBlocks;
- (bool)pendingSearchControllerActivation;
- (id)pendingSearchQuery;
- (void)peopleGroupsGridViewControllerDidChange:(id)arg1;
- (void)performWhenViewIsLaidOut:(id /* block */)arg1;
- (id)preferredForNameMeContact;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (bool)presentsSearchUI;
- (void)refreshTableViewHeader;
- (void)refreshTableViewHeaderIfVisible;
- (void)reloadContacts;
- (id)searchBar;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id /* block */)searchCompletionBlock;
- (id)searchController;
- (void)searchForString:(id)arg1 animated:(bool)arg2 completionBlock:(id /* block */)arg3;
- (id)searchResultsController;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (bool)selectContact:(id)arg1 animated:(bool)arg2 scrollPosition:(long long)arg3;
- (void)selectRowAtIndexPath:(id)arg1 animated:(bool)arg2 scrollPosition:(long long)arg3;
- (id)selectedContacts;
- (void)setAllowsSearching:(bool)arg1;
- (void)setCardController:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroupsGridController:(id)arg1;
- (void)setMeBannerAvatarController:(id)arg1;
- (void)setMeContactBanner:(id)arg1;
- (void)setMeContactBannerFootnoteLabel:(id)arg1;
- (void)setMeContactBannerFootnoteValue:(id)arg1;
- (void)setPendingLayoutBlocks:(id)arg1;
- (void)setPendingSearchControllerActivation:(bool)arg1;
- (void)setPendingSearchQuery:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSearchCompletionBlock:(id /* block */)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchResultsController:(id)arg1;
- (void)setShouldAllowDrags:(bool)arg1;
- (void)setShouldAllowDrops:(bool)arg1;
- (void)setShouldAutoHideMeContactBanner:(bool)arg1;
- (void)setShouldDisplayGroupsGrid:(bool)arg1;
- (void)setShouldDisplayMeContactBanner:(bool)arg1;
- (void)setTableViewHeaderConstraints:(id)arg1;
- (void)setVCardImportController:(id)arg1;
- (void)setupForMultiSelection;
- (bool)shouldAllowDrags;
- (bool)shouldAllowDrops;
- (bool)shouldAutoHideMeContactBanner;
- (bool)shouldDisplayGroupsGrid;
- (bool)shouldDisplayMeContactBanner;
- (bool)shouldUseLargeTitle;
- (void)startSearching;
- (void)startSearchingForString:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableViewHeaderConstraints;
- (bool)updateFrameAndDisplayNoContactsViewIfNeeded;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (id)vCardImportController;
- (void)vCardImportController:(id)arg1 didSaveContacts:(id)arg2;
- (void)vCardImportController:(id)arg1 presentViewController:(id)arg2 animated:(bool)arg3;
- (void)vCardImportControllerDidCompleteQueue:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
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
