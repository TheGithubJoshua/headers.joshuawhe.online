<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PPEventNameRecord.h</title>
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

/PrivateFrameworks/PersonalizationPortrait.framework/PPEventNameRecord.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait (1)
 */

@interface PPEventNameRecord : NSObject <NSSecureCoding> {
    unsigned char  _changeType;
    NSString * _eventIdentifier;
    NSString * _identifier;
    NSString * _location;
    NSArray * _participantNames;
    double  _score;
    NSString * _title;
}

@property (nonatomic) unsigned char changeType;
@property (nonatomic, retain) NSString *eventIdentifier;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *location;
@property (nonatomic, retain) NSArray *participantNames;
@property (nonatomic) double score;
@property (nonatomic, retain) NSString *title;

+ (id)describeChangeType:(unsigned char)arg1;
+ (id)eventNameRecordWithScore:(double)arg1 eventIdentifier:(id)arg2 changeType:(unsigned char)arg3 title:(id)arg4 location:(id)arg5 participantNames:(id)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)changeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifier;
- (bool)hasScoreSimilarToRecord:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 eventIdentifier:(id)arg3 changeType:(unsigned char)arg4 title:(id)arg5 location:(id)arg6 participantNames:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEventNameRecord:(id)arg1;
- (id)location;
- (id)participantNames;
- (double)score;
- (void)setChangeType:(unsigned char)arg1;
- (void)setEventIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setParticipantNames:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

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
