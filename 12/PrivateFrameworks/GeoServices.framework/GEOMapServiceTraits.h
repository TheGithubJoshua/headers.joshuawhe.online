<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOMapServiceTraits.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOMapServiceTraits.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOMapServiceTraits : PBCodable <NSCopying> {
    int  _action;
    NSString * _analyticsAppIdentifier;
    bool  _appDarkMode;
    NSString * _appIdentifier;
    NSString * _appMajorVersion;
    NSString * _appMinorVersion;
    GEOAutomobileOptions * _automobileOptions;
    int  _carHeadunitConnectionType;
    int  _carHeadunitInteractionModel;
    NSString * _carHeadunitManufacturer;
    NSString * _carHeadunitModel;
    double  _carHeadunitPixelHeight;
    double  _carHeadunitPixelWidth;
    int  _deviceBatteryState;
    bool  _deviceDarkMode;
    NSMutableArray * _deviceDisplayLanguages;
    bool  _deviceInVehicle;
    int  _deviceInterfaceOrientation;
    NSString * _deviceKeyboardLocale;
    GEOLocation * _deviceLocation;
    NSString * _deviceSpokenLocale;
    NSString * _displayRegion;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _engineTypes;
    struct { 
        unsigned int sessionId : 1; 
        unsigned int carHeadunitPixelHeight : 1; 
        unsigned int carHeadunitPixelWidth : 1; 
        unsigned int mapZoomLevel : 1; 
        unsigned int sessionRelativeTimestamp : 1; 
        unsigned int action : 1; 
        unsigned int carHeadunitConnectionType : 1; 
        unsigned int carHeadunitInteractionModel : 1; 
        unsigned int deviceBatteryState : 1; 
        unsigned int deviceInterfaceOrientation : 1; 
        unsigned int httpRequestPriority : 1; 
        unsigned int mode : 1; 
        unsigned int photosCount : 1; 
        unsigned int requestMode : 1; 
        unsigned int reviewUserPhotosCount : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int source : 1; 
        unsigned int timeSinceMapEnteredForeground : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
        unsigned int appDarkMode : 1; 
        unsigned int deviceDarkMode : 1; 
        unsigned int deviceInVehicle : 1; 
        unsigned int isAPICall : 1; 
        unsigned int isRedoSearch : 1; 
        unsigned int isRefund : 1; 
        unsigned int isSettlement : 1; 
        unsigned int navigating : 1; 
        unsigned int supportDirectionIntentAutocomplete : 1; 
        unsigned int supportDirectionIntentSearch : 1; 
        unsigned int supportDymSuggestion : 1; 
        unsigned int supportUnresolvedDirectionIntent : 1; 
        unsigned int supportsBrandFallback : 1; 
        unsigned int useBackgroundUrl : 1; 
        unsigned int wantsBrandIcon : 1; 
    }  _has;
    NSMutableArray * _historicalLocations;
    unsigned int  _httpRequestPriority;
    bool  _isAPICall;
    bool  _isRedoSearch;
    bool  _isRefund;
    bool  _isSettlement;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _knownClientResolvedTypes;
    GEOMapRegion * _mapRegion;
    double  _mapZoomLevel;
    int  _mode;
    bool  _navigating;
    NSMutableArray * _photoSizes;
    unsigned int  _photosCount;
    NSString * _providerID;
    int  _requestMode;
    NSMutableArray * _reviewUserPhotoSizes;
    unsigned int  _reviewUserPhotosCount;
    unsigned int  _sequenceNumber;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionId;
    double  _sessionRelativeTimestamp;
    int  _source;
    bool  _supportDirectionIntentAutocomplete;
    bool  _supportDirectionIntentSearch;
    bool  _supportDymSuggestion;
    bool  _supportUnresolvedDirectionIntent;
    bool  _supportsBrandFallback;
    unsigned int  _timeSinceMapEnteredForeground;
    unsigned int  _timeSinceMapViewportChanged;
    GEOTransitOptions * _transitOptions;
    GEOTraitsTransitScheduleFilter * _transitScheduleFilter;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _transportTypes;
    PBUnknownFields * _unknownFields;
    bool  _useBackgroundUrl;
    GEOPDVenueIdentifier * _venueIdentifier;
    GEOWalkingOptions * _walkingOptions;
    bool  _wantsBrandIcon;
}

@property (nonatomic) int action;
@property (nonatomic, retain) NSString *analyticsAppIdentifier;
@property (nonatomic) bool appDarkMode;
@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, retain) NSString *appMajorVersion;
@property (nonatomic, retain) NSString *appMinorVersion;
@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic) int carHeadunitConnectionType;
@property (nonatomic) int carHeadunitInteractionModel;
@property (nonatomic, retain) NSString *carHeadunitManufacturer;
@property (nonatomic, retain) NSString *carHeadunitModel;
@property (nonatomic) double carHeadunitPixelHeight;
@property (nonatomic) double carHeadunitPixelWidth;
@property (nonatomic) int deviceBatteryState;
@property (nonatomic) bool deviceDarkMode;
@property (nonatomic, retain) NSMutableArray *deviceDisplayLanguages;
@property (nonatomic) bool deviceInVehicle;
@property (nonatomic) int deviceInterfaceOrientation;
@property (nonatomic, retain) NSString *deviceKeyboardLocale;
@property (nonatomic, retain) GEOLocation *deviceLocation;
@property (nonatomic, retain) NSString *deviceSpokenLocale;
@property (nonatomic, retain) NSString *displayRegion;
@property (nonatomic, readonly) int*engineTypes;
@property (nonatomic, readonly) unsigned long long engineTypesCount;
@property (nonatomic) bool hasAction;
@property (nonatomic, readonly) bool hasAnalyticsAppIdentifier;
@property (nonatomic) bool hasAppDarkMode;
@property (nonatomic, readonly) bool hasAppIdentifier;
@property (nonatomic, readonly) bool hasAppMajorVersion;
@property (nonatomic, readonly) bool hasAppMinorVersion;
@property (nonatomic, readonly) bool hasAutomobileOptions;
@property (nonatomic) bool hasCarHeadunitConnectionType;
@property (nonatomic) bool hasCarHeadunitInteractionModel;
@property (nonatomic, readonly) bool hasCarHeadunitManufacturer;
@property (nonatomic, readonly) bool hasCarHeadunitModel;
@property (nonatomic) bool hasCarHeadunitPixelHeight;
@property (nonatomic) bool hasCarHeadunitPixelWidth;
@property (nonatomic) bool hasDeviceBatteryState;
@property (nonatomic) bool hasDeviceDarkMode;
@property (nonatomic) bool hasDeviceInVehicle;
@property (nonatomic) bool hasDeviceInterfaceOrientation;
@property (nonatomic, readonly) bool hasDeviceKeyboardLocale;
@property (nonatomic, readonly) bool hasDeviceLocation;
@property (nonatomic, readonly) bool hasDeviceSpokenLocale;
@property (nonatomic, readonly) bool hasDisplayRegion;
@property (nonatomic) bool hasHttpRequestPriority;
@property (nonatomic) bool hasIsAPICall;
@property (nonatomic) bool hasIsRedoSearch;
@property (nonatomic) bool hasIsRefund;
@property (nonatomic) bool hasIsSettlement;
@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic) bool hasMapZoomLevel;
@property (nonatomic) bool hasMode;
@property (nonatomic) bool hasNavigating;
@property (nonatomic) bool hasPhotosCount;
@property (nonatomic, readonly) bool hasProviderID;
@property (nonatomic) bool hasRequestMode;
@property (nonatomic) bool hasReviewUserPhotosCount;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic) bool hasSessionId;
@property (nonatomic) bool hasSessionRelativeTimestamp;
@property (nonatomic) bool hasSource;
@property (nonatomic) bool hasSupportDirectionIntentAutocomplete;
@property (nonatomic) bool hasSupportDirectionIntentSearch;
@property (nonatomic) bool hasSupportDymSuggestion;
@property (nonatomic) bool hasSupportUnresolvedDirectionIntent;
@property (nonatomic) bool hasSupportsBrandFallback;
@property (nonatomic) bool hasTimeSinceMapEnteredForeground;
@property (nonatomic) bool hasTimeSinceMapViewportChanged;
@property (nonatomic, readonly) bool hasTransitOptions;
@property (nonatomic, readonly) bool hasTransitScheduleFilter;
@property (nonatomic) bool hasUseBackgroundUrl;
@property (nonatomic, readonly) bool hasVenueIdentifier;
@property (nonatomic, readonly) bool hasWalkingOptions;
@property (nonatomic) bool hasWantsBrandIcon;
@property (nonatomic, retain) NSMutableArray *historicalLocations;
@property (nonatomic) unsigned int httpRequestPriority;
@property (nonatomic) bool isAPICall;
@property (nonatomic) bool isRedoSearch;
@property (nonatomic) bool isRefund;
@property (nonatomic) bool isSettlement;
@property (nonatomic, readonly) int*knownClientResolvedTypes;
@property (nonatomic, readonly) unsigned long long knownClientResolvedTypesCount;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic) double mapZoomLevel;
@property (nonatomic) int mode;
@property (nonatomic) bool navigating;
@property (nonatomic, retain) NSMutableArray *photoSizes;
@property (nonatomic) unsigned int photosCount;
@property (nonatomic, retain) NSString *providerID;
@property (nonatomic) int requestMode;
@property (nonatomic, retain) NSMutableArray *reviewUserPhotoSizes;
@property (nonatomic) unsigned int reviewUserPhotosCount;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionId;
@property (nonatomic) double sessionRelativeTimestamp;
@property (nonatomic) int source;
@property (nonatomic) bool supportDirectionIntentAutocomplete;
@property (nonatomic) bool supportDirectionIntentSearch;
@property (nonatomic) bool supportDymSuggestion;
@property (nonatomic) bool supportUnresolvedDirectionIntent;
@property (nonatomic) bool supportsBrandFallback;
@property (nonatomic) unsigned int timeSinceMapEnteredForeground;
@property (nonatomic) unsigned int timeSinceMapViewportChanged;
@property (nonatomic, retain) GEOTransitOptions *transitOptions;
@property (nonatomic, retain) GEOTraitsTransitScheduleFilter *transitScheduleFilter;
@property (nonatomic, readonly) int*transportTypes;
@property (nonatomic, readonly) unsigned long long transportTypesCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) bool useBackgroundUrl;
@property (nonatomic, retain) GEOPDVenueIdentifier *venueIdentifier;
@property (nonatomic, retain) GEOWalkingOptions *walkingOptions;
@property (nonatomic) bool wantsBrandIcon;

+ (Class)deviceDisplayLanguageType;
+ (Class)historicalLocationsType;
+ (Class)photoSizesType;
+ (Class)reviewUserPhotoSizesType;

- (void).cxx_destruct;
- (int)StringAsAction:(id)arg1;
- (int)StringAsCarHeadunitConnectionType:(id)arg1;
- (int)StringAsCarHeadunitInteractionModel:(id)arg1;
- (int)StringAsDeviceBatteryState:(id)arg1;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;
- (int)StringAsEngineTypes:(id)arg1;
- (int)StringAsKnownClientResolvedTypes:(id)arg1;
- (int)StringAsMode:(id)arg1;
- (int)StringAsRequestMode:(id)arg1;
- (int)StringAsSource:(id)arg1;
- (int)StringAsTransportTypes:(id)arg1;
- (int)action;
- (id)actionAsString:(int)arg1;
- (void)addDeviceDisplayLanguage:(id)arg1;
- (void)addEngineType:(int)arg1;
- (void)addHistoricalLocations:(id)arg1;
- (void)addKnownClientResolvedType:(int)arg1;
- (void)addPhotoSizes:(id)arg1;
- (void)addReviewUserPhotoSizes:(id)arg1;
- (void)addTransportType:(int)arg1;
- (id)analyticsAppIdentifier;
- (bool)appDarkMode;
- (id)appIdentifier;
- (id)appMajorVersion;
- (id)appMinorVersion;
- (id)automobileOptions;
- (int)carHeadunitConnectionType;
- (id)carHeadunitConnectionTypeAsString:(int)arg1;
- (int)carHeadunitInteractionModel;
- (id)carHeadunitInteractionModelAsString:(int)arg1;
- (id)carHeadunitManufacturer;
- (id)carHeadunitModel;
- (double)carHeadunitPixelHeight;
- (double)carHeadunitPixelWidth;
- (void)clearDeviceDisplayLanguages;
- (void)clearEngineTypes;
- (void)clearHistoricalLocations;
- (void)clearKnownClientResolvedTypes;
- (void)clearLocations;
- (void)clearPhotoSizes;
- (void)clearReviewUserPhotoSizes;
- (void)clearSessionId;
- (void)clearTransportTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)deviceBatteryState;
- (id)deviceBatteryStateAsString:(int)arg1;
- (bool)deviceDarkMode;
- (id)deviceDisplayLanguageAtIndex:(unsigned long long)arg1;
- (id)deviceDisplayLanguages;
- (unsigned long long)deviceDisplayLanguagesCount;
- (bool)deviceInVehicle;
- (int)deviceInterfaceOrientation;
- (id)deviceInterfaceOrientationAsString:(int)arg1;
- (id)deviceKeyboardLocale;
- (id)deviceLocation;
- (id)deviceSpokenLocale;
- (id)dictionaryRepresentation;
- (id)displayRegion;
- (int)engineTypeAtIndex:(unsigned long long)arg1;
- (int*)engineTypes;
- (id)engineTypesAsString:(int)arg1;
- (unsigned long long)engineTypesCount;
- (bool)hasAction;
- (bool)hasAnalyticsAppIdentifier;
- (bool)hasAppDarkMode;
- (bool)hasAppIdentifier;
- (bool)hasAppMajorVersion;
- (bool)hasAppMinorVersion;
- (bool)hasAutomobileOptions;
- (bool)hasCarHeadunitConnectionType;
- (bool)hasCarHeadunitInteractionModel;
- (bool)hasCarHeadunitManufacturer;
- (bool)hasCarHeadunitModel;
- (bool)hasCarHeadunitPixelHeight;
- (bool)hasCarHeadunitPixelWidth;
- (bool)hasDeviceBatteryState;
- (bool)hasDeviceDarkMode;
- (bool)hasDeviceInVehicle;
- (bool)hasDeviceInterfaceOrientation;
- (bool)hasDeviceKeyboardLocale;
- (bool)hasDeviceLocation;
- (bool)hasDeviceSpokenLocale;
- (bool)hasDisplayRegion;
- (bool)hasHttpRequestPriority;
- (bool)hasIsAPICall;
- (bool)hasIsRedoSearch;
- (bool)hasIsRefund;
- (bool)hasIsSettlement;
- (bool)hasMapRegion;
- (bool)hasMapZoomLevel;
- (bool)hasMode;
- (bool)hasNavigating;
- (bool)hasPhotosCount;
- (bool)hasProviderID;
- (bool)hasRequestMode;
- (bool)hasReviewUserPhotosCount;
- (bool)hasSequenceNumber;
- (bool)hasSessionId;
- (bool)hasSessionRelativeTimestamp;
- (bool)hasSource;
- (bool)hasSupportDirectionIntentAutocomplete;
- (bool)hasSupportDirectionIntentSearch;
- (bool)hasSupportDymSuggestion;
- (bool)hasSupportUnresolvedDirectionIntent;
- (bool)hasSupportsBrandFallback;
- (bool)hasTimeSinceMapEnteredForeground;
- (bool)hasTimeSinceMapViewportChanged;
- (bool)hasTransitOptions;
- (bool)hasTransitScheduleFilter;
- (bool)hasUseBackgroundUrl;
- (bool)hasVenueIdentifier;
- (bool)hasWalkingOptions;
- (bool)hasWantsBrandIcon;
- (unsigned long long)hash;
- (id)historicalLocations;
- (id)historicalLocationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)historicalLocationsCount;
- (unsigned int)httpRequestPriority;
- (bool)isAPICall;
- (bool)isEqual:(id)arg1;
- (bool)isRedoSearch;
- (bool)isRefund;
- (bool)isSettlement;
- (int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1;
- (int*)knownClientResolvedTypes;
- (id)knownClientResolvedTypesAsString:(int)arg1;
- (unsigned long long)knownClientResolvedTypesCount;
- (id)mapRegion;
- (double)mapZoomLevel;
- (void)mergeFrom:(id)arg1;
- (int)mode;
- (id)modeAsString:(int)arg1;
- (bool)navigating;
- (id)photoSizes;
- (id)photoSizesAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoSizesCount;
- (unsigned int)photosCount;
- (id)providerID;
- (bool)readFrom:(id)arg1;
- (int)requestMode;
- (id)requestModeAsString:(int)arg1;
- (id)reviewUserPhotoSizes;
- (id)reviewUserPhotoSizesAtIndex:(unsigned long long)arg1;
- (unsigned long long)reviewUserPhotoSizesCount;
- (unsigned int)reviewUserPhotosCount;
- (unsigned int)sequenceNumber;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionId;
- (double)sessionRelativeTimestamp;
- (void)setAction:(int)arg1;
- (void)setAnalyticsAppIdentifier:(id)arg1;
- (void)setAppDarkMode:(bool)arg1;
- (void)setAppIdentifier:(id)arg1;
- (void)setAppMajorVersion:(id)arg1;
- (void)setAppMinorVersion:(id)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setCarHeadunitConnectionType:(int)arg1;
- (void)setCarHeadunitInteractionModel:(int)arg1;
- (void)setCarHeadunitManufacturer:(id)arg1;
- (void)setCarHeadunitModel:(id)arg1;
- (void)setCarHeadunitPixelHeight:(double)arg1;
- (void)setCarHeadunitPixelWidth:(double)arg1;
- (void)setDeviceBatteryState:(int)arg1;
- (void)setDeviceDarkMode:(bool)arg1;
- (void)setDeviceDisplayLanguages:(id)arg1;
- (void)setDeviceInVehicle:(bool)arg1;
- (void)setDeviceInterfaceOrientation:(int)arg1;
- (void)setDeviceKeyboardLocale:(id)arg1;
- (void)setDeviceLocation:(id)arg1;
- (void)setDeviceSpokenLocale:(id)arg1;
- (void)setDisplayRegion:(id)arg1;
- (void)setEngineTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasAction:(bool)arg1;
- (void)setHasAppDarkMode:(bool)arg1;
- (void)setHasCarHeadunitConnectionType:(bool)arg1;
- (void)setHasCarHeadunitInteractionModel:(bool)arg1;
- (void)setHasCarHeadunitPixelHeight:(bool)arg1;
- (void)setHasCarHeadunitPixelWidth:(bool)arg1;
- (void)setHasDeviceBatteryState:(bool)arg1;
- (void)setHasDeviceDarkMode:(bool)arg1;
- (void)setHasDeviceInVehicle:(bool)arg1;
- (void)setHasDeviceInterfaceOrientation:(bool)arg1;
- (void)setHasHttpRequestPriority:(bool)arg1;
- (void)setHasIsAPICall:(bool)arg1;
- (void)setHasIsRedoSearch:(bool)arg1;
- (void)setHasIsRefund:(bool)arg1;
- (void)setHasIsSettlement:(bool)arg1;
- (void)setHasMapZoomLevel:(bool)arg1;
- (void)setHasMode:(bool)arg1;
- (void)setHasNavigating:(bool)arg1;
- (void)setHasPhotosCount:(bool)arg1;
- (void)setHasRequestMode:(bool)arg1;
- (void)setHasReviewUserPhotosCount:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setHasSessionRelativeTimestamp:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setHasSupportDirectionIntentAutocomplete:(bool)arg1;
- (void)setHasSupportDirectionIntentSearch:(bool)arg1;
- (void)setHasSupportDymSuggestion:(bool)arg1;
- (void)setHasSupportUnresolvedDirectionIntent:(bool)arg1;
- (void)setHasSupportsBrandFallback:(bool)arg1;
- (void)setHasTimeSinceMapEnteredForeground:(bool)arg1;
- (void)setHasTimeSinceMapViewportChanged:(bool)arg1;
- (void)setHasUseBackgroundUrl:(bool)arg1;
- (void)setHasWantsBrandIcon:(bool)arg1;
- (void)setHistoricalLocations:(id)arg1;
- (void)setHttpRequestPriority:(unsigned int)arg1;
- (void)setIsAPICall:(bool)arg1;
- (void)setIsRedoSearch:(bool)arg1;
- (void)setIsRefund:(bool)arg1;
- (void)setIsSettlement:(bool)arg1;
- (void)setKnownClientResolvedTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setMapRegion:(id)arg1;
- (void)setMapZoomLevel:(double)arg1;
- (void)setMode:(int)arg1;
- (void)setNavigating:(bool)arg1;
- (void)setPhotoSizes:(id)arg1;
- (void)setPhotosCount:(unsigned int)arg1;
- (void)setProviderID:(id)arg1;
- (void)setRequestMode:(int)arg1;
- (void)setReviewUserPhotoSizes:(id)arg1;
- (void)setReviewUserPhotosCount:(unsigned int)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSessionRelativeTimestamp:(double)arg1;
- (void)setSource:(int)arg1;
- (void)setSupportDirectionIntentAutocomplete:(bool)arg1;
- (void)setSupportDirectionIntentSearch:(bool)arg1;
- (void)setSupportDymSuggestion:(bool)arg1;
- (void)setSupportUnresolvedDirectionIntent:(bool)arg1;
- (void)setSupportsBrandFallback:(bool)arg1;
- (void)setTimeSinceMapEnteredForeground:(unsigned int)arg1;
- (void)setTimeSinceMapViewportChanged:(unsigned int)arg1;
- (void)setTransitOptions:(id)arg1;
- (void)setTransitScheduleFilter:(id)arg1;
- (void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setUseBackgroundUrl:(bool)arg1;
- (void)setVenueIdentifier:(id)arg1;
- (void)setWalkingOptions:(id)arg1;
- (void)setWantsBrandIcon:(bool)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (bool)supportDirectionIntentAutocomplete;
- (bool)supportDirectionIntentSearch;
- (bool)supportDymSuggestion;
- (bool)supportUnresolvedDirectionIntent;
- (bool)supportsBrandFallback;
- (unsigned int)timeSinceMapEnteredForeground;
- (unsigned int)timeSinceMapViewportChanged;
- (id)transitOptions;
- (id)transitScheduleFilter;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (int*)transportTypes;
- (id)transportTypesAsString:(int)arg1;
- (unsigned long long)transportTypesCount;
- (int)uiActionType;
- (id)unknownFields;
- (void)updateAnalyticsShortSession;
- (bool)useBackgroundUrl;
- (id)venueIdentifier;
- (id)walkingOptions;
- (bool)wantsBrandIcon;
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
