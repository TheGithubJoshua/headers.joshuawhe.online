<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ADOptOutRequest.h</title>
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

/PrivateFrameworks/AdCore.framework/ADOptOutRequest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore (1)
 */

@interface ADOptOutRequest : PBRequest <NSCopying> {
    NSData * _dPID;
    struct { 
        unsigned int statusChangeTimestamp : 1; 
        unsigned int transmitTimestamp : 1; 
        unsigned int timezone : 1; 
        unsigned int optedOutStatus : 1; 
    }  _has;
    NSData * _iAdID;
    bool  _optedOutStatus;
    double  _statusChangeTimestamp;
    float  _timezone;
    double  _transmitTimestamp;
}

@property (nonatomic, retain) NSData *dPID;
@property (nonatomic, readonly) bool hasDPID;
@property (nonatomic, readonly) bool hasIAdID;
@property (nonatomic) bool hasOptedOutStatus;
@property (nonatomic) bool hasStatusChangeTimestamp;
@property (nonatomic) bool hasTimezone;
@property (nonatomic) bool hasTransmitTimestamp;
@property (nonatomic, retain) NSData *iAdID;
@property (nonatomic) bool optedOutStatus;
@property (nonatomic) double statusChangeTimestamp;
@property (nonatomic) float timezone;
@property (nonatomic) double transmitTimestamp;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dPID;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDPID;
- (bool)hasIAdID;
- (bool)hasOptedOutStatus;
- (bool)hasStatusChangeTimestamp;
- (bool)hasTimezone;
- (bool)hasTransmitTimestamp;
- (unsigned long long)hash;
- (id)iAdID;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)optedOutStatus;
- (bool)readFrom:(id)arg1;
- (void)setDPID:(id)arg1;
- (void)setHasOptedOutStatus:(bool)arg1;
- (void)setHasStatusChangeTimestamp:(bool)arg1;
- (void)setHasTimezone:(bool)arg1;
- (void)setHasTransmitTimestamp:(bool)arg1;
- (void)setIAdID:(id)arg1;
- (void)setOptedOutStatus:(bool)arg1;
- (void)setStatusChangeTimestamp:(double)arg1;
- (void)setTimezone:(float)arg1;
- (void)setTransmitTimestamp:(double)arg1;
- (double)statusChangeTimestamp;
- (float)timezone;
- (double)transmitTimestamp;
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
