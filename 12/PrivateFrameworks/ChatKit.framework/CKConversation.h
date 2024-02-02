<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKConversation.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKConversation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKConversation : NSObject {
    NSNumber * _businessConversation;
    IMChat * _chat;
    struct { 
        unsigned int ignoringTypingUpdates : 1; 
    }  _conversationFlags;
    NSAttributedString * _groupName;
    bool  _hasLoadedAllMessages;
    bool  _isReportedAsSpam;
    unsigned int  _limitToLoad;
    NSString * _name;
    bool  _needsReload;
    NSArray * _pendingHandles;
    NSSet * _pendingRecipients;
    NSString * _previewText;
    NSArray * _recipients;
    NSString * _selectedLastAddressedHandle;
    NSString * _selectedLastAddressedSIMID;
    int  _wasDetectedAsSMSSpam;
}

@property (nonatomic, retain) NSNumber *businessConversation;
@property (nonatomic, readonly) BOOL buttonColor;
@property (nonatomic, readonly) bool canLeave;
@property (nonatomic, retain) IMChat *chat;
@property (nonatomic, readonly) NSString *deviceIndependentID;
@property (nonatomic, readonly) unsigned long long disclosureAtomStyle;
@property (nonatomic) NSString *displayName;
@property (nonatomic) bool forceMMS;
@property (nonatomic, readonly) NSArray *frequentReplies;
@property (getter=isGroupConversation, nonatomic, readonly) bool groupConversation;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSAttributedString *groupName;
@property (nonatomic, readonly) NSArray *handles;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic) bool hasLoadedAllMessages;
@property (nonatomic, readonly) bool hasUnreadMessages;
@property (getter=isIgnoringTypingUpdates, nonatomic) bool ignoringTypingUpdates;
@property (nonatomic, readonly) bool isPreviewTextForAttachment;
@property (nonatomic) bool isReportedAsSpam;
@property (nonatomic, readonly) bool isToEmailAddress;
@property (nonatomic, readonly) NSString *lastAddressedHandle;
@property (nonatomic, readonly) NSString *lastAddressedSIMID;
@property (getter=hasLeft, nonatomic, readonly) bool left;
@property (getter=hasLeftGroupChat, nonatomic, readonly) bool leftGroupChat;
@property (nonatomic) unsigned int limitToLoad;
@property (nonatomic, copy) NSString *localUserIsComposing;
@property (nonatomic) bool localUserIsRecording;
@property (nonatomic) bool localUserIsTyping;
@property (getter=isMuted, nonatomic, readonly) bool muted;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool needsReload;
@property (getter=isPending, nonatomic, readonly) bool pending;
@property (nonatomic, readonly, copy) NSArray *pendingEntities;
@property (nonatomic, copy) NSArray *pendingHandles;
@property (nonatomic, retain) NSSet *pendingRecipients;
@property (getter=isPinned, nonatomic) bool pinned;
@property (nonatomic, copy) NSString *previewText;
@property (nonatomic, readonly) CKEntity *recipient;
@property (nonatomic, readonly) unsigned long long recipientCount;
@property (nonatomic, readonly, copy) NSArray *recipientStrings;
@property (nonatomic, retain) NSArray *recipients;
@property (nonatomic, retain) NSString *selectedLastAddressedHandle;
@property (nonatomic, retain) NSString *selectedLastAddressedSIMID;
@property (getter=shouldSendReadReceipts, nonatomic, readonly) bool sendReadReceipts;
@property (nonatomic, readonly, copy) NSString *senderIdentifier;
@property (nonatomic, readonly) IMService *sendingService;
@property (nonatomic, readonly) NSString *serviceDisplayName;
@property (nonatomic, readonly) bool shouldShowCharacterCount;
@property (nonatomic, readonly) bool supportsMutatingGroupMembers;
@property (nonatomic, readonly) unsigned long long unreadCount;
@property (nonatomic, retain) CKComposition *unsentComposition;
@property (nonatomic, readonly) int wasDetectedAsSMSSpam;

+ (bool)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
+ (bool)_iMessage_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 currentService:(id)arg4 forceSMS:(bool)arg5 error:(id*)arg6;
+ (bool)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1;
+ (bool)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1 errorCode:(long long*)arg2;
+ (id)_iMessage_localizedErrorForReason:(long long)arg1;
+ (long long)_iMessage_maxAttachmentCount;
+ (unsigned long long)_iMessage_maxTransferFileSizeForWiFi:(bool)arg1;
+ (double)_iMessage_maxTrimDurationForMediaType:(int)arg1;
+ (bool)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 phoneNumber:(id)arg3 simID:(id)arg4;
+ (bool)_sms_canSendComposition:(id)arg1 lastAddressedHandle:(id)arg2 lastAddressedSIMID:(id)arg3 error:(id*)arg4;
+ (bool)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 phoneNumber:(id)arg2 simID:(id)arg3;
+ (bool)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 phoneNumber:(id)arg2 simID:(id)arg3 errorCode:(long long*)arg4;
+ (id)_sms_localizedErrorForReason:(long long)arg1;
+ (long long)_sms_maxAttachmentCountForPhoneNumber:(id)arg1 simID:(id)arg2;
+ (double)_sms_maxTrimDurationForMediaType:(int)arg1;
+ (bool)_sms_mediaObjectPassesDurationCheck:(id)arg1;
+ (bool)_sms_mediaObjectPassesRestriction:(id)arg1;
+ (id)conversationForAddresses:(id)arg1 allowRetargeting:(bool)arg2 candidateConversation:(id)arg3;
+ (bool)isSMSSpamFilteringEnabled;
+ (id)newPendingConversation;
+ (bool)pinnedConversationsEnabled;

- (void).cxx_destruct;
- (void)_chatItemsDidChange:(id)arg1;
- (void)_chatPropertiesChanged:(id)arg1;
- (bool)_chatSupportsTypingIndicators;
- (void)_clearTypingIndicatorsIfNecessary;
- (void)_deleteAllMessagesAndRemoveGroup:(bool)arg1;
- (bool)_earlyReturnHistoryLoad;
- (void)_handleChatJoinStateDidChange:(id)arg1;
- (void)_handleChatParticipantsDidChange:(id)arg1;
- (void)_handleEngroupFinishedUpdating:(id)arg1;
- (bool)_handleIsForThisConversation:(id)arg1;
- (void)_handlePreferredServiceChangedNotification:(id)arg1;
- (id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3;
- (id)_headerTitleForService:(id)arg1;
- (bool)_iMessage_canSendToRecipients:(id)arg1 alertIfUnable:(bool)arg2;
- (bool)_iMessage_supportsCharacterCountForAddresses:(id)arg1;
- (id)_nameForHandle:(id)arg1;
- (bool)_sms_canSendToRecipients:(id)arg1 alertIfUnable:(bool)arg2;
- (bool)_sms_supportsCharacterCountForAddresses:(id)arg1;
- (bool)_sms_willSendMMSByDefaultForAddresses:(id)arg1;
- (void)acceptTransfer:(id)arg1;
- (void)addRecipientHandles:(id)arg1;
- (id)businessConversation;
- (BOOL)buttonColor;
- (bool)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2;
- (bool)canInsertMoreRecipients;
- (bool)canLeave;
- (bool)canSendComposition:(id)arg1 error:(id*)arg2;
- (bool)canSendToRecipients:(id)arg1 alertIfUnable:(bool)arg2;
- (id)chat;
- (void)clearConversationLoadFromSpotlight;
- (long long)compareBySequenceNumberAndDateDescending:(id)arg1;
- (bool)containsHandleWithUID:(id)arg1;
- (id)copyForPendingConversation;
- (id)date;
- (void)dealloc;
- (void)deleteAllMessages;
- (void)deleteAllMessagesAndRemoveGroup;
- (id)description;
- (id)deviceIndependentID;
- (void)didBecomeActive;
- (unsigned long long)disclosureAtomStyle;
- (id)displayName;
- (id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2;
- (id)ensureMessageWithGUIDIsLoaded:(id)arg1;
- (void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)fastPreviewTextIgnoringPluginContent;
- (void)fetchSuggestedNameIfNecessary;
- (bool)forceMMS;
- (id)frequentReplies;
- (id)groupID;
- (id)groupName;
- (id)handles;
- (bool)hasDisplayName;
- (bool)hasLeft;
- (bool)hasLeftGroupChat;
- (bool)hasLoadedAllMessages;
- (bool)hasLoadedFromSpotlight;
- (bool)hasReplyEnabled;
- (bool)hasUnreadMessages;
- (bool)hasVerifiedBusiness;
- (id)init;
- (id)initWithChat:(id)arg1;
- (bool)isAppleConversation;
- (bool)isBusinessConversation;
- (bool)isDowngraded;
- (bool)isGroupConversation;
- (bool)isIgnoringTypingUpdates;
- (bool)isMakoConversation;
- (bool)isMuted;
- (bool)isPending;
- (bool)isPinned;
- (bool)isPlaceholder;
- (bool)isPreviewTextForAttachment;
- (bool)isReportedAsSpam;
- (bool)isToEmailAddress;
- (id)lastAddressedHandle;
- (id)lastAddressedSIMID;
- (unsigned int)limitToLoad;
- (void)loadAllMessages;
- (void)loadAllUnreadMessagesUpToMessageGUID:(id)arg1;
- (void)loadFrequentReplies;
- (void)loadMoreMessages;
- (void)loadMoreMessagesAfterLastMessage;
- (void)loadMoreMessagesBeforeFirstMessage;
- (id)localUserIsComposing;
- (bool)localUserIsRecording;
- (bool)localUserIsTyping;
- (void)markAllMessagesAsRead;
- (double)maxTrimDurationForMediaType:(int)arg1;
- (long long)maximumRecipientsForSendingService;
- (id)messageWithComposition:(id)arg1;
- (id)messagesFromComposition:(id)arg1;
- (id)name;
- (bool)needsReload;
- (bool)noAvailableServices;
- (id)orderedContactsForAvatarView;
- (BOOL)outgoingBubbleColor;
- (id)pendingEntities;
- (id)pendingHandles;
- (id)pendingRecipients;
- (id)previewText;
- (id)recipient;
- (unsigned long long)recipientCount;
- (id)recipientStrings;
- (id)recipients;
- (void)refreshServiceForSending;
- (void)reloadIfNeeded;
- (void)removeRecipientHandles:(id)arg1;
- (void)resetCaches;
- (void)resetNameCaches;
- (id)selectedLastAddressedHandle;
- (id)selectedLastAddressedSIMID;
- (BOOL)sendButtonColor;
- (void)sendMessage:(id)arg1 newComposition:(bool)arg2;
- (void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(bool)arg3;
- (id)senderIdentifier;
- (id)sendingService;
- (id)serviceDisplayName;
- (void)setBusinessConversation:(id)arg1;
- (void)setChat:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setForceMMS:(bool)arg1;
- (void)setHasLoadedAllMessages:(bool)arg1;
- (void)setIgnoringTypingUpdates:(bool)arg1;
- (void)setIsReportedAsSpam:(bool)arg1;
- (void)setLimitToLoad:(unsigned int)arg1;
- (void)setLoadedMessageCount:(unsigned long long)arg1;
- (void)setLoadedMessageCount:(unsigned long long)arg1 loadImmediately:(bool)arg2;
- (void)setLocalUserIsComposing:(id)arg1;
- (void)setLocalUserIsComposing:(id)arg1 typingIndicatorIcon:(id)arg2;
- (void)setLocalUserIsRecording:(bool)arg1;
- (void)setLocalUserIsTyping:(bool)arg1;
- (void)setMutedUntilDate:(id)arg1;
- (void)setNeedsReload;
- (void)setPendingComposeRecipients:(id)arg1;
- (void)setPendingHandles:(id)arg1;
- (void)setPendingRecipients:(id)arg1;
- (void)setPinned:(bool)arg1;
- (void)setPreviewText:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSelectedLastAddressedHandle:(id)arg1;
- (void)setSelectedLastAddressedSIMID:(id)arg1;
- (void)setSendReadReceipts:(bool)arg1;
- (void)setUnsentComposition:(id)arg1;
- (id)shortDescription;
- (bool)shouldSendReadReceipts;
- (bool)shouldShowCharacterCount;
- (bool)supportsMutatingGroupMembers;
- (bool)supportsSurf;
- (id)uniqueIdentifier;
- (void)unmute;
- (unsigned long long)unreadCount;
- (id)unsentComposition;
- (void)updateDisplayNameIfSMSSpam;
- (void)updateUserActivity;
- (int)wasDetectedAsSMSSpam;
- (void)willBecomeInactive;

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