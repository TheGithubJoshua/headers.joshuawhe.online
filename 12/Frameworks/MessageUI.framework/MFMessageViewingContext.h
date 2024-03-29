<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MFMessageViewingContext.h</title>
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

/Frameworks/MessageUI.framework/MFMessageViewingContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI (3445.120.0.1.2)
 */

@interface MFMessageViewingContext : NSObject {
    MFAttachmentManager * _attachmentManager;
    MFMessageBody * _body;
    id  _content;
    MFLock * _contentLock;
    unsigned long long  _contentOffset;
    NSObject<MFMessageViewingContextDelegate> * _delegate;
    unsigned int  _failedToLoad;
    unsigned int  _hasNoContent;
    unsigned int  _isDraftMessage;
    unsigned int  _isEditableMessage;
    unsigned int  _isOutgoingMessage;
    long long  _loadAlternative;
    unsigned int  _loadIncrement;
    MFActivityMonitor * _loadTask;
    unsigned int  _loadedFullData;
    MFMimePart * _loadedPart;
    MFMailMessage * _message;
    NSError * _messageAnalysisError;
    MFError * _secureMIMEError;
    unsigned int  _showMailboxName;
    NSArray * _signers;
}

@property (nonatomic, readonly, retain) MFAttachmentManager *attachmentManager;
@property (setter=_setContent:, nonatomic, retain) id content;
@property (setter=_setContentOffset:, nonatomic) unsigned long long contentOffset;
@property (nonatomic) <MFMessageViewingContextDelegate> *delegate;
@property (nonatomic, readonly) bool failedToLoad;
@property (nonatomic, readonly) bool hasLoaded;
@property (nonatomic, readonly) bool hasNoContent;
@property (nonatomic) bool isDraftMessage;
@property (nonatomic) bool isEditableMessage;
@property (nonatomic, readonly) bool isMessageEncrypted;
@property (nonatomic, readonly) bool isMessageSigned;
@property (nonatomic) bool isOutgoingMessage;
@property (nonatomic, readonly) bool isPartial;
@property (nonatomic, readonly, retain) MFActivityMonitor *loadTask;
@property (setter=_setLoadedPart:, nonatomic, retain) MFMimePart *loadedPart;
@property (nonatomic, readonly, retain) MFMailMessage *message;
@property (setter=_setMessageAnalysisError:, nonatomic, retain) NSError *messageAnalysisError;
@property (setter=_setMessageBody:, nonatomic, retain) MFMessageBody *messageBody;
@property (setter=_setSecureMIMEError:, nonatomic, retain) MFError *secureMimeError;
@property (nonatomic) bool showMailboxName;
@property (setter=_setSigners:, nonatomic, copy) NSArray *signers;

+ (bool)isAttachmentTooLargeToDownload:(id)arg1;
+ (unsigned long long)nextOffsetForOffset:(unsigned long long)arg1 totalLength:(unsigned long long)arg2 requestedAmount:(unsigned long long)arg3;

- (void)_notifyCompletelyComplete;
- (void)_notifyFullMessageLoadFailed;
- (void)_notifyInitialLoadComplete;
- (void)_notifyMessageAnalysisComplete;
- (void)_setContent:(id)arg1;
- (void)_setContentOffset:(unsigned long long)arg1;
- (void)_setLoadedPart:(id)arg1;
- (void)_setMessageAnalysisError:(id)arg1;
- (void)_setMessageBody:(id)arg1;
- (void)_setSecureMIMEError:(id)arg1;
- (void)_setSigners:(id)arg1;
- (id)attachmentManager;
- (id)attachments;
- (void)cancelLoad;
- (id)content;
- (unsigned long long)contentOffset;
- (void)dealloc;
- (id)delegate;
- (bool)failedToLoad;
- (bool)hasLoaded;
- (bool)hasNoContent;
- (id)initWithMessage:(id)arg1 attachmentManager:(id)arg2;
- (bool)isDraftMessage;
- (bool)isEditableMessage;
- (bool)isMessageEncrypted;
- (bool)isMessageSigned;
- (bool)isOutgoingMessage;
- (bool)isPartial;
- (void)load;
- (void)loadAsPlainText:(bool)arg1 asHTML:(bool)arg2 downloadIfNecessary:(bool)arg3;
- (void)loadBestAlternative;
- (void)loadFull;
- (void)loadMore;
- (id)loadTask;
- (void)loadWithPriority:(int)arg1;
- (id)loadedPart;
- (id)message;
- (id)messageAnalysisError;
- (id)messageBody;
- (id)secureMimeError;
- (void)setDelegate:(id)arg1;
- (void)setIsDraftMessage:(bool)arg1;
- (void)setIsEditableMessage:(bool)arg1;
- (void)setIsOutgoingMessage:(bool)arg1;
- (void)setLoadTask:(id)arg1;
- (void)setShowMailboxName:(bool)arg1;
- (bool)showMailboxName;
- (id)signers;
- (id)uniqueID;

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
