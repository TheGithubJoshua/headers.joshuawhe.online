<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKComposition.h</title>
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

/PrivateFrameworks/ChatKit.framework/CKComposition.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit (1.0)
 */

@interface CKComposition : NSObject {
    NSString * _expressiveSendStyleID;
    bool  _isFromExternalSource;
    IMPluginPayload * _shelfPluginPayload;
    NSAttributedString * _subject;
    NSAttributedString * _text;
}

@property (getter=isExpirableComposition, nonatomic, readonly) bool expirableComposition;
@property (nonatomic, copy) NSString *expressiveSendStyleID;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasNonwhiteSpaceContent;
@property (nonatomic) bool isFromExternalSource;
@property (nonatomic, readonly) NSArray *mediaObjects;
@property (nonatomic, readonly) NSArray *pasteboardItems;
@property (nonatomic, readonly) NSArray *pluginDisplayContainers;
@property (nonatomic, readonly, copy) NSString *previewText;
@property (getter=isSaveable, nonatomic, readonly) bool saveable;
@property (getter=isSendAnimated, nonatomic, readonly) bool sendAnimated;
@property (nonatomic, copy) IMPluginPayload *shelfPluginPayload;
@property (nonatomic, copy) NSAttributedString *subject;
@property (nonatomic, copy) NSAttributedString *text;
@property (getter=isTextOnly, nonatomic, readonly) bool textOnly;

+ (id)__ck_valueForItemClass:(Class)arg1 forItemProvider:(id)arg2;
+ (bool)_shouldCreateMediaObjectForUTIType:(id)arg1;
+ (id)_temporaryURLFromURL:(id)arg1;
+ (id)audioCompositionWithMediaObject:(id)arg1;
+ (id)composition;
+ (id)compositionForMessageParts:(id)arg1 preserveSubject:(bool)arg2;
+ (id)compositionFromItemProviders:(id)arg1;
+ (id)compositionWithMSMessage:(id)arg1 appExtensionIdentifier:(id)arg2;
+ (id)compositionWithMediaObject:(id)arg1 subject:(id)arg2;
+ (id)compositionWithMediaObjects:(id)arg1 subject:(id)arg2;
+ (id)compositionWithPluginDisplayContainer:(id)arg1 subject:(id)arg2;
+ (id)compositionWithShelfPluginPayload:(id)arg1;
+ (id)dataForPasteboardType:(id)arg1 forItemProvider:(id)arg2;
+ (void)deleteCompositionWithGUID:(id)arg1;
+ (id)expirableCompositionWithMediaObject:(id)arg1;
+ (id)filenameForType:(id)arg1 forItemProvider:(id)arg2;
+ (id)mediaObjectForItemProvider:(id)arg1;
+ (id)newExpirableCompositionWithText:(id)arg1 subject:(id)arg2 shelfPluginPayload:(id)arg3;
+ (id)pasteboardTypesForItemProvider:(id)arg1;
+ (id)photoPickerCompositionWithMediaObject:(id)arg1;
+ (id)photoPickerCompositionWithMediaObjects:(id)arg1;
+ (id)pluginDisplayContainerForItemProvider:(id)arg1;
+ (id)quickImageCompositionWithMediaObject:(id)arg1;
+ (void)requestCompositionFromItemProviders:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestFilenameForType:(id)arg1 forItemProvider:(id)arg2 completion:(id /* block */)arg3;
+ (void)requestMediaObjectForItemProvider:(id)arg1 type:(id)arg2 completion:(id /* block */)arg3;
+ (void)requestMediaObjectsForAttributedString:(id)arg1 completion:(id /* block */)arg2;
+ (void)requestPluginDisplayContainerForItemProvider:(id)arg1 completion:(id /* block */)arg2;
+ (id)richestMediaTypeForItemProvider:(id)arg1;
+ (id)savedCompositionForGUID:(id)arg1;
+ (id)stickerCompositionWithMediaObjects:(id)arg1;
+ (void)updateComposition:(id*)arg1 fromItemProvider:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_compositionByAppendingText:(id)arg1 isExpirable:(bool)arg2 shelfPluginPayload:(id)arg3;
- (id)_compositionParts;
- (id)_messageFromPayload:(id)arg1 firstGUID:(id)arg2;
- (Class)balloonViewClass;
- (id)compositionByAppendingComposition:(id)arg1;
- (id)compositionByAppendingMediaObject:(id)arg1;
- (id)compositionByAppendingMediaObjects:(id)arg1;
- (id)compositionByAppendingPluginDisplayContainer:(id)arg1;
- (id)compositionByAppendingText:(id)arg1;
- (id)compositionByReplacingMediaObject:(id)arg1 withMediaObject:(id)arg2;
- (id)compositionWithExpressiveSendStyleID:(id)arg1;
- (id)description;
- (id)expressiveSendStyleID;
- (id)externalSourceComposition;
- (bool)hasContent;
- (bool)hasNonwhiteSpaceContent;
- (unsigned long long)hash;
- (id)initWithText:(id)arg1 subject:(id)arg2;
- (id)initWithText:(id)arg1 subject:(id)arg2 shelfPluginPayload:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isExpirableComposition;
- (bool)isFromExternalSource;
- (bool)isSaveable;
- (bool)isSendAnimated;
- (bool)isTextOnly;
- (id)mediaObjects;
- (id)messageWithGUID:(id)arg1;
- (id)messageWithGUID:(id)arg1 superFormatText:(id)arg2 superFormatSubject:(id)arg3 fileTransferGUIDs:(id)arg4 mediaObjects:(id)arg5 balloonBundleID:(id)arg6 payloadData:(id)arg7;
- (id)messagesFromCompositionFirstGUIDForMessage:(id)arg1;
- (id)pasteboardItems;
- (id)pluginDisplayContainers;
- (id)previewText;
- (void)saveCompositionWithGUID:(id)arg1;
- (void)setExpressiveSendStyleID:(id)arg1;
- (void)setIsFromExternalSource:(bool)arg1;
- (void)setShelfPluginPayload:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setText:(id)arg1;
- (id)shelfPluginPayload;
- (id)subject;
- (id)superFormatSubject;
- (id)superFormatText:(id*)arg1;
- (id)superFormatText:(id)arg1 transfterGUIDs:(id*)arg2 mediaObjects:(id*)arg3;
- (id)text;

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