<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MFLibraryMessage.h</title>
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

/PrivateFrameworks/Message.framework/MFLibraryMessage.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Message.framework/Message (3445.120.0.1.2)
 */

@interface MFLibraryMessage : MFMailMessage {
    unsigned long long  _conversationFlags;
    unsigned int  _libraryID;
    unsigned int  _mailboxID;
    NSString * _messageID;
    NSMutableDictionary * _metadata;
    NSMutableSet * _metadataChangedKeys;
    MFLock * _metadataLock;
    unsigned int  _originalMailboxID;
    NSString * _remoteID;
    unsigned long long  _size;
    unsigned int  _uid;
    unsigned long long  _uniqueRemoteId;
}

+ (id)messageWithLibraryID:(unsigned int)arg1;

- (id)_attachmentStorageLocation;
- (void)_forceLoadOfMessageSummaryFromProtectedStore;
- (void)_initializeMetadata;
- (id)_privacySafeDescription;
- (void)_updateUID;
- (id)account;
- (id)attachmentStorageLocation;
- (void)commit;
- (long long)compareByUidWithMessage:(id)arg1;
- (unsigned long long)conversationFlags;
- (id)copyMessageInfo;
- (id)dataConsumerForMimePart:(id)arg1;
- (id)dataPathForMimePart:(id)arg1;
- (void)dealloc;
- (unsigned long long)fileSize;
- (bool)hasTemporaryUid;
- (unsigned long long)hash;
- (id)initWithLibraryID:(unsigned int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLibraryMessage;
- (bool)isMessageContentsLocallyAvailable;
- (bool)isPartial;
- (id)library;
- (unsigned int)libraryID;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)mailbox;
- (unsigned int)mailboxID;
- (id)mailboxName;
- (void)markAsFlagged;
- (void)markAsForwarded;
- (void)markAsNotFlagged;
- (void)markAsNotViewed;
- (void)markAsReplied;
- (void)markAsViewed;
- (id)messageID;
- (unsigned long long)messageSize;
- (id)messageStore;
- (id)metadataValueOfClass:(Class)arg1 forKey:(id)arg2;
- (unsigned int)originalMailboxID;
- (id)originalMailboxURL;
- (id)path;
- (id)persistentID;
- (id)preferredEmailAddressToReplyWith;
- (id)remoteID;
- (void)setConversationFlags:(unsigned long long)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setHasTemporaryUid:(bool)arg1;
- (void)setIsPartial:(bool)arg1;
- (void)setMailboxID:(unsigned int)arg1;
- (void)setMessageData:(id)arg1 isPartial:(bool)arg2;
- (void)setMessageFlags:(unsigned long long)arg1;
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;
- (void)setMessageSize:(unsigned long long)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setMutableInfoFromMessage:(id)arg1;
- (void)setOriginalMailboxID:(unsigned int)arg1;
- (void)setPreferredEncoding:(unsigned int)arg1;
- (void)setRemoteID:(id)arg1;
- (void)setRemoteID:(const char *)arg1 flags:(unsigned long long)arg2 size:(unsigned int)arg3 mailboxID:(unsigned int)arg4 originalMailboxID:(unsigned int)arg5;
- (void)setSummary:(id)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setUniqueRemoteId:(unsigned long long)arg1;
- (unsigned int)uid;
- (unsigned long long)uniqueRemoteId;

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