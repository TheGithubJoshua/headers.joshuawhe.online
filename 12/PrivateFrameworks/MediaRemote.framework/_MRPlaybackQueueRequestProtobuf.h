<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_MRPlaybackQueueRequestProtobuf.h</title>
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

/PrivateFrameworks/MediaRemote.framework/_MRPlaybackQueueRequestProtobuf.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote (1)
 */

@interface _MRPlaybackQueueRequestProtobuf : PBCodable <NSCopying> {
    double  _artworkHeight;
    double  _artworkWidth;
    int  _cachingPolicy;
    NSMutableArray * _contentItemIdentifiers;
    _MRPlaybackQueueContextProtobuf * _context;
    struct { 
        unsigned int artworkHeight : 1; 
        unsigned int artworkWidth : 1; 
        unsigned int cachingPolicy : 1; 
        unsigned int length : 1; 
        unsigned int location : 1; 
        unsigned int includeInfo : 1; 
        unsigned int includeLanguageOptions : 1; 
        unsigned int includeLyrics : 1; 
        unsigned int includeMetadata : 1; 
        unsigned int includeSections : 1; 
        unsigned int isLegacyNowPlayingInfoRequest : 1; 
        unsigned int returnContentItemAssetsInUserCompletion : 1; 
    }  _has;
    bool  _includeInfo;
    bool  _includeLanguageOptions;
    bool  _includeLyrics;
    bool  _includeMetadata;
    bool  _includeSections;
    bool  _isLegacyNowPlayingInfoRequest;
    NSString * _label;
    int  _length;
    int  _location;
    _MRNowPlayingPlayerPathProtobuf * _playerPath;
    NSString * _requestID;
    bool  _returnContentItemAssetsInUserCompletion;
}

@property (nonatomic) double artworkHeight;
@property (nonatomic) double artworkWidth;
@property (nonatomic) int cachingPolicy;
@property (nonatomic, retain) NSMutableArray *contentItemIdentifiers;
@property (nonatomic, retain) _MRPlaybackQueueContextProtobuf *context;
@property (nonatomic) bool hasArtworkHeight;
@property (nonatomic) bool hasArtworkWidth;
@property (nonatomic) bool hasCachingPolicy;
@property (nonatomic, readonly) bool hasContext;
@property (nonatomic) bool hasIncludeInfo;
@property (nonatomic) bool hasIncludeLanguageOptions;
@property (nonatomic) bool hasIncludeLyrics;
@property (nonatomic) bool hasIncludeMetadata;
@property (nonatomic) bool hasIncludeSections;
@property (nonatomic) bool hasIsLegacyNowPlayingInfoRequest;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasLength;
@property (nonatomic) bool hasLocation;
@property (nonatomic, readonly) bool hasPlayerPath;
@property (nonatomic, readonly) bool hasRequestID;
@property (nonatomic) bool hasReturnContentItemAssetsInUserCompletion;
@property (nonatomic) bool includeInfo;
@property (nonatomic) bool includeLanguageOptions;
@property (nonatomic) bool includeLyrics;
@property (nonatomic) bool includeMetadata;
@property (nonatomic) bool includeSections;
@property (nonatomic) bool isLegacyNowPlayingInfoRequest;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) int length;
@property (nonatomic) int location;
@property (nonatomic, retain) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, retain) NSString *requestID;
@property (nonatomic) bool returnContentItemAssetsInUserCompletion;

+ (Class)contentItemIdentifiersType;
+ (void)initialize;

- (void).cxx_destruct;
- (void)addContentItemIdentifiers:(id)arg1;
- (double)artworkHeight;
- (double)artworkWidth;
- (int)cachingPolicy;
- (void)clearContentItemIdentifiers;
- (id)contentItemIdentifiers;
- (id)contentItemIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentItemIdentifiersCount;
- (id)context;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDescription;
- (id)customDictionaryRepresentation;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtworkHeight;
- (bool)hasArtworkWidth;
- (bool)hasCachingPolicy;
- (bool)hasContext;
- (bool)hasIncludeInfo;
- (bool)hasIncludeLanguageOptions;
- (bool)hasIncludeLyrics;
- (bool)hasIncludeMetadata;
- (bool)hasIncludeSections;
- (bool)hasIsLegacyNowPlayingInfoRequest;
- (bool)hasLabel;
- (bool)hasLength;
- (bool)hasLocation;
- (bool)hasPlayerPath;
- (bool)hasRequestID;
- (bool)hasReturnContentItemAssetsInUserCompletion;
- (unsigned long long)hash;
- (bool)includeInfo;
- (bool)includeLanguageOptions;
- (bool)includeLyrics;
- (bool)includeMetadata;
- (bool)includeSections;
- (bool)isEqual:(id)arg1;
- (bool)isLegacyNowPlayingInfoRequest;
- (id)label;
- (int)length;
- (int)location;
- (void)mergeFrom:(id)arg1;
- (id)playerPath;
- (bool)readFrom:(id)arg1;
- (id)requestID;
- (bool)returnContentItemAssetsInUserCompletion;
- (void)setArtworkHeight:(double)arg1;
- (void)setArtworkWidth:(double)arg1;
- (void)setCachingPolicy:(int)arg1;
- (void)setContentItemIdentifiers:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHasArtworkHeight:(bool)arg1;
- (void)setHasArtworkWidth:(bool)arg1;
- (void)setHasCachingPolicy:(bool)arg1;
- (void)setHasIncludeInfo:(bool)arg1;
- (void)setHasIncludeLanguageOptions:(bool)arg1;
- (void)setHasIncludeLyrics:(bool)arg1;
- (void)setHasIncludeMetadata:(bool)arg1;
- (void)setHasIncludeSections:(bool)arg1;
- (void)setHasIsLegacyNowPlayingInfoRequest:(bool)arg1;
- (void)setHasLength:(bool)arg1;
- (void)setHasLocation:(bool)arg1;
- (void)setHasReturnContentItemAssetsInUserCompletion:(bool)arg1;
- (void)setIncludeInfo:(bool)arg1;
- (void)setIncludeLanguageOptions:(bool)arg1;
- (void)setIncludeLyrics:(bool)arg1;
- (void)setIncludeMetadata:(bool)arg1;
- (void)setIncludeSections:(bool)arg1;
- (void)setIsLegacyNowPlayingInfoRequest:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLength:(int)arg1;
- (void)setLocation:(int)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setReturnContentItemAssetsInUserCompletion:(bool)arg1;
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
