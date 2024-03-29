<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NCNotificationListSection.h</title>
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

/PrivateFrameworks/UserNotificationsUIKit.framework/NCNotificationListSection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit (1)
 */

@interface NCNotificationListSection : NSObject <BSDescriptionProviding> {
    <NCNotificationListSectionDelegate> * _delegate;
    NSString * _identifier;
    NSMutableOrderedSet * _notificationListItems;
    NSHashTable * _notificationListItemsHashTable;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *allNotificationRequests;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListSectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSMutableOrderedSet *notificationListItems;
@property (nonatomic, retain) NSHashTable *notificationListItemsHashTable;
@property (nonatomic, retain) NSDate *sectionDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)_coalescingIdentifierForNotificationRequest:(id)arg1;
- (bool)_containsNotificationListItem:(id)arg1;
- (unsigned long long)_indexOfListItemMatchingListItem:(id)arg1;
- (unsigned long long)_indexOfListItemWithCoalescingIdentifier:(id)arg1;
- (long long)_insertionIndexComparisonForNotificationRequest:(id)arg1 withRequest:(id)arg2;
- (unsigned long long)_insertionIndexForNotificationRequestItem:(id)arg1;
- (unsigned long long)_insertionIndexIfExistingCoalescedNotificationForNotificationRequest:(id)arg1;
- (unsigned long long)_insertionIndexIfNonExpandedNotificationRequest:(id)arg1;
- (unsigned long long)_nextIndexOfExpandedNotificationStackStartingAtIndex:(unsigned long long)arg1 coalescingIdentifier:(id)arg2;
- (id)_notificationRequestForListItem:(id)arg1;
- (id)_notificationRequestItemForListItem:(id)arg1;
- (id)_notificationRequestItemForNotificationRequest:(id)arg1;
- (bool)_shouldInsertForExpandedStackNotificationRequest:(id)arg1;
- (id)allNotificationRequests;
- (bool)containsNotificationRequestMatchingRequest:(id)arg1;
- (bool)containsNotificationRequestWithSameThreadAsNotificationRequest:(id)arg1;
- (unsigned long long)count;
- (id)debugDescription;
- (id)delegate;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (unsigned long long)indexForNotificationListItem:(id)arg1;
- (long long)indexForNotificationRequest:(id)arg1;
- (unsigned long long)indexOfNotificationRequestMatchingRequest:(id)arg1;
- (id)init;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (unsigned long long)insertNotificationListItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)insertNotificationRequest:(id)arg1;
- (unsigned long long)insertionIndexForNotificationRequest:(id)arg1;
- (unsigned long long)modifyNotificationRequest:(id)arg1;
- (id)notificationListItemAtIndex:(unsigned long long)arg1;
- (id)notificationListItems;
- (id)notificationListItemsHashTable;
- (id)notificationRequestAtIndex:(unsigned long long)arg1;
- (unsigned long long)removeNotificationListItem:(id)arg1;
- (unsigned long long)removeNotificationRequest:(id)arg1;
- (id)sectionDate;
- (void)setDelegate:(id)arg1;
- (void)setNotificationListItems:(id)arg1;
- (void)setNotificationListItemsHashTable:(id)arg1;
- (void)setSectionDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)title;

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
