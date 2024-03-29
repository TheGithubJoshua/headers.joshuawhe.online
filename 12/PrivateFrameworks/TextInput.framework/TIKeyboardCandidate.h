<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TIKeyboardCandidate.h</title>
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

/PrivateFrameworks/TextInput.framework/TIKeyboardCandidate.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput (1.0)
 */

@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding> {
    NSString * _alternativeText;
    NSString * _annotationText;
    unsigned long long  _customInfoType;
    unsigned long long  _indexForMetrics;
    bool  _isSendCurrentLocation;
    bool  _responseCandidate;
    unsigned int  _slotID;
}

@property (getter=isOTAWordListCandidate, nonatomic, readonly) bool OTAWordListCandidate;
@property (nonatomic, copy) NSString *alternativeText;
@property (nonatomic, copy) NSString *annotationText;
@property (nonatomic, readonly) NSString *candidate;
@property (getter=isCompletionCandidate, nonatomic, readonly) bool completionCandidate;
@property (nonatomic, readonly) long long cursorMovement;
@property (nonatomic) unsigned long long customInfoType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long deleteCount;
@property (readonly, copy) NSString *description;
@property (getter=isEmojiCandidate, nonatomic, readonly) bool emojiCandidate;
@property (getter=isExtensionCandidate, nonatomic, readonly) bool extensionCandidate;
@property (getter=isFacemarkCandidate, nonatomic, readonly) bool facemarkCandidate;
@property (getter=isFullwidthCandidate, nonatomic, readonly) bool fullwidthCandidate;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long indexForMetrics;
@property (getter=isInlineCompletionCandidate, nonatomic, readonly) bool inlineCompletionCandidate;
@property (nonatomic, readonly) NSString *input;
@property (nonatomic, readonly) bool isAddress;
@property (nonatomic, readonly) bool isAutocorrection;
@property (nonatomic, readonly) bool isAutofillCandidate;
@property (nonatomic, readonly) bool isForShortcutConversion;
@property (nonatomic) bool isSendCurrentLocation;
@property (nonatomic, readonly) bool isSlottedCandidate;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) TIProactiveTrigger *proactiveTrigger;
@property (getter=isPunctuationCompletionCandidate, nonatomic, readonly) bool punctuationCompletionCandidate;
@property (getter=isPunctuationKeyCandidate, nonatomic, readonly) bool punctuationKeyCandidate;
@property (getter=isRegionalCandidate, nonatomic, readonly) bool regionalCandidate;
@property (getter=isResponseCandidate, nonatomic, readonly) bool responseCandidate;
@property (nonatomic, readonly) NSString *responseKitCategory;
@property (getter=isSecureContentCandidate, nonatomic, readonly) bool secureContentCandidate;
@property (nonatomic) unsigned int slotID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int usageTrackingMask;
@property (nonatomic, readonly) unsigned long long wordOriginFeedbackID;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (bool)supportsSecureCoding;
+ (int)type;

- (void).cxx_destruct;
- (id)alternativeText;
- (id)annotationText;
- (id)candidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cursorMovement;
- (unsigned long long)customInfoType;
- (unsigned long long)deleteCount;
- (id)description;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexForMetrics;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (bool)isAddress;
- (bool)isAutocorrection;
- (bool)isCompletionCandidate;
- (bool)isEmojiCandidate;
- (bool)isEqual:(id)arg1;
- (bool)isExtensionCandidate;
- (bool)isFacemarkCandidate;
- (bool)isForShortcutConversion;
- (bool)isFullwidthCandidate;
- (bool)isInlineCompletionCandidate;
- (bool)isOTAWordListCandidate;
- (bool)isPunctuation;
- (bool)isPunctuationCompletionCandidate;
- (bool)isPunctuationKeyCandidate;
- (bool)isRegionalCandidate;
- (bool)isResponseCandidate;
- (bool)isSecureContentCandidate;
- (bool)isSendCurrentLocation;
- (id)label;
- (id)proactiveTrigger;
- (id)responseKitCategory;
- (void)setAlternativeText:(id)arg1;
- (void)setAnnotationText:(id)arg1;
- (void)setCustomInfoType:(unsigned long long)arg1;
- (void)setIndexForMetrics:(unsigned long long)arg1;
- (void)setIsSendCurrentLocation:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setSlotID:(unsigned int)arg1;
- (unsigned int)slotID;
- (unsigned int)usageTrackingMask;
- (unsigned long long)wordOriginFeedbackID;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)isAutofillCandidate;
- (bool)isSlottedCandidate;

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
