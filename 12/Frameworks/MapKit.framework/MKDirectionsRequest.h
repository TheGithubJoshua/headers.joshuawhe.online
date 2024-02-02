<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MKDirectionsRequest.h</title>
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

/Frameworks/MapKit.framework/MKDirectionsRequest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MapKit.framework/MapKit (1.0)
 */

@interface MKDirectionsRequest : NSObject <NSCopying> {
    NSArray * _additionalTransportTypesRequested;
    NSDate * _arrivalDate;
    GEOAutomobileOptions * _automobileOptions;
    NSDate * _departureDate;
    MKMapItem * _destination;
    bool  _includeBasicRoutePoints;
    bool  _includeDistanceInETA;
    bool  _includeEntryPoints;
    bool  _includeTrafficIncidents;
    bool  _includeTravelTimes;
    bool  _includeZilchRoutePoints;
    int  _requestMode;
    bool  _requestsAlternateRoutes;
    MKMapItem * _source;
    GEOTransitOptions * _transitOptions;
    unsigned long long  _transportType;
    GEOWalkingOptions * _walkingOptions;
}

@property (nonatomic, readonly) bool _includeBasicRoutePoints;
@property (nonatomic, readonly) bool _includeEntryPoints;
@property (nonatomic, readonly) bool _includeTrafficIncidents;
@property (nonatomic, readonly) bool _includeTravelTimes;
@property (nonatomic, readonly) bool _includeTypicalRouteDuration;
@property (nonatomic, readonly) bool _includeZilchRoutePoints;
@property (getter=_additionalTransportTypesRequested, setter=_setAdditionalTransportTypesRequested:, nonatomic, retain) NSArray *additionalTransportTypesRequested;
@property (getter=_automobileOptions, setter=_setAutomobileOptions:, nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic, retain) MKMapItem *destination;
@property (getter=_includeDistanceInETA, setter=_setIncludeDistanceInETA:, nonatomic) bool includeDistanceInETA;
@property (getter=_requestMode, setter=_setRequestMode:, nonatomic) int requestMode;
@property (nonatomic, retain) MKMapItem *source;
@property (getter=_transitOptions, setter=_setTransitOptions:, nonatomic, retain) GEOTransitOptions *transitOptions;
@property (getter=_walkingOptions, setter=_setWalkingOptions:, nonatomic, retain) GEOWalkingOptions *walkingOptions;

+ (bool)isDirectionsRequestURL:(id)arg1;

- (void).cxx_destruct;
- (id)_additionalTransportTypesRequested;
- (id)_arrivalDate;
- (id)_automobileOptions;
- (id)_departureDate;
- (bool)_includeBasicRoutePoints;
- (bool)_includeDistanceInETA;
- (bool)_includeEntryPoints;
- (bool)_includeTrafficIncidents;
- (bool)_includeTravelTimes;
- (bool)_includeTypicalRouteDuration;
- (bool)_includeZilchRoutePoints;
- (id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 arrivalDate:(id)arg3;
- (id)_mapkit_initWithAllTransportTypesSource:(id)arg1 destination:(id)arg2 departureDate:(id)arg3;
- (id)_mapkit_initWithDictionaryRepresentation:(id)arg1;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 arrivalDate:(id)arg4 includeTravelTimes:(bool)arg5 includeTrafficIncidents:(bool)arg6 includeEntryPoints:(bool)arg7 includeRoutePoints:(bool)arg8;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4;
- (id)_mapkit_initWithSource:(id)arg1 destination:(id)arg2 transportType:(unsigned long long)arg3 departureDate:(id)arg4 includeTravelTimes:(bool)arg5 includeTrafficIncidents:(bool)arg6 includeEntryPoints:(bool)arg7 includeRoutePoints:(bool)arg8;
- (int)_requestMode;
- (void)_setAdditionalTransportTypesRequested:(id)arg1;
- (void)_setAutomobileOptions:(id)arg1;
- (void)_setIncludeDistanceInETA:(bool)arg1;
- (void)_setRequestMode:(int)arg1;
- (void)_setTransitOptions:(id)arg1;
- (void)_setWalkingOptions:(id)arg1;
- (id)_transitOptions;
- (unsigned long long)_transportType;
- (id)_walkingOptions;
- (id)arrivalDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departureDate;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1;
- (bool)requestsAlternateRoutes;
- (void)setArrivalDate:(id)arg1;
- (void)setDepartureDate:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setRequestsAlternateRoutes:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setTransportType:(unsigned long long)arg1;
- (id)source;
- (unsigned long long)transportType;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

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