<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ABPersonViewController.h</title>
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

/Frameworks/AddressBookUI.framework/ABPersonViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI (1860)
 */

@interface ABPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate, UIViewControllerRestoration> {
    const void * _addressBook;
    bool  _allowsActions;
    bool  _allowsEditing;
    CNContactViewController * _cnContactViewController;
    const void * _displayedPerson;
    NSArray * _displayedProperties;
    bool  _highlightedImportant;
    int  _highlightedMultiValueIdentifier;
    int  _highlightedProperty;
    <ABPersonViewControllerDelegate> * _personViewDelegate;
    bool  _shouldShowLinkedPeople;
    int  _style;
}

@property (nonatomic) const void*addressBook;
@property (nonatomic) bool allowsActions;
@property (nonatomic) bool allowsEditing;
@property (nonatomic, retain) CNContactViewController *cnContactViewController;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) const void*displayedPerson;
@property (nonatomic, copy) NSArray *displayedProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightedImportant;
@property (nonatomic) int highlightedMultiValueIdentifier;
@property (nonatomic) int highlightedProperty;
@property (nonatomic) <ABPersonViewControllerDelegate> *personViewDelegate;
@property (nonatomic) bool shouldShowLinkedPeople;
@property (nonatomic) int style;
@property (readonly) Class superclass;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (const void*)addressBook;
- (bool)allowsActions;
- (bool)allowsEditing;
- (id)cnContactViewController;
- (id)contactStore;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)dealloc;
- (const void*)displayedPerson;
- (id)displayedProperties;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (bool)highlightedImportant;
- (int)highlightedMultiValueIdentifier;
- (int)highlightedProperty;
- (id)init;
- (id)initWithAddressBook:(void*)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 addressBook:(void*)arg3 style:(int)arg4;
- (id)initWithStyle:(int)arg1;
- (void)loadView;
- (id)personViewDelegate;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)reloadContactViewController;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(bool)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setCnContactViewController:(id)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setHighlightedImportant:(bool)arg1;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(bool)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(bool)arg4;
- (void)setHighlightedMultiValueIdentifier:(int)arg1;
- (void)setHighlightedProperty:(int)arg1;
- (void)setPersonViewDelegate:(id)arg1;
- (void)setShouldShowLinkedPeople:(bool)arg1;
- (void)setStyle:(int)arg1;
- (bool)shouldShowLinkedPeople;
- (int)style;
- (void)viewDidAppear:(bool)arg1;

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