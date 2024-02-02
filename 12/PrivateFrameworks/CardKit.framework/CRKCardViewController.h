<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CRKCardViewController.h</title>
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

/PrivateFrameworks/CardKit.framework/CRKCardViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit (1)
 */

@interface CRKCardViewController : UIViewController <CRKCardSectionViewControllerDataSource, CRKCardSectionViewControllerDelegate, CRKCardSectionViewProviderDelegate, CRKCardViewControlling> {
    <CRKCardSectionViewSourcing> * _builtInCardSectionViewProviderManager;
    <CRCard> * _card;
    NSMutableArray * _cardSectionViewControllers;
    <CRKCardSectionViewSourcing> * _cardSectionViewSource;
    NSMapTable * _cardSectionsToCardSectionViewControllersMapTable;
    <CRKCardViewControllerDelegate> * _cardViewControllerDelegate;
    NSMapTable * _handledParametersForInteraction;
    bool  _indicatingActivity;
    bool  _loadBundles;
    bool  _loaded;
    NSMutableArray * _loadingCardSections;
    NSMutableArray * _pendingDismissalCommands;
    long long  _preferredPunchoutIndex;
}

@property (nonatomic, retain) <CRCard> *card;
@property (nonatomic, retain) <CRKCardSectionViewSourcing> *cardSectionViewSource;
@property (nonatomic) <CRKCardViewControllerDelegate> *cardViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CRKCardViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isIndicatingActivity, nonatomic, readonly) bool indicatingActivity;
@property (nonatomic) bool loadBundles;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property long long preferredPunchoutIndex;
@property (readonly) Class superclass;
@property (nonatomic, retain) CRKComposedStackView *view;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

+ (void)_registerCardSectionViewControllers;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_addCardSectionViewControllersAsChildViewControllers:(id)arg1;
- (bool)_askDelegateToPerformReferentialCommand:(id)arg1;
- (void)_cancelTouchesIfNecessary;
- (id)_cardSectionViewControllerForCardSection:(id)arg1;
- (void)_configureCardSectionViewController:(id)arg1 forCardSection:(id)arg2;
- (long long)_convertSFSeparatorStyleToCRKKeylineStyle:(int)arg1;
- (long long)_defaultKeylineStyleBetweenLeadingCardSection:(id)arg1 andTrailingCardSection:(id)arg2;
- (void)_finishLoading;
- (bool)_fireAndForgetOutboundCommand:(id)arg1;
- (id)_generateCardViewAppearanceFeedback;
- (id)_initWithCard:(id)arg1;
- (id)_initWithCard:(id)arg1 delegate:(id)arg2 loadBundles:(bool)arg3 loadProvidersImmediately:(bool)arg4;
- (id)_initWithCard:(id)arg1 delegate:(id)arg2 loadProvidersImmediately:(bool)arg3;
- (bool)_isActuallyVisible;
- (long long)_keylineStyleBetweenLeadingCardSectionViewController:(id)arg1 andTrailingCardSectionViewController:(id)arg2;
- (id)_loadCardSectionViewControllerFromCardSection:(id)arg1;
- (void)_loadCardSectionViewControllersFromCard:(id)arg1 currentSourceInvalid:(bool)arg2;
- (void)_removeCardSectionViewControllersFromParentViewController:(id)arg1;
- (void)_resumeTouchesIfNecessary;
- (void)_setCard:(id)arg1 loadProvidersImmediately:(bool)arg2;
- (void)_setCardWithLoadedBundles:(id)arg1 loadProvidersImmediately:(bool)arg2;
- (struct CGSize { double x1; double x2; })boundingSizeForCardSectionViewController:(id)arg1;
- (id)card;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)cardSectionViewController:(id)arg1 didSelectPreferredPunchoutIndex:(long long)arg2;
- (id)cardSectionViewController:(id)arg1 interactionWithIdentifier:(id)arg2;
- (void)cardSectionViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (void)cardSectionViewControllerBoundsDidChange:(id)arg1;
- (void)cardSectionViewControllerDidFinishLoading:(id)arg1;
- (void)cardSectionViewControllerShouldBeRemoved:(id)arg1;
- (void)cardSectionViewDidAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (void)cardSectionViewDidDisappearForCardSection:(id)arg1 withDisappearanceFeedback:(id)arg2;
- (void)cardSectionViewDidSelectPreferredPunchoutIndex:(long long)arg1;
- (id)cardSectionViewSource;
- (void)cardSectionViewWillAppearForCardSection:(id)arg1 withAppearanceFeedback:(id)arg2;
- (id)cardViewControllerDelegate;
- (double)contentHeightForWidth:(double)arg1;
- (id)defaultFeedbackDelegateForProvider:(id)arg1;
- (id)delegate;
- (void)didEngageCardSection:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)handleCardCommand:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)initWithCard:(id)arg1 delegate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isIndicatingActivity;
- (bool)isLoading;
- (bool)loadBundles;
- (void)loadView;
- (bool)performCommand:(id)arg1 forCardSectionViewController:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (long long)preferredPunchoutIndex;
- (long long)preferredPunchoutIndexForCardSectionViewController:(id)arg1;
- (void)presentViewController:(id)arg1;
- (void)presentViewController:(id)arg1 forCardSectionViewController:(id)arg2;
- (void)setCard:(id)arg1;
- (void)setCardSectionViewSource:(id)arg1;
- (void)setCardViewControllerDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoadBundles:(bool)arg1;
- (void)setPreferredPunchoutIndex:(long long)arg1;
- (void)userDidEngageCardSection:(id)arg1 withEngagementFeedback:(id)arg2;
- (void)userDidReportFeedback:(id)arg1 fromCardSection:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willDismissViewController:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (id)_legacyCardSectionViewController;

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