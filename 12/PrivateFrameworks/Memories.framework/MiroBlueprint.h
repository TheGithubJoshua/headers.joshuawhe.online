<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MiroBlueprint.h</title>
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

/PrivateFrameworks/Memories.framework/MiroBlueprint.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories (4267.0.31)
 */

@interface MiroBlueprint : NSObject <MiroBlueprintEditStyleProtocol, MiroBlueprintMusicInfoProtocol, MiroBlueprintProtocol, MiroBlueprintTitleStyleProtocol, NSCopying, NSSecureCoding> {
    NSString * _editStyleID;
    NSString * _flexMusicID;
    unsigned long long  _iCloudMusicAccountID;
    unsigned long long  _iCloudMusicMediaID;
    unsigned long long  _iTunesMediaID;
    NSMutableDictionary * _moodDictionary;
    NSArray * _moodIDs;
    NSString * _projectFilterID;
    unsigned int  _randomizerSeed;
    NSString * _songID;
    bool  _songIsLocked;
    NSString * _titleID;
    bool  _titleIsLocked;
}

@property (nonatomic, readonly) NSArray *allowedCropTreatments;
@property (nonatomic, readonly) double burstIdealDuration;
@property (nonatomic, readonly) double burstMinDuration;
@property (nonatomic, readonly) NSArray *burstStyleNames;
@property (nonatomic, readonly) bool centerOnFrame;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) id debugSingleTransitionID;
@property (nonatomic, readonly) bool defaultCameraMotionIsPan;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MiroBlueprintEditStyleProtocol> *editStyle;
@property (nonatomic, readonly) NSString *editStyleID;
@property (nonatomic, readonly) NSString *effectID;
@property (nonatomic, readonly) NSArray *expandedMultiUpTransitionDictionaries;
@property (nonatomic, readonly) bool extremeZoomAllowed;
@property (nonatomic, readonly) NSString *flexMusicID;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) double halfBarDuration;
@property (nonatomic, readonly) double hardCutPercentage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *healingEditTransitionDictionary;
@property (nonatomic, readonly) bool healingTransitionsAllowed;
@property (nonatomic) unsigned long long iCloudMusicAccountID;
@property (nonatomic) unsigned long long iCloudMusicMediaID;
@property (nonatomic) unsigned long long iTunesMediaID;
@property (nonatomic, readonly) double irisIdealDuration;
@property (nonatomic, readonly) double irisMaxDuration;
@property (nonatomic, readonly) double irisMinDuration;
@property (nonatomic, readonly) bool isMoodDictionaryPopulated;
@property (nonatomic, readonly) double kenBurnsAnyStillPercentage;
@property (nonatomic, readonly) double maxZoomLevel;
@property (nonatomic, retain) NSMutableDictionary *moodDictionary;
@property (nonatomic, readonly) NSString *moodID;
@property (nonatomic, retain) NSArray *moodIDs;
@property (nonatomic, readonly) NSArray *multiUpTransitionDictionaries;
@property (nonatomic, readonly) NSArray *multiUpTransitionsAsDictionaries;
@property (nonatomic, readonly) <MiroBlueprintMusicInfoProtocol> *musicInfo;
@property (nonatomic, readonly) NSDictionary *parametersDictionary;
@property (nonatomic, readonly) double photoIdealDuration;
@property (nonatomic, readonly) double photoMaxDuration;
@property (nonatomic, readonly) double photoMinDuration;
@property (nonatomic, copy) NSString *projectFilterID;
@property (nonatomic) unsigned int randomizerSeed;
@property (nonatomic, readonly) NSString *sequentialNUpEffect;
@property (nonatomic, readonly) double sloMoIdealDuration;
@property (nonatomic, readonly) double sloMoMinDuration;
@property (nonatomic, retain) NSString *songID;
@property (nonatomic) bool songIsLocked;
@property (nonatomic, readonly) unsigned long long songPace;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool sweepingPansAllowed;
@property (nonatomic, readonly) double timelapseIdealDuration;
@property (nonatomic, readonly) double timelapseMinDuration;
@property (nonatomic, readonly) NSString *titleAndAnimationStyleDescription;
@property (nonatomic, readonly) NSString *titleID;
@property (nonatomic, readonly) double titleIdealDuration;
@property (nonatomic) bool titleIsLocked;
@property (nonatomic, readonly) double titleMinDuration;
@property (nonatomic, readonly) bool titleRequestsColorAnalysis;
@property (nonatomic, readonly) <MiroBlueprintTitleStyleProtocol> *titleStyle;
@property (nonatomic, readonly) NSDictionary *titleStyleDictionary;
@property (nonatomic, readonly) unsigned long long toneTreatment;
@property (nonatomic, readonly) NSArray *transitionsAsDictionaries;
@property (nonatomic, readonly) double videoIdealDuration;
@property (nonatomic, readonly) double videoMaxDuration;
@property (nonatomic, readonly) double videoMinDuration;

+ (id)blueprint;
+ (id)blueprintFromFontName:(id)arg1;
+ (id)blueprintFromSerializedDictionaryRepresentation:(id)arg1;
+ (id)blueprintWithMood:(id)arg1;
+ (id)emptyBlueprint;
+ (id)keysAffectingAutoEdit;
+ (id)nominalBlueprint;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_moodPaceKey;
- (id)_pacingKey;
- (double)_photoIdealDuration;
- (double)_photoMaxDuration;
- (double)_photoMinDuration;
- (double)_videoIdealDuration;
- (double)_videoMaxDuration;
- (double)_videoMinDuration;
- (id)allowedCropTreatments;
- (bool)blueprintDiffersFromBlueprint:(id)arg1;
- (id)blueprintWithMood:(id)arg1;
- (double)burstIdealDuration;
- (double)burstMinDuration;
- (id)burstStyleNames;
- (bool)centerOnFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugSingleTransitionID;
- (bool)defaultCameraMotionIsPan;
- (id)description;
- (id)dictionaryRepresentationForSerialization;
- (bool)durationIsNearVideoIdeal:(double)arg1;
- (struct DurationTriplet { double x1; double x2; double x3; })durationsForAsset:(id)arg1;
- (id)editStyle;
- (id)editStyleID;
- (id)effectID;
- (void)encodeWithCoder:(id)arg1;
- (id)expandedMultiUpTransitionDictionaries;
- (bool)extremeZoomAllowed;
- (id)flexMusicID;
- (id)fontName;
- (double)halfBarDuration;
- (double)hardCutPercentage;
- (unsigned long long)hash;
- (id)healingEditTransitionDictionary;
- (bool)healingTransitionsAllowed;
- (unsigned long long)iCloudMusicAccountID;
- (unsigned long long)iCloudMusicMediaID;
- (unsigned long long)iTunesMediaID;
- (double)idealDurationForAsset:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (double)irisIdealDuration;
- (double)irisMaxDuration;
- (double)irisMinDuration;
- (bool)isEqual:(id)arg1;
- (bool)isMoodDictionaryPopulated;
- (double)kenBurnsAnyStillPercentage;
- (double)maxZoomLevel;
- (double)maximumDurationForAsset:(id)arg1;
- (double)minimumDurationForAsset:(id)arg1;
- (id)moodDictionary;
- (id)moodID;
- (id)moodIDs;
- (double)moodPacingMultiplier;
- (id)multiUpTransitionDictionaries;
- (id)multiUpTransitionsAsDictionaries;
- (id)musicInfo;
- (double)panoIdealDurationWithMultiplier:(double)arg1;
- (double)panoMaxDurationWithMultiplier:(double)arg1;
- (double)panoMinDurationWithMultiplier:(double)arg1;
- (id)parametersDictionary;
- (double)photoIdealDuration;
- (double)photoMaxDuration;
- (double)photoMinDuration;
- (id)projectFilterID;
- (unsigned int)randomizerSeed;
- (id)sequentialNUpEffect;
- (void)setICloudMusicAccountID:(unsigned long long)arg1;
- (void)setICloudMusicMediaID:(unsigned long long)arg1;
- (void)setITunesMediaID:(unsigned long long)arg1;
- (void)setMoodDictionary:(id)arg1;
- (void)setMoodIDs:(id)arg1;
- (void)setProjectFilterID:(id)arg1;
- (void)setRandomizerSeed:(unsigned int)arg1;
- (void)setSongID:(id)arg1;
- (void)setSongIsLocked:(bool)arg1;
- (void)setTitleIsLocked:(bool)arg1;
- (double)sloMoIdealDuration;
- (double)sloMoMinDuration;
- (id)songID;
- (bool)songIsLocked;
- (unsigned long long)songPace;
- (bool)sweepingPansAllowed;
- (double)timelapseIdealDuration;
- (double)timelapseMinDuration;
- (id)titleAndAnimationStyleDescription;
- (id)titleID;
- (double)titleIdealDuration;
- (bool)titleIsLocked;
- (double)titleMinDuration;
- (bool)titleRequestsColorAnalysis;
- (id)titleStyle;
- (id)titleStyleDictionary;
- (id)titleStyleToFontMap;
- (unsigned long long)toneTreatment;
- (id)transitionsAsDictionaries;
- (double)videoIdealDuration;
- (double)videoMaxDuration;
- (double)videoMinDuration;

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