<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IMDMessageStore.h</title>
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

/PrivateFrameworks/IMDaemonCore.framework/IMDMessageStore.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore (1000)
 */

@interface IMDMessageStore : NSObject {
    NSNumber * _cachedLastFailedMessageDate;
    NSNumber * _cachedUnreadMessageCount;
    NSString * _modificationStamp;
    bool  _pendingDBUpdatePost;
    bool  _suppressedUpdates;
    NSTimer * _suppressedUpdatesTimer;
}

@property (retain) NSString *modificationStamp;

+ (void)_updateCacheForMessageGUID:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 updateLastMessage:(bool)arg4;
+ (id)sharedInstance;

- (void)__postDBUpdate;
- (id)_chatsForMessageGUID:(id)arg1 enableVerboseLogging:(bool)arg2;
- (id)_cleanUnformattedPhoneNumber:(id)arg1 countryCode:(id)arg2;
- (struct _IMDHandleRecordStruct { }*)_copyHandle:(id)arg1 onService:(id)arg2;
- (void)_deleteMessagesWithGUIDs:(id)arg1 chatIdentifiers:(id)arg2 style:(unsigned char)arg3 onServices:(id)arg4 batchNumber:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (bool)_hasMessagesWithGUIDs:(id)arg1;
- (bool)_isUsingStingRay;
- (bool)_itemClassShouldUpdateTransferForItem:(id)arg1;
- (id)_itemsWithAssociatedGUID:(id)arg1 shouldLoadAttachments:(bool)arg2;
- (id)_itemsWithGUIDs:(id)arg1;
- (id)_messagesThatNeedSyncWithCloudKitWithLimit:(long long)arg1 attemptCount:(unsigned long long)arg2;
- (id)_messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4 onlyMessages:(bool)arg5;
- (id)_messagesWithHandlesBeforeAndAfterGUID:(id)arg1 handles:(id)arg2 onServices:(id)arg3 numberOfMessagesBefore:(unsigned long long)arg4 numberOfMessagesAfter:(unsigned long long)arg5;
- (id)_messagesWithRoomNames:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4 onlyMessages:(bool)arg5;
- (void)_performBlock:(id /* block */)arg1 afterDelay:(double)arg2;
- (void)_postDBUpdate;
- (void)_storeAttachmentsForMessage:(id)arg1;
- (void)_suppressDBUpdateTimerFired;
- (id)_unreadMessagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4;
- (id)_unreadMessagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4;
- (void)_updateModificationDate;
- (id)attachmentsWithHandles:(id)arg1 onServices:(id)arg2;
- (id)attachmentsWithRoomNames:(id)arg1 onServices:(id)arg2;
- (bool)canStoreItem:(id)arg1 onService:(id)arg2;
- (bool)canStoreMessage:(id)arg1 onService:(id)arg2;
- (id)chatForMessage:(id)arg1;
- (id)chatForMessageGUID:(id)arg1;
- (id)chatForMessageGUID:(id)arg1 enableVerboseLogging:(bool)arg2;
- (id)chatsForMessage:(id)arg1;
- (id)chatsForMessageGUID:(id)arg1;
- (void)cleanseAttachments;
- (void)clearMessagesTombStoneTable;
- (id)copyMessagesThatNeedToBeDeletedInCloudKitWithLimit:(unsigned long long)arg1;
- (void)databaseChatSpamUpdated:(id)arg1;
- (void)dealloc;
- (id)deleteMessageGUIDs:(id)arg1;
- (id)deleteMessageGUIDs:(id)arg1 inChat:(id)arg2;
- (void)deleteMessagesFromTombStoneTableWithRecordIDs:(id)arg1;
- (id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3;
- (id)deleteMessagesWithChatIdentifiers:(id)arg1 style:(unsigned char)arg2 onServices:(id)arg3 completion:(id /* block */)arg4;
- (id)deleteMessagesWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3;
- (id)existingMessageSimilarToMessage:(id)arg1 skipServices:(id)arg2 skipGUIDs:(id)arg3 withinTimeInterval:(double)arg4 participants:(id)arg5;
- (id)frequentRepliesForForChatIdentifiers:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3;
- (bool)hasStoredMessageWithGUID:(id)arg1;
- (id)init;
- (bool)isSuppressDatabaseUpdates;
- (id)itemWithGUID:(id)arg1;
- (long long)lastFailedMessageDate;
- (id)lastMessageWithHandles:(id)arg1 onServices:(id)arg2;
- (id)lastMessageWithRoomNames:(id)arg1 onServices:(id)arg2;
- (void)loadConsumedSessionPayloadsForItems:(id)arg1;
- (void)markAllMessagesAsNeedingCloudKitSync;
- (void)markMessageAsCleanWithROWID:(long long)arg1;
- (void)markMessageAsDeduplicated:(id)arg1;
- (void)markMessageAsIgnoreButNeedingSyncWithROWID:(long long)arg1;
- (id)markMessagesAsReadWithHandle:(id)arg1 onService:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(bool)arg5;
- (id)markMessagesAsReadWithHandles:(id)arg1 onServices:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(bool)arg5;
- (id)markMessagesAsReadWithRoomNames:(id)arg1 onServices:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(bool)arg5;
- (id)markMessagesAsReadWithRoomname:(id)arg1 onService:(id)arg2 upToGUID:(id)arg3 readDate:(id)arg4 fromMe:(bool)arg5;
- (id)messageActionItemsForOriginalMessageGUID:(id)arg1;
- (id)messageWithGUID:(id)arg1;
- (id)messageWithGUID:(id)arg1 registerAttachments:(bool)arg2;
- (id)messageWithReplaceMessageID:(int)arg1 fromHandle:(id)arg2 onService:(id)arg3;
- (id)messagesThatNeedSyncWithCloudKitWithLimit:(long long)arg1;
- (id)messagesWithAssociatedGUID:(id)arg1;
- (id)messagesWithAssociatedGUID:(id)arg1 shouldLoadAttachments:(bool)arg2;
- (id)messagesWithGUIDs:(id)arg1;
- (id)messagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3;
- (id)messagesWithHandles:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4;
- (id)messagesWithHandlesBeforeAndAfterGUID:(id)arg1 handles:(id)arg2 onServices:(id)arg3 numberOfMessagesBefore:(unsigned long long)arg4 numberOfMessagesAfter:(unsigned long long)arg5;
- (id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3;
- (id)messagesWithRoomNames:(id)arg1 onServices:(id)arg2 messageGUID:(id)arg3 limit:(unsigned long long)arg4;
- (id)modificationStamp;
- (void)performInitialHousekeeping;
- (void)postCountChanges;
- (void)rebuildLastFailedMessageDate;
- (void)rebuildUnreadMessageCount;
- (void)registerTransfersWithGUIDs:(id)arg1 forMessageGUID:(id)arg2;
- (id)replaceMessageAcknowledgmentsWithNewMessageAcknowledgment:(id)arg1 associatedMessageGUID:(id)arg2 sender:(id)arg3;
- (void)resolveUnformattedRepresentationsForHandles:(id)arg1 onService:(id)arg2 message:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)setModificationStamp:(id)arg1;
- (void)setSuppressDatabaseUpdates:(bool)arg1;
- (id)storeItem:(id)arg1 forceReplace:(bool)arg2;
- (id)storeMessage:(id)arg1 forceReplace:(bool)arg2 modifyError:(bool)arg3 modifyFlags:(bool)arg4 flagMask:(unsigned long long)arg5;
- (id)storeMessage:(id)arg1 forceReplace:(bool)arg2 modifyError:(bool)arg3 modifyFlags:(bool)arg4 flagMask:(unsigned long long)arg5 updateMessageCache:(bool)arg6;
- (long long)unreadMessagesCount;
- (id)unreadMessagesWithHandles:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4;
- (id)unreadMessagesWithRoomNames:(id)arg1 onServices:(id)arg2 limit:(unsigned long long)arg3 fallbackGUID:(id)arg4;
- (void)updateFileTransfer:(id)arg1;
- (void)updateStamp;
- (void)updateUnformattedID:(id)arg1 forBuddyID:(id)arg2 onService:(id)arg3;

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