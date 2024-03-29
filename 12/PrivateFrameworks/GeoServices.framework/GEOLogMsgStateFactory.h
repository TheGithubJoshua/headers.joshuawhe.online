<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOLogMsgStateFactory.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOLogMsgStateFactory.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOLogMsgStateFactory : NSObject {
    NSString * _carrierOperatorName;
    bool  _cellularDataUsageAllowedForMaps;
    NSObject<OS_dispatch_queue> * _coreTelephonyIsolationQueue;
    bool  _hasCellularDataUsageAllowedForMaps;
    struct __CTServerConnection { } * _telephonyServerConnection;
}

@property (nonatomic, readonly) NSString *carrierOperatorName;
@property (getter=isCellularDataUsageAllowedForDevice, nonatomic, readonly) bool cellularDataUsageAllowedForDevice;
@property (getter=isCellularDataUsageAllowedForMaps, nonatomic, readonly) bool cellularDataUsageAllowedForMaps;

+ (bool)deviceHasRadio;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_connectToCoreTelephonyServer;
- (void)_retrieveCarrierOperatorName;
- (void)_retrieveCellularDataUsagePolicyForMaps;
- (void)_updateCarrierOperatorName;
- (void)_updateCellularDataAllowedForMapsSetting;
- (id)carrierOperatorName;
- (int)cellularDataState;
- (void)dealloc;
- (id)init;
- (bool)isCellularDataUsageAllowedForDevice;
- (bool)isCellularDataUsageAllowedForMaps;
- (id)logMsgStateForCarPlayWithIsConnected:(bool)arg1 carInfo:(id)arg2;
- (id)logMsgStateForCarPlayWithStateOrigin:(id)arg1 isConnected:(bool)arg2 carInfo:(id)arg3;
- (id)logMsgStateForExtensionWithTableBookingAppsInstalled:(bool)arg1 hasAppsEnabled:(bool)arg2;
- (id)logMsgStateForMapRestoreWithStateOrigin:(id)arg1 targetLayouts:(id)arg2;
- (id)logMsgStateForMapRestoreWithTargetLayouts:(id)arg1;
- (id)logMsgStateForMapRestoreWithUITargets:(id)arg1;
- (id)logMsgStateForMapSettingsWithPrefferedTransportMode:(int)arg1 avoidTolls:(bool)arg2 avoidHighways:(bool)arg3 headingEnabled:(bool)arg4 speedLimitEnabled:(bool)arg5 navVoiceVolume:(int)arg6 pauseSpokenAudioEnabled:(bool)arg7 findMyCarEnabled:(bool)arg8 trafficEnabled:(bool)arg9 labelEnabled:(bool)arg10;
- (id)logMsgStateForMapSettingsWithStateOrigin:(id)arg1 prefferedTransportMode:(int)arg2 avoidTolls:(bool)arg3 avoidHighways:(bool)arg4 headingEnabled:(bool)arg5 speedLimitEnabled:(bool)arg6 navVoiceVolume:(int)arg7 pauseSpokenAudioEnabled:(bool)arg8 findMyCarEnabled:(bool)arg9 trafficEnabled:(bool)arg10 labelEnabled:(bool)arg11;
- (id)logMsgStateForMapViewLocationWithLocationBucket:(int)arg1 currentLocationInViewport:(bool)arg2;
- (id)logMsgStateForMapViewLocationWithStateOrigin:(id)arg1 locationBucket:(int)arg2 currentLocationInViewport:(bool)arg3;
- (id)logMsgStateForMapViewLocationWithTouristInfo:(bool)arg1;
- (id)logMsgStateForMapViewWithMapRegion:(id)arg1 zoomLevel:(double)arg2 mapType:(int)arg3;
- (id)logMsgStateForMapViewWithStateOrigin:(id)arg1 mapRegion:(id)arg2 zoomLevel:(double)arg3 mapType:(int)arg4;
- (id)logMsgStateForMapsServerWithMapsResultsDisplayed:(id)arg1;
- (id)logMsgStateForMapsServerWithSearchCategoriesDisplayed:(id)arg1 selectedSearchCategory:(id)arg2;
- (id)logMsgStateForMapsServerWithSearchCategoriesDisplayedAsNSData:(id)arg1 selectedSearchCategory:(id)arg2;
- (id)logMsgStateForMapsServerWithServerMetadata:(id)arg1;
- (id)logMsgStateForMapsServerWithStateOrigin:(id)arg1 serverMetadata:(id)arg2;
- (id)logMsgStateForMapsUIShownWithIsAirQualityShown:(bool)arg1 isWeatherShown:(bool)arg2;
- (id)logMsgStateForMapsUIShownWithStateOrigin:(id)arg1 isAirQualityShown:(bool)arg2 isWeatherShown:(bool)arg3;
- (id)logMsgStateForMapsUIWithLayoutInfo:(int)arg1 layoutStyle:(int)arg2;
- (id)logMsgStateForMapsUIWithLayoutInfo:(int)arg1 layoutStyle:(int)arg2 numberOfTabs:(unsigned int)arg3 currentTabIndex:(unsigned int)arg4;
- (id)logMsgStateForMapsUIWithStateOrigin:(id)arg1 layoutInfo:(int)arg2 layoutStyle:(int)arg3;
- (id)logMsgStateForMapsUIWithStateOrigin:(id)arg1 layoutInfo:(int)arg2 layoutStyle:(int)arg3 numberOfTabs:(unsigned int)arg4 currentTabIndex:(unsigned int)arg5;
- (id)logMsgStateForNavigationWithLineType:(int)arg1 navState:(int)arg2 distanceToDestination:(double)arg3 navCameraState:(id)arg4;
- (id)logMsgStateForNavigationWithLineType:(int)arg1 navState:(int)arg2 distanceToDestination:(double)arg3 upcomingManeuverType:(int)arg4 distanceToManeuver:(int)arg5 isGroupedManeuver:(bool)arg6 speedBucket:(int)arg7;
- (id)logMsgStateForPairedDeviceWithIsConnected:(bool)arg1 deviceType:(int)arg2 deviceOSVersion:(id)arg3 deviceHardwareId:(id)arg4;
- (id)logMsgStateForPairedDeviceWithStateOrigin:(id)arg1 isConnected:(bool)arg2 deviceType:(int)arg3 deviceOSVersion:(id)arg4 deviceHardwareId:(id)arg5;
- (id)logMsgStateForPlaceCardWithPlaceActionDetails:(id)arg1 placeCardType:(int)arg2 mapItemCategory:(id)arg3 availableActions:(id)arg4 unactionableUIElements:(id)arg5;
- (id)logMsgStateForPlaceCardWithStateOrigin:(id)arg1 placeActionDetails:(id)arg2 placeCardType:(int)arg3 mapItemCategory:(id)arg4 actionableActions:(id)arg5 unactionableUIElements:(id)arg6;
- (id)logMsgStateForPlaceRequestWithRequestType:(int)arg1 request:(id)arg2;
- (id)logMsgStateForPlaceRequestWithStateOrigin:(id)arg1 requestType:(int)arg2 request:(id)arg3;
- (id)logMsgStateForRealtimeTrafficProbeCollectionWithTripId:(id)arg1 probeCount:(unsigned long long)arg2 recvTime:(id)arg3;
- (id)logMsgStateForReportAnIssueWithSelectedIndex:(unsigned int)arg1;
- (id)logMsgStateForRidesharingWithNumberOfAppsInstalled:(unsigned long long)arg1 enabled:(unsigned long long)arg2;
- (id)logMsgStateForRouteWithRouteDetails:(id)arg1;
- (id)logMsgStateForRouteWithStateOrigin:(id)arg1 routeDetails:(id)arg2;
- (id)logMsgStateForSuggestionsWithSearchFieldType:(int)arg1 searchString:(id)arg2 displayedResults:(id)arg3 selectedIndex:(int)arg4 acSequenceNumber:(int)arg5;
- (id)logMsgStateForTileSetWithStateOrigin:(id)arg1 tileSetInfo:(id)arg2;
- (id)logMsgStateForTileSetWithStateOrigin:(id)arg1 tileSetInfoArray:(id)arg2;
- (id)logMsgStateForTileSetWithTileSetInfo:(id)arg1;
- (id)logMsgStateForTileSetWithTileSetInfoArray:(id)arg1;
- (id)logMsgStateForTransitWithStateOrigin:(id)arg1 transitNotAvailableAdvisoryShowing:(bool)arg2;
- (id)logMsgStateForTransitWithTransitNotAvailableAdvisoryShowing:(bool)arg1;
- (id)logMsgStateForUserSessionWithSessionType:(unsigned long long)arg1 isNavSessionAllowed:(bool)arg2 userSessionSnapshot:(id)arg3;

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
