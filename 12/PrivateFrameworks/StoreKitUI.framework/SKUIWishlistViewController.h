<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SKUIWishlistViewController.h</title>
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

/PrivateFrameworks/StoreKitUI.framework/SKUIWishlistViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI (1)
 */

@interface SKUIWishlistViewController : SKUIViewController <SKUIItemListTableDelegate> {
    _UIBackdropView * _backdropView;
    <SKUIWishlistDelegate> * _delegate;
    UIBarButtonItem * _deleteButton;
    bool  _editing;
    _UIContentUnavailableView * _emptyWishlistView;
    SKUIItemListTableViewController * _itemListViewController;
    bool  _reloadOnNextAppear;
    SKUISyncWishlistOperation * _syncOperation;
    SKUIWishlist * _wishlist;
    long long  _wishlistState;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIWishlistDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)wishlistBarButtonItemWithClientContext:(id)arg1;

- (void).cxx_destruct;
- (void)_deleteAction:(id)arg1;
- (void)_deleteItemsAtIndexPaths:(id)arg1;
- (void)_destroyEmptyWishlistView;
- (void)_doneAction:(id)arg1;
- (id)_emptyWishlistView;
- (void)_finishSignInWithResponse:(id)arg1 error:(id)arg2;
- (void)_finishSyncWithResult:(bool)arg1 didChange:(bool)arg2 error:(id)arg3;
- (bool)_isEditingEnabled;
- (id)_itemListViewController;
- (void)_reloadChildView;
- (void)_reloadForAccountsChanged;
- (void)_reloadNavigationBarAnimated:(bool)arg1;
- (void)_reloadWishlist;
- (void)_setEditing:(bool)arg1 animated:(bool)arg2;
- (void)_signInAction:(id)arg1;
- (void)_syncWishlist;
- (void)_toggleEditAction:(id)arg1;
- (void)_updateDeleteButton;
- (id)_wishlist;
- (void)_wishlistDidChangeNotification:(id)arg1;
- (long long)_wishlistState;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)itemList:(id)arg1 didDeselectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemList:(id)arg1 didRemoveItemAtIndexPath:(id)arg2;
- (void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)loadView;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

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
