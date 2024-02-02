<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CLSimulationManager.h</title>
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

/Frameworks/CoreLocation.framework/CLSimulationManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation (2245.16.14)
 */

@interface CLSimulationManager : NSObject {
    NSXPCConnection * _connection;
    unsigned char  _locationDeliveryBehavior;
    double  _locationDistance;
    double  _locationInterval;
    unsigned char  _locationRepeatBehavior;
    double  _locationSpeed;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly) <CLSimulationXPCServerInterface> *daemonProxy;
@property (nonatomic) unsigned char locationDeliveryBehavior;
@property (nonatomic) double locationDistance;
@property (nonatomic) double locationInterval;
@property (nonatomic) unsigned char locationRepeatBehavior;
@property (nonatomic) double locationSpeed;

- (void)appendSimulatedLocation:(id)arg1;
- (id)availableScenarios;
- (void)clearSimulatedCells;
- (void)clearSimulatedLocations;
- (id)connection;
- (id)daemonProxy;
- (void)flush;
- (void)getFencesForBundleID:(id)arg1 withHandler:(id /* block */)arg2;
- (id)init;
- (void)loadScenarioFromURL:(id)arg1;
- (id)localizedNameForScenario:(id)arg1;
- (unsigned char)locationDeliveryBehavior;
- (double)locationDistance;
- (double)locationInterval;
- (unsigned char)locationRepeatBehavior;
- (double)locationSpeed;
- (id)scenariosPath;
- (void)selectScenario:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setLocationDeliveryBehavior:(unsigned char)arg1;
- (void)setLocationDistance:(double)arg1;
- (void)setLocationInterval:(double)arg1;
- (void)setLocationRepeatBehavior:(unsigned char)arg1;
- (void)setLocationSpeed:(double)arg1;
- (void)setSimulatedCell:(id)arg1;
- (void)setSimulatedCellRegistrationStatus:(bool)arg1;
- (void)setSimulatedWifiPower:(bool)arg1;
- (void)setWifiScanResults:(id)arg1;
- (void)simulateFenceWithBundleID:(id)arg1 andFenceID:(id)arg2 eventType:(unsigned char)arg3 atLocation:(id)arg4;
- (void)simulateSignificantLocationChange:(id)arg1;
- (void)simulateVisit:(id)arg1;
- (void)startCellSimulation;
- (void)startLocationSimulation;
- (void)startWifiSimulation;
- (void)stopCellSimulation;
- (void)stopLocationSimulation;
- (void)stopWifiSimulation;

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