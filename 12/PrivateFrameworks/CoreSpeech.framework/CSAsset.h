<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CSAsset.h</title>
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

/PrivateFrameworks/CoreSpeech.framework/CSAsset.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech ()
 */

@interface CSAsset : NSObject {
    NSString * _configVersion;
    NSDictionary * _decodedInfo;
    NSString * _path;
    NSString * _resourcePath;
}

@property (nonatomic, readonly) NSString *CVTConfigPathNDAPI;
@property (nonatomic, readonly) float CVTThreshold;
@property (nonatomic, readonly) float CVTTwoShotDecisionWaitTime;
@property (nonatomic, readonly) float CVTTwoShotThreshold;
@property (nonatomic, readonly) unsigned int SSVEnergyBufferSize;
@property (nonatomic, readonly) unsigned long long SSVLKFSChannelBitset;
@property (nonatomic, readonly) unsigned int SSVLKFSLowerPercentile;
@property (nonatomic, readonly) float SSVLKFSMicSensitivityOffset;
@property (nonatomic, readonly) float SSVLKFSTTSMappingInputRangeHigh;
@property (nonatomic, readonly) float SSVLKFSTTSMappingInputRangeLow;
@property (nonatomic, readonly) float SSVLKFSTTSMappingOutputRangeHigh;
@property (nonatomic, readonly) float SSVLKFSTTSMappingOutputRangeLow;
@property (nonatomic, readonly) float SSVLKFSTimeConstant;
@property (nonatomic, readonly) unsigned int SSVLKFSUpperPercentile;
@property (nonatomic, readonly) unsigned long long SSVNoiseLevelChannelBitset;
@property (nonatomic, readonly) unsigned int SSVNoiseLowerPercentile;
@property (nonatomic, readonly) float SSVNoiseMicSensitivityOffset;
@property (nonatomic, readonly) float SSVNoiseTTSMappingInputRangeHigh;
@property (nonatomic, readonly) float SSVNoiseTTSMappingInputRangeLow;
@property (nonatomic, readonly) float SSVNoiseTTSMappingOutputRangeHigh;
@property (nonatomic, readonly) float SSVNoiseTTSMappingOutputRangeLow;
@property (nonatomic, readonly) float SSVNoiseTimeConstant;
@property (nonatomic, readonly) unsigned int SSVNoiseUpperPercentile;
@property (nonatomic, readonly) float SSVNoiseWeight;
@property (nonatomic, readonly) NSDictionary *SSVParameterDirectionary;
@property (nonatomic, readonly) float SSVTTSVolumeLowerLimitDB;
@property (nonatomic, readonly) float SSVTTSVolumeUpperLimitDB;
@property (nonatomic, readonly) float SSVUserOffsetInputRangeHigh;
@property (nonatomic, readonly) float SSVUserOffsetInputRangeLow;
@property (nonatomic, readonly) float SSVUserOffsetOutputRangeHigh;
@property (nonatomic, readonly) float SSVUserOffsetOutputRangeLow;
@property (nonatomic, readonly) NSString *VTFirstPassConfigPathNDAPI;
@property (nonatomic, readonly) float VTFirstPassDelaySecondsForChannelSelection;
@property (nonatomic, readonly) float VTFirstPassMasterChannelScoreBoost;
@property (nonatomic, readonly) unsigned long long VTFirstPassProcessingChannelsBitset;
@property (nonatomic, readonly) float VTFirstPassProcessingChunkSeconds;
@property (nonatomic, readonly) float VTFirstPassThreshold;
@property (nonatomic, readonly) NSString *configVersion;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSString *hashFromResourcePath;
@property (nonatomic, readonly) NSString *keywordDetectorConfigPathRecognizer;
@property (nonatomic, readonly) float keywordDetectorThreshold;
@property (nonatomic, readonly) float keywordDetectorWaitTimeSinceVT;
@property (nonatomic, readonly) unsigned long long maxSpeakerVectorsToPersist;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *resourcePath;
@property (nonatomic, readonly) NSString *speakerDetectorNDAPIConfigPath;
@property (nonatomic, readonly) float speakerDetectorRetrainTriggerThreshold;
@property (nonatomic, readonly) float speakerDetectorThreshold;

+ (id)assetForAssetType:(unsigned long long)arg1 resourcePath:(id)arg2 configVersion:(id)arg3;
+ (id)defaultFallBackAssetForHearst;
+ (id)defaultFallBackAssetForSmartSiriVolume;
+ (id)defaultFallBackAssetForVoiceTrigger;
+ (id)fallBackAssetResourcePath;
+ (id)hybridEndpointerAssetFilename;

- (void).cxx_destruct;
- (id)CVTConfigPathNDAPI;
- (float)CVTThreshold;
- (float)CVTTwoShotDecisionWaitTime;
- (float)CVTTwoShotThreshold;
- (id)RTModelWithFallbackLanguage:(id)arg1;
- (unsigned int)SSVEnergyBufferSize;
- (unsigned long long)SSVLKFSChannelBitset;
- (unsigned int)SSVLKFSLowerPercentile;
- (float)SSVLKFSMicSensitivityOffset;
- (float)SSVLKFSTTSMappingInputRangeHigh;
- (float)SSVLKFSTTSMappingInputRangeLow;
- (float)SSVLKFSTTSMappingOutputRangeHigh;
- (float)SSVLKFSTTSMappingOutputRangeLow;
- (float)SSVLKFSTimeConstant;
- (unsigned int)SSVLKFSUpperPercentile;
- (unsigned long long)SSVNoiseLevelChannelBitset;
- (unsigned int)SSVNoiseLowerPercentile;
- (float)SSVNoiseMicSensitivityOffset;
- (float)SSVNoiseTTSMappingInputRangeHigh;
- (float)SSVNoiseTTSMappingInputRangeLow;
- (float)SSVNoiseTTSMappingOutputRangeHigh;
- (float)SSVNoiseTTSMappingOutputRangeLow;
- (float)SSVNoiseTimeConstant;
- (unsigned int)SSVNoiseUpperPercentile;
- (float)SSVNoiseWeight;
- (id)SSVParameterDirectionary;
- (float)SSVTTSVolumeLowerLimitDB;
- (float)SSVTTSVolumeUpperLimitDB;
- (float)SSVUserOffsetInputRangeHigh;
- (float)SSVUserOffsetInputRangeLow;
- (float)SSVUserOffsetOutputRangeHigh;
- (float)SSVUserOffsetOutputRangeLow;
- (id)VTFirstPassConfigPathNDAPI;
- (float)VTFirstPassDelaySecondsForChannelSelection;
- (float)VTFirstPassMasterChannelScoreBoost;
- (unsigned long long)VTFirstPassProcessingChannelsBitset;
- (float)VTFirstPassProcessingChunkSeconds;
- (float)VTFirstPassThreshold;
- (float)VTSecondPass2ndChanceThresholdFrom:(id)arg1;
- (float)VTSecondPassAnalyzerPrependingAudioTimeFrom:(id)arg1;
- (float)VTSecondPassAnalyzerTrailingAudioTimeFrom:(id)arg1;
- (id)VTSecondPassCategoryForFirstPassSource:(unsigned long long)arg1;
- (id)VTSecondPassConfigPathNDAPIFrom:(id)arg1;
- (bool)VTSecondPassConfigPathRecognizerExistFrom:(id)arg1;
- (id)VTSecondPassConfigPathRecognizerFrom:(id)arg1;
- (float)VTSecondPassLoggingThresholdFrom:(id)arg1;
- (float)VTSecondPassMinimumPhraseLengthForVADGating:(id)arg1;
- (float)VTSecondPassPreTriggerAudioTimeFrom:(id)arg1;
- (float)VTSecondPassRecognizerScoreScaleFactorFrom:(id)arg1;
- (float)VTSecondPassRecognizerThresholdOffsetFrom:(id)arg1;
- (id)VTSecondPassRecognizerTokenFrom:(id)arg1;
- (float)VTSecondPassRecognizerWaitTimeFrom:(id)arg1;
- (float)VTSecondPassRemoteVADMyriadThresholdFrom:(id)arg1;
- (float)VTSecondPassRemoteVADThresholdFrom:(id)arg1;
- (float)VTSecondPassThresholdFrom:(id)arg1;
- (float)VTSecondPassTwoShotFeedbackDelayFrom:(id)arg1;
- (bool)VTSecondPassUseKeywordSpottingFrom:(id)arg1;
- (id)_decodeJson:(id)arg1;
- (id)_sha1:(id)arg1;
- (id)_sha256:(id)arg1;
- (id)configVersion;
- (bool)containsCategory:(id)arg1;
- (bool)containsKey:(id)arg1 category:(id)arg2;
- (id)description;
- (id)dictionary;
- (bool)getBoolForKey:(id)arg1 category:(id)arg2 default:(bool)arg3;
- (id)getNumberForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
- (id)getStringForKey:(id)arg1 category:(id)arg2 default:(id)arg3;
- (id)hashFromResourcePath;
- (id)hearstRTModelLocaleMap;
- (id)hearstRTModelWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 locale:(id)arg3;
- (id)initWithResourcePath:(id)arg1 configFile:(id)arg2 configVersion:(id)arg3;
- (bool)isEqualAsset:(id)arg1;
- (id)keywordDetectorConfigPathRecognizer;
- (float)keywordDetectorThreshold;
- (float)keywordDetectorWaitTimeSinceVT;
- (id)latestHearstRTModelForLocale:(id)arg1;
- (unsigned long long)maxSpeakerVectorsToPersist;
- (id)path;
- (id)resourcePath;
- (id)speakerDetectorNDAPIConfigPath;
- (float)speakerDetectorRetrainTriggerThreshold;
- (float)speakerDetectorThreshold;

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