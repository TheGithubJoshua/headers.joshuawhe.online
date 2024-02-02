<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MNNavigationServiceLocalProxy.h</title>
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

/PrivateFrameworks/Navigation.framework/MNNavigationServiceLocalProxy.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation (1)
 */

@interface MNNavigationServiceLocalProxy : NSObject <MNNavigationServiceProxy, MNNavigationSessionManagerDelegate, MNNavigationStateObserver> {
    <MNNavigationServiceClientInterface> * _delegate;
    id /* block */  _navigationServiceActiveBlock;
    id /* block */  _navigationServiceActivePredictingBlock;
    unsigned long long  _navigationServiceState;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNNavigationServiceClientInterface> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_serviceStateForStateType:(long long)arg1;
- (void)acceptReroute:(bool)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)changeSettings:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)interfaceHashesWithHandler:(id /* block */)arg1;
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;
- (void)navigationSessionManager:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilSign:(double)arg3 timeUntilSign:(double)arg4;
- (void)navigationSessionManager:(id)arg1 didChangeNavigationState:(int)arg2;
- (void)navigationSessionManager:(id)arg1 didEnableGuidancePrompts:(bool)arg2;
- (void)navigationSessionManager:(id)arg1 didFailWithError:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didRerouteWithDetails:(id)arg2 locationDetails:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSessionManager:(id)arg1 didSignalAlightForStepAtIndex:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didStartUsingVoiceLanguage:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateActiveRouteDetails:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateAudioRouteSelection:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateAudioSettings:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateCurrentAudioSetting:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateCurrentAudioSettingForVoicePrompt:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;
- (void)navigationSessionManager:(id)arg1 didUpdateETAResponseForRoute:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateFeedback:(id)arg2 forAlightingStepAtIndex:(unsigned long long)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateHeading:(double)arg2 accuracy:(double)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationSessionManager:(id)arg1 didUpdateTracePlaybackDetails:(id)arg2;
- (void)navigationSessionManager:(id)arg1 didUpdateTrafficForETARoute:(id)arg2 from:(unsigned int)arg3 to:(unsigned int)arg4 forRoute:(id)arg5;
- (void)navigationSessionManager:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;
- (void)navigationSessionManager:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;
- (void)navigationSessionManager:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)navigationSessionManager:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationSessionManager:(id)arg1 failedRerouteWithErrorCode:(long long)arg2;
- (void)navigationSessionManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;
- (void)navigationSessionManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;
- (void)navigationSessionManager:(id)arg1 proceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned long long)arg4;
- (void)navigationSessionManager:(id)arg1 showLaneDirections:(id)arg2;
- (void)navigationSessionManager:(id)arg1 updateSignsWithInfo:(id)arg2;
- (void)navigationSessionManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;
- (void)navigationSessionManager:(id)arg1 usePersistentDisplay:(bool)arg2;
- (void)navigationSessionManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;
- (void)navigationSessionManagerBeginGuidanceUpdate:(id)arg1;
- (void)navigationSessionManagerDidArrive:(id)arg1;
- (void)navigationSessionManagerDidCancelReroute:(id)arg1;
- (void)navigationSessionManagerEndGuidanceUpdate:(id)arg1;
- (void)navigationSessionManagerHideSecondaryStep:(id)arg1;
- (void)navigationSessionManagerWillPause:(id)arg1;
- (void)navigationSessionManagerWillReroute:(id)arg1;
- (void)navigationSessionManagerWillResumeFromPause:(id)arg1;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)arg1;
- (void)resumeOriginalDestination;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setFullGuidanceMode:(bool)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setHFPPreference:(bool)arg1 forSetting:(id)arg2;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)start;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(id /* block */)arg2;
- (void)startPredictingDestinationsWithHandler:(id /* block */)arg1;
- (void)stateManager:(id)arg1 didChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)stateManager:(id)arg1 didUpdateIsInVehicle:(bool)arg2;
- (void)stateManager:(id)arg1 didUpdatePossibleDestinations:(id)arg2;
- (void)stateManager:(id)arg1 willChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)stateManagerPredictingDidArrive:(id)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)stopPredictingDestinations;
- (void)switchToRouteWithDetails:(id)arg1;
- (void)updateDestination:(id)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(id /* block */)arg2;

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