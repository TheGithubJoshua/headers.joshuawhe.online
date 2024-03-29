<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EKUIEventInviteesViewController.h</title>
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

/Frameworks/EventKitUI.framework/EKUIEventInviteesViewController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI (1.0)
 */

@interface EKUIEventInviteesViewController : UITableViewController <EKEditItemViewControllerDelegate, EKEditItemViewControllerProtocol, UITableViewDataSource, UITableViewDelegate> {
    EKUIInviteesViewAddInviteesSection * _addInviteesSection;
    EKUIInviteesViewAllInviteesCanAttendSection * _allInviteesCanAttendSection;
    EKInviteeAlternativeTimeSearcher * _availabilitySearcher;
    bool  _deletedParticipants;
    EKEvent * _event;
    bool  _fromDetail;
    EKUIInviteesViewInvisibleInviteeStatusSection * _invisibleInviteeStatusSection;
    EKUIEventInviteesView * _inviteesView;
    EKUIInviteesViewNotRespondedInviteesSection * _notRespondedSection;
    EKUIInviteesViewOriginalConflictSection * _originalConflictSection;
    EKUIEventInviteesEditViewController * _parentController;
    bool  _prohibitCallingSearcherStateChanged;
    EKUIInviteesViewProposedTimeSection * _proposedTimeSection;
    bool  _resetAttendeesSections;
    bool  _resetConflictResolutionSections;
    NSMutableArray * _respondedSection;
    NSArray * _sections;
    NSDate * _selectedEndDate;
    NSDate * _selectedStartDate;
    EKUIInviteesViewSomeInviteesCanAttendSection * _someInviteesCanAttendSection;
    bool  _viewIsVisible;
}

@property (nonatomic, retain) EKUIInviteesViewAddInviteesSection *addInviteesSection;
@property (nonatomic, retain) EKUIInviteesViewAllInviteesCanAttendSection *allInviteesCanAttendSection;
@property (nonatomic, retain) EKInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deletedParticipants;
@property (readonly, copy) NSString *description;
@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic) bool fromDetail;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EKUIInviteesViewInvisibleInviteeStatusSection *invisibleInviteeStatusSection;
@property (nonatomic, retain) EKUIEventInviteesView *inviteesView;
@property (nonatomic, retain) EKUIInviteesViewNotRespondedInviteesSection *notRespondedSection;
@property (nonatomic, retain) EKUIInviteesViewOriginalConflictSection *originalConflictSection;
@property (nonatomic) EKUIEventInviteesEditViewController *parentController;
@property (nonatomic) bool presentModally;
@property (nonatomic) bool prohibitCallingSearcherStateChanged;
@property (nonatomic, retain) EKUIInviteesViewProposedTimeSection *proposedTimeSection;
@property (nonatomic) bool resetAttendeesSections;
@property (nonatomic) bool resetConflictResolutionSections;
@property (nonatomic, retain) NSMutableArray *respondedSection;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, retain) NSDate *selectedEndDate;
@property (nonatomic, retain) NSDate *selectedStartDate;
@property (nonatomic, retain) EKUIInviteesViewSomeInviteesCanAttendSection *someInviteesCanAttendSection;
@property (readonly) Class superclass;
@property (nonatomic) bool useCustomBackButton;
@property (nonatomic) bool viewIsVisible;

+ (id)_participantsInArray:(id)arg1 thatAreNotInArray:(id)arg2;

- (void).cxx_destruct;
- (void)_dismiss:(id)arg1;
- (void)_dismissPresentedViewControllerAnimated:(bool)arg1;
- (void)_eventModified:(id)arg1;
- (void)_fontSizeDefinitionsChanged:(id)arg1;
- (long long)_indexForSection:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_refreshIfNeeded;
- (void)_requestDismissal;
- (void)_searcherStateChanged:(long long)arg1;
- (id)_sectionForIndex:(unsigned long long)arg1;
- (void)_sendMessageToParticipants:(id)arg1;
- (id)_viewControllerForPresentingViewControllers;
- (id)addInviteesSection;
- (id)allInviteesCanAttendSection;
- (id)availabilitySearcher;
- (void)dealloc;
- (bool)deletedParticipants;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (bool)editItemViewControllerShouldShowDetachAlert;
- (id)event;
- (bool)fromDetail;
- (id)initWithEvent:(id)arg1 fromDetail:(bool)arg2;
- (id)invisibleInviteeStatusSection;
- (id)inviteesView;
- (void)loadView;
- (id)notRespondedSection;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)originalConflictSection;
- (id)parentController;
- (bool)prohibitCallingSearcherStateChanged;
- (id)proposedTimeSection;
- (bool)resetAttendeesSections;
- (bool)resetConflictResolutionSections;
- (id)respondedSection;
- (id)sections;
- (id)selectedEndDate;
- (id)selectedStartDate;
- (void)setAddInviteesSection:(id)arg1;
- (void)setAllInviteesCanAttendSection:(id)arg1;
- (void)setAvailabilitySearcher:(id)arg1;
- (void)setDeletedParticipants:(bool)arg1;
- (void)setEvent:(id)arg1;
- (void)setFromDetail:(bool)arg1;
- (void)setInvisibleInviteeStatusSection:(id)arg1;
- (void)setInviteesView:(id)arg1;
- (void)setNotRespondedSection:(id)arg1;
- (void)setOriginalConflictSection:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)setProhibitCallingSearcherStateChanged:(bool)arg1;
- (void)setProposedTimeSection:(id)arg1;
- (void)setResetAttendeesSections:(bool)arg1;
- (void)setResetConflictResolutionSections:(bool)arg1;
- (void)setRespondedSection:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSelectedEndDate:(id)arg1;
- (void)setSelectedStartDate:(id)arg1;
- (void)setSomeInviteesCanAttendSection:(id)arg1;
- (void)setViewIsVisible:(bool)arg1;
- (id)someInviteesCanAttendSection;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateCustomBackButton;
- (bool)useCustomBackButton;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (bool)viewIsVisible;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

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
