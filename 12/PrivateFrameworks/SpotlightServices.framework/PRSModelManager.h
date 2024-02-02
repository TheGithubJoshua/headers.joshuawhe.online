<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PRSModelManager.h</title>
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

/PrivateFrameworks/SpotlightServices.framework/PRSModelManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices (1191.57)
 */

@interface PRSModelManager : NSObject {
    unsigned long long  _activeCount;
    bool  _disablePolicy;
    NSNumber * _modelVersion;
    NSMutableDictionary * _models;
    NSMutableDictionary * _shadowModels;
    NSNumber * _shadowVersion;
}

@property (nonatomic) unsigned long long activeCount;
@property (nonatomic) bool disablePolicy;
@property (nonatomic, retain) NSNumber *modelVersion;
@property (nonatomic, retain) NSMutableDictionary *models;
@property (nonatomic, retain) NSMutableDictionary *shadowModels;
@property (nonatomic, retain) NSNumber *shadowVersion;

+ (void)cannedInfoForType:(unsigned long long)arg1 directivesPath:(id*)arg2 modelName:(id*)arg3;
+ (id)directivesFromFilePath:(id)arg1;
+ (id)errorDomain;
+ (void)loadModelWithURL:(id)arg1 type:(unsigned long long)arg2 directivesPath:(id)arg3 intoModelDict:(id)arg4 error:(id*)arg5;
+ (bool)loadModelsWithDirectory:(id)arg1 intoModelDict:(id)arg2;
+ (void)pathsFor:(unsigned long long)arg1 withParentPath:(id)arg2 modelPath:(id*)arg3 directivesPath:(id*)arg4;
+ (id)sharedModelManager;

- (void).cxx_destruct;
- (void)activate;
- (unsigned long long)activeCount;
- (float*)computeL2ScoresForVectors:(id)arg1 secondVector:(id)arg2 withServerFeatures:(id)arg3 withBundleFeatures:(id)arg4 experimentalWeight1:(double)arg5 experimentalWeight2:(double)arg6 forShadow:(bool)arg7 shouldCancel:(bool*)arg8;
- (float*)computeScoresForFeatures:(id)arg1 withBundleFeatures:(id)arg2 serverBundleFeatures:(id)arg3 usingModelContext:(id)arg4 qos:(unsigned int)arg5 shouldCancel:(bool*)arg6;
- (void)deactivate;
- (void)dealloc;
- (bool)disablePolicy;
- (id)getL2ModelVersion;
- (id)init;
- (void)loadCannedModelWithType:(unsigned long long)arg1 error:(id*)arg2;
- (void)loadCannedModels;
- (id)loadIfNecessaryModelOfResourceType:(unsigned long long)arg1 nowTime:(double)arg2 intoModelDict:(id)arg3 currentVersion:(id)arg4;
- (id)modelVersion;
- (id)models;
- (void)setActiveCount:(unsigned long long)arg1;
- (void)setDisablePolicy:(bool)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setModels:(id)arg1;
- (void)setShadowModels:(id)arg1;
- (void)setShadowVersion:(id)arg1;
- (id)shadowModels;
- (id)shadowVersion;
- (double)testL2WithData:(id)arg1 experimental:(bool)arg2;
- (void)triggerUpdate;
- (void)updateModelsAccordingToHierarchy;
- (void)updateModelsAccordingToHierarchy:(id)arg1 updateEnabled:(bool)arg2 disablePendingUpdates:(bool)arg3;

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