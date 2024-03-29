<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDMailAutoFetchReport.h</title>
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

/PrivateFrameworks/MailSupport.framework/AWDMailAutoFetchReport.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport (3445.120.0.1.2)
 */

@interface AWDMailAutoFetchReport : PBCodable <NSCopying> {
    unsigned long long  _bucketedLocalNonDeletedCount;
    bool  _didTimeout;
    unsigned long long  _duration;
    int  _emailProvider;
    unsigned long long  _fetchSize;
    bool  _foreground;
    struct { 
        unsigned int bucketedLocalNonDeletedCount : 1; 
        unsigned int duration : 1; 
        unsigned int fetchSize : 1; 
        unsigned int numMessagesFetched : 1; 
        unsigned int options : 1; 
        unsigned int timestamp : 1; 
        unsigned int emailProvider : 1; 
        unsigned int mailboxType : 1; 
        unsigned int newMessagesState : 1; 
        unsigned int protocol : 1; 
        unsigned int totalBytesReceived : 1; 
        unsigned int totalBytesSent : 1; 
        unsigned int trigger : 1; 
        unsigned int didTimeout : 1; 
        unsigned int foreground : 1; 
    }  _has;
    AWDMailError * _mailError;
    int  _mailboxType;
    int  _newMessagesState;
    unsigned long long  _numMessagesFetched;
    unsigned long long  _options;
    int  _protocol;
    unsigned long long  _timestamp;
    int  _totalBytesReceived;
    int  _totalBytesSent;
    int  _trigger;
}

@property (nonatomic) unsigned long long bucketedLocalNonDeletedCount;
@property (nonatomic) bool didTimeout;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) int emailProvider;
@property (nonatomic) unsigned long long fetchSize;
@property (nonatomic) bool foreground;
@property (nonatomic) bool hasBucketedLocalNonDeletedCount;
@property (nonatomic) bool hasDidTimeout;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEmailProvider;
@property (nonatomic) bool hasFetchSize;
@property (nonatomic) bool hasForeground;
@property (nonatomic, readonly) bool hasMailError;
@property (nonatomic) bool hasMailboxType;
@property (nonatomic) bool hasNewMessagesState;
@property (nonatomic) bool hasNumMessagesFetched;
@property (nonatomic) bool hasOptions;
@property (nonatomic) bool hasProtocol;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalBytesReceived;
@property (nonatomic) bool hasTotalBytesSent;
@property (nonatomic) bool hasTrigger;
@property (nonatomic, retain) AWDMailError *mailError;
@property (nonatomic) int mailboxType;
@property (nonatomic) int newMessagesState;
@property (nonatomic) unsigned long long numMessagesFetched;
@property (nonatomic) unsigned long long options;
@property (nonatomic) int protocol;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int totalBytesReceived;
@property (nonatomic) int totalBytesSent;
@property (nonatomic) int trigger;

- (void).cxx_destruct;
- (int)StringAsEmailProvider:(id)arg1;
- (int)StringAsMailboxType:(id)arg1;
- (int)StringAsNewMessagesState:(id)arg1;
- (int)StringAsProtocol:(id)arg1;
- (int)StringAsTotalBytesReceived:(id)arg1;
- (int)StringAsTotalBytesSent:(id)arg1;
- (int)StringAsTrigger:(id)arg1;
- (unsigned long long)bucketedLocalNonDeletedCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didTimeout;
- (unsigned long long)duration;
- (int)emailProvider;
- (id)emailProviderAsString:(int)arg1;
- (unsigned long long)fetchSize;
- (bool)foreground;
- (bool)hasBucketedLocalNonDeletedCount;
- (bool)hasDidTimeout;
- (bool)hasDuration;
- (bool)hasEmailProvider;
- (bool)hasFetchSize;
- (bool)hasForeground;
- (bool)hasMailError;
- (bool)hasMailboxType;
- (bool)hasNewMessagesState;
- (bool)hasNumMessagesFetched;
- (bool)hasOptions;
- (bool)hasProtocol;
- (bool)hasTimestamp;
- (bool)hasTotalBytesReceived;
- (bool)hasTotalBytesSent;
- (bool)hasTrigger;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailError;
- (int)mailboxType;
- (id)mailboxTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (int)newMessagesState;
- (id)newMessagesStateAsString:(int)arg1;
- (unsigned long long)numMessagesFetched;
- (unsigned long long)options;
- (int)protocol;
- (id)protocolAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBucketedLocalNonDeletedCount:(unsigned long long)arg1;
- (void)setDidTimeout:(bool)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setEmailProvider:(int)arg1;
- (void)setFetchSize:(unsigned long long)arg1;
- (void)setForeground:(bool)arg1;
- (void)setHasBucketedLocalNonDeletedCount:(bool)arg1;
- (void)setHasDidTimeout:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEmailProvider:(bool)arg1;
- (void)setHasFetchSize:(bool)arg1;
- (void)setHasForeground:(bool)arg1;
- (void)setHasMailboxType:(bool)arg1;
- (void)setHasNewMessagesState:(bool)arg1;
- (void)setHasNumMessagesFetched:(bool)arg1;
- (void)setHasOptions:(bool)arg1;
- (void)setHasProtocol:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalBytesReceived:(bool)arg1;
- (void)setHasTotalBytesSent:(bool)arg1;
- (void)setHasTrigger:(bool)arg1;
- (void)setMailError:(id)arg1;
- (void)setMailboxType:(int)arg1;
- (void)setNewMessagesState:(int)arg1;
- (void)setNumMessagesFetched:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setProtocol:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalBytesReceived:(int)arg1;
- (void)setTotalBytesSent:(int)arg1;
- (void)setTrigger:(int)arg1;
- (unsigned long long)timestamp;
- (int)totalBytesReceived;
- (id)totalBytesReceivedAsString:(int)arg1;
- (int)totalBytesSent;
- (id)totalBytesSentAsString:(int)arg1;
- (int)trigger;
- (id)triggerAsString:(int)arg1;
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
