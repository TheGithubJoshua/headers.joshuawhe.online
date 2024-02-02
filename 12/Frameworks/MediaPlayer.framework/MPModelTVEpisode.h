<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPModelTVEpisode.h</title>
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

/Frameworks/MediaPlayer.framework/MPModelTVEpisode.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPModelTVEpisode : MPModelObject

@property (nonatomic, copy) id /* block */ artworkCatalogBlock;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic) double duration;
@property (nonatomic) long long episodeNumber;
@property (nonatomic) long long episodeType;
@property (nonatomic, copy) NSString *episodeTypeDisplayName;
@property (nonatomic) long long explicitRating;
@property (nonatomic) bool hasCloudSyncSource;
@property (nonatomic) long long keepLocalEnableState;
@property (nonatomic) long long keepLocalManagedStatus;
@property (getter=isLibraryAddEligible, nonatomic) bool libraryAddEligible;
@property (getter=isLibraryAdded, nonatomic) bool libraryAdded;
@property (nonatomic, copy) NSDate *libraryAddedDate;
@property (nonatomic, retain) MPModelFileAsset *localFileAsset;
@property (getter=isMusicShow, nonatomic) bool musicShow;
@property (nonatomic, retain) MPModelPlaybackPosition *playbackPosition;
@property (nonatomic, copy) NSDate *releaseDate;
@property (nonatomic, retain) MPModelTVSeason *season;
@property (nonatomic, retain) MPModelTVShow *show;
@property (nonatomic, retain) MPModelStoreAsset *storeAsset;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__artworkCatalogBlock_KEY;
+ (id)__descriptionText_KEY;
+ (id)__duration_KEY;
+ (id)__episodeNumber_KEY;
+ (id)__episodeTypeDisplayName_KEY;
+ (id)__episodeType_KEY;
+ (id)__explicitRating_KEY;
+ (id)__hasCloudSyncSource_KEY;
+ (id)__keepLocalEnableState_KEY;
+ (id)__keepLocalManagedStatus_KEY;
+ (id)__libraryAddEligible_KEY;
+ (id)__libraryAddedDate_KEY;
+ (id)__libraryAdded_KEY;
+ (id)__localFileAsset_KEY;
+ (id)__musicShow_KEY;
+ (id)__playbackPosition_KEY;
+ (id)__releaseDate_KEY;
+ (id)__season_KEY;
+ (id)__show_KEY;
+ (id)__storeAsset_KEY;
+ (id)__title_KEY;
+ (id)kindWithVariants:(unsigned long long)arg1;
+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (id)requiredKeepLocalStatusObservationProperties;
+ (id)requiredLibraryAddStatusObservationProperties;
+ (id)requiredLibraryRemovalProperties;
+ (id)requiredStoreLibraryPersonalizationProperties;
+ (id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1;
+ (bool)storeItemMetadataRequestNeedsPersonalizationForIdentifiers:(id)arg1;
+ (bool)supportsKeepLocalStatusObservation;
+ (bool)supportsLibraryAddStatusObservation;
+ (bool)supportsLibraryRemoval;

- (id)artworkCatalog;
- (id)humanDescription;
- (struct MPLibraryAddStatusObserverConfiguration { bool x1; bool x2; bool x3; bool x4; bool x5; })libraryAddStatusObserverConfiguration;
- (long long)libraryRemovalSupportedOptions;
- (id)mediaItemPropertyValues;
- (id)newKeepLocalStatusObserverConfiguration;
- (id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg1;
- (id)personalizationScopedPropertiesForProperties:(id)arg1;
- (id)relativeModelObjectForStoreLibraryPersonalization;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)mqf_requiredPlaybackProperties;

- (id)MPC_modelObjectWithStoreFrontLocalEquivalentModelObject:(id)arg1;
- (id)mpc_protoItemRepresentation;
- (void)mqf_configurePlaybackItemMetadata:(id)arg1;
- (id)mqf_newPlaybackItemMetadata;
- (id)mqf_playbackItemMetadataModelObject;

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