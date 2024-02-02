<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDHomeKitPresenceReport.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/AWDHomeKitPresenceReport.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface AWDHomeKitPresenceReport : PBCodable <NSCopying> {
    int  _authStatus;
    int  _computeStatus;
    int  _direction;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int authStatus : 1; 
        unsigned int computeStatus : 1; 
        unsigned int direction : 1; 
        unsigned int reason : 1; 
        unsigned int resultErrorCode : 1; 
    }  _has;
    int  _reason;
    int  _resultErrorCode;
    unsigned long long  _timestamp;
}

@property (nonatomic) int authStatus;
@property (nonatomic) int computeStatus;
@property (nonatomic) int direction;
@property (nonatomic) bool hasAuthStatus;
@property (nonatomic) bool hasComputeStatus;
@property (nonatomic) bool hasDirection;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasResultErrorCode;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int reason;
@property (nonatomic) int resultErrorCode;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsAuthStatus:(id)arg1;
- (int)StringAsComputeStatus:(id)arg1;
- (int)StringAsDirection:(id)arg1;
- (int)StringAsReason:(id)arg1;
- (int)authStatus;
- (id)authStatusAsString:(int)arg1;
- (int)computeStatus;
- (id)computeStatusAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)direction;
- (id)directionAsString:(int)arg1;
- (bool)hasAuthStatus;
- (bool)hasComputeStatus;
- (bool)hasDirection;
- (bool)hasReason;
- (bool)hasResultErrorCode;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (int)resultErrorCode;
- (void)setAuthStatus:(int)arg1;
- (void)setComputeStatus:(int)arg1;
- (void)setDirection:(int)arg1;
- (void)setHasAuthStatus:(bool)arg1;
- (void)setHasComputeStatus:(bool)arg1;
- (void)setHasDirection:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasResultErrorCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setResultErrorCode:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
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