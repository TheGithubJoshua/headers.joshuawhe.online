<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ACCMediaLibraryUpdateItem.h</title>
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

/PrivateFrameworks/AccessoryMediaLibrary.framework/ACCMediaLibraryUpdateItem.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary (1)
 */

@interface ACCMediaLibraryUpdateItem : NSObject {
    NSString * _albumArtist;
    unsigned long long  _albumArtistPersistentID;
    unsigned short  _albumDiscCount;
    unsigned short  _albumDiscNumber;
    unsigned long long  _albumPersistentID;
    NSString * _albumTitle;
    unsigned short  _albumTrackCount;
    unsigned short  _albumTrackNumber;
    NSString * _artist;
    unsigned long long  _artistPersistentID;
    unsigned short  _chapterCount;
    NSString * _composer;
    unsigned long long  _composerPersistentID;
    unsigned int  _duration;
    NSString * _genre;
    unsigned long long  _genrePersistentID;
    bool  _local;
    NSString * _mediaLibraryUID;
    bool  _partOfCompilation;
    unsigned long long  _persistentID;
    int  _rating;
    NSString * _revision;
    NSString * _title;
    int  _type;
    unsigned long long  _validMask;
}

@property (nonatomic, retain) NSString *albumArtist;
@property (nonatomic) unsigned long long albumArtistPersistentID;
@property (nonatomic) unsigned short albumDiscCount;
@property (nonatomic) unsigned short albumDiscNumber;
@property (nonatomic) unsigned long long albumPersistentID;
@property (nonatomic, retain) NSString *albumTitle;
@property (nonatomic) unsigned short albumTrackCount;
@property (nonatomic) unsigned short albumTrackNumber;
@property (nonatomic, retain) NSString *artist;
@property (nonatomic) unsigned long long artistPersistentID;
@property (nonatomic) unsigned short chapterCount;
@property (nonatomic, retain) NSString *composer;
@property (nonatomic) unsigned long long composerPersistentID;
@property (nonatomic) unsigned int duration;
@property (nonatomic, retain) NSString *genre;
@property (nonatomic) unsigned long long genrePersistentID;
@property (nonatomic) bool local;
@property (nonatomic, retain) NSString *mediaLibraryUID;
@property (nonatomic) bool partOfCompilation;
@property (nonatomic) unsigned long long persistentID;
@property (nonatomic) int rating;
@property (nonatomic, retain) NSString *revision;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) int type;
@property (nonatomic, readonly) unsigned long long validMask;

- (void).cxx_destruct;
- (id)albumArtist;
- (unsigned long long)albumArtistPersistentID;
- (unsigned short)albumDiscCount;
- (unsigned short)albumDiscNumber;
- (unsigned long long)albumPersistentID;
- (id)albumTitle;
- (unsigned short)albumTrackCount;
- (unsigned short)albumTrackNumber;
- (id)artist;
- (unsigned long long)artistPersistentID;
- (unsigned short)chapterCount;
- (id)composer;
- (unsigned long long)composerPersistentID;
- (id)copyDict;
- (id)debugDescription;
- (id)description;
- (unsigned int)duration;
- (void)fillStruct:(struct { unsigned int x1; unsigned long long x2; char *x3; unsigned char x4; unsigned char x5; unsigned int x6; unsigned long long x7; char *x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned long long x13; char *x14; unsigned long long x15; char *x16; unsigned long long x17; char *x18; unsigned long long x19; char *x20; unsigned char x21; unsigned char x22; unsigned short x23; }*)arg1;
- (id)genre;
- (unsigned long long)genrePersistentID;
- (id)initWithMediaLibrary:(id)arg1 dict:(id)arg2;
- (id)initWithMediaLibrary:(id)arg1 persistentID:(unsigned long long)arg2 revision:(id)arg3;
- (bool)local;
- (id)mediaLibraryUID;
- (bool)partOfCompilation;
- (unsigned long long)persistentID;
- (int)rating;
- (id)revision;
- (void)setAlbumArtist:(id)arg1;
- (void)setAlbumArtistPersistentID:(unsigned long long)arg1;
- (void)setAlbumDiscCount:(unsigned short)arg1;
- (void)setAlbumDiscNumber:(unsigned short)arg1;
- (void)setAlbumPersistentID:(unsigned long long)arg1;
- (void)setAlbumTitle:(id)arg1;
- (void)setAlbumTrackCount:(unsigned short)arg1;
- (void)setAlbumTrackNumber:(unsigned short)arg1;
- (void)setArtist:(id)arg1;
- (void)setArtistPersistentID:(unsigned long long)arg1;
- (void)setChapterCount:(unsigned short)arg1;
- (void)setComposer:(id)arg1;
- (void)setComposerPersistentID:(unsigned long long)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setGenre:(id)arg1;
- (void)setGenrePersistentID:(unsigned long long)arg1;
- (void)setLocal:(bool)arg1;
- (void)setMediaLibraryUID:(id)arg1;
- (void)setPartOfCompilation:(bool)arg1;
- (void)setPersistentID:(unsigned long long)arg1;
- (void)setRating:(int)arg1;
- (void)setRevision:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (id)title;
- (int)type;
- (unsigned long long)validMask;

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