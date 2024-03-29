<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_MPCProtoRadioContentReferenceLibraryItemContentReference.h</title>
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

/PrivateFrameworks/MediaPlaybackCore.framework/_MPCProtoRadioContentReferenceLibraryItemContentReference.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore (1)
 */

@interface _MPCProtoRadioContentReferenceLibraryItemContentReference : PBCodable <NSCopying> {
    NSString * _albumArtistName;
    int  _albumDiscCount;
    NSString * _albumName;
    int  _albumTrackCount;
    NSString * _artistName;
    long long  _cloudID;
    NSString * _composerName;
    int  _contentType;
    NSString * _copyrightText;
    int  _discNumber;
    double  _duration;
    double  _fileSize;
    NSString * _genreName;
    struct { 
        unsigned int cloudID : 1; 
        unsigned int duration : 1; 
        unsigned int fileSize : 1; 
        unsigned int storeAdamID : 1; 
        unsigned int albumDiscCount : 1; 
        unsigned int albumTrackCount : 1; 
        unsigned int contentType : 1; 
        unsigned int discNumber : 1; 
        unsigned int trackNumber : 1; 
        unsigned int year : 1; 
        unsigned int isCompilation : 1; 
    }  _has;
    bool  _isCompilation;
    long long  _storeAdamID;
    NSString * _title;
    int  _trackNumber;
    int  _year;
}

@property (nonatomic, retain) NSString *albumArtistName;
@property (nonatomic) int albumDiscCount;
@property (nonatomic, retain) NSString *albumName;
@property (nonatomic) int albumTrackCount;
@property (nonatomic, retain) NSString *artistName;
@property (nonatomic) long long cloudID;
@property (nonatomic, retain) NSString *composerName;
@property (nonatomic) int contentType;
@property (nonatomic, retain) NSString *copyrightText;
@property (nonatomic) int discNumber;
@property (nonatomic) double duration;
@property (nonatomic) double fileSize;
@property (nonatomic, retain) NSString *genreName;
@property (nonatomic, readonly) bool hasAlbumArtistName;
@property (nonatomic) bool hasAlbumDiscCount;
@property (nonatomic, readonly) bool hasAlbumName;
@property (nonatomic) bool hasAlbumTrackCount;
@property (nonatomic, readonly) bool hasArtistName;
@property (nonatomic) bool hasCloudID;
@property (nonatomic, readonly) bool hasComposerName;
@property (nonatomic) bool hasContentType;
@property (nonatomic, readonly) bool hasCopyrightText;
@property (nonatomic) bool hasDiscNumber;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasFileSize;
@property (nonatomic, readonly) bool hasGenreName;
@property (nonatomic) bool hasIsCompilation;
@property (nonatomic) bool hasStoreAdamID;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool hasTrackNumber;
@property (nonatomic) bool hasYear;
@property (nonatomic) bool isCompilation;
@property (nonatomic) long long storeAdamID;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) int trackNumber;
@property (nonatomic) int year;

- (void).cxx_destruct;
- (id)albumArtistName;
- (int)albumDiscCount;
- (id)albumName;
- (int)albumTrackCount;
- (id)artistName;
- (long long)cloudID;
- (id)composerName;
- (int)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyrightText;
- (id)description;
- (id)dictionaryRepresentation;
- (int)discNumber;
- (double)duration;
- (double)fileSize;
- (id)genreName;
- (bool)hasAlbumArtistName;
- (bool)hasAlbumDiscCount;
- (bool)hasAlbumName;
- (bool)hasAlbumTrackCount;
- (bool)hasArtistName;
- (bool)hasCloudID;
- (bool)hasComposerName;
- (bool)hasContentType;
- (bool)hasCopyrightText;
- (bool)hasDiscNumber;
- (bool)hasDuration;
- (bool)hasFileSize;
- (bool)hasGenreName;
- (bool)hasIsCompilation;
- (bool)hasStoreAdamID;
- (bool)hasTitle;
- (bool)hasTrackNumber;
- (bool)hasYear;
- (unsigned long long)hash;
- (bool)isCompilation;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlbumArtistName:(id)arg1;
- (void)setAlbumDiscCount:(int)arg1;
- (void)setAlbumName:(id)arg1;
- (void)setAlbumTrackCount:(int)arg1;
- (void)setArtistName:(id)arg1;
- (void)setCloudID:(long long)arg1;
- (void)setComposerName:(id)arg1;
- (void)setContentType:(int)arg1;
- (void)setCopyrightText:(id)arg1;
- (void)setDiscNumber:(int)arg1;
- (void)setDuration:(double)arg1;
- (void)setFileSize:(double)arg1;
- (void)setGenreName:(id)arg1;
- (void)setHasAlbumDiscCount:(bool)arg1;
- (void)setHasAlbumTrackCount:(bool)arg1;
- (void)setHasCloudID:(bool)arg1;
- (void)setHasContentType:(bool)arg1;
- (void)setHasDiscNumber:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasFileSize:(bool)arg1;
- (void)setHasIsCompilation:(bool)arg1;
- (void)setHasStoreAdamID:(bool)arg1;
- (void)setHasTrackNumber:(bool)arg1;
- (void)setHasYear:(bool)arg1;
- (void)setIsCompilation:(bool)arg1;
- (void)setStoreAdamID:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrackNumber:(int)arg1;
- (void)setYear:(int)arg1;
- (long long)storeAdamID;
- (id)title;
- (int)trackNumber;
- (void)writeTo:(id)arg1;
- (int)year;

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
