<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IMBalloonPluginDataSource.h</title>
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

/PrivateFrameworks/IMCore.framework/IMBalloonPluginDataSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore (1000)
 */

@interface IMBalloonPluginDataSource : NSObject {
    NSURL * _URLToOpenOnTapAction;
    NSString * __imMessageGUID;
    NSArray * _attachmentGUIDs;
    NSString * _bundleID;
    IMChat * _chat;
    NSArray * _consumedPayloads;
    DDScannerResult * _dataDetectedResult;
    NSString * _guidOfLastMessageInSession;
    bool  _hasInvalidatedSize;
    bool  _initialMessageIsFromMe;
    bool  _isLast;
    bool  _isShowingLatestMessageAsBreadcrumb;
    NSString * _messageGUID;
    long long  _messageIDOfLastMessageInSession;
    bool  _parentChatHasAllUnknownRecipients;
    bool  _payloadInShelf;
    NSArray * _pendingAttachmentData;
    IMPluginPayload * _pluginPayload;
    NSString * _sessionGUID;
    bool  _showingLatestMessageAsBreadcrumb;
    NSMutableSet * _temporaryAttachmentURLs;
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URLToOpenOnTapAction;
@property (nonatomic, retain) NSString *_imMessageGUID;
@property (nonatomic, readonly) NSArray *allPayloads;
@property (nonatomic, retain) NSArray *attachmentGUIDs;
@property (nonatomic, readonly, retain) NSString *bundleID;
@property (nonatomic, retain) IMChat *chat;
@property (nonatomic, retain) NSArray *consumedPayloads;
@property (nonatomic, retain) DDScannerResult *dataDetectedResult;
@property (nonatomic, readonly, retain) NSString *guidOfLastMessageInSession;
@property (nonatomic) bool hasInvalidatedSize;
@property (nonatomic, readonly) IMMessage *imMessage;
@property (nonatomic) bool initialMessageIsFromMe;
@property (nonatomic, readonly) bool isFromMe;
@property (setter=setLast:, nonatomic) bool isLast;
@property (nonatomic, readonly) bool isPlayed;
@property (setter=setShowingLatestMessageAsBreadcrumb:, nonatomic) bool isShowingLatestMessageAsBreadcrumb;
@property (nonatomic, retain) NSString *messageGUID;
@property (nonatomic, readonly) long long messageIDOfLastMessageInSession;
@property (nonatomic, readonly, retain) NSData *messagePayloadDataForSending;
@property (nonatomic) bool parentChatHasAllUnknownRecipients;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic) bool payloadInShelf;
@property (nonatomic, retain) NSArray *pendingAttachmentData;
@property (nonatomic, retain) IMPluginPayload *pluginPayload;
@property (nonatomic, readonly) LPLinkMetadata *richLinkMetadata;
@property (nonatomic, retain) NSString *sessionGUID;
@property (getter=isShowingLatestMessageAsBreadcrumb, nonatomic, readonly) bool showingLatestMessageAsBreadcrumb;
@property (nonatomic, readonly, retain) NSAttributedString *statusAttributedString;
@property (nonatomic, readonly, retain) NSString *statusString;
@property (nonatomic, readonly) bool supportsDynamicSize;
@property (nonatomic, retain) NSMutableSet *temporaryAttachmentURLs;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, readonly) bool wantsInteractiveContentView;
@property (nonatomic, readonly) bool wantsReplyFromContentView;
@property (nonatomic, readonly) bool wantsStatusItem;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (id)previewSummary;
+ (id)previewSummaryForPluginBundle:(id)arg1;
+ (id)previewSummaryForPluginPayload:(id)arg1 withBundleID:(id)arg2 previewAttachmentURL:(id*)arg3 previewAttachmentUTI:(id*)arg4;
+ (id)replaceHandleWithContactNameInString:(id)arg1 forAccount:(id)arg2 additionalHandles:(id)arg3;
+ (bool)supportsIndividualPreviewSummaries;
+ (bool)supportsURL:(id)arg1;
+ (id)unlocalizedPreviewSummaryForPluginBundle:(id)arg1 pluginDisplayName:(id)arg2;

- (void).cxx_destruct;
- (id)URLToOpenOnTapAction;
- (id)_imMessageGUID;
- (void)_reloadLatestUnconsumedBreadcrumb;
- (void)_removeTemporaryAttachmentURLs;
- (id)_replaceHandleWithContactNameInString:(id)arg1;
- (bool)_senderIsSameBetweenPayload:(id)arg1 andOtherPayload:(id)arg2;
- (id)_summaryText;
- (void)_updatePayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3;
- (void)_updateTemporaryAttachmentURLsForPluginPayload;
- (unsigned long long)_updateWithPluginPayload:(id)arg1 messageID:(long long)arg2 messageGUID:(id)arg3;
- (id)allPayloads;
- (id)attachmentGUIDs;
- (void)beginShowingLastConsumedBreadcrumbForOutgoingPayload:(id)arg1;
- (id)bundleID;
- (id)chat;
- (id)consumedPayloads;
- (id)dataDetectedResult;
- (void)datasourceWasMovedToNewGuid:(id)arg1;
- (id)description;
- (void)didTapStatusItem;
- (void)endShowingLastConsumedBreadcrumb;
- (id)guidOfLastMessageInSession;
- (bool)hasInvalidatedSize;
- (id)imMessage;
- (id)individualPreviewAttachmentFileAndUTI:(id*)arg1;
- (id)individualPreviewSummary;
- (id)initWithMessageGUID:(id)arg1 payload:(id)arg2 dataDetectedResult:(id)arg3 url:(id)arg4;
- (id)initWithPluginPayload:(id)arg1;
- (bool)initialMessageIsFromMe;
- (bool)isFromMe;
- (bool)isLast;
- (bool)isPlayed;
- (bool)isShowingLatestMessageAsBreadcrumb;
- (bool)isShowingLatestMessageAsBreadcrumb;
- (void)markAsPlayed;
- (id)messageGUID;
- (long long)messageIDOfLastMessageInSession;
- (id)messagePayloadDataForSending;
- (void)needsResize;
- (bool)parentChatHasAllUnknownRecipients;
- (id)payload;
- (void)payloadDidChange;
- (bool)payloadInShelf;
- (void)payloadWillEnterShelf;
- (void)payloadWillSendFromShelf;
- (id)pendingAttachmentData;
- (unsigned long long)playbackType;
- (void)playbackWithCompletionBlock:(id /* block */)arg1;
- (id)pluginPayload;
- (void)pluginPayloadDidChange:(unsigned long long)arg1;
- (id)richLinkMetadata;
- (void)sendPayload:(id)arg1;
- (void)sendPayload:(id)arg1 attachments:(id)arg2;
- (id)sessionGUID;
- (void)setAttachmentGUIDs:(id)arg1;
- (void)setChat:(id)arg1;
- (void)setConsumedPayloads:(id)arg1;
- (void)setDataDetectedResult:(id)arg1;
- (void)setHasInvalidatedSize:(bool)arg1;
- (void)setInitialMessageIsFromMe:(bool)arg1;
- (void)setLast:(bool)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setParentChatHasAllUnknownRecipients:(bool)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayload:(id)arg1 attachments:(id)arg2;
- (void)setPayloadInShelf:(bool)arg1;
- (void)setPendingAttachmentData:(id)arg1;
- (void)setPluginPayload:(id)arg1;
- (void)setSessionGUID:(id)arg1;
- (void)setShowingLatestMessageAsBreadcrumb:(bool)arg1;
- (void)setTemporaryAttachmentURLs:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)set_imMessageGUID:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)statusAttributedString;
- (id)statusString;
- (void)statusStringNeedsUpdate;
- (void)stopPlayback;
- (bool)supportsDynamicSize;
- (id)temporaryAttachmentURLs;
- (void)thumbnailURLWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (void)updatePayload:(id)arg1;
- (void)updatePayload:(id)arg1 attachments:(id)arg2;
- (id)url;
- (bool)wantsReplyFromContentView;
- (bool)wantsStatusItem;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (bool)wantsInteractiveContentView;

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
