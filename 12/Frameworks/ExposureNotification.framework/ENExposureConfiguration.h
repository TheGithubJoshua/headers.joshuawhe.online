<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ENExposureConfiguration.h</title>
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

/Frameworks/ExposureNotification.framework/ENExposureConfiguration.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification (150.1)
 */

@interface ENExposureConfiguration : NSObject <CUXPCCodable, NSCopying> {
    NSArray * _attenuationDurationThresholds;
    NSArray * _attenuationLevelValues;
    unsigned char  _attenuationLevelValuesMap;
    double  _attenuationWeight;
    NSArray * _daysSinceLastExposureLevelValues;
    unsigned char  _daysSinceLastExposureLevelValuesMap;
    long long  _daysSinceLastExposureThreshold;
    double  _daysSinceLastExposureWeight;
    NSArray * _durationLevelValues;
    unsigned char  _durationLevelValuesMap;
    double  _durationWeight;
    unsigned int  _flags;
    double  _immediateDurationWeight;
    NSDictionary * _infectiousnessForDaysSinceOnsetOfSymptoms;
    double  _infectiousnessHighWeight;
    double  _infectiousnessStandardWeight;
    double  _mediumDurationWeight;
    NSDictionary * _metadata;
    unsigned char  _minimumRiskScore;
    double  _minimumRiskScoreFullRange;
    double  _nearDurationWeight;
    double  _otherDurationWeight;
    double  _reportTypeConfirmedClinicalDiagnosisWeight;
    double  _reportTypeConfirmedTestWeight;
    unsigned int  _reportTypeNoneMap;
    double  _reportTypeRecursiveWeight;
    double  _reportTypeSelfReportedWeight;
    NSArray * _transmissionRiskLevelValues;
    unsigned char  _transmissionRiskLevelValuesMap;
    double  _transmissionRiskWeight;
}

@property (nonatomic, copy) NSArray *attenuationDurationThresholds;
@property (nonatomic, copy) NSArray *attenuationLevelValues;
@property (nonatomic) double attenuationWeight;
@property (nonatomic, copy) NSArray *daysSinceLastExposureLevelValues;
@property (nonatomic) long long daysSinceLastExposureThreshold;
@property (nonatomic) double daysSinceLastExposureWeight;
@property (nonatomic, copy) NSArray *durationLevelValues;
@property (nonatomic) double durationWeight;
@property (nonatomic) unsigned int flags;
@property (nonatomic) double immediateDurationWeight;
@property (nonatomic, copy) NSDictionary *infectiousnessForDaysSinceOnsetOfSymptoms;
@property (nonatomic) double infectiousnessHighWeight;
@property (nonatomic) double infectiousnessStandardWeight;
@property (nonatomic) double mediumDurationWeight;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic) unsigned char minimumRiskScore;
@property (nonatomic) double minimumRiskScoreFullRange;
@property (nonatomic) double nearDurationWeight;
@property (nonatomic) double otherDurationWeight;
@property (nonatomic) double reportTypeConfirmedClinicalDiagnosisWeight;
@property (nonatomic) double reportTypeConfirmedTestWeight;
@property (nonatomic) unsigned int reportTypeNoneMap;
@property (nonatomic) double reportTypeRecursiveWeight;
@property (nonatomic) double reportTypeSelfReportedWeight;
@property (nonatomic, copy) NSArray *transmissionRiskLevelValues;
@property (nonatomic) double transmissionRiskWeight;

- (void).cxx_destruct;
- (id)attenuationDurationThresholds;
- (double)attenuationLevelValueWithAttenuation:(unsigned char)arg1;
- (id)attenuationLevelValues;
- (double)attenuationWeight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)daysSinceLastExposureLevelValueWithDays:(long long)arg1;
- (id)daysSinceLastExposureLevelValues;
- (long long)daysSinceLastExposureThreshold;
- (double)daysSinceLastExposureWeight;
- (id)description;
- (id)dictionaryRepresentation;
- (double)durationLevelValueWithDuration:(double)arg1;
- (id)durationLevelValues;
- (double)durationWeight;
- (void)encodeWithXPCObject:(id)arg1;
- (unsigned int)flags;
- (double)immediateDurationWeight;
- (id)infectiousnessForDaysSinceOnsetOfSymptoms;
- (double)infectiousnessHighWeight;
- (double)infectiousnessStandardWeight;
- (double)infectiousnessWeightWithDaysSinceOnsetOfSymptoms:(long long)arg1 skip:(bool*)arg2;
- (unsigned int)infectiousnessWithDaysSinceOnsetOfSymptoms:(long long)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (unsigned int)mappedDiagnosisReportType:(unsigned int)arg1;
- (double)mediumDurationWeight;
- (id)metadata;
- (unsigned char)minimumRiskScore;
- (double)minimumRiskScoreFullRange;
- (double)nearDurationWeight;
- (double)otherDurationWeight;
- (double)reportTypeConfirmedClinicalDiagnosisWeight;
- (double)reportTypeConfirmedTestWeight;
- (unsigned int)reportTypeNoneMap;
- (double)reportTypeRecursiveWeight;
- (double)reportTypeSelfReportedWeight;
- (double)reportTypeWeightWithReportType:(unsigned int)arg1 skip:(bool*)arg2;
- (void)setAttenuationDurationThresholds:(id)arg1;
- (void)setAttenuationLevelValues:(id)arg1;
- (void)setAttenuationWeight:(double)arg1;
- (void)setDaysSinceLastExposureLevelValues:(id)arg1;
- (void)setDaysSinceLastExposureThreshold:(long long)arg1;
- (void)setDaysSinceLastExposureWeight:(double)arg1;
- (void)setDurationLevelValues:(id)arg1;
- (void)setDurationWeight:(double)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setImmediateDurationWeight:(double)arg1;
- (void)setInfectiousnessForDaysSinceOnsetOfSymptoms:(id)arg1;
- (void)setInfectiousnessHighWeight:(double)arg1;
- (void)setInfectiousnessStandardWeight:(double)arg1;
- (void)setMediumDurationWeight:(double)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMinimumRiskScore:(unsigned char)arg1;
- (void)setMinimumRiskScoreFullRange:(double)arg1;
- (void)setNearDurationWeight:(double)arg1;
- (void)setOtherDurationWeight:(double)arg1;
- (void)setReportTypeConfirmedClinicalDiagnosisWeight:(double)arg1;
- (void)setReportTypeConfirmedTestWeight:(double)arg1;
- (void)setReportTypeNoneMap:(unsigned int)arg1;
- (void)setReportTypeRecursiveWeight:(double)arg1;
- (void)setReportTypeSelfReportedWeight:(double)arg1;
- (void)setTransmissionRiskLevelValues:(id)arg1;
- (void)setTransmissionRiskWeight:(double)arg1;
- (double)transmissionLevelValueWithTransmissionRiskLevel:(unsigned char)arg1;
- (id)transmissionRiskLevelValues;
- (double)transmissionRiskWeight;
- (double)weightedDurationWithExposureInfo:(id)arg1;

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