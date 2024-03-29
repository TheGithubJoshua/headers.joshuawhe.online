<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GKDashboardMultiplayerPickerViewController.h</title>
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

/PrivateFrameworks/GameCenterPrivateUI.framework/GKDashboardMultiplayerPickerViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI (577.8)
 */

@interface GKDashboardMultiplayerPickerViewController : GKDashboardCollectionViewController <GKComposeControllerDelegate, UISearchBarDelegate, UITextFieldDelegate> {
    id /* block */  _completionHandler;
    UIViewController * _composeController;
    GKContactSkipControl * _contactSkipControl;
    NSLayoutConstraint * _customizeMessageBottomConstraint;
    UIButton * _customizeMessageButton;
    UILabel * _descriptionLabel;
    UIView * _effectView;
    double  _initialCustomizeMessageBottomConstraintConstant;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _initialInsets;
    NSArray * _initiallySelectedPlayers;
    NSString * _message;
    UITextField * _messageField;
    <GKDashboardNearbyBrowserDelegate> * _nearbyDelegate;
    UIView * _scrollingHeader;
    NSLayoutConstraint * _scrollingHeaderTopConstraint;
    double  _scrollingHeaderTopConstraintConstant;
    UISegmentedControl * _sectionControl;
    UIButton * _sendButton;
    bool  _shouldApplyInitialOffset;
    bool  _shouldIgnoreClearSelection;
    bool  _supportsNearby;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) UIViewController *composeController;
@property (nonatomic) GKContactSkipControl *contactSkipControl;
@property (nonatomic) NSLayoutConstraint *customizeMessageBottomConstraint;
@property (nonatomic) UIButton *customizeMessageButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UILabel *descriptionLabel;
@property (nonatomic) UIView *effectView;
@property (nonatomic) bool excludesContacts;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialCustomizeMessageBottomConstraintConstant;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } initialInsets;
@property (nonatomic, retain) NSArray *initiallySelectedPlayers;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) UITextField *messageField;
@property (nonatomic) <GKDashboardNearbyBrowserDelegate> *nearbyDelegate;
@property (nonatomic) UIView *scrollingHeader;
@property (nonatomic) NSLayoutConstraint *scrollingHeaderTopConstraint;
@property (nonatomic) double scrollingHeaderTopConstraintConstant;
@property (nonatomic) UISegmentedControl *sectionControl;
@property (nonatomic) UIButton *sendButton;
@property (nonatomic) bool shouldApplyInitialOffset;
@property (nonatomic) bool shouldIgnoreClearSelection;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsNearby;

- (void)_updateButtonEnableState;
- (void)addMessage:(id)arg1;
- (void)adjustCustomizeMessageConstraint;
- (void)applyInitialContentOffset;
- (void)cancel:(id)arg1;
- (void)clearSelection;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id /* block */)completionHandler;
- (id)composeController;
- (id)contactSkipControl;
- (void)contactSkipSelected:(id)arg1;
- (id)customizeMessageBottomConstraint;
- (id)customizeMessageButton;
- (void)dataUpdated:(bool)arg1 withError:(id)arg2;
- (void)dealloc;
- (id)descriptionLabel;
- (id)effectView;
- (bool)excludesContacts;
- (id)initWithMaxSelectable:(long long)arg1 hiddenPlayers:(id)arg2;
- (double)initialCustomizeMessageBottomConstraintConstant;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })initialInsets;
- (id)initiallySelectedPlayers;
- (id)message;
- (id)messageField;
- (id)nearbyDelegate;
- (id)preferredFocusEnvironments;
- (void)scrollViewDidScroll:(id)arg1;
- (id)scrollingHeader;
- (id)scrollingHeaderTopConstraint;
- (double)scrollingHeaderTopConstraintConstant;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (id)sectionControl;
- (void)segmentSectionChanged:(id)arg1;
- (void)selectPlayersAtIndexPaths:(id)arg1 askDelegateFirst:(bool)arg2;
- (void)send:(id)arg1;
- (id)sendButton;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setComposeController:(id)arg1;
- (void)setContactSkipControl:(id)arg1;
- (void)setCustomizeMessageBottomConstraint:(id)arg1;
- (void)setCustomizeMessageButton:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setEffectView:(id)arg1;
- (void)setExcludesContacts:(bool)arg1;
- (void)setInitialCustomizeMessageBottomConstraintConstant:(double)arg1;
- (void)setInitialInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInitiallySelectedPlayers:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageField:(id)arg1;
- (void)setNearbyDelegate:(id)arg1;
- (void)setScrollingHeader:(id)arg1;
- (void)setScrollingHeaderTopConstraint:(id)arg1;
- (void)setScrollingHeaderTopConstraintConstant:(double)arg1;
- (void)setSearchText:(id)arg1;
- (void)setSectionControl:(id)arg1;
- (void)setSendButton:(id)arg1;
- (void)setShouldApplyInitialOffset:(bool)arg1;
- (void)setShouldIgnoreClearSelection:(bool)arg1;
- (void)setSupportsNearby:(bool)arg1;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (bool)shouldApplyInitialOffset;
- (bool)shouldIgnoreClearSelection;
- (bool)supportsNearby;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

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
