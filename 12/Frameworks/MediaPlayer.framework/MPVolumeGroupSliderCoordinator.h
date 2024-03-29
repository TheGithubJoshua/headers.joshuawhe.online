<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPVolumeGroupSliderCoordinator.h</title>
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

/Frameworks/MediaPlayer.framework/MPVolumeGroupSliderCoordinator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPVolumeGroupSliderCoordinator : NSObject {
    NSArray * _allSliders;
    int  _inFlightDisableOptimisticStateRequests;
    NSMutableSet * _individualVolumeSliders;
    MPVolumeSlider * _masterVolumeSlider;
    NSMapTable * _optimisticScales;
    NSMapTable * _optimisticValues;
    bool  _shouldOverrideTracking;
    bool  _synced;
    MPVolumeSlider * _trackingSlider;
}

@property (nonatomic, readonly, copy) NSArray *individualVolumeSliders;
@property (nonatomic, readonly) MPVolumeSlider *masterVolumeSlider;
@property (nonatomic, readonly) bool synced;

- (void).cxx_destruct;
- (void)_addControlEventsForVolumeSlider:(id)arg1;
- (void)_addControlEventsForVolumeSliders:(id)arg1;
- (float)_maxOptimisticValue;
- (void)_removeControlEventsForVolumeSlider:(id)arg1;
- (void)_removeControlEventsForVolumeSliders:(id)arg1;
- (void)_resetMasterVolumeSlider;
- (void)_resetOptimisticScales;
- (void)_setControlEventsForVolumeSlider:(id)arg1 add:(bool)arg2;
- (void)_updateOptimisticValueCache;
- (void)addIndividualVolumeSlider:(id)arg1;
- (id)individualVolumeSliders;
- (id)initWithMasterVolumeSlider:(id)arg1 individualVolumeSliders:(id)arg2;
- (id)masterVolumeSlider;
- (void)removeAllIndividualVolumeSliders;
- (void)removeIndividualVolumeSlider:(id)arg1;
- (void)syncSliders:(bool)arg1;
- (bool)synced;
- (void)volumeSliderDidEndTracking:(id)arg1;
- (void)volumeSliderValueChanged:(id)arg1;

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
