<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKNavbarCanvasViewController.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKNavbarCanvasViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKNavbarCanvasViewController : UIViewController <CKDetailsContactsManagerDelegate, UIGestureRecognizerDelegate> {
    CKAvatarPickerViewController * _avatarPickerViewController;
    CKCanvasBackButtonView * _backButtonView;
    UIButton * _callButton;
    bool  _canShowBackButtonView;
    CKNavigationBarCanvasView * _canvasView;
    UIButton * _clearAllButtonView;
    CKDetailsContactsManager * _contactsManager;
    CKConversation * _conversation;
    CKLabel * _defaultLabel;
    <CKNavbarCanvasViewControllerDelegate> * _delegate;
    UIButton * _detailsButton;
    UIButton * _editCancelButtonView;
    bool  _editing;
    long long  _indicatorType;
    NSString * _navbarTitle;
    UINavigationController * _proxyNavigationController;
    CNContactStore * _suggestionsEnabledContactStore;
}

@property (nonatomic, retain) CKAvatarPickerViewController *avatarPickerViewController;
@property (nonatomic, retain) CKCanvasBackButtonView *backButtonView;
@property (nonatomic, retain) UIButton *callButton;
@property (nonatomic) bool canShowBackButtonView;
@property (nonatomic, retain) CKNavigationBarCanvasView *canvasView;
@property (nonatomic, retain) UIButton *clearAllButtonView;
@property (nonatomic, retain) CKDetailsContactsManager *contactsManager;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) CKLabel *defaultLabel;
@property (nonatomic) <CKNavbarCanvasViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIButton *detailsButton;
@property (nonatomic, retain) UIButton *editCancelButtonView;
@property (nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long indicatorType;
@property (nonatomic, retain) NSString *navbarTitle;
@property (nonatomic) UINavigationController *proxyNavigationController;
@property (nonatomic, retain) CNContactStore *suggestionsEnabledContactStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (bool)_canShowAvatarView;
- (void)_chatUnreadCountDidChange:(id)arg1;
- (void)_configureForDefaultMode;
- (void)_configureForEditMode;
- (void)_contactPhotosEnabledChangedNotification:(id)arg1;
- (void)_handleTranscriptScroll:(id)arg1;
- (void)_initializeForTraitCollection:(id)arg1;
- (id)_leftItemViewForTraitCollection:(id)arg1;
- (void)_notifyDelegateThatViewControllerWantsResize;
- (double)_preferredHeightForTraitCollection:(id)arg1;
- (id)_rightItemViewForTraitCollection:(id)arg1;
- (id)_secondaryRightItemViewForTraitCollection:(id)arg1;
- (void)_showContactCardForEntity:(id)arg1;
- (id)_titleItemViewForTraitCollection:(id)arg1;
- (long long)_unreadCount;
- (void)_updateMultiwayButtonStateWithConversation:(id)arg1;
- (void)_updateUnreadCountForBackbuttonView:(long long)arg1;
- (void)_userDidTapNavigationBar:(id)arg1;
- (id)_windowTraitCollection;
- (void)accessibilitySizeCategoryDidChange:(id)arg1;
- (id)avatarPickerViewController;
- (id)backButtonView;
- (id)callButton;
- (bool)canShowBackButtonView;
- (id)canvasView;
- (id)clearAllButtonView;
- (void)configureForEditing:(bool)arg1;
- (id)contactsManager;
- (void)contactsManager:(id)arg1 didRequestCallTypeForEntity:(id)arg2 addresses:(id)arg3 abLabels:(id)arg4 faceTimeAudioEnabled:(bool)arg5;
- (void)contactsManagerViewModelsDidChange:(id)arg1;
- (id)conversation;
- (void)dealloc;
- (id)defaultLabel;
- (id)delegate;
- (id)detailsButton;
- (void)dismissModal;
- (id)editCancelButtonView;
- (bool)editing;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleCloseNavBarAnimationCompleteNotification:(id)arg1;
- (long long)indicatorType;
- (id)initWithConversation:(id)arg1;
- (id)initWithConversation:(id)arg1 navigationController:(id)arg2;
- (bool)isFaceTimeVideoSupported;
- (bool)isMultiwayFaceTimeAudioSupported;
- (void)loadView;
- (void)multiwayStateChanged:(id)arg1;
- (id)navbarTitle;
- (id)navigationItem;
- (id)proxyNavigationController;
- (void)setAvatarPickerViewController:(id)arg1;
- (void)setBackButtonView:(id)arg1;
- (void)setCallButton:(id)arg1;
- (void)setCanShowBackButtonView:(bool)arg1;
- (void)setCanvasView:(id)arg1;
- (void)setClearAllButtonView:(id)arg1;
- (void)setContactsManager:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDefaultLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailsButton:(id)arg1;
- (void)setEditCancelButtonView:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setIndicatorType:(long long)arg1;
- (void)setNavbarTitle:(id)arg1;
- (void)setProxyNavigationController:(id)arg1;
- (void)setSuggestionsEnabledContactStore:(id)arg1;
- (void)setUnreadCountTitleColor;
- (void)showMapkitBusinessData;
- (void)startAudioCommunicationUsingPreferredRouteIfAvailable:(bool)arg1;
- (id)suggestionsEnabledContactStore;
- (void)toggleExpansionState;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTitle:(id)arg1 animated:(bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

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