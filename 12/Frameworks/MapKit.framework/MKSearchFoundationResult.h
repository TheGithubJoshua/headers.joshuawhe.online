<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MKSearchFoundationResult.h</title>
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

/Frameworks/MapKit.framework/MKSearchFoundationResult.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MapKit.framework/MapKit (1.0)
 */

@interface MKSearchFoundationResult : SFSearchResult <MKLocationManagerObserver> {
    SFActionItem * _action;
    id  _attributionObserver;
    NSBundle * _bundle;
    NSString * _bundleID;
    NSArray * _descriptions;
    MKSearchFoundationBusinessHoursAndDistanceRichText * _fourthLineDisplayedText;
    NSMutableArray * _fourthLineText;
    unsigned long long  _iconSize;
    MKLocationManager * _locationManager;
    MKMapItem * _mapItem;
    NSData * _mapsData;
    unsigned long long  _mksfResultType;
    bool  _optionSmallerScreen;
    MKSearchFoundationRichText * _secondLineDisplayedText;
    MKSearchFoundationRichText * _thirdLineDisplayedText;
    SFImage * _thumbnail;
    SFText * _title;
}

@property (nonatomic, retain) id attributionObserver;
@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MKSearchFoundationBusinessHoursAndDistanceRichText *fourthLineDisplayedText;
@property (nonatomic, retain) NSMutableArray *fourthLineText;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic, retain) MKLocationManager *locationManager;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, retain) NSData *mapsData;
@property (nonatomic) unsigned long long mksfResultType;
@property (nonatomic) bool optionSmallerScreen;
@property (nonatomic, retain) MKSearchFoundationRichText *secondLineDisplayedText;
@property (readonly) Class superclass;
@property (nonatomic, retain) MKSearchFoundationRichText *thirdLineDisplayedText;

+ (id)styledStringFromStringArray:(id)arg1;

- (void).cxx_destruct;
- (id)_brandURL;
- (id)_businessAddress;
- (id)_businessCategory;
- (id)_businessHoursAndDistance;
- (id)_businessPriceAndReviewText;
- (void)_commonInit;
- (id)_defaultRichTextItems;
- (bool)_isSmallerScreen;
- (id)_localizedMessageBusinessHours;
- (void)_locationApprovalDidChange;
- (id)action;
- (id)attributionObserver;
- (id)bundle;
- (id)bundleID;
- (void)dealloc;
- (id)descriptions;
- (id)fourthLineDisplayedText;
- (id)fourthLineText;
- (unsigned long long)iconSize;
- (id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 bundle:(id)arg3;
- (id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3;
- (id)initWithMapItem:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3;
- (id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 bundle:(id)arg3;
- (id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3;
- (id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3;
- (id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 bundle:(id)arg3;
- (id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3;
- (id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned long long)arg2 currentLocation:(id)arg3;
- (id)locationManager;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)mapItem;
- (id)mapItemFromFavoritesData:(id)arg1;
- (id)mapsData;
- (unsigned long long)mksfResultType;
- (bool)optionSmallerScreen;
- (id)secondLineDisplayedText;
- (void)setAction:(id)arg1;
- (void)setAttributionObserver:(id)arg1;
- (void)setBundle:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDescriptions:(id)arg1;
- (void)setFourthLineDisplayedText:(id)arg1;
- (void)setFourthLineText:(id)arg1;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMapsData:(id)arg1;
- (void)setMksfResultType:(unsigned long long)arg1;
- (void)setOptionSmallerScreen:(bool)arg1;
- (void)setSecondLineDisplayedText:(id)arg1;
- (void)setThirdLineDisplayedText:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)thirdLineDisplayedText;
- (id)thumbnail;
- (id)title;

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