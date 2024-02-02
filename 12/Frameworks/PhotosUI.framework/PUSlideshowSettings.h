<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUSlideshowSettings.h</title>
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

/Frameworks/PhotosUI.framework/PUSlideshowSettings.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUSlideshowSettings : PXSettings {
    bool  _allowUserInteractivity;
    OKProducerPreset * _currentPreset;
    NSString * _currentPresetUniqueIdentifier;
    double  _interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
    double  _interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
    double  _interactiveTransitionFingerTrackingBoxRadiusMaxValue;
    double  _interactiveTransitionFingerTrackingBoxRadiusMinValue;
    double  _interactiveTransitionProgressThresholdDefaultValue;
    double  _interactiveTransitionProgressThresholdIncrementValue;
    double  _interactiveTransitionProgressThresholdMaxValue;
    double  _interactiveTransitionProgressThresholdMinValue;
    double  _interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
    double  _interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
    double  _interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
    double  _interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
    bool  _slideshowSettingsEnableFullscreenSupport;
}

@property (nonatomic) bool allowUserInteractivity;
@property (nonatomic, retain) OKProducerPreset *currentPreset;
@property (nonatomic, retain) NSString *currentPresetUniqueIdentifier;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMaxValue;
@property (nonatomic) double interactiveTransitionFingerTrackingBoxRadiusMinValue;
@property (nonatomic) double interactiveTransitionProgressThresholdDefaultValue;
@property (nonatomic) double interactiveTransitionProgressThresholdIncrementValue;
@property (nonatomic) double interactiveTransitionProgressThresholdMaxValue;
@property (nonatomic) double interactiveTransitionProgressThresholdMinValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
@property (nonatomic) double interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
@property (nonatomic) bool slideshowSettingsEnableFullscreenSupport;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)allowUserInteractivity;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentPreset;
- (id)currentPresetUniqueIdentifier;
- (double)interactiveTransitionFingerTrackingBoxRadiusDefaultValue;
- (double)interactiveTransitionFingerTrackingBoxRadiusIncrementValue;
- (double)interactiveTransitionFingerTrackingBoxRadiusMaxValue;
- (double)interactiveTransitionFingerTrackingBoxRadiusMinValue;
- (double)interactiveTransitionProgressThresholdDefaultValue;
- (double)interactiveTransitionProgressThresholdIncrementValue;
- (double)interactiveTransitionProgressThresholdMaxValue;
- (double)interactiveTransitionProgressThresholdMinValue;
- (double)interactiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue;
- (double)interactiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue;
- (double)interactiveTransitionVelocityThresholdForAlwaysFinishingMaxValue;
- (double)interactiveTransitionVelocityThresholdForAlwaysFinishingMinValue;
- (id)parentSettings;
- (void)performPostSaveActions;
- (void)removeTransitionTimingCustomizationsFromUserDefaults;
- (void)restoreCurrentInteractiveTransitionValuesFromUserDefaults;
- (void)saveInteractiveSlideshowSettingsInUserDefaults;
- (void)setAllowUserInteractivity:(bool)arg1;
- (void)setCurrentPreset:(id)arg1;
- (void)setCurrentPresetUniqueIdentifier:(id)arg1;
- (void)setDefaultPresetTransitionValues;
- (void)setDefaultValues;
- (void)setInteractiveTransitionFingerTrackingBoxRadiusDefaultValue:(double)arg1;
- (void)setInteractiveTransitionFingerTrackingBoxRadiusIncrementValue:(double)arg1;
- (void)setInteractiveTransitionFingerTrackingBoxRadiusMaxValue:(double)arg1;
- (void)setInteractiveTransitionFingerTrackingBoxRadiusMinValue:(double)arg1;
- (void)setInteractiveTransitionProgressThresholdDefaultValue:(double)arg1;
- (void)setInteractiveTransitionProgressThresholdIncrementValue:(double)arg1;
- (void)setInteractiveTransitionProgressThresholdMaxValue:(double)arg1;
- (void)setInteractiveTransitionProgressThresholdMinValue:(double)arg1;
- (void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingDefaultValue:(double)arg1;
- (void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingIncrementValue:(double)arg1;
- (void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingMaxValue:(double)arg1;
- (void)setInteractiveTransitionVelocityThresholdForAlwaysFinishingMinValue:(double)arg1;
- (void)setSlideshowSettingsEnableFullscreenSupport:(bool)arg1;
- (bool)slideshowSettingsEnableFullscreenSupport;
- (bool)transitionSettingsAreDefaults;

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