<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOBusiness.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOBusiness.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOBusiness : PBCodable <NSCopying> {
    NSMutableArray * _attributeKeyValues;
    NSMutableArray * _attributions;
    NSMutableArray * _categorys;
    GEOLatLng * _center;
    struct { 
        unsigned int uID : 1; 
        unsigned int isClosed : 1; 
    }  _has;
    bool  _isClosed;
    NSMutableArray * _localizedCategories;
    NSString * _mapsURL;
    NSString * _name;
    NSMutableArray * _openHours;
    NSString * _phoneticName;
    NSMutableArray * _photos;
    NSMutableArray * _placeDataAmendments;
    NSMutableArray * _ratings;
    NSMutableArray * _sources;
    NSMutableArray * _starRatings;
    NSString * _telephone;
    unsigned long long  _uID;
    NSString * _uRL;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *attributeKeyValues;
@property (nonatomic, retain) NSMutableArray *attributions;
@property (nonatomic, retain) NSMutableArray *categorys;
@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic) bool hasIsClosed;
@property (nonatomic, readonly) bool hasMapsURL;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasPhoneticName;
@property (nonatomic, readonly) bool hasTelephone;
@property (nonatomic) bool hasUID;
@property (nonatomic, readonly) bool hasURL;
@property (nonatomic) bool isClosed;
@property (nonatomic, retain) NSMutableArray *localizedCategories;
@property (nonatomic, retain) NSString *mapsURL;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSMutableArray *openHours;
@property (nonatomic, retain) NSString *phoneticName;
@property (nonatomic, retain) NSMutableArray *photos;
@property (nonatomic, retain) NSMutableArray *placeDataAmendments;
@property (nonatomic, retain) NSMutableArray *ratings;
@property (nonatomic, retain) NSMutableArray *sources;
@property (nonatomic, retain) NSMutableArray *starRatings;
@property (nonatomic, retain) NSString *telephone;
@property (nonatomic) unsigned long long uID;
@property (nonatomic, retain) NSString *uRL;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)attributeKeyValueType;
+ (Class)attributionType;
+ (Class)categoryType;
+ (Class)localizedCategoriesType;
+ (Class)openHoursType;
+ (Class)photoType;
+ (Class)placeDataAmendmentType;
+ (Class)ratingType;
+ (Class)sourceType;
+ (Class)starRatingType;

- (void).cxx_destruct;
- (void)addAttributeKeyValue:(id)arg1;
- (void)addAttribution:(id)arg1;
- (void)addCategory:(id)arg1;
- (void)addLocalizedCategories:(id)arg1;
- (void)addOpenHours:(id)arg1;
- (void)addPhoto:(id)arg1;
- (void)addPlaceDataAmendment:(id)arg1;
- (void)addRating:(id)arg1;
- (void)addSource:(id)arg1;
- (void)addStarRating:(id)arg1;
- (id)attributeKeyValueAtIndex:(unsigned long long)arg1;
- (id)attributeKeyValues;
- (unsigned long long)attributeKeyValuesCount;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (id)attributions;
- (unsigned long long)attributionsCount;
- (id)categoryAtIndex:(unsigned long long)arg1;
- (id)categorys;
- (unsigned long long)categorysCount;
- (id)center;
- (void)clearAttributeKeyValues;
- (void)clearAttributions;
- (void)clearCategorys;
- (void)clearLocalizedCategories;
- (void)clearOpenHours;
- (void)clearPhotos;
- (void)clearPlaceDataAmendments;
- (void)clearRatings;
- (void)clearSources;
- (void)clearStarRatings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCenter;
- (bool)hasIsClosed;
- (bool)hasMapsURL;
- (bool)hasName;
- (bool)hasPhoneticName;
- (bool)hasTelephone;
- (bool)hasUID;
- (bool)hasURL;
- (unsigned long long)hash;
- (id)initWithBusinessURL:(id)arg1 phoneNumber:(id)arg2 muid:(unsigned long long)arg3 attributionID:(id)arg4 sampleSizeForUserRatingScore:(unsigned int)arg5 normalizedUserRatingScore:(float)arg6;
- (id)initWithPlaceDataEntity:(id)arg1 rating:(id)arg2 hours:(id)arg3 reviews:(id)arg4 photos:(id)arg5 entityAttribution:(id)arg6;
- (bool)isClosed;
- (bool)isEqual:(id)arg1;
- (id)localizedCategories;
- (id)localizedCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedCategoriesCount;
- (id)mapsURL;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)openHours;
- (id)openHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)openHoursCount;
- (id)phoneticName;
- (id)photoAtIndex:(unsigned long long)arg1;
- (id)photos;
- (unsigned long long)photosCount;
- (id)placeDataAmendmentAtIndex:(unsigned long long)arg1;
- (id)placeDataAmendments;
- (unsigned long long)placeDataAmendmentsCount;
- (id)ratingAtIndex:(unsigned long long)arg1;
- (id)ratings;
- (unsigned long long)ratingsCount;
- (bool)readFrom:(id)arg1;
- (void)setAttributeKeyValues:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setCategorys:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setHasIsClosed:(bool)arg1;
- (void)setHasUID:(bool)arg1;
- (void)setIsClosed:(bool)arg1;
- (void)setLocalizedCategories:(id)arg1;
- (void)setMapsURL:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOpenHours:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (void)setPhotos:(id)arg1;
- (void)setPlaceDataAmendments:(id)arg1;
- (void)setRatings:(id)arg1;
- (void)setSources:(id)arg1;
- (void)setStarRatings:(id)arg1;
- (void)setTelephone:(id)arg1;
- (void)setUID:(unsigned long long)arg1;
- (void)setURL:(id)arg1;
- (id)sourceAtIndex:(unsigned long long)arg1;
- (id)sources;
- (unsigned long long)sourcesCount;
- (id)starRatingAtIndex:(unsigned long long)arg1;
- (id)starRatings;
- (unsigned long long)starRatingsCount;
- (id)telephone;
- (unsigned long long)uID;
- (id)uRL;
- (id)unknownFields;
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