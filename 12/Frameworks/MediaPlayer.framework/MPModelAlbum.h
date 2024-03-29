<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPModelAlbum.h</title>
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

/Frameworks/MediaPlayer.framework/MPModelAlbum.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPModelAlbum : MPModelObject

@property (nonatomic, retain) MPModelArtist *artist;
@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (getter=isClassical, nonatomic) bool classical;
@property (getter=isCompilation, nonatomic) bool compilation;
@property (nonatomic, copy) NSString *copyrightText;
@property (nonatomic) long long discCount;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic, retain) MPModelGenre *genre;
@property (nonatomic) bool hasCleanContent;
@property (nonatomic) bool hasExplicitContent;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (nonatomic, copy) NSDate *lastDevicePlaybackDate;
@property (getter=isLibraryAddEligible, nonatomic) bool libraryAddEligible;
@property (getter=isLibraryAdded, nonatomic) bool libraryAdded;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic) long long maximumItemTrackNumber;
@property (getter=isPreorder, nonatomic) bool preorder;
@property (nonatomic, copy) NSDateComponents *releaseDateComponents;
@property (nonatomic, retain) MPModelSong *representativeSong;
@property (nonatomic, copy) NSString *shortEditorNotes;
@property (nonatomic, readonly) bool shouldShowFullAlbum;
@property (nonatomic, copy) id /* block */ songPopularityBlock;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long trackCount;
@property (nonatomic) float volumeNormalization;
@property (nonatomic) long long year;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__artist_KEY;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__classical_KEY;
+ (id)__compilation_KEY;
+ (id)__copyrightText_KEY;
+ (id)__discCount_KEY;
+ (id)__editorNotes_KEY;
+ (id)__genre_KEY;
+ (id)__hasCleanContent_KEY;
+ (id)__hasExplicitContent_KEY;
+ (id)__keepLocalEnableState_KEY;
+ (id)__keepLocalManagedStatus_KEY;
+ (id)__lastDevicePlaybackDate_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__maximumItemTrackNumber_KEY;
+ (id)__preorder_KEY;
+ (id)__releaseDateComponents_KEY;
+ (id)__representativeSong_KEY;
+ (id)__shortEditorNotes_KEY;
+ (id)__songPopularityBlock_KEY;
+ (id)__title_KEY;
+ (id)__trackCount_KEY;
+ (id)__volumeNormalization_KEY;
+ (id)__year_KEY;
+ (id)kindWithSongKind:(id)arg1;
+ (id)kindWithSongKind:(id)arg1 options:(unsigned long long)arg2;
+ (id)kindWithVariants:(unsigned long long)arg1 songKind:(id)arg2;
+ (id)kindWithVariants:(unsigned long long)arg1 songKind:(id)arg2 options:(unsigned long long)arg3;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (bool)supportsKeepLocalStatusObservation;
+ (bool)supportsLibraryAddStatusObservation;
+ (bool)supportsLibraryRemoval;

- (id)artworkCatalog;
- (id)contentItemCollectionInfo;
- (id)humanDescription;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;
- (id)songPopularityForIdentifiers:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (id)MPC_modelObjectWithStoreFrontLocalEquivalentModelObject:(id)arg1;
- (id)_radioStationMatchMetadata;
- (id)mpc_protoContainerRepresentation;
- (id)mpc_radioContentReference;

// Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync

- (bool)shouldShowFullAlbum;

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
