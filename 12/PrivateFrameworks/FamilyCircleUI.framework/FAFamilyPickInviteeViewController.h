<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FAFamilyPickInviteeViewController.h</title>
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

/PrivateFrameworks/FamilyCircleUI.framework/FAFamilyPickInviteeViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI (1)
 */

@interface FAFamilyPickInviteeViewController : UIViewController <AAUIContactsSearchDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    ACAccount * _account;
    ACAccountStore * _accountStore;
    NSString * _addFamilyMemberInstructions;
    UILabel * _childAccountLabel;
    UITextField * _contactSearchBar;
    UIView * _contactSearchBarContainer;
    CNContactStore * _contactStore;
    FAContactsSearchController * _contactsSearchController;
    UIView * _container;
    UIButton * _createChildAccountButton;
    NSString * _createChildAccountButtonTitle;
    NSString * _createChildAccountInstructions;
    <FAPickInviteeDelegate> * _delegate;
    UILabel * _instructionsLabel;
    NSString * _inviteeCompositeName;
    NSString * _inviteeEmail;
    NSString * _inviteeShortName;
    CNMonogrammer * _monogrammer;
    UIBarButtonItem * _nextButton;
    UITableView * _resultsTableView;
    NSString * _searchQuery;
    NSArray * _searchResults;
    UIView * _separator;
    UILabel * _toLabel;
}

@property (nonatomic, copy) NSString *addFamilyMemberInstructions;
@property (nonatomic, copy) NSString *createChildAccountButtonTitle;
@property (nonatomic, copy) NSString *createChildAccountInstructions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FAPickInviteeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *inviteeCompositeName;
@property (nonatomic, readonly) NSString *inviteeEmail;
@property (nonatomic, readonly) NSString *inviteeShortName;
@property (nonatomic, readonly) NSString *searchQuery;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_attributedStringWithQueryHighlightedForString:(id)arg1 size:(double)arg2;
- (void)_cancelButtonWasTapped:(id)arg1;
- (void)_createChildAccountButtonWasTapped:(id)arg1;
- (double)_heightForText:(id)arg1 width:(double)arg2;
- (void)_hideSearchResults;
- (id)_imageForPersonWithRecordID:(unsigned int)arg1;
- (void)_nextButtonWasTapped:(id)arg1;
- (void)_updateNextButtonEnabledState;
- (id)addFamilyMemberInstructions;
- (void)contactsSearchController:(id)arg1 didFindSortedResult:(id)arg2;
- (void)contactsSearchController:(id)arg1 didFinishSearchWithSuccess:(bool)arg2;
- (id)contentScrollView;
- (id)createChildAccountButtonTitle;
- (id)createChildAccountInstructions;
- (id)delegate;
- (id)initWithAccount:(id)arg1 store:(id)arg2;
- (id)inviteeCompositeName;
- (id)inviteeEmail;
- (id)inviteeShortName;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)searchQuery;
- (void)setAddFamilyMemberInstructions:(id)arg1;
- (void)setCreateChildAccountButtonTitle:(id)arg1;
- (void)setCreateChildAccountInstructions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldValueDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

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
