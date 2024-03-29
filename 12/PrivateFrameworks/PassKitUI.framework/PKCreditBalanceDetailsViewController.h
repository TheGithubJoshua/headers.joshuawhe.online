<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKCreditBalanceDetailsViewController.h</title>
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

/PrivateFrameworks/PassKitUI.framework/PKCreditBalanceDetailsViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI (1)
 */

@interface PKCreditBalanceDetailsViewController : UICollectionViewController <PKAccountServiceObserver> {
    PKAccount * _account;
    PKCreditAccountSummary * _accountSummary;
    PKDashboardBalanceItem * _balanceItem;
    PKDashboardBalancePresenter * _balancePresenter;
    PKBalanceSummary * _balanceSummary;
    PKDashboardBalanceSummaryItemPresenter * _balanceSummaryItemPresenter;
    PKDashboardBalanceSummaryItem * _creditsSummaryItem;
    PKDashboardBalanceSummaryItem * _currentSpendingSummaryItem;
    PKDashboardBalanceSummaryItem * _dailyCashSummaryItem;
    NSDateFormatter * _dateFormatter;
    unsigned long long  _feature;
    PKBalanceSummaryFetcher * _fetcher;
    PKDashboardBalanceSummaryItem * _interestSummaryItem;
    PKDashboardBalanceSummaryItem * _lastStatementSummaryItem;
    NSDateFormatter * _monthYearFormatter;
    bool  _navigationBarOpaque;
    unsigned long long  _numberOfStaticSections;
    PKPaymentPass * _paymentPass;
    PKDashboardBalanceSummaryItem * _paymentsAndCreditsSummaryItem;
    PKDashboardBalanceSummaryItem * _paymentsSummaryItem;
    PKCreditAccountStatement * _previousStatement;
    PKDashboardFooterTextView * _sampleFooterView;
    PKDashboardTitleHeaderView * _sampleView;
    NSArray * _sectionMap;
    NSArray * _sortedYears;
    PKCreditAccountStatement * _statement;
    PKDashboardBalanceSummaryItem * _statementDowloadSummaryItem;
    NSArray * _statements;
    NSDictionary * _statementsByYear;
    long long  _style;
    PKDashboardTransactionFetcher * _transactionFetcher;
    NSArray * _usageItems;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureFooterView:(id)arg1 inSectionIndex:(unsigned long long)arg2;
- (void)_configureHeaderView:(id)arg1 inSectionIndex:(unsigned long long)arg2;
- (id)_createSummaryItemOfType:(unsigned long long)arg1;
- (bool)_hasFooterForSectionIndex:(unsigned long long)arg1;
- (bool)_hasHeaderForSectionIndex:(unsigned long long)arg1;
- (void)_reloadData;
- (unsigned long long)_sectionForIndex:(unsigned long long)arg1;
- (bool)_shouldInset;
- (void)_sortStatementsForPresentation;
- (id)_summaryItemForIndexPath:(id)arg1;
- (void)_updateNavBarContent;
- (void)_updateStatements;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithStyle:(long long)arg1 paymentPass:(id)arg2 webService:(id)arg3 account:(id)arg4 statement:(id)arg5 previousStatements:(id)arg6;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)pkui_preferredNavigationBarBackgroundOpacity;
- (bool)pkui_prefersNavigationBarShadowHidden;
- (void)scrollViewDidScroll:(id)arg1;
- (void)statementsChangedForAccountIdentifier:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
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
