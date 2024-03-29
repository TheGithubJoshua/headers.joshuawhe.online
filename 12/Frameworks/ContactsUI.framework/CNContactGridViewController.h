<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CNContactGridViewController.h</title>
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

/Frameworks/ContactsUI.framework/CNContactGridViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI (492)
 */

@interface CNContactGridViewController : UICollectionViewController <CNAvatarViewDelegate, CNContactDataSourceDelegate, CNQuickActionsViewDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _avatarMargins;
    struct CGSize { 
        double width; 
        double height; 
    }  _avatarSize;
    UIColor * _backgroundColor;
    CNContactFormatter * _contactFormatter;
    NSObject<CNContactDataSource> * _dataSource;
    <CNContactGridViewControllerDelegate> * _delegate;
    CNContactGridViewLayout * _gridLayout;
    NSArray * _inlineActionsCategories;
    bool  _inlineActionsEnabled;
    long long  _monogrammerStyle;
    NSDictionary * _nameTextAttributes;
    long long  _numberOfColumns;
    NSMutableDictionary * _preloadedActionsManagers;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } avatarMargins;
@property (nonatomic) struct CGSize { double x1; double x2; } avatarSize;
@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, retain) NSObject<CNContactDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactGridViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <CNKeyDescriptor> *descriptorForRequiredKeys;
@property (retain) CNContactGridViewLayout *gridLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long indexOfContactWithExpandedInlineActions;
@property (copy) NSIndexPath *indexPathOfContactWithExpandedInlineActions;
@property (nonatomic, copy) NSArray *inlineActionsCategories;
@property (nonatomic) bool inlineActionsEnabled;
@property (nonatomic) long long monogrammerStyle;
@property (nonatomic, copy) NSDictionary *nameTextAttributes;
@property (nonatomic) long long numberOfColumns;
@property (nonatomic, retain) NSMutableDictionary *preloadedActionsManagers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureCell:(id)arg1;
- (id)_contactAtIndexPath:(id)arg1;
- (long long)_globalIndexForIndexPath:(id)arg1;
- (id)_indexPathForGlobalIndex:(long long)arg1;
- (void)_updateItemSize;
- (void)actionsView:(id)arg1 didPerformAction:(id)arg2;
- (void)actionsView:(id)arg1 willShowActions:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })avatarMargins;
- (struct CGSize { double x1; double x2; })avatarSize;
- (id)backgroundColor;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)contactDataSourceDidChange:(id)arg1;
- (id)contactFormatter;
- (id)dataSource;
- (id)delegate;
- (id)descriptorForRequiredKeys;
- (id)gridLayout;
- (long long)indexOfContactWithExpandedInlineActions;
- (id)indexPathOfContactWithExpandedInlineActions;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)inlineActionsCategories;
- (bool)inlineActionsEnabled;
- (long long)monogrammerStyle;
- (id)nameTextAttributes;
- (long long)numberOfColumns;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)preloadInlineActionsForContactsAtIndexes:(id)arg1;
- (id)preloadedActionsManagers;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)setAvatarMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setAvatarSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGridLayout:(id)arg1;
- (void)setIndexOfContactWithExpandedInlineActions:(long long)arg1;
- (void)setIndexOfContactWithExpandedInlineActions:(long long)arg1 animated:(bool)arg2;
- (void)setIndexPathOfContactWithExpandedInlineActions:(id)arg1;
- (void)setIndexPathOfContactWithExpandedInlineActions:(id)arg1 animated:(bool)arg2;
- (void)setInlineActionsCategories:(id)arg1;
- (void)setInlineActionsEnabled:(bool)arg1;
- (void)setMonogrammerStyle:(long long)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setNumberOfColumns:(long long)arg1;
- (void)setPreloadedActionsManagers:(id)arg1;
- (id)viewControllerForActionsView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;

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
