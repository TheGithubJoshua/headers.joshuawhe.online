<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOStructuredAddress.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOStructuredAddress.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOStructuredAddress : PBCodable <GEOURLSerializable, NSCopying> {
    NSString * _administrativeArea;
    NSString * _administrativeAreaCode;
    NSMutableArray * _areaOfInterests;
    NSString * _country;
    NSString * _countryCode;
    NSMutableArray * _dependentLocalitys;
    NSString * _fullThoroughfare;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _geoIds;
    NSString * _inlandWater;
    NSString * _locality;
    NSString * _ocean;
    NSString * _postCode;
    NSString * _postCodeExtension;
    NSString * _postCodeFull;
    NSString * _premise;
    NSString * _premises;
    NSString * _subAdministrativeArea;
    NSString * _subLocality;
    NSMutableArray * _subPremises;
    NSString * _subThoroughfare;
    NSString * _thoroughfare;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *administrativeArea;
@property (nonatomic, retain) NSString *administrativeAreaCode;
@property (nonatomic, retain) NSMutableArray *areaOfInterests;
@property (nonatomic, retain) NSString *country;
@property (nonatomic, retain) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSMutableArray *dependentLocalitys;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *fullThoroughfare;
@property (nonatomic, readonly) long long*geoIds;
@property (nonatomic, readonly) unsigned long long geoIdsCount;
@property (nonatomic, readonly) bool hasAdministrativeArea;
@property (nonatomic, readonly) bool hasAdministrativeAreaCode;
@property (nonatomic, readonly) bool hasCountry;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasFullThoroughfare;
@property (nonatomic, readonly) bool hasInlandWater;
@property (nonatomic, readonly) bool hasLocality;
@property (nonatomic, readonly) bool hasOcean;
@property (nonatomic, readonly) bool hasPostCode;
@property (nonatomic, readonly) bool hasPostCodeExtension;
@property (nonatomic, readonly) bool hasPostCodeFull;
@property (nonatomic, readonly) bool hasPremise;
@property (nonatomic, readonly) bool hasPremises;
@property (nonatomic, readonly) bool hasSubAdministrativeArea;
@property (nonatomic, readonly) bool hasSubLocality;
@property (nonatomic, readonly) bool hasSubThoroughfare;
@property (nonatomic, readonly) bool hasThoroughfare;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *inlandWater;
@property (nonatomic, retain) NSString *locality;
@property (nonatomic, retain) NSString *ocean;
@property (nonatomic, retain) NSString *postCode;
@property (nonatomic, retain) NSString *postCodeExtension;
@property (nonatomic, retain) NSString *postCodeFull;
@property (nonatomic, retain) NSString *premise;
@property (nonatomic, retain) NSString *premises;
@property (nonatomic, retain) NSString *subAdministrativeArea;
@property (nonatomic, retain) NSString *subLocality;
@property (nonatomic, retain) NSMutableArray *subPremises;
@property (nonatomic, retain) NSString *subThoroughfare;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *thoroughfare;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (Class)areaOfInterestType;
+ (Class)dependentLocalityType;
+ (Class)subPremiseType;

- (void).cxx_destruct;
- (bool)_isEquivalentURLRepresentationTo:(id)arg1;
- (void)addAreaOfInterest:(id)arg1;
- (void)addDependentLocality:(id)arg1;
- (void)addGeoId:(long long)arg1;
- (void)addSubPremise:(id)arg1;
- (id)administrativeArea;
- (id)administrativeAreaCode;
- (id)areaOfInterestAtIndex:(unsigned long long)arg1;
- (id)areaOfInterests;
- (unsigned long long)areaOfInterestsCount;
- (void)clearAreaOfInterests;
- (void)clearDependentLocalitys;
- (void)clearGeoIds;
- (void)clearSubPremises;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)countryCode;
- (void)dealloc;
- (id)dependentLocalityAtIndex:(unsigned long long)arg1;
- (id)dependentLocalitys;
- (unsigned long long)dependentLocalitysCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fullThoroughfare;
- (long long)geoIdAtIndex:(unsigned long long)arg1;
- (long long*)geoIds;
- (unsigned long long)geoIdsCount;
- (bool)hasAdministrativeArea;
- (bool)hasAdministrativeAreaCode;
- (bool)hasCountry;
- (bool)hasCountryCode;
- (bool)hasFullThoroughfare;
- (bool)hasInlandWater;
- (bool)hasLocality;
- (bool)hasOcean;
- (bool)hasPostCode;
- (bool)hasPostCodeExtension;
- (bool)hasPostCodeFull;
- (bool)hasPremise;
- (bool)hasPremises;
- (bool)hasSubAdministrativeArea;
- (bool)hasSubLocality;
- (bool)hasSubThoroughfare;
- (bool)hasThoroughfare;
- (unsigned long long)hash;
- (id)initWithAddressDictionary:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (id)inlandWater;
- (bool)isEqual:(id)arg1;
- (id)locality;
- (void)mergeFrom:(id)arg1;
- (id)ocean;
- (id)postCode;
- (id)postCodeExtension;
- (id)postCodeFull;
- (id)premise;
- (id)premises;
- (bool)readFrom:(id)arg1;
- (void)setAdministrativeArea:(id)arg1;
- (void)setAdministrativeAreaCode:(id)arg1;
- (void)setAreaOfInterests:(id)arg1;
- (void)setCountry:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDependentLocalitys:(id)arg1;
- (void)setFullThoroughfare:(id)arg1;
- (void)setGeoIds:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setInlandWater:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setOcean:(id)arg1;
- (void)setPostCode:(id)arg1;
- (void)setPostCodeExtension:(id)arg1;
- (void)setPostCodeFull:(id)arg1;
- (void)setPremise:(id)arg1;
- (void)setPremises:(id)arg1;
- (void)setSubAdministrativeArea:(id)arg1;
- (void)setSubLocality:(id)arg1;
- (void)setSubPremises:(id)arg1;
- (void)setSubThoroughfare:(id)arg1;
- (void)setThoroughfare:(id)arg1;
- (id)subAdministrativeArea;
- (id)subLocality;
- (id)subPremiseAtIndex:(unsigned long long)arg1;
- (id)subPremises;
- (unsigned long long)subPremisesCount;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)unknownFields;
- (id)urlRepresentation;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

- (id)singleLineAddress;

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
