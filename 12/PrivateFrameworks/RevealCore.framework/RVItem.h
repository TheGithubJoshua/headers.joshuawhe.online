<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>RVItem.h</title>
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

/PrivateFrameworks/RevealCore.framework/RVItem.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/RevealCore.framework/RevealCore (5)
 */

@interface RVItem : NSObject <NSSecureCoding> {
    id  _clientHints;
    NSString * _clientIdentifier;
    long long  _contactPropertyType;
    NSString * _contactPropertyValue;
    DDScannerResult * _ddResult;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _highlightRange;
    bool  _normalized;
    long long  _normalizedType;
    long long  _selectionType;
    NSString * _text;
    long long  _type;
    NSURL * _url;
}

@property (nonatomic, retain) id clientHints;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) long long contactPropertyType;
@property (nonatomic, readonly) NSString *contactPropertyValue;
@property (nonatomic, readonly) DDScannerResult *ddResult;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } highlightRange;
@property (nonatomic, readonly) long long normalizedType;
@property (nonatomic, readonly) NSURL *normalizedURL;
@property (nonatomic, readonly) long long selectionType;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSString *textSearchContext;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientHints;
- (id)clientIdentifier;
- (long long)contactPropertyType;
- (id)contactPropertyValue;
- (id)ddResult;
- (void)encodeWithCoder:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })highlightRange;
- (id)initEmpty;
- (id)initWithClientIdentifier:(id)arg1 rangeInContext:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactProperty:(long long)arg1 value:(id)arg2 rangeInContext:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)initWithDDResult:(id)arg1;
- (id)initWithText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithURL:(id)arg1 rangeInContext:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)normalize;
- (long long)normalizedType;
- (id)normalizedURL;
- (long long)selectionType;
- (void)setClientHints:(id)arg1;
- (id)text;
- (id)textSearchContext;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textSearchRange;
- (long long)type;
- (id)url;

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