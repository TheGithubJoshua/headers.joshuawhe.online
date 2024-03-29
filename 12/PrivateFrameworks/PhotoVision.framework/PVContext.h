<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PVContext.h</title>
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

/PrivateFrameworks/PhotoVision.framework/PVContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision (3462.12.130)
 */

@interface PVContext : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _faceAlgorithmUmbrellaVersion;
    bool  _faceClusteringDisabled;
    float  _faceClusteringThreshold;
    float  _faceMergeFaceprintDistanceThreshold;
    float  _facePrimarySuggestionsThreshold;
    unsigned long long  _maxFaceCountForClustering;
    unsigned long long  _minFaceCountToTriggerClustering;
    unsigned long long  _minimumFaceGroupSizeForCreatingMergeCandidates;
    unsigned long long  _minimumSuggestionSize;
    bool  _personBuilderMergeCandidatesDisabled;
    bool  _personBuildingDisabled;
    bool  _quarantineTwinsOnAssetEnabled;
    unsigned int  _sceneAlgorithmUmbrellaVersion;
}

@property (nonatomic) unsigned int faceAlgorithmUmbrellaVersion;
@property (nonatomic) bool faceClusteringDisabled;
@property (nonatomic) float faceClusteringThreshold;
@property (nonatomic) float faceMergeFaceprintDistanceThreshold;
@property (nonatomic) float facePrimarySuggestionsThreshold;
@property (nonatomic) unsigned long long maxFaceCountForClustering;
@property (nonatomic) unsigned long long minFaceCountToTriggerClustering;
@property (nonatomic) unsigned long long minimumFaceGroupSizeForCreatingMergeCandidates;
@property (nonatomic) unsigned long long minimumSuggestionSize;
@property (nonatomic) bool personBuilderMergeCandidatesDisabled;
@property (nonatomic) bool personBuildingDisabled;
@property (nonatomic) bool quarantineTwinsOnAssetEnabled;
@property (nonatomic) unsigned int sceneAlgorithmUmbrellaVersion;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)faceAlgorithmUmbrellaVersion;
- (bool)faceClusteringDisabled;
- (float)faceClusteringThreshold;
- (float)faceMergeFaceprintDistanceThreshold;
- (float)facePrimarySuggestionsThreshold;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)maxFaceCountForClustering;
- (unsigned long long)minFaceCountToTriggerClustering;
- (unsigned long long)minimumFaceGroupSizeForCreatingMergeCandidates;
- (unsigned long long)minimumSuggestionSize;
- (bool)personBuilderMergeCandidatesDisabled;
- (bool)personBuildingDisabled;
- (bool)quarantineTwinsOnAssetEnabled;
- (unsigned int)sceneAlgorithmUmbrellaVersion;
- (void)setFaceAlgorithmUmbrellaVersion:(unsigned int)arg1;
- (void)setFaceClusteringDisabled:(bool)arg1;
- (void)setFaceClusteringThreshold:(float)arg1;
- (void)setFaceMergeFaceprintDistanceThreshold:(float)arg1;
- (void)setFacePrimarySuggestionsThreshold:(float)arg1;
- (void)setMaxFaceCountForClustering:(unsigned long long)arg1;
- (void)setMinFaceCountToTriggerClustering:(unsigned long long)arg1;
- (void)setMinimumFaceGroupSizeForCreatingMergeCandidates:(unsigned long long)arg1;
- (void)setMinimumSuggestionSize:(unsigned long long)arg1;
- (void)setPersonBuilderMergeCandidatesDisabled:(bool)arg1;
- (void)setPersonBuildingDisabled:(bool)arg1;
- (void)setQuarantineTwinsOnAssetEnabled:(bool)arg1;
- (void)setSceneAlgorithmUmbrellaVersion:(unsigned int)arg1;

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
