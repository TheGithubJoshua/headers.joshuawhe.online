<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ACCMediaLibraryUpdatePlaylistContentItem.h</title>
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

/PrivateFrameworks/AccessoryMediaLibrary.framework/ACCMediaLibraryUpdatePlaylistContentItem.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary (1)
 */

@interface ACCMediaLibraryUpdatePlaylistContentItem : NSObject {
    NSString * _albumArtist;
    NSString * _albumTitle;
    NSString * _artist;
    NSString * _composer;
    NSString * _genre;
    NSString * _mediaLibraryUID;
    unsigned long long  _persistentID;
    unsigned long long  _playlistPersistentID;
    NSString * _title;
    unsigned long long  _validMask;
}

@property (nonatomic, retain) NSString *albumArtist;
@property (nonatomic, retain) NSString *albumTitle;
@property (nonatomic, retain) NSString *artist;
@property (nonatomic, retain) NSString *composer;
@property (nonatomic, retain) NSString *genre;
@property (nonatomic, retain) NSString *mediaLibraryUID;
@property (nonatomic) unsigned long long persistentID;
@property (nonatomic) unsigned long long playlistPersistentID;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) unsigned long long validMask;

- (void).cxx_destruct;
- (id)albumArtist;
- (id)albumTitle;
- (id)artist;
- (id)composer;
- (id)copyNSRepresentation:(int)arg1;
- (id)debugDescription;
- (id)description;
- (void)fillStruct:(struct { unsigned int x1; unsigned long long x2; char *x3; char *x4; char *x5; char *x6; char *x7; char *x8; }*)arg1;
- (id)genre;
- (id)initWithMediaLibrary:(id)arg1 persistentID:(unsigned long long)arg2 playlistPersistentID:(unsigned long long)arg3;
- (id)initWithMediaLibrary:(id)arg1 playlistPersistentID:(unsigned long long)arg2 dict:(id)arg3;
- (id)mediaLibraryUID;
- (unsigned long long)persistentID;
- (unsigned long long)playlistPersistentID;
- (void)setAlbumArtist:(id)arg1;
- (void)setAlbumTitle:(id)arg1;
- (void)setArtist:(id)arg1;
- (void)setComposer:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setMediaLibraryUID:(id)arg1;
- (void)setPersistentID:(unsigned long long)arg1;
- (void)setPlaylistPersistentID:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
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