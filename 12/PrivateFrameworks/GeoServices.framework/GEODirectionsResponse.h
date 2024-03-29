<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEODirectionsResponse.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEODirectionsResponse.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEODirectionsResponse : PBCodable <NSCopying> {
    GEOClientMetrics * _clientMetrics;
    NSString * _dataVersion;
    GEOPDDatasetABStatus * _datasetAbStatus;
    NSString * _debugData;
    unsigned long long  _debugLatencyMs;
    GEOTransitDecoderData * _decoderData;
    NSData * _directionsResponseID;
    GEORouteDisplayHints * _displayHints;
    GEOETAServiceResponseSummary * _etaServiceSummary;
    GEOAlert * _failureAlert;
    struct { 
        unsigned int timepointUsed : 1; 
        unsigned int debugLatencyMs : 1; 
        unsigned int instructionSignFillColor : 1; 
        unsigned int liveRouteSavingsSeconds : 1; 
        unsigned int localDistanceUnits : 1; 
        unsigned int selectedRouteIndex : 1; 
        unsigned int hasKhSegments : 1; 
        unsigned int isNavigable : 1; 
        unsigned int routeDeviatesFromOriginal : 1; 
    }  _has;
    bool  _hasKhSegments;
    NSMutableArray * _incidentsOffRoutes;
    NSMutableArray * _incidentsOnRoutes;
    int  _instructionSignFillColor;
    bool  _isNavigable;
    int  _liveRouteSavingsSeconds;
    int  _localDistanceUnits;
    NSData * _nonRecommendedRoutesCache;
    NSMutableArray * _placeSearchResponses;
    struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _problemDetails;
    unsigned long long  _problemDetailsCount;
    unsigned long long  _problemDetailsSpace;
    bool  _routeDeviatesFromOriginal;
    NSMutableArray * _routes;
    unsigned int  _selectedRouteIndex;
    NSMutableArray * _serviceGaps;
    NSString * _serviceVersion;
    NSData * _sessionState;
    int  _status;
    GEOStyleAttributes * _styleAttributes;
    NSMutableArray * _suggestedRoutes;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedTransportTypes;
    struct GEOTimepoint { 
        double _time; 
        int _type; 
        struct { 
            unsigned int time : 1; 
            unsigned int type : 1; 
        } _has; 
    }  _timepointUsed;
    NSMutableArray * _trafficCameras;
    NSString * _transitDataVersion;
    GEOPBTransitRoutingIncidentMessage * _transitIncidentMessage;
}

@property (nonatomic, retain) GEOClientMetrics *clientMetrics;
@property (nonatomic, retain) NSString *dataVersion;
@property (nonatomic, retain) GEOPDDatasetABStatus *datasetAbStatus;
@property (nonatomic, retain) NSString *debugData;
@property (nonatomic) unsigned long long debugLatencyMs;
@property (nonatomic, retain) GEOTransitDecoderData *decoderData;
@property (nonatomic, retain) NSData *directionsResponseID;
@property (nonatomic, retain) GEORouteDisplayHints *displayHints;
@property (nonatomic, retain) GEOETAServiceResponseSummary *etaServiceSummary;
@property (nonatomic, retain) GEOAlert *failureAlert;
@property (nonatomic, readonly) bool hasClientMetrics;
@property (nonatomic, readonly) bool hasDataVersion;
@property (nonatomic, readonly) bool hasDatasetAbStatus;
@property (nonatomic, readonly) bool hasDebugData;
@property (nonatomic) bool hasDebugLatencyMs;
@property (nonatomic, readonly) bool hasDecoderData;
@property (nonatomic, readonly) bool hasDirectionsResponseID;
@property (nonatomic, readonly) bool hasDisplayHints;
@property (nonatomic, readonly) bool hasEtaServiceSummary;
@property (nonatomic, readonly) bool hasFailureAlert;
@property (nonatomic) bool hasHasKhSegments;
@property (nonatomic) bool hasInstructionSignFillColor;
@property (nonatomic) bool hasIsNavigable;
@property (nonatomic) bool hasKhSegments;
@property (nonatomic) bool hasLiveRouteSavingsSeconds;
@property (nonatomic) bool hasLocalDistanceUnits;
@property (nonatomic, readonly) bool hasNonRecommendedRoutesCache;
@property (nonatomic) bool hasRouteDeviatesFromOriginal;
@property (nonatomic) bool hasSelectedRouteIndex;
@property (nonatomic, readonly) bool hasServiceVersion;
@property (nonatomic, readonly) bool hasSessionState;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic) bool hasTimepointUsed;
@property (nonatomic, readonly) bool hasTransitDataVersion;
@property (nonatomic, readonly) bool hasTransitIncidentMessage;
@property (nonatomic, retain) NSMutableArray *incidentsOffRoutes;
@property (nonatomic, retain) NSMutableArray *incidentsOnRoutes;
@property (nonatomic) int instructionSignFillColor;
@property (nonatomic) bool isNavigable;
@property (nonatomic) int liveRouteSavingsSeconds;
@property (nonatomic) int localDistanceUnits;
@property (nonatomic, retain) NSData *nonRecommendedRoutesCache;
@property (nonatomic, retain) NSMutableArray *placeSearchResponses;
@property (nonatomic, readonly) struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*problemDetails;
@property (nonatomic, readonly) unsigned long long problemDetailsCount;
@property (nonatomic) bool routeDeviatesFromOriginal;
@property (nonatomic, retain) NSMutableArray *routes;
@property (nonatomic) unsigned int selectedRouteIndex;
@property (nonatomic, retain) NSMutableArray *serviceGaps;
@property (nonatomic, retain) NSString *serviceVersion;
@property (nonatomic, retain) NSData *sessionState;
@property (nonatomic) int status;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic, retain) NSMutableArray *suggestedRoutes;
@property (nonatomic, readonly) int*supportedTransportTypes;
@property (nonatomic, readonly) unsigned long long supportedTransportTypesCount;
@property (nonatomic) struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } timepointUsed;
@property (nonatomic, retain) NSMutableArray *trafficCameras;
@property (nonatomic, retain) NSString *transitDataVersion;
@property (nonatomic, retain) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage;

+ (Class)incidentsOffRoutesType;
+ (Class)incidentsOnRoutesType;
+ (Class)placeSearchResponseType;
+ (Class)routeType;
+ (Class)serviceGapType;
+ (Class)suggestedRouteType;
+ (Class)trafficCameraType;

- (void).cxx_destruct;
- (int)StringAsInstructionSignFillColor:(id)arg1;
- (int)StringAsLocalDistanceUnits:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (int)StringAsSupportedTransportTypes:(id)arg1;
- (id)_destinationMapItem;
- (void)addIncidentsOffRoutes:(id)arg1;
- (void)addIncidentsOnRoutes:(id)arg1;
- (void)addPlaceSearchResponse:(id)arg1;
- (void)addProblemDetail:(struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)addRoute:(id)arg1;
- (void)addServiceGap:(id)arg1;
- (void)addSuggestedRoute:(id)arg1;
- (void)addSupportedTransportType:(int)arg1;
- (void)addTrafficCamera:(id)arg1;
- (void)clearIncidentsOffRoutes;
- (void)clearIncidentsOnRoutes;
- (void)clearLocations;
- (void)clearPlaceSearchResponses;
- (void)clearProblemDetails;
- (void)clearRoutes;
- (void)clearServiceGaps;
- (void)clearSuggestedRoutes;
- (void)clearSupportedTransportTypes;
- (void)clearTrafficCameras;
- (id)clientMetrics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataVersion;
- (id)datasetAbStatus;
- (void)dealloc;
- (id)debugData;
- (unsigned long long)debugLatencyMs;
- (id)decoderData;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsResponseID;
- (id)displayHints;
- (id)etaServiceSummary;
- (id)failureAlert;
- (bool)hasClientMetrics;
- (bool)hasDataVersion;
- (bool)hasDatasetAbStatus;
- (bool)hasDebugData;
- (bool)hasDebugLatencyMs;
- (bool)hasDecoderData;
- (bool)hasDirectionsResponseID;
- (bool)hasDisplayHints;
- (bool)hasEtaServiceSummary;
- (bool)hasFailureAlert;
- (bool)hasHasKhSegments;
- (bool)hasInstructionSignFillColor;
- (bool)hasIsNavigable;
- (bool)hasKhSegments;
- (bool)hasLiveRouteSavingsSeconds;
- (bool)hasLocalDistanceUnits;
- (bool)hasNonRecommendedRoutesCache;
- (bool)hasRouteDeviatesFromOriginal;
- (bool)hasSelectedRouteIndex;
- (bool)hasServiceVersion;
- (bool)hasSessionState;
- (bool)hasStyleAttributes;
- (bool)hasTimepointUsed;
- (bool)hasTransitDataVersion;
- (bool)hasTransitIncidentMessage;
- (unsigned long long)hash;
- (id)incidentsOffRoutes;
- (id)incidentsOffRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOffRoutesCount;
- (id)incidentsOnRoutes;
- (id)incidentsOnRoutesAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsOnRoutesCount;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (int)instructionSignFillColor;
- (id)instructionSignFillColorAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNavigable;
- (int)liveRouteSavingsSeconds;
- (int)localDistanceUnits;
- (id)localDistanceUnitsAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nonRecommendedRoutesCache;
- (id)placeSearchResponseAtIndex:(unsigned long long)arg1;
- (id)placeSearchResponses;
- (unsigned long long)placeSearchResponsesCount;
- (struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })problemDetailAtIndex:(unsigned long long)arg1;
- (struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)problemDetails;
- (unsigned long long)problemDetailsCount;
- (bool)readFrom:(id)arg1;
- (id)routeAtIndex:(unsigned long long)arg1;
- (bool)routeDeviatesFromOriginal;
- (id)routes;
- (unsigned long long)routesCount;
- (unsigned int)selectedRouteIndex;
- (id)serviceGapAtIndex:(unsigned long long)arg1;
- (id)serviceGaps;
- (unsigned long long)serviceGapsCount;
- (id)serviceVersion;
- (id)sessionState;
- (void)setClientMetrics:(id)arg1;
- (void)setDataVersion:(id)arg1;
- (void)setDatasetAbStatus:(id)arg1;
- (void)setDebugData:(id)arg1;
- (void)setDebugLatencyMs:(unsigned long long)arg1;
- (void)setDecoderData:(id)arg1;
- (void)setDirectionsResponseID:(id)arg1;
- (void)setDisplayHints:(id)arg1;
- (void)setEtaServiceSummary:(id)arg1;
- (void)setFailureAlert:(id)arg1;
- (void)setHasDebugLatencyMs:(bool)arg1;
- (void)setHasHasKhSegments:(bool)arg1;
- (void)setHasInstructionSignFillColor:(bool)arg1;
- (void)setHasIsNavigable:(bool)arg1;
- (void)setHasKhSegments:(bool)arg1;
- (void)setHasLiveRouteSavingsSeconds:(bool)arg1;
- (void)setHasLocalDistanceUnits:(bool)arg1;
- (void)setHasRouteDeviatesFromOriginal:(bool)arg1;
- (void)setHasSelectedRouteIndex:(bool)arg1;
- (void)setHasTimepointUsed:(bool)arg1;
- (void)setIncidentsOffRoutes:(id)arg1;
- (void)setIncidentsOnRoutes:(id)arg1;
- (void)setInstructionSignFillColor:(int)arg1;
- (void)setIsNavigable:(bool)arg1;
- (void)setLiveRouteSavingsSeconds:(int)arg1;
- (void)setLocalDistanceUnits:(int)arg1;
- (void)setNonRecommendedRoutesCache:(id)arg1;
- (void)setPlaceSearchResponses:(id)arg1;
- (void)setProblemDetails:(struct GEOProblemDetail { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (void)setRouteDeviatesFromOriginal:(bool)arg1;
- (void)setRoutes:(id)arg1;
- (void)setSelectedRouteIndex:(unsigned int)arg1;
- (void)setServiceGaps:(id)arg1;
- (void)setServiceVersion:(id)arg1;
- (void)setSessionState:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setSuggestedRoutes:(id)arg1;
- (void)setSupportedTransportTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTimepointUsed:(struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)setTrafficCameras:(id)arg1;
- (void)setTransitDataVersion:(id)arg1;
- (void)setTransitIncidentMessage:(id)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)styleAttributes;
- (id)suggestedRouteAtIndex:(unsigned long long)arg1;
- (id)suggestedRoutes;
- (unsigned long long)suggestedRoutesCount;
- (int)supportedTransportTypeAtIndex:(unsigned long long)arg1;
- (int*)supportedTransportTypes;
- (id)supportedTransportTypesAsString:(int)arg1;
- (unsigned long long)supportedTransportTypesCount;
- (struct GEOTimepoint { double x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })timepointUsed;
- (id)trafficCameraAtIndex:(unsigned long long)arg1;
- (id)trafficCameras;
- (unsigned long long)trafficCamerasCount;
- (id)transitDataVersion;
- (id)transitIncidentMessage;
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
