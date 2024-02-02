<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VCUIGalleryViewController.h</title>
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

/PrivateFrameworks/VoiceShortcutsUI.framework/VCUIGalleryViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI ()
 */

@interface VCUIGalleryViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, VCUIAppGalleryViewControllerDelegate, VCUICreateVoiceShortcutViewControllerDelegate, VCUIGalleryDataSourceDelegate, VCUIGallerySectionHeaderViewDelegate> {
    VCUIGalleryDataSource * _dataSource;
    <VCUIGalleryViewControllerDelegate> * _delegate;
    double  _donationCellHeight;
    double  _donationWithSubtitleCellHeight;
    _UIContentUnavailableView * _noSearchResultsView;
    VCUIActionDonationCell * _prototypeCell;
    UISearchController * _searchController;
    UITableView * _tableView;
    VCVoiceShortcutClient * _voiceShortcutClient;
}

@property (nonatomic, retain) VCUIGalleryDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCUIGalleryViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double donationCellHeight;
@property (nonatomic, readonly) double donationWithSubtitleCellHeight;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIContentUnavailableView *noSearchResultsView;
@property (nonatomic, retain) VCUIActionDonationCell *prototypeCell;
@property (nonatomic, retain) UISearchController *searchController;
@property (readonly) Class superclass;
@property (nonatomic) UITableView *tableView;
@property (nonatomic, readonly) VCVoiceShortcutClient *voiceShortcutClient;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_setSeparatorInsets;
- (void)appGalleryViewControllerDidEnterStateSiriUnavailable:(id)arg1 withCreateVoiceShortcutViewController:(id)arg2;
- (void)appGalleryViewControllerDidFinish:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (double)cellHeightForDonation:(id)arg1;
- (void)createVoiceShortcutViewController:(id)arg1 didCreateVoiceShortcut:(id)arg2;
- (void)createVoiceShortcutViewControllerDidCancel:(id)arg1;
- (void)createVoiceShortcutViewControllerDidEnterStateSiriUnavailable:(id)arg1;
- (id)dataSource;
- (id)delegate;
- (double)donationCellHeight;
- (double)donationWithSubtitleCellHeight;
- (void)galleryDataSourceDidUpdate:(id)arg1 resultsFound:(bool)arg2;
- (void)gallerySectionHeaderView:(id)arg1 didSelectSeeAllWithApplicationBundleIdentifier:(id)arg2;
- (id)initWithVoiceShortcutClient:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (id)noSearchResultsView;
- (long long)positionForBar:(id)arg1;
- (id)prototypeCell;
- (id)searchController;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNeedsToComputeDonationCellHeights;
- (void)setNoSearchResultsView:(id)arg1;
- (void)setPrototypeCell:(id)arg1;
- (void)setSearchController:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setupActionDonationCellReuseIdentifiers;
- (id)tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)voiceShortcutClient;

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