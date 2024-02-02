<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PKPassContent.h</title>
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

/PrivateFrameworks/PassKitCore.framework/PKPassContent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore (1)
 */

@interface PKPassContent : PKContent <NSSecureCoding> {
    NSDictionary * _allSemantics;
    NSArray * _backFieldBuckets;
    NSArray * _balanceFields;
    NSString * _businessChatIdentifier;
    PKImage * _footerImage;
    NSArray * _frontFieldBuckets;
    NSString * _logoText;
    PKPassPersonalization * _personalization;
    NSDictionary * _semantics;
    long long  _transitType;
}

@property (nonatomic, copy) NSDictionary *allSemantics;
@property (nonatomic, copy) NSArray *backFieldBuckets;
@property (nonatomic, copy) NSArray *balanceFields;
@property (nonatomic, copy) NSString *businessChatIdentifier;
@property (nonatomic, retain) PKImage *footerImage;
@property (nonatomic, copy) NSArray *frontFieldBuckets;
@property (nonatomic, copy) NSString *logoText;
@property (nonatomic, copy) PKPassPersonalization *personalization;
@property (nonatomic, readonly) NSArray *primaryFields;
@property (nonatomic, copy) NSDictionary *semantics;
@property (nonatomic) long long transitType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allSemantics;
- (id)backFieldBuckets;
- (id)balanceFields;
- (id)businessChatIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (void)flushFormattedFieldValues;
- (id)footerImage;
- (id)frontFieldBuckets;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3;
- (id)logoText;
- (id)personalization;
- (id)primaryFields;
- (id)semantics;
- (void)setAllSemantics:(id)arg1;
- (void)setBackFieldBuckets:(id)arg1;
- (void)setBalanceFields:(id)arg1;
- (void)setBusinessChatIdentifier:(id)arg1;
- (void)setFooterImage:(id)arg1;
- (void)setFrontFieldBuckets:(id)arg1;
- (void)setLogoText:(id)arg1;
- (void)setPersonalization:(id)arg1;
- (void)setSemantics:(id)arg1;
- (void)setTransitType:(long long)arg1;
- (long long)transitType;

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