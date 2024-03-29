<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GKFriendListViewController.h</title>
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

/PrivateFrameworks/GameCenterPrivateUI.framework/GKFriendListViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI (577.8)
 */

@interface GKFriendListViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, UITableViewDataSource, UITableViewDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    <GKFriendListViewControllerDelegate> * _delegate;
    NSMutableArray * _friendPlayers;
    GKNoContentView * _noContentView;
    UISearchController * _searchController;
    NSArray * _searchPlayers;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GKFriendListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *friendPlayers;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GKNoContentView *noContentView;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) NSArray *searchPlayers;
@property (readonly) Class superclass;

- (id)activityIndicator;
- (void)dealloc;
- (id)delegate;
- (id)friendPlayers;
- (void)hideNoContentPlaceholder;
- (void)loadData;
- (void)loadDataWithCompletionHandler:(id /* block */)arg1;
- (id)noContentView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeAllFriendsButtonPressed;
- (id)searchController;
- (id)searchPlayers;
- (void)setActivityIndicator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFriendPlayers:(id)arg1;
- (void)setNoContentView:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchPlayers:(id)arg1;
- (void)setupNavBarItems;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)setupSearchController;
- (void)showLoadingIndicator;
- (void)showNoContentPlaceholderForError:(id)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)updateTitlesWith:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

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
