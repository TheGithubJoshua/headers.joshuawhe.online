<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOCompanionRouteStatus.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOCompanionRouteStatus.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOCompanionRouteStatus : PBCodable <NSCopying> {
    unsigned int  _distanceRemainingOnRoute;
    unsigned int  _distanceToManeuver;
    unsigned int  _distanceToRoute;
    int  _feedbackType;
    bool  _guidancePromptsEnabled;
    int  _hapticsType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int distanceRemainingOnRoute : 1; 
        unsigned int distanceToManeuver : 1; 
        unsigned int distanceToRoute : 1; 
        unsigned int feedbackType : 1; 
        unsigned int hapticsType : 1; 
        unsigned int remainingTime : 1; 
        unsigned int routeLocationIndex : 1; 
        unsigned int routeLocationOffset : 1; 
        unsigned int stepID : 1; 
        unsigned int guidancePromptsEnabled : 1; 
        unsigned int isConnectedToCarplay : 1; 
        unsigned int lowGuidanceNavigation : 1; 
    }  _has;
    bool  _isConnectedToCarplay;
    GEOLocation * _location;
    bool  _lowGuidanceNavigation;
    unsigned int  _remainingTime;
    NSData * _routeID;
    unsigned int  _routeLocationIndex;
    float  _routeLocationOffset;
    GEOLatLng * _routeMatchCoordinate;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _selectedRideIndexs;
    unsigned int  _stepID;
    double  _timestamp;
}

@property (nonatomic) unsigned int distanceRemainingOnRoute;
@property (nonatomic) unsigned int distanceToManeuver;
@property (nonatomic) unsigned int distanceToRoute;
@property (nonatomic, readonly) unsigned int effectiveDistanceToManeuver;
@property (nonatomic, readonly) unsigned int effectiveStepID;
@property (nonatomic) int feedbackType;
@property (nonatomic) bool guidancePromptsEnabled;
@property (nonatomic) int hapticsType;
@property (nonatomic) bool hasDistanceRemainingOnRoute;
@property (nonatomic) bool hasDistanceToManeuver;
@property (nonatomic) bool hasDistanceToRoute;
@property (nonatomic, readonly) bool hasEffectiveDistanceToManeuver;
@property (nonatomic, readonly) bool hasEffectiveStepID;
@property (nonatomic) bool hasFeedbackType;
@property (nonatomic) bool hasGuidancePromptsEnabled;
@property (nonatomic) bool hasHapticsType;
@property (nonatomic) bool hasIsConnectedToCarplay;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasLowGuidanceNavigation;
@property (nonatomic) bool hasRemainingTime;
@property (nonatomic, readonly) bool hasRouteID;
@property (nonatomic) bool hasRouteLocationIndex;
@property (nonatomic) bool hasRouteLocationOffset;
@property (nonatomic, readonly) bool hasRouteMatchCoordinate;
@property (nonatomic) bool hasStepID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isConnectedToCarplay;
@property (nonatomic, readonly) bool isNavigating;
@property (nonatomic, readonly) bool isRecalculating;
@property (nonatomic, retain) GEOLocation *location;
@property (nonatomic) bool lowGuidanceNavigation;
@property (nonatomic) unsigned int remainingTime;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic) unsigned int routeLocationIndex;
@property (nonatomic) float routeLocationOffset;
@property (nonatomic, retain) GEOLatLng *routeMatchCoordinate;
@property (nonatomic, readonly) unsigned int*selectedRideIndexs;
@property (nonatomic, readonly) unsigned long long selectedRideIndexsCount;
@property (nonatomic, readonly) NSArray *selectedRideIndices;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (int)StringAsFeedbackType:(id)arg1;
- (int)StringAsHapticsType:(id)arg1;
- (void)_updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1;
- (void)addSelectedRideIndex:(unsigned int)arg1;
- (void)clearSelectedRideIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)distanceRemainingOnRoute;
- (unsigned int)distanceToManeuver;
- (unsigned int)distanceToRoute;
- (unsigned int)effectiveDistanceToManeuver;
- (unsigned int)effectiveStepID;
- (unsigned int)effectiveStepIDInRoute:(id)arg1;
- (int)feedbackType;
- (id)feedbackTypeAsString:(int)arg1;
- (bool)guidancePromptsEnabled;
- (int)hapticsType;
- (id)hapticsTypeAsString:(int)arg1;
- (bool)hasDistanceRemainingOnRoute;
- (bool)hasDistanceToManeuver;
- (bool)hasDistanceToRoute;
- (bool)hasEffectiveDistanceToManeuver;
- (bool)hasEffectiveStepID;
- (bool)hasFeedbackType;
- (bool)hasGuidancePromptsEnabled;
- (bool)hasHapticsType;
- (bool)hasIsConnectedToCarplay;
- (bool)hasLocation;
- (bool)hasLowGuidanceNavigation;
- (bool)hasRemainingTime;
- (bool)hasRouteID;
- (bool)hasRouteLocationIndex;
- (bool)hasRouteLocationOffset;
- (bool)hasRouteMatchCoordinate;
- (bool)hasStepID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)initWithRoute:(id)arg1 routeID:(id)arg2;
- (id)initWithRouteID:(id)arg1;
- (bool)isConnectedToCarplay;
- (bool)isEqual:(id)arg1;
- (bool)isNavigating;
- (bool)isRecalculating;
- (id)location;
- (bool)lowGuidanceNavigation;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)remainingTime;
- (id)routeID;
- (unsigned int)routeLocationIndex;
- (float)routeLocationOffset;
- (id)routeMatchCoordinate;
- (unsigned int)selectedRideIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)selectedRideIndexs;
- (unsigned long long)selectedRideIndexsCount;
- (id)selectedRideIndices;
- (void)setDistanceRemainingOnRoute:(unsigned int)arg1;
- (void)setDistanceToManeuver:(unsigned int)arg1;
- (void)setDistanceToRoute:(unsigned int)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setHapticsType:(int)arg1;
- (void)setHasDistanceRemainingOnRoute:(bool)arg1;
- (void)setHasDistanceToManeuver:(bool)arg1;
- (void)setHasDistanceToRoute:(bool)arg1;
- (void)setHasFeedbackType:(bool)arg1;
- (void)setHasGuidancePromptsEnabled:(bool)arg1;
- (void)setHasHapticsType:(bool)arg1;
- (void)setHasIsConnectedToCarplay:(bool)arg1;
- (void)setHasLowGuidanceNavigation:(bool)arg1;
- (void)setHasRemainingTime:(bool)arg1;
- (void)setHasRouteLocationIndex:(bool)arg1;
- (void)setHasRouteLocationOffset:(bool)arg1;
- (void)setHasStepID:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setLowGuidanceNavigation:(bool)arg1;
- (void)setRemainingTime:(unsigned int)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteLocationIndex:(unsigned int)arg1;
- (void)setRouteLocationOffset:(float)arg1;
- (void)setRouteMatchCoordinate:(id)arg1;
- (void)setSelectedRideIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setStepID:(unsigned int)arg1;
- (void)setTimestamp:(double)arg1;
- (unsigned int)stepID;
- (double)timestamp;
- (void)updateClusteredSectionSelectedRideIndicesFromRoute:(id)arg1 routeID:(id)arg2;
- (void)updateFeedbackWithNavigationState:(int)arg1 locationUnreliable:(bool)arg2 announcementStage:(unsigned long long)arg3 nextAnnouncementStage:(unsigned long long)arg4 nextAnnouncementTime:(double)arg5;
- (void)updateWithRoute:(id)arg1 routeID:(id)arg2;
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
