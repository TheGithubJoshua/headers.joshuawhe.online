<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PPQuickTypeItem.h</title>
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

/PrivateFrameworks/PersonalizationPortrait.framework/PPQuickTypeItem.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait (1)
 */

@interface PPQuickTypeItem : NSObject <NSSecureCoding> {
    NSDate * _date;
    unsigned int  _fields;
    unsigned char  _flags;
    NSString * _label;
    NSString * _name;
    NSString * _originatingBundleID;
    NSURL * _originatingWebsiteURL;
    unsigned long long  _predictionAge;
    double  _score;
    bool  _shouldAggregate;
    unsigned char  _source;
    NSString * _sourceIdentifier;
    NSString * _value;
}

@property (nonatomic, copy) NSDate *date;
@property (nonatomic) unsigned int fields;
@property (nonatomic) unsigned char flags;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *originatingBundleID;
@property (nonatomic, copy) NSURL *originatingWebsiteURL;
@property (nonatomic) unsigned long long predictionAge;
@property (nonatomic) double score;
@property (nonatomic) bool shouldAggregate;
@property (nonatomic) unsigned char source;
@property (nonatomic, copy) NSString *sourceIdentifier;
@property (nonatomic, copy) NSString *value;

+ (id)quickTypeItemWithLabel:(id)arg1 value:(id)arg2 name:(id)arg3 date:(id)arg4 fields:(unsigned int)arg5 originatingBundleID:(id)arg6 originatingWebsiteURL:(id)arg7 predictionAge:(unsigned long long)arg8 shouldAggregate:(bool)arg9 flags:(unsigned char)arg10 score:(double)arg11 source:(unsigned char)arg12 sourceIdentifier:(id)arg13;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)fields;
- (unsigned char)flags;
- (bool)hasScoreSimilarToItem:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 value:(id)arg2 name:(id)arg3 date:(id)arg4 fields:(unsigned int)arg5 originatingBundleID:(id)arg6 originatingWebsiteURL:(id)arg7 predictionAge:(unsigned long long)arg8 shouldAggregate:(bool)arg9 flags:(unsigned char)arg10 score:(double)arg11 source:(unsigned char)arg12 sourceIdentifier:(id)arg13;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToQuickTypeItem:(id)arg1;
- (id)label;
- (id)name;
- (id)originatingBundleID;
- (id)originatingWebsiteURL;
- (unsigned long long)predictionAge;
- (double)score;
- (void)setDate:(id)arg1;
- (void)setFields:(unsigned int)arg1;
- (void)setFlags:(unsigned char)arg1;
- (void)setLabel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginatingBundleID:(id)arg1;
- (void)setOriginatingWebsiteURL:(id)arg1;
- (void)setPredictionAge:(unsigned long long)arg1;
- (void)setScore:(double)arg1;
- (void)setShouldAggregate:(bool)arg1;
- (void)setSource:(unsigned char)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setValue:(id)arg1;
- (bool)shouldAggregate;
- (unsigned char)source;
- (id)sourceIdentifier;
- (id)value;

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
