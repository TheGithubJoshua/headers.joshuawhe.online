<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SAMovieMovie.h</title>
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

/PrivateFrameworks/SAObjects.framework/SAMovieMovie.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects (1)
 */

@interface SAMovieMovie : SADomainObject

@property (nonatomic, copy) NSArray *actors;
@property (nonatomic, copy) NSArray *directors;
@property (nonatomic, copy) NSArray *genres;
@property (nonatomic, copy) NSURL *hiResTrailerUri;
@property (nonatomic, copy) NSURL *iTunesUri;
@property (nonatomic) bool is3d;
@property (nonatomic, copy) NSNumber *isAvailableOnItunesForPurchase;
@property (nonatomic, copy) NSNumber *isAvailableOnItunesForRent;
@property (nonatomic, copy) NSURL *lowResTrailerUri;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *posterImages;
@property (nonatomic, copy) NSURL *posterUri;
@property (nonatomic, copy) NSNumber *qualityRating;
@property (nonatomic, copy) NSString *rating;
@property (nonatomic, retain) SALocalSearchReviewList *reviews;
@property (nonatomic, copy) NSURL *rottenTomatoesUri;
@property (nonatomic) long long runtimeInMinutes;
@property (nonatomic, copy) NSArray *studios;
@property (nonatomic, copy) NSString *synopsis;
@property (nonatomic, copy) NSString *theaterShowtimeSearchRegionDescription;
@property (nonatomic, copy) NSArray *theaterShowtimes;
@property (nonatomic, copy) NSDate *theatricalReleaseDate;

+ (id)movie;
+ (id)movieWithDictionary:(id)arg1 context:(id)arg2;

- (id)actors;
- (id)directors;
- (id)encodedClassName;
- (id)genres;
- (id)groupIdentifier;
- (id)hiResTrailerUri;
- (id)iTunesUri;
- (bool)is3d;
- (id)isAvailableOnItunesForPurchase;
- (id)isAvailableOnItunesForRent;
- (id)lowResTrailerUri;
- (id)name;
- (id)posterImages;
- (id)posterUri;
- (id)qualityRating;
- (id)rating;
- (id)reviews;
- (id)rottenTomatoesUri;
- (long long)runtimeInMinutes;
- (void)setActors:(id)arg1;
- (void)setDirectors:(id)arg1;
- (void)setGenres:(id)arg1;
- (void)setHiResTrailerUri:(id)arg1;
- (void)setITunesUri:(id)arg1;
- (void)setIs3d:(bool)arg1;
- (void)setIsAvailableOnItunesForPurchase:(id)arg1;
- (void)setIsAvailableOnItunesForRent:(id)arg1;
- (void)setLowResTrailerUri:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPosterImages:(id)arg1;
- (void)setPosterUri:(id)arg1;
- (void)setQualityRating:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setReviews:(id)arg1;
- (void)setRottenTomatoesUri:(id)arg1;
- (void)setRuntimeInMinutes:(long long)arg1;
- (void)setStudios:(id)arg1;
- (void)setSynopsis:(id)arg1;
- (void)setTheaterShowtimeSearchRegionDescription:(id)arg1;
- (void)setTheaterShowtimes:(id)arg1;
- (void)setTheatricalReleaseDate:(id)arg1;
- (id)studios;
- (id)synopsis;
- (id)theaterShowtimeSearchRegionDescription;
- (id)theaterShowtimes;
- (id)theatricalReleaseDate;

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