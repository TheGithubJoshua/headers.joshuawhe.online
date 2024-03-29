<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOLogMessage.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOLogMessage.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOLogMessage : PBCodable <NSCopying> {
    unsigned int  _groupRetryCount;
    struct { 
        unsigned int groupRetryCount : 1; 
        unsigned int logMessageType : 1; 
    }  _has;
    int  _logMessageType;
    NSMutableArray * _logMsgEvents;
}

@property (nonatomic) unsigned int groupRetryCount;
@property (nonatomic) bool hasGroupRetryCount;
@property (nonatomic) bool hasLogMessageType;
@property (nonatomic) int logMessageType;
@property (nonatomic, retain) NSMutableArray *logMsgEvents;

+ (id)acceptedLogMsgEvents;
+ (id)acceptedLogMsgEventsForLogMessageType:(int)arg1;
+ (bool)allowApplicationStatesForLogMsgEvent:(id)arg1;
+ (id)allowedSessionTypes;
+ (bool)disallowedStateWithStateType:(int)arg1 logMsgEvent:(id)arg2 logMessage:(id)arg3;
+ (id)disallowedStatesForLogMsgEvent:(id)arg1 logMessage:(id)arg2;
+ (bool)logMessageType:(int)arg1 acceptsLogMsgEventType:(int)arg2;
+ (id)logMessagesForEvent:(id)arg1;
+ (Class)logMsgEventType;
+ (bool)supportsCohortSessionForLogMsgEvent:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsLogMessageType:(id)arg1;
- (bool)acceptsLogMsgEvent:(id)arg1;
- (void)addLogMsgEvent:(id)arg1;
- (unsigned long long)allowedSessionType;
- (void)clearLogMsgEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupIdentifier;
- (unsigned int)groupItemCount;
- (unsigned int)groupItemIdHash;
- (long long)groupItemQueuedTime;
- (unsigned int)groupRetryCount;
- (unsigned int)groupSequenceNumber;
- (bool)hasGroupRetryCount;
- (bool)hasLogMessageType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isFullCarPlayStateAllowed;
- (bool)isFullExperimentsStateAllowed;
- (bool)isNavigationSessionAllowed;
- (bool)isStateAllowed:(id)arg1;
- (int)logMessageType;
- (id)logMessageTypeAsString:(int)arg1;
- (id)logMsgEventAtIndex:(unsigned long long)arg1;
- (id)logMsgEvents;
- (unsigned long long)logMsgEventsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)removeUnsupportedStatesFromEvent;
- (void)setGroupRetryCount:(unsigned int)arg1;
- (void)setHasGroupRetryCount:(bool)arg1;
- (void)setHasLogMessageType:(bool)arg1;
- (void)setLogMessageType:(int)arg1;
- (void)setLogMsgEvents:(id)arg1;
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
