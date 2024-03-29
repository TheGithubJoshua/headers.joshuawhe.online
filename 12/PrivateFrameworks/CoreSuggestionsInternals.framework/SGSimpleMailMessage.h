<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SGSimpleMailMessage.h</title>
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

/PrivateFrameworks/CoreSuggestionsInternals.framework/SGSimpleMailMessage.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals (680.125)
 */

@interface SGSimpleMailMessage : SGMessage {
    NSArray * _bcc;
    NSArray * _cc;
    SGSimpleNamedEmailAddress * _from;
    NSArray * _headers;
    NSString * _htmlBody;
    bool  _isInhuman;
    bool  _isPartiallyDownloaded;
    SGSimpleNamedEmailAddress * _mailingList;
    NSString * _messageId;
    NSNumber * _received;
    SGSimpleNamedEmailAddress * _replyTo;
    NSArray * _to;
}

@property (nonatomic, copy) NSArray *bcc;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSArray *cc;
@property (nonatomic, copy) SGSimpleNamedEmailAddress *from;
@property (nonatomic, readonly) NSArray *headers;
@property (nonatomic, copy) NSString *htmlBody;
@property (nonatomic) bool isInhuman;
@property (nonatomic) bool isPartiallyDownloaded;
@property (nonatomic, copy) SGSimpleNamedEmailAddress *mailingList;
@property (nonatomic, copy) NSString *messageId;
@property (nonatomic, copy) NSNumber *received;
@property (nonatomic, copy) SGSimpleNamedEmailAddress *replyTo;
@property (nonatomic, copy) NSArray *to;

+ (id)fromMFMailMessage:(id)arg1;
+ (bool)headersContainInhumanOnes:(id)arg1 keys:(id)arg2;
+ (id)parseRfc822Headers:(id)arg1 htmlContent:(id)arg2;
+ (id)simpleMailMessageFromHeadersOfMessage:(id)arg1;
+ (id)subjectByCleaningPrefixesInSubject:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allRecipients;
- (id)asDictionary;
- (id)bcc;
- (id)body;
- (id)cc;
- (unsigned long long)contentLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)from;
- (unsigned long long)hash;
- (id)headers;
- (id)headersDictionary;
- (id)htmlBody;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSearchableItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSimpleMailMessage:(id)arg1;
- (bool)isInhuman;
- (bool)isPartiallyDownloaded;
- (id)mailingList;
- (id)messageId;
- (id)received;
- (id)replyTo;
- (id)rfc822Data;
- (id)searchableItem;
- (id)searchableItemWithSource:(id)arg1;
- (void)setBcc:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setCc:(id)arg1;
- (void)setFrom:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setHtmlBody:(id)arg1;
- (void)setIsInhuman:(bool)arg1;
- (void)setIsPartiallyDownloaded:(bool)arg1;
- (void)setMailingList:(id)arg1;
- (void)setMessageId:(id)arg1;
- (void)setReceived:(id)arg1;
- (void)setReplyTo:(id)arg1;
- (void)setTo:(id)arg1;
- (id)spotlightBundleIdentifier;
- (id)spotlightUniqueIdentifier;
- (id)textContent;
- (id)to;
- (id)uniqueIdentifier;

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
