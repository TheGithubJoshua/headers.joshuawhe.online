<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PHAssetAestheticProperties.h</title>
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

/Frameworks/Photos.framework/PHAssetAestheticProperties.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Photos.framework/Photos (1)
 */

@interface PHAssetAestheticProperties : PHAssetPropertySet {
    float  _failureScore;
    float  _harmoniousColorScore;
    float  _immersivenessScore;
    float  _interestingSubjectScore;
    float  _intrusiveObjectPresenceScore;
    float  _livelyColorScore;
    float  _lowLight;
    float  _noiseScore;
    float  _pleasantCameraTiltScore;
    float  _pleasantCompositionScore;
    float  _pleasantLightingScore;
    float  _pleasantPatternScore;
    float  _pleasantPerspectiveScore;
    float  _pleasantPostProcessingScore;
    float  _pleasantReflectionsScore;
    float  _pleasantSymmetryScore;
    float  _sharplyFocusedSubjectScore;
    float  _tastefullyBlurredScore;
    float  _wellChosenSubjectScore;
    float  _wellFramedSubjectScore;
    float  _wellTimedShotScore;
}

@property (nonatomic, readonly) float failureScore;
@property (nonatomic, readonly) float harmoniousColorScore;
@property (nonatomic, readonly) float immersivenessScore;
@property (nonatomic, readonly) float interestingSubjectScore;
@property (nonatomic, readonly) float intrusiveObjectPresenceScore;
@property (nonatomic, readonly) float livelyColorScore;
@property (nonatomic, readonly) float lowLight;
@property (nonatomic, readonly) float noiseScore;
@property (nonatomic, readonly) float pleasantCameraTiltScore;
@property (nonatomic, readonly) float pleasantCompositionScore;
@property (nonatomic, readonly) float pleasantLightingScore;
@property (nonatomic, readonly) float pleasantPatternScore;
@property (nonatomic, readonly) float pleasantPerspectiveScore;
@property (nonatomic, readonly) float pleasantPostProcessingScore;
@property (nonatomic, readonly) float pleasantReflectionsScore;
@property (nonatomic, readonly) float pleasantSymmetryScore;
@property (nonatomic, readonly) float sharplyFocusedSubjectScore;
@property (nonatomic, readonly) float tastefullyBlurredScore;
@property (nonatomic, readonly) float wellChosenSubjectScore;
@property (nonatomic, readonly) float wellFramedSubjectScore;
@property (nonatomic, readonly) float wellTimedShotScore;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (float)failureScore;
- (float)harmoniousColorScore;
- (float)immersivenessScore;
- (void)initWithDefaultValues;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (float)interestingSubjectScore;
- (float)intrusiveObjectPresenceScore;
- (float)livelyColorScore;
- (float)lowLight;
- (float)noiseScore;
- (float)pleasantCameraTiltScore;
- (float)pleasantCompositionScore;
- (float)pleasantLightingScore;
- (float)pleasantPatternScore;
- (float)pleasantPerspectiveScore;
- (float)pleasantPostProcessingScore;
- (float)pleasantReflectionsScore;
- (float)pleasantSymmetryScore;
- (float)sharplyFocusedSubjectScore;
- (float)tastefullyBlurredScore;
- (float)wellChosenSubjectScore;
- (float)wellFramedSubjectScore;
- (float)wellTimedShotScore;

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
