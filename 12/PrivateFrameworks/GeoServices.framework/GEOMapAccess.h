<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOMapAccess.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOMapAccess.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOMapAccess : GEOMapRequestManager {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    <GEOMapAccessRestrictions> * _restrictions;
    id /* block */  _tileErrorHandler;
    bool  _useMapMatchingTilesetForRoads;
}

@property (nonatomic, readonly) bool allowsNetworkTileLoad;
@property (nonatomic, readonly) unsigned long long buildingsZoomLevel;
@property (nonatomic, readonly) unsigned int maxTransitZoomLevel;
@property (nonatomic, readonly) unsigned int maxZoomLevel;
@property (nonatomic, readonly) unsigned int minZoomLevel;
@property (nonatomic) <GEOMapAccessRestrictions> *restrictions;
@property (nonatomic, readonly) unsigned long long roadsZoomLevel;
@property (nonatomic, copy) id /* block */ tileErrorHandler;
@property (nonatomic, readonly) unsigned long long transitZoomLevel;
@property (nonatomic) bool useMapMatchingTilesetForRoads;
@property (nonatomic) unsigned int zoomLevel;

+ (id)map;
+ (id)realisticMap;
+ (bool)supportsBuildingMapAccess;
+ (bool)supportsRealisticMap;
+ (bool)supportsRoadMapAccess;
+ (bool)supportsTransitMap;
+ (bool)supportsTransitMapAccess;
+ (id)transitMap;

- (void).cxx_destruct;
- (id)_findTransitPointWithID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 type:(unsigned long long)arg3 pointHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)_findTransitPointsWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 type:(unsigned long long)arg3 pointHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (bool)_hasLoadedTilesNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 zoomLevel:(unsigned long long)arg3 tileStyle:(int)arg4 tileSize:(int)arg5 tileScale:(int)arg6;
- (id)_transitPointForTransitMapNode:(struct shared_ptr<geo::MapNodeTransit> { struct MapNodeTransit {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)allowsNetworkTileLoad;
- (id)buildMapEdgeTransitFrom:(const struct TransitEdgePiece { struct { /* ? */ } *x1; unsigned long long x2; struct { /* ? */ } *x3; struct _retain_ptr<GEOFeature *, geo::_retain_GEOFeature, geo::_release_GEOFeature, geo::_hash_ptr, geo::_equal_ptr> { int (**x_4_1_1)(); struct { /* ? */ } *x_4_1_2; struct _retain_GEOFeature { } x_4_1_3; struct _release_GEOFeature { } x_4_1_4; } x4; unsigned int x5; bool x6; }*)arg1 edgeHandler:(id /* block */)arg2;
- (unsigned long long)buildingsZoomLevel;
- (id)callbackQueue;
- (id)findBuildingsWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 buildingHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findClosestNamedFeaturesAtCoordinate:(struct { double x1; double x2; })arg1 roadHandler:(id /* block */)arg2 pointHandler:(id /* block */)arg3 polygonHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)findClosestRoadAtCoordinate:(struct { double x1; double x2; })arg1 roadHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)findRoadEdgesWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 edgeHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findRoadTilesWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 tileHander:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findRoadsWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 handler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitEdgesWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 edgeHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitHallWithID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 hallHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitHallsWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 hallHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitLinksWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 linkHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitNodeWithID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 nodeHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitNodesWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 nodeHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitPointWithID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 pointHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitPointWithParentID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 type:(unsigned long long)arg3 pointHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (id)findTransitPointsWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 pointHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitStationWithID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 stationHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitStationsWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 stationHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitStopWithID:(unsigned long long)arg1 near:(struct { double x1; double x2; })arg2 stopHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)findTransitStopsWithin:(double)arg1 of:(struct { double x1; double x2; })arg2 stopHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (bool)hasLoadedBuildingTilesNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2;
- (bool)hasLoadedRoadTilesNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2;
- (bool)hasLoadedTransitTilesNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2;
- (id)init;
- (unsigned int)maxTransitZoomLevel;
- (unsigned int)maxZoomLevel;
- (unsigned int)minZoomLevel;
- (void)preloadBuildingTilesNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)preloadRoadTilesNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)preloadTransitTilesNearCoordinate:(struct { double x1; double x2; })arg1 radius:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)restrictions;
- (unsigned long long)roadsZoomLevel;
- (void)setCallbackQueue:(id)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setTileErrorHandler:(id /* block */)arg1;
- (void)setUseMapMatchingTilesetForRoads:(bool)arg1;
- (void)setZoomLevel:(unsigned int)arg1;
- (id /* block */)tileErrorHandler;
- (unsigned long long)transitZoomLevel;
- (bool)useMapMatchingTilesetForRoads;
- (unsigned int)zoomLevel;

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