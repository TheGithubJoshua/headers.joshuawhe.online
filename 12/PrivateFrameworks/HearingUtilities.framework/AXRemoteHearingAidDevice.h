<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AXRemoteHearingAidDevice.h</title>
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

/PrivateFrameworks/HearingUtilities.framework/AXRemoteHearingAidDevice.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport (1)
 */

@interface AXRemoteHearingAidDevice : NSObject <AXHADeviceProtocol> {
    bool  _delayWritePending;
    NSString * _deviceUUID;
    bool  _isBluetoothPaired;
    bool  _isConnecting;
    bool  _isPaired;
    bool  _keepInSync;
    unsigned long long  _leftAvailableProperties;
    BOOL  _leftBass;
    double  _leftBatteryLevel;
    NSDate * _leftBatteryLowDate;
    bool  _leftConnected;
    NSString * _leftFirmwareVersion;
    NSString * _leftHardwareVersion;
    double  _leftMicrophoneVolume;
    short  _leftMicrophoneVolumeSteps;
    double  _leftMixedVolume;
    short  _leftMixedVolumeSteps;
    NSString * _leftPeripheralUUID;
    NSArray * _leftPrograms;
    AXHearingAidMode * _leftSelectedProgram;
    AXHearingAidMode * _leftSelectedStreamingProgram;
    double  _leftSensitivity;
    short  _leftSensitivitySteps;
    double  _leftStreamVolume;
    short  _leftStreamVolumeSteps;
    BOOL  _leftTreble;
    NSString * _leftUUID;
    unsigned long long  _loadedProperties;
    NSMutableArray * _manufacturer;
    NSMutableArray * _model;
    NSString * _name;
    unsigned long long  _pendingPropertyWrites;
    unsigned long long  _rightAvailableProperties;
    BOOL  _rightBass;
    double  _rightBatteryLevel;
    NSDate * _rightBatteryLowDate;
    bool  _rightConnected;
    NSString * _rightFirmwareVersion;
    NSString * _rightHardwareVersion;
    double  _rightMicrophoneVolume;
    short  _rightMicrophoneVolumeSteps;
    double  _rightMixedVolume;
    short  _rightMixedVolumeSteps;
    NSString * _rightPeripheralUUID;
    NSArray * _rightPrograms;
    AXHearingAidMode * _rightSelectedProgram;
    AXHearingAidMode * _rightSelectedStreamingProgram;
    double  _rightSensitivity;
    short  _rightSensitivitySteps;
    double  _rightStreamVolume;
    short  _rightStreamVolumeSteps;
    BOOL  _rightTreble;
    NSString * _rightUUID;
    bool  _supportsBinauralStreaming;
    bool  _supportsCombinedPresets;
    bool  _supportsCombinedVolumes;
    <AXHARemoteUpdateProtocol> * _updateDelegate;
    int  availableEars;
}

@property (nonatomic) int availableEars;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceUUID;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isBluetoothPaired;
@property (nonatomic) bool isConnecting;
@property (nonatomic) bool isPaired;
@property (nonatomic) bool keepInSync;
@property (nonatomic) unsigned long long leftAvailableProperties;
@property (nonatomic) BOOL leftBass;
@property (nonatomic) double leftBatteryLevel;
@property (nonatomic, retain) NSDate *leftBatteryLowDate;
@property (nonatomic) bool leftConnected;
@property (nonatomic, retain) NSString *leftFirmwareVersion;
@property (nonatomic, retain) NSString *leftHardwareVersion;
@property (nonatomic) double leftMicrophoneVolume;
@property (nonatomic) short leftMicrophoneVolumeSteps;
@property (nonatomic) double leftMixedVolume;
@property (nonatomic) short leftMixedVolumeSteps;
@property (nonatomic, retain) NSString *leftPeripheralUUID;
@property (nonatomic, copy) NSArray *leftPrograms;
@property (nonatomic, retain) AXHearingAidMode *leftSelectedProgram;
@property (nonatomic, retain) AXHearingAidMode *leftSelectedStreamingProgram;
@property (nonatomic) double leftSensitivity;
@property (nonatomic) short leftSensitivitySteps;
@property (nonatomic) double leftStreamVolume;
@property (nonatomic) short leftStreamVolumeSteps;
@property (nonatomic) BOOL leftTreble;
@property (nonatomic, retain) NSString *leftUUID;
@property (nonatomic) unsigned long long loadedProperties;
@property (nonatomic, retain) NSMutableArray *manufacturer;
@property (nonatomic, retain) NSMutableArray *model;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long pendingPropertyWrites;
@property (nonatomic) unsigned long long rightAvailableProperties;
@property (nonatomic) BOOL rightBass;
@property (nonatomic) double rightBatteryLevel;
@property (nonatomic, retain) NSDate *rightBatteryLowDate;
@property (nonatomic) bool rightConnected;
@property (nonatomic, retain) NSString *rightFirmwareVersion;
@property (nonatomic, retain) NSString *rightHardwareVersion;
@property (nonatomic) double rightMicrophoneVolume;
@property (nonatomic) short rightMicrophoneVolumeSteps;
@property (nonatomic) double rightMixedVolume;
@property (nonatomic) short rightMixedVolumeSteps;
@property (nonatomic, retain) NSString *rightPeripheralUUID;
@property (nonatomic, copy) NSArray *rightPrograms;
@property (nonatomic, retain) AXHearingAidMode *rightSelectedProgram;
@property (nonatomic, retain) AXHearingAidMode *rightSelectedStreamingProgram;
@property (nonatomic) double rightSensitivity;
@property (nonatomic) short rightSensitivitySteps;
@property (nonatomic) double rightStreamVolume;
@property (nonatomic) short rightStreamVolumeSteps;
@property (nonatomic) BOOL rightTreble;
@property (nonatomic, retain) NSString *rightUUID;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsBinauralStreaming;
@property (nonatomic) bool supportsCombinedPresets;
@property (nonatomic) bool supportsCombinedVolumes;
@property (nonatomic) <AXHARemoteUpdateProtocol> *updateDelegate;

- (void).cxx_destruct;
- (void)_delayWriteProperties;
- (void)_updateSelectedProgramsProperties;
- (id)_valueForProperty:(unsigned long long)arg1;
- (void)_writeAllProgramSelectionsToPeripheral;
- (int)availableEars;
- (id)combinedPrograms;
- (void)connect;
- (bool)containsPeripheralWithUUID:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceUUID;
- (bool)didLoadBasicProperties;
- (bool)didLoadProperty:(unsigned long long)arg1;
- (bool)didLoadRequiredProperties;
- (void)disconnectAndUnpair:(bool)arg1;
- (bool)hasConnection;
- (id)init;
- (id)initWithPersistentRepresentation:(id)arg1;
- (id)initWithRemoteRepresentation:(id)arg1 andDeviceID:(id)arg2;
- (bool)isBluetoothPaired;
- (bool)isConnected;
- (bool)isConnecting;
- (bool)isLeftConnected;
- (bool)isPaired;
- (bool)isRightConnected;
- (bool)keepInSync;
- (bool)leftAvailable;
- (unsigned long long)leftAvailableProperties;
- (BOOL)leftBass;
- (double)leftBatteryLevel;
- (id)leftBatteryLowDate;
- (bool)leftConnected;
- (id)leftFirmwareVersion;
- (id)leftHardwareVersion;
- (double)leftMicrophoneVolume;
- (short)leftMicrophoneVolumeSteps;
- (double)leftMixedVolume;
- (short)leftMixedVolumeSteps;
- (id)leftPeripheralUUID;
- (id)leftPrograms;
- (id)leftSelectedProgram;
- (id)leftSelectedStreamingProgram;
- (double)leftSensitivity;
- (short)leftSensitivitySteps;
- (double)leftStreamVolume;
- (short)leftStreamVolumeSteps;
- (BOOL)leftTreble;
- (id)leftUUID;
- (void)loadRequiredProperties;
- (unsigned long long)loadedProperties;
- (id)manufacturer;
- (id)model;
- (id)name;
- (unsigned long long)pendingPropertyWrites;
- (id)programAtIndex:(unsigned char)arg1 forEar:(int)arg2;
- (id)programs;
- (bool)programsListsAreEqual;
- (bool)propertyIsAvailable:(unsigned long long)arg1 forEar:(int)arg2;
- (bool)rightAvailable;
- (unsigned long long)rightAvailableProperties;
- (BOOL)rightBass;
- (double)rightBatteryLevel;
- (id)rightBatteryLowDate;
- (bool)rightConnected;
- (id)rightFirmwareVersion;
- (id)rightHardwareVersion;
- (double)rightMicrophoneVolume;
- (short)rightMicrophoneVolumeSteps;
- (double)rightMixedVolume;
- (short)rightMixedVolumeSteps;
- (id)rightPeripheralUUID;
- (id)rightPrograms;
- (id)rightSelectedProgram;
- (id)rightSelectedStreamingProgram;
- (double)rightSensitivity;
- (short)rightSensitivitySteps;
- (double)rightStreamVolume;
- (short)rightStreamVolumeSteps;
- (BOOL)rightTreble;
- (id)rightUUID;
- (void)selectProgram:(id)arg1 forEar:(int)arg2;
- (id)selectedProgramIndexes;
- (id)selectedPrograms;
- (void)setAvailableEars:(int)arg1;
- (void)setDeviceUUID:(id)arg1;
- (void)setIsBluetoothPaired:(bool)arg1;
- (void)setIsConnecting:(bool)arg1;
- (void)setIsPaired:(bool)arg1;
- (void)setKeepInSync:(bool)arg1;
- (void)setLeftAvailableProperties:(unsigned long long)arg1;
- (void)setLeftBass:(BOOL)arg1;
- (void)setLeftBatteryLevel:(double)arg1;
- (void)setLeftBatteryLowDate:(id)arg1;
- (void)setLeftConnected:(bool)arg1;
- (void)setLeftFirmwareVersion:(id)arg1;
- (void)setLeftHardwareVersion:(id)arg1;
- (void)setLeftMicrophoneVolume:(double)arg1;
- (void)setLeftMicrophoneVolumeSteps:(short)arg1;
- (void)setLeftMixedVolume:(double)arg1;
- (void)setLeftMixedVolumeSteps:(short)arg1;
- (void)setLeftPeripheralUUID:(id)arg1;
- (void)setLeftPrograms:(id)arg1;
- (void)setLeftSelectedProgram:(id)arg1;
- (void)setLeftSelectedStreamingProgram:(id)arg1;
- (void)setLeftSensitivity:(double)arg1;
- (void)setLeftSensitivitySteps:(short)arg1;
- (void)setLeftStreamVolume:(double)arg1;
- (void)setLeftStreamVolumeSteps:(short)arg1;
- (void)setLeftTreble:(BOOL)arg1;
- (void)setLeftUUID:(id)arg1;
- (void)setLoadedProperties:(unsigned long long)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPendingPropertyWrites:(unsigned long long)arg1;
- (void)setRightAvailableProperties:(unsigned long long)arg1;
- (void)setRightBass:(BOOL)arg1;
- (void)setRightBatteryLevel:(double)arg1;
- (void)setRightBatteryLowDate:(id)arg1;
- (void)setRightConnected:(bool)arg1;
- (void)setRightFirmwareVersion:(id)arg1;
- (void)setRightHardwareVersion:(id)arg1;
- (void)setRightMicrophoneVolume:(double)arg1;
- (void)setRightMicrophoneVolumeSteps:(short)arg1;
- (void)setRightMixedVolume:(double)arg1;
- (void)setRightMixedVolumeSteps:(short)arg1;
- (void)setRightPeripheralUUID:(id)arg1;
- (void)setRightPrograms:(id)arg1;
- (void)setRightSelectedProgram:(id)arg1;
- (void)setRightSelectedStreamingProgram:(id)arg1;
- (void)setRightSensitivity:(double)arg1;
- (void)setRightSensitivitySteps:(short)arg1;
- (void)setRightStreamVolume:(double)arg1;
- (void)setRightStreamVolumeSteps:(short)arg1;
- (void)setRightTreble:(BOOL)arg1;
- (void)setRightUUID:(id)arg1;
- (void)setSupportsBinauralStreaming:(bool)arg1;
- (void)setSupportsCombinedPresets:(bool)arg1;
- (void)setSupportsCombinedVolumes:(bool)arg1;
- (void)setUpdateDelegate:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;
- (bool)shouldDisplayCombinedVolume;
- (bool)shouldOnlyShowIndividualVolumesForProperty:(unsigned long long)arg1;
- (bool)showCombinedPrograms;
- (bool)supportsBinauralStreaming;
- (bool)supportsCombinedPresets;
- (bool)supportsCombinedVolumes;
- (bool)supportsCombinedVolumesForProperty:(unsigned long long)arg1;
- (id)updateDelegate;
- (id)valueForProperty:(unsigned long long)arg1;
- (void)writeVolumesForProperty:(unsigned long long)arg1;

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