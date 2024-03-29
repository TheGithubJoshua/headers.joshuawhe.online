<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXImageModulationSettings.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXImageModulationSettings.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXImageModulationSettings : PXSettings {
    double  _EDRHeadroomRequestHDRThreshold;
    long long  _EDRHeadroomRequestScheme;
    double  _EDRHeadroomRequestSustainDuration;
    long long  _HDRConsideration;
    double  _HDRModulationIntensity;
    double  _SDRModulationIntensity;
    double  _deviceMaximumEDRHeadroomStops;
    bool  _enabled;
    long long  _filterType;
    double  _highEDRRequestedHeadroomStops;
    double  _lowEDRRequestedHeadroomStops;
    double  _manualEDRHeadroomRequestStops;
    double  _videoComplementModulationIntensity;
}

@property (nonatomic) double EDRHeadroomRequestHDRThreshold;
@property (nonatomic) long long EDRHeadroomRequestScheme;
@property (nonatomic) double EDRHeadroomRequestSustainDuration;
@property (nonatomic) long long HDRConsideration;
@property (nonatomic) double HDRModulationIntensity;
@property (nonatomic) double SDRModulationIntensity;
@property (nonatomic) double deviceMaximumEDRHeadroomStops;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) long long filterType;
@property (nonatomic) double highEDRRequestedHeadroomStops;
@property (nonatomic) double lowEDRRequestedHeadroomStops;
@property (nonatomic) double manualEDRHeadroomRequestStops;
@property (nonatomic) double videoComplementModulationIntensity;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (double)EDRHeadroomRequestHDRThreshold;
- (long long)EDRHeadroomRequestScheme;
- (double)EDRHeadroomRequestSustainDuration;
- (long long)HDRConsideration;
- (double)HDRModulationIntensity;
- (double)SDRModulationIntensity;
- (double)deviceMaximumEDRHeadroomStops;
- (long long)filterType;
- (double)highEDRRequestedHeadroomStops;
- (bool)isEnabled;
- (double)lowEDRRequestedHeadroomStops;
- (double)manualEDRHeadroomRequestStops;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setDeviceMaximumEDRHeadroomStops:(double)arg1;
- (void)setEDRHeadroomRequestHDRThreshold:(double)arg1;
- (void)setEDRHeadroomRequestScheme:(long long)arg1;
- (void)setEDRHeadroomRequestSustainDuration:(double)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFilterType:(long long)arg1;
- (void)setHDRConsideration:(long long)arg1;
- (void)setHDRModulationIntensity:(double)arg1;
- (void)setHighEDRRequestedHeadroomStops:(double)arg1;
- (void)setLowEDRRequestedHeadroomStops:(double)arg1;
- (void)setManualEDRHeadroomRequestStops:(double)arg1;
- (void)setSDRModulationIntensity:(double)arg1;
- (void)setVideoComplementModulationIntensity:(double)arg1;
- (double)videoComplementModulationIntensity;

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
