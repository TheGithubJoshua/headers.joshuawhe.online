<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MSMessage.h</title>
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

/Frameworks/Messages.framework/MSMessage.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Messages.framework/Messages (1)
 */

@interface MSMessage : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    NSData * __data;
    NSString * _accessibilityLabel;
    NSString * _breadcrumbText;
    NSError * _error;
    bool  _isFromMe;
    MSMessageLayout * _layout;
    bool  _pending;
    bool  _requiresValidation;
    NSUUID * _senderParticipantIdentifier;
    MSSession * _session;
    bool  _shouldExpire;
    NSString * _statusText;
    NSString * _summaryText;
    NSDate * _time;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSData *_data;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *breadcrumbText;
@property (nonatomic, copy) NSError *error;
@property (nonatomic) bool isFromMe;
@property (nonatomic, copy) MSMessageLayout *layout;
@property (getter=isPending, nonatomic) bool pending;
@property (nonatomic) bool requiresValidation;
@property (nonatomic, retain) NSUUID *senderParticipantIdentifier;
@property (nonatomic, readonly) MSSession *session;
@property (nonatomic) bool shouldExpire;
@property (nonatomic, copy) NSString *statusText;
@property (nonatomic, copy) NSString *summaryText;
@property (nonatomic, retain) NSDate *time;

// Image: /System/Library/Frameworks/Messages.framework/Messages

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_data;
- (void)_mergeSanitizedDataFromMessage:(id)arg1;
- (void)_sanitize;
- (id)_sanitizedCopy;
- (id)_shallowCopy;
- (id)accessibilityLabel;
- (id)breadcrumbText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFromMe;
- (bool)isPending;
- (id)layout;
- (bool)requiresValidation;
- (id)senderParticipantIdentifier;
- (id)session;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setBreadcrumbText:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setPending:(bool)arg1;
- (void)setRequiresValidation:(bool)arg1;
- (void)setSenderParticipantIdentifier:(id)arg1;
- (void)setShouldExpire:(bool)arg1;
- (void)setStatusText:(id)arg1;
- (void)setSummaryText:(id)arg1;
- (void)setTime:(id)arg1;
- (void)setURL:(id)arg1;
- (void)set_data:(id)arg1;
- (bool)shouldExpire;
- (id)statusText;
- (id)summaryText;
- (id)time;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)peerPaymentMessage;

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