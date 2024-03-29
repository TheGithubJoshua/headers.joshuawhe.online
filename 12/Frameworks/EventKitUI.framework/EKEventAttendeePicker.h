<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EKEventAttendeePicker.h</title>
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

/Frameworks/EventKitUI.framework/EKEventAttendeePicker.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI (1.0)
 */

@interface EKEventAttendeePicker : UIViewController <CNContactPickerDelegate, MFAutocompleteResultsTableViewControllerDelegate, MFComposeRecipientTextViewDelegate, MFContactsSearchConsumer> {
    bool  _ABAccessDenied;
    <EKEventAttendeePickerDelegate> * _addressValidationDelegate;
    NSMutableDictionary * _atomPresentationOptionsByRecipient;
    MFAutocompleteResultsTableViewController * _autocompleteTableViewController;
    NSOperationQueue * _availabilityQueue;
    MFComposeRecipientTextView * _composeRecipientView;
    EKEvent * _event;
    CNAutocompleteFetchContext * _fetchContext;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialFrame;
    UIKeyboard * _keyboard;
    NSNumber * _lastSearchId;
    NSDate * _overriddenEventEndDate;
    NSDate * _overriddenEventStartDate;
    NSMutableDictionary * _recipientAddressesToRecipients;
    UIScrollView * _recipientScrollView;
    NSArray * _recipients;
    NSString * _searchAccountID;
    MFContactsSearchManager * _searchManager;
    NSMutableArray * _searchResults;
    UITableView * _searchResultsView;
    MFSearchShadowView * _shadowView;
    bool  _shouldReenableAutomaticKeyboard;
    bool  _showingSearchField;
    bool  _suppressAvailabilityRequests;
}

@property (nonatomic) <EKEventAttendeePickerDelegate> *addressValidationDelegate;
@property (nonatomic, readonly) NSArray *addresses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, readonly) NSString *remainingText;
@property (nonatomic, copy) NSString *searchAccountID;
@property (nonatomic, readonly) bool showAvailability;
@property (readonly) Class superclass;

+ (id)_addressForRecipient:(id)arg1;
+ (bool)_participantHasResponded:(id)arg1;

- (void).cxx_destruct;
- (Class)_CNContactPickerViewController;
- (Class)_CNContactViewController;
- (void)_adjustLayoutOfSubviews;
- (void)_copyRecipientsFromComposeView;
- (void)_hideSearchResultsViewAndCancelOutstandingSearches:(bool)arg1;
- (id)_lookUpRecipientForAddress:(id)arg1;
- (double)_maxScrollerHeight;
- (void)_refreshSearchResults;
- (void)_requestAvailabilityForRecipients:(id)arg1;
- (id)_searchManager;
- (id)_searchResultsView;
- (void)_setAtomPresentationOption:(unsigned long long)arg1 forRecipient:(id)arg2;
- (void)_setRecipientsOnComposeView;
- (id)_shadowView;
- (void)_showSearchResultsView;
- (void)_updateFetchContextChosenAddresses;
- (bool)_zeroKeyworkSearchEnabled;
- (id)addressValidationDelegate;
- (id)addresses;
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)beganNetworkActivity;
- (void)commitRemainingText;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize { double x1; double x2; })arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;
- (void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)dealloc;
- (void)endedNetworkActivity;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedSearchingForCorecipients;
- (void)finishedTaskWithID:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4;
- (void)loadView;
- (id)peoplePickerPrompt;
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;
- (bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (id)recipients;
- (id)remainingText;
- (id)searchAccountID;
- (void)searchForCorecipients;
- (void)searchWithText:(id)arg1;
- (void)setAddressValidationDelegate:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSearchAccountID:(id)arg1;
- (bool)showAvailability;
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
