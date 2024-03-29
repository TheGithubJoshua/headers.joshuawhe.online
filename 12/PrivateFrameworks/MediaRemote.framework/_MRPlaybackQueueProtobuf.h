<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_MRPlaybackQueueProtobuf.h</title>
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

/PrivateFrameworks/MediaRemote.framework/_MRPlaybackQueueProtobuf.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote (1)
 */

@interface _MRPlaybackQueueProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _contentItems;
    _MRPlaybackQueueContextProtobuf * _context;
    struct { 
        unsigned int location : 1; 
        unsigned int sendingPlaybackQueueTransaction : 1; 
    }  _has;
    int  _location;
    NSString * _queueIdentifier;
    NSString * _requestID;
    _MRNowPlayingPlayerPathProtobuf * _resolvedPlayerPath;
    bool  _sendingPlaybackQueueTransaction;
}

@property (nonatomic, retain) NSMutableArray *contentItems;
@property (nonatomic, retain) _MRPlaybackQueueContextProtobuf *context;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic) bool hasLocation;
@property (nonatomic, readonly) bool hasQueueIdentifier;
@property (nonatomic, readonly) bool hasRequestID;
@property (nonatomic, readonly) bool hasResolvedPlayerPath;
@property (nonatomic) bool hasSendingPlaybackQueueTransaction;
@property (nonatomic) int location;
@property (nonatomic, retain) NSString *queueIdentifier;
@property (nonatomic, retain) NSString *requestID;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *resolvedPlayerPath;
@property (nonatomic) bool sendingPlaybackQueueTransaction;

+ (Class)contentItemType;

- (void).cxx_destruct;
- (void)addContentItem:(id)arg1;
- (void)clearContentItems;
- (id)contentItemAtIndex:(unsigned long long)arg1;
- (id)contentItems;
- (unsigned long long)contentItemsCount;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContext;
- (bool)hasLocation;
- (bool)hasQueueIdentifier;
- (bool)hasRequestID;
- (bool)hasResolvedPlayerPath;
- (bool)hasSendingPlaybackQueueTransaction;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)location;
- (void)mergeFrom:(id)arg1;
- (id)queueIdentifier;
- (bool)readFrom:(id)arg1;
- (id)requestID;
- (id)resolvedPlayerPath;
- (bool)sendingPlaybackQueueTransaction;
- (void)setContentItems:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setHasSendingPlaybackQueueTransaction:(bool)arg1;
- (void)setLocation:(int)arg1;
- (void)setQueueIdentifier:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setResolvedPlayerPath:(id)arg1;
- (void)setSendingPlaybackQueueTransaction:(bool)arg1;
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
