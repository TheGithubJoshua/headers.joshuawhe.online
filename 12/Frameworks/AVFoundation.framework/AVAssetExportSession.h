<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AVAssetExportSession.h</title>
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

/Frameworks/AVFoundation.framework/AVAssetExportSession.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation (1550.4)
 */

@interface AVAssetExportSession : NSObject {
    AVAssetExportSessionInternal * _exportSession;
}

@property (nonatomic, readonly, retain) AVAsset *asset;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, copy) NSString *outputFileType;
@property (nonatomic, copy) NSURL *outputURL;
@property (nonatomic, readonly) NSString *presetName;
@property (nonatomic, readonly) float progress;
@property (nonatomic) bool shouldOptimizeForNetworkUse;
@property (nonatomic, readonly) long long status;

+ (id)allExportPresets;
+ (void)determineCompatibilityOfExportPreset:(id)arg1 withAsset:(id)arg2 outputFileType:(id)arg3 completionHandler:(id /* block */)arg4;
+ (long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 properties:(id)arg3;
+ (id)exportPresetsCompatibleWithAsset:(id)arg1;
+ (id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2;
+ (id)keyPathsForValuesAffectingEstimatedOutputFileLength;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })maximumDurationForPreset:(id)arg1 properties:(id)arg2;

- (void)AVExportSessionExportAsynchronouslyCompletionHandler;
- (id)asset;
- (id)audioMix;
- (id)audioTimePitchAlgorithm;
- (bool)canPerformMultiplePassesOverSourceMediaData;
- (void)cancelExport;
- (id)customVideoCompositor;
- (void)dealloc;
- (id)description;
- (void)determineCompatibleFileTypesWithCompletionHandler:(id /* block */)arg1;
- (id)directoryForTemporaryFiles;
- (id)error;
- (long long)estimatedOutputFileLength;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)arg1;
- (long long)fileLengthLimit;
- (id)init;
- (id)initWithAsset:(id)arg1 presetName:(id)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxDuration;
- (bool)maximizePowerEfficiency;
- (id)metadata;
- (id)metadataItemFilter;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minVideoFrameDuration;
- (id)outputFileType;
- (id)outputURL;
- (bool)preserveSyncFrames;
- (id)presetName;
- (float)progress;
- (void)setAudioMix:(id)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (void)setCanPerformMultiplePassesOverSourceMediaData:(bool)arg1;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (void)setFileLengthLimit:(long long)arg1;
- (void)setMaximizePowerEfficiency:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMetadataItemFilter:(id)arg1;
- (void)setMinVideoFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setOutputFileType:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setPreserveSyncFrames:(bool)arg1;
- (void)setShouldOptimizeForNetworkUse:(bool)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setVideoComposition:(id)arg1;
- (void)setVideoFrameRateConversionAlgorithm:(id)arg1;
- (bool)shouldOptimizeForNetworkUse;
- (long long)status;
- (id)supportedFileTypes;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)videoComposition;
- (id)videoFrameRateConversionAlgorithm;

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
