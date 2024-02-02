<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ASAccountActorMessages.h</title>
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

/protocols/ASAccountActorMessages.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol ASAccountActorMessages

@required

- (oneway void)_accountPasswordChanged;
- (oneway void)_daemonDiedNotification:(NSNotification *)arg1;
- (oneway void)_folderHierarchyChanged;
- (oneway void)_folderUpdatedNotification:(NSNotification *)arg1;
- (oneway void)_foldersThatExternalClientsCareAboutChanged;
- (oneway void)_newASPolicyKeyNotification:(NSNotification *)arg1;
- (oneway void)cancelAllSearchQueries;
- (oneway void)cancelSearchQuery:(DASearchQuery *)arg1;
- (oneway void)cancelTaskWithID:(int)arg1;
- (NSString *)customSignature;
- (DAFolder *)deletedItemsFolder;
- (DAFolder *)draftsFolder;
- (NSData *)encryptionIdentityPersistentReference;
- (NSSet *)folderIDsThatExternalClientsCareAboutForDataclasses:(long long)arg1 withTag:(id*)arg2;
- (NSSet *)folderIDsThatExternalClientsCareAboutWithTag:(id*)arg1;
- (bool)generatesBulletins;
- (DAFolder *)inboxFolder;
- (int)mailNumberOfPastDaysToSync;
- (NSArray *)mailboxes;
- (oneway void)monitorFoldersForUpdates:(NSArray *)arg1;
- (oneway void)monitorFoldersForUpdates:(NSArray *)arg1 persistent:(bool)arg2;
- (int)performFetchAttachmentRequest:(DAMessageFetchAttachmentRequest *)arg1 consumer:(id <DAMessageFetchAttachmentConsumer>)arg2;
- (int)performFetchMessageSearchResultRequests:(NSArray *)arg1 consumer:(id <DAMailboxFetchSearchResultConsumer>)arg2;
- (void)performFolderChange:(DAFolderChange *)arg1 isUserRequested:(bool)arg2;
- (int)performMailboxRequest:(DAMailboxRequest *)arg1 mailbox:(NSString *)arg2 previousTag:(NSString *)arg3 clientWinsOnSyncConflict:(bool)arg4 isUserRequested:(bool)arg5 consumer:(id <DAMailboxRequestConsumer>)arg6;
- (int)performMailboxRequest:(DAMailboxRequest *)arg1 mailbox:(NSString *)arg2 previousTag:(NSString *)arg3 isUserRequested:(bool)arg4 consumer:(id <DAMailboxRequestConsumer>)arg5;
- (int)performMailboxRequests:(NSArray *)arg1 mailbox:(NSString *)arg2 previousTag:(NSString *)arg3 clientWinsOnSyncConflict:(bool)arg4 isUserRequested:(bool)arg5 consumer:(id <DAMailboxRequestConsumer>)arg6;
- (int)performMailboxRequests:(NSArray *)arg1 mailbox:(NSString *)arg2 previousTag:(NSString *)arg3 isUserRequested:(bool)arg4 consumer:(id <DAMailboxRequestConsumer>)arg5;
- (int)performMoveRequests:(NSArray *)arg1 consumer:(id <DAMessageMoveRequestConsumer>)arg2;
- (int)performResolveRecipientsRequest:(DAResolveRecipientsRequest *)arg1 consumer:(id <DAResolveRecipientsConsumer>)arg2;
- (oneway void)performSearchQuery:(DASearchQuery *)arg1;
- (bool)reattemptInvitationLinkageForMetaData:(NSData *)arg1 inFolderWithId:(NSString *)arg2;
- (bool)searchQueriesRunning;
- (int)sendMessageWithRFC822Data:(NSData *)arg1 messageID:(NSString *)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(NSString *)arg4 originalMessageItemID:(NSString *)arg5 originalMessageLongID:(NSString *)arg6 originalAccountID:(NSString *)arg7 useSmartTasksIfPossible:(bool)arg8 isUserRequested:(bool)arg9 consumer:(id <DAMessageSendConsumer>)arg10 context:(id)arg11;
- (int)sendSmartMessageWithRFC822Data:(NSData *)arg1 messageID:(NSString *)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(NSString *)arg4 originalMessageItemID:(NSString *)arg5 originalMessageLongID:(NSString *)arg6 originalAccountID:(NSString *)arg7 replaceOriginalMime:(bool)arg8 isUserRequested:(bool)arg9 consumer:(id <DAMessageSendConsumer>)arg10 context:(id)arg11;
- (DAFolder *)sentItemsFolder;
- (oneway void)setAccount:(id)arg1;
- (oneway void)setCustomSignature:(NSString *)arg1;
- (oneway void)setEncryptionIdentityPersistentReference:(NSData *)arg1;
- (bool)setFolderIdsThatExternalClientsCareAboutAdded:(NSSet *)arg1 deleted:(NSSet *)arg2 foldersTag:(NSString *)arg3;
- (oneway void)setGeneratesBulletins:(bool)arg1;
- (oneway void)setMailNumberOfPastDaysToSync:(int)arg1;
- (oneway void)setSigningIdentityPersistentReference:(NSData *)arg1;
- (oneway void)shutdown;
- (NSData *)signingIdentityPersistentReference;
- (oneway void)startup;
- (oneway void)stopMonitoringAllFolders;
- (oneway void)stopMonitoringFoldersForUpdates:(NSArray *)arg1;
- (int)supportsConversations;
- (int)supportsDraftFolderSync;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (int)supportsSmartForwardReply;
- (int)supportsUniqueServerId;
- (NSString *)unactionableICSRepresentationForMetaData:(NSData *)arg1 inFolderWithId:(NSString *)arg2 outSummary:(id*)arg3;

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