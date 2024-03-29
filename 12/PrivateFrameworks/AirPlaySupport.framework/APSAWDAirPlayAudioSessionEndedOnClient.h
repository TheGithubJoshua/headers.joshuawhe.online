<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>APSAWDAirPlayAudioSessionEndedOnClient.h</title>
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

/PrivateFrameworks/AirPlaySupport.framework/APSAWDAirPlayAudioSessionEndedOnClient.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport (387.2)
 */

@interface APSAWDAirPlayAudioSessionEndedOnClient : PBCodable <NSCopying> {
    unsigned int  _duration;
    unsigned int  _futileRetransmits;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int futileRetransmits : 1; 
        unsigned int reason : 1; 
        unsigned int retransmits : 1; 
        unsigned int slowKeepAlives : 1; 
    }  _has;
    int  _reason;
    unsigned int  _retransmits;
    NSString * _sessionUUID;
    unsigned int  _slowKeepAlives;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int futileRetransmits;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasFutileRetransmits;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasRetransmits;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasSlowKeepAlives;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int reason;
@property (nonatomic) unsigned int retransmits;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned int slowKeepAlives;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (unsigned int)futileRetransmits;
- (bool)hasDuration;
- (bool)hasFutileRetransmits;
- (bool)hasReason;
- (bool)hasRetransmits;
- (bool)hasSessionUUID;
- (bool)hasSlowKeepAlives;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (unsigned int)retransmits;
- (id)sessionUUID;
- (void)setDuration:(unsigned int)arg1;
- (void)setFutileRetransmits:(unsigned int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasFutileRetransmits:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasRetransmits:(bool)arg1;
- (void)setHasSlowKeepAlives:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setRetransmits:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSlowKeepAlives:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)slowKeepAlives;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

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
