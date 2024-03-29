<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MusicProductTracklistTableViewConfiguration.h</title>
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

/PrivateFrameworks/FuseUI.framework/MusicProductTracklistTableViewConfiguration.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI (1)
 */

@interface MusicProductTracklistTableViewConfiguration : MusicLibraryBrowseTableViewConfiguration {
    NSString * _completeOfferLocalizedTitle;
    MusicCompositeEntityViewDescriptor * _compositeEntityViewDescriptor;
    MusicEntityViewDescriptor * _copyrightEntityViewDescriptor;
    <MusicEntityProviding> * _copyrightSourceEntityProvider;
    <MusicEntityProviding> * _entityProvider;
    MusicMediaDetailTintInformation * _mediaDetailTintInformation;
    long long  _prominentTrackStoreID;
    MusicEntityViewDescriptor * _showCompleteOfferEntityViewDescriptor;
    MusicEntityViewDescriptor * _shuffleEntityViewDescriptor;
    MusicMediaProductTracklistTableViewDescriptor * _tracklistTableViewDescriptor;
    bool  _wantsArtistName;
    bool  _wantsArtwork;
    bool  _wantsCompleteOffer;
    bool  _wantsCopyrightText;
}

@property (nonatomic, readonly) MusicCompositeEntityViewDescriptor *_compositeEntityViewDescriptor;
@property (nonatomic, readonly) MusicEntityViewDescriptor *_copyrightEntityViewDescriptor;
@property (nonatomic, readonly) MusicEntityViewDescriptor *_showCompleteOfferEntityViewDescriptor;
@property (nonatomic, readonly) MusicEntityViewDescriptor *_shuffleEntityViewDescriptor;
@property (nonatomic, readonly) MusicMediaProductTracklistTableViewDescriptor *_tracklistTableViewDescriptor;
@property (nonatomic, copy) NSString *completeOfferLocalizedTitle;
@property (nonatomic, retain) <MusicEntityProviding> *copyrightSourceEntityProvider;
@property (nonatomic, readonly) <MusicEntityProviding> *entityProvider;
@property (nonatomic, copy) MusicMediaDetailTintInformation *mediaDetailTintInformation;
@property (nonatomic) long long prominentTrackStoreID;
@property (nonatomic, readonly) MusicMediaProductTracklistTableViewDescriptor *tracklistTableViewDescriptor;
@property (nonatomic) bool wantsArtistName;
@property (nonatomic) bool wantsArtwork;
@property (nonatomic) bool wantsCompleteOffer;
@property (nonatomic) bool wantsCopyrightText;

+ (Class)tracklistItemContentDescriptorClass;

- (void).cxx_destruct;
- (id)_compositeEntityViewDescriptor;
- (void)_configureCopyrightViewDescriptorWithTintInformation:(id)arg1;
- (void)_configureShowCompleteAlbumViewDescriptorWithTintInformation:(id)arg1;
- (void)_configureShuffleEntityViewDescriptorWithTintInformation:(id)arg1;
- (void)_configureTracklistTableViewDescriptorWithTintInformation:(id)arg1;
- (id)_copyrightEntityViewDescriptor;
- (id)_loadCopyrightEntityViewDescriptorWithSourceEntityProvider:(id)arg1;
- (id)_loadShowCompleteEntityViewDescriptorWithCompleteOfferEntityProvider:(id)arg1;
- (id)_loadShuffleEntityViewDescriptorWithSourceEntityProvider:(id)arg1;
- (id)_loadTracklistTableViewDescriptor;
- (id)_showCompleteOfferEntityViewDescriptor;
- (id)_shuffleEntityViewDescriptor;
- (id)_tracklistTableViewDescriptor;
- (id)completeOfferLocalizedTitle;
- (id)copyrightSourceEntityProvider;
- (id)entityProvider;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initWithEntityProvider:(id)arg1;
- (id)loadEntityViewDescriptor;
- (id)mediaDetailTintInformation;
- (id)newSelectionEntityValueContext;
- (id)newViewController;
- (long long)prominentTrackStoreID;
- (void)setCompleteOfferLocalizedTitle:(id)arg1;
- (void)setCopyrightSourceEntityProvider:(id)arg1;
- (void)setMediaDetailTintInformation:(id)arg1;
- (void)setProminentTrackStoreID:(long long)arg1;
- (void)setWantsArtistName:(bool)arg1;
- (void)setWantsArtwork:(bool)arg1;
- (void)setWantsCompleteOffer:(bool)arg1;
- (void)setWantsCopyrightText:(bool)arg1;
- (id)tracklistTableViewDescriptor;
- (bool)wantsArtistName;
- (bool)wantsArtwork;
- (bool)wantsCompleteOffer;
- (bool)wantsCopyrightText;

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
