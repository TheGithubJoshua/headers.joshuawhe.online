<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HKOrganDonationConfirmationViewController.h</title>
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

/PrivateFrameworks/HealthUI.framework/HKOrganDonationConfirmationViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI ()
 */

@interface HKOrganDonationConfirmationViewController : HKViewController <HKTitledBuddyHeaderViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIFont * _bodyFont;
    NSString * _completionButtonTitle;
    HKOrganDonationConnectionManager * _connectionManager;
    NSArray * _dataEntryItems;
    UIVisualEffectView * _footerView;
    UIView * _headerView;
    UIActivityIndicatorView * _loadingIndicator;
    _HKMedicalIDData * _medicalIDData;
    HKOrganDonationRegistrant * _registrant;
    id /* block */  _registrationCompletionHandler;
    UIButton * _submitButton;
    UITableView * _tableView;
}

@property (nonatomic, retain) NSString *completionButtonTitle;
@property (nonatomic, retain) NSArray *dataEntryItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIActivityIndicatorView *loadingIndicator;
@property (nonatomic, retain) _HKMedicalIDData *medicalIDData;
@property (nonatomic, copy) id /* block */ registrationCompletionHandler;
@property (nonatomic, retain) UIButton *submitButton;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (id)_createTableFooterView;
- (id)_createTableHeaderView;
- (id)completionButtonTitle;
- (void)confirmSubmissionIfNecessaryWithConfirmHandler:(id /* block */)arg1 andCancelHandler:(id /* block */)arg2;
- (id)dataEntryItems;
- (id)initWithRegistrant:(id)arg1 medicalIDData:(id)arg2 connectionManager:(id)arg3;
- (id)loadingIndicator;
- (id)medicalIDData;
- (id /* block */)registrationCompletionHandler;
- (void)setCompletionButtonTitle:(id)arg1;
- (void)setDataEntryItems:(id)arg1;
- (void)setLoadingIndicator:(id)arg1;
- (void)setMedicalIDData:(id)arg1;
- (void)setRegistrationCompletionHandler:(id /* block */)arg1;
- (void)setSubmitButton:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)submitButton;
- (void)submitButtonTapped:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)titledBuddyHeaderViewDidTapLinkButton:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
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
