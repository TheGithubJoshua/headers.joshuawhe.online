<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDHomeKitMessageTransported.h</title>
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

/PrivateFrameworks/HomeKitDaemon.framework/AWDHomeKitMessageTransported.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon (484.7.17.1)
 */

@interface AWDHomeKitMessageTransported : PBCodable <NSCopying> {
    int  _direction;
    struct { 
        unsigned int payloadSize : 1; 
        unsigned int timestamp : 1; 
        unsigned int direction : 1; 
        unsigned int messageType : 1; 
        unsigned int transport : 1; 
        unsigned int isSecure : 1; 
    }  _has;
    NSString * _identifier;
    bool  _isSecure;
    int  _messageType;
    unsigned long long  _payloadSize;
    unsigned long long  _timestamp;
    NSString * _transactionID;
    int  _transport;
}

@property (nonatomic) int direction;
@property (nonatomic) bool hasDirection;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasIsSecure;
@property (nonatomic) bool hasMessageType;
@property (nonatomic) bool hasPayloadSize;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTransactionID;
@property (nonatomic) bool hasTransport;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isSecure;
@property (nonatomic) int messageType;
@property (nonatomic) unsigned long long payloadSize;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSString *transactionID;
@property (nonatomic) int transport;

- (void).cxx_destruct;
- (int)StringAsDirection:(id)arg1;
- (int)StringAsMessageType:(id)arg1;
- (int)StringAsTransport:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)direction;
- (id)directionAsString:(int)arg1;
- (bool)hasDirection;
- (bool)hasIdentifier;
- (bool)hasIsSecure;
- (bool)hasMessageType;
- (bool)hasPayloadSize;
- (bool)hasTimestamp;
- (bool)hasTransactionID;
- (bool)hasTransport;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)isSecure;
- (void)mergeFrom:(id)arg1;
- (int)messageType;
- (id)messageTypeAsString:(int)arg1;
- (unsigned long long)payloadSize;
- (bool)readFrom:(id)arg1;
- (void)setDirection:(int)arg1;
- (void)setHasDirection:(bool)arg1;
- (void)setHasIsSecure:(bool)arg1;
- (void)setHasMessageType:(bool)arg1;
- (void)setHasPayloadSize:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransport:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsSecure:(bool)arg1;
- (void)setMessageType:(int)arg1;
- (void)setPayloadSize:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransactionID:(id)arg1;
- (void)setTransport:(int)arg1;
- (unsigned long long)timestamp;
- (id)transactionID;
- (int)transport;
- (id)transportAsString:(int)arg1;
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
