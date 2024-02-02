<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VUIVideosPlayable.h</title>
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

/PrivateFrameworks/VideosUI.framework/VUIVideosPlayable.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI (282.60.36)
 */

@interface VUIVideosPlayable : NSObject {
    NSString * _bookmarkID;
    VUIContentMetadata * _metadata;
    NSURL * _previewArtwork;
    NSDictionary * _videosPlayableDict;
}

@property (nonatomic, readonly) NSString *adamID;
@property (nonatomic, readonly) NSString *bookmarkID;
@property (nonatomic, readonly) NSString *buyParams;
@property (nonatomic, readonly) NSString *canonicalID;
@property (nonatomic, readonly) NSString *channelID;
@property (nonatomic, readonly) NSString *channelName;
@property (nonatomic, readonly) bool disableScrubbing;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly) NSString *externalServiceID;
@property (nonatomic, readonly) VUIExtrasInfo *extrasInfo;
@property (nonatomic, readonly) NSDictionary *fpsAdditionalServerParams;
@property (nonatomic, readonly) NSURL *fpsCertificateURL;
@property (nonatomic, readonly) NSURL *fpsKeyServerURL;
@property (nonatomic, readonly) NSURL *fpsNonceURL;
@property (nonatomic, readonly) NSNumber *frequencyOfAgeConfirmation;
@property (nonatomic, readonly) NSURL *hlsURL;
@property (nonatomic, readonly) bool isExternal;
@property (nonatomic, readonly) bool isMovie;
@property (nonatomic, readonly) bool isRental;
@property (nonatomic, readonly) NSString *liveStreamServiceID;
@property (nonatomic, readonly) NSDictionary *mediaMetrics;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) VUIContentMetadata *metadata;
@property (nonatomic, readonly) NSURL *playbackURL;
@property (nonatomic, readonly) NSURL *previewArtwork;
@property (nonatomic, readonly) NSNumber *ratingValue;
@property (nonatomic, readonly) NSString *referenceID;
@property (nonatomic, readonly) NSNumber *rentalID;
@property (nonatomic, readonly) NSNumber *requiredAgeForPlayback;
@property (nonatomic, readonly) NSNumber *resumeTime;
@property (nonatomic, readonly) NSDate *resumeTimeTimeStamp;
@property (nonatomic, readonly) NSURL *scrubVideoURL;
@property (nonatomic, readonly) NSString *seasonCanonicalID;
@property (nonatomic, readonly) NSString *showCanonicalID;
@property (nonatomic, readonly) NSURL *stopURL;
@property (nonatomic, readonly) NSDictionary *tokenServerParams;
@property (nonatomic, readonly) NSURL *tokenServerURL;
@property (nonatomic, readonly) NSURL *tvAppDeeplinkURL;
@property (nonatomic, readonly) NSDictionary *vpafMetrics;

+ (id)videosPlayablesFromDictionaries:(id)arg1 andMetadataDictionary:(id)arg2;

- (void).cxx_destruct;
- (id)adamID;
- (id)bookmarkID;
- (id)buyParams;
- (id)canonicalID;
- (id)channelID;
- (id)channelName;
- (bool)disableScrubbing;
- (id)externalID;
- (id)externalServiceID;
- (id)extrasInfo;
- (id)fpsAdditionalServerParams;
- (id)fpsCertificateURL;
- (id)fpsKeyServerURL;
- (id)fpsNonceURL;
- (id)frequencyOfAgeConfirmation;
- (id)hlsURL;
- (id)initWithDictionary:(id)arg1 andMetadataDictionary:(id)arg2;
- (bool)isExternal;
- (bool)isMovie;
- (bool)isRental;
- (id)liveStreamServiceID;
- (id)mediaMetrics;
- (id)mediaType;
- (id)metadata;
- (id)playbackURL;
- (id)previewArtwork;
- (id)ratingValue;
- (id)referenceID;
- (id)rentalID;
- (id)requiredAgeForPlayback;
- (id)resumeTime;
- (id)resumeTimeTimeStamp;
- (id)scrubVideoURL;
- (id)seasonCanonicalID;
- (id)showCanonicalID;
- (id)stopURL;
- (id)tokenServerParams;
- (id)tokenServerURL;
- (id)tvAppDeeplinkURL;
- (id)vpafMetrics;

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