<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PregateAnalyzer.h</title>
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

/PrivateFrameworks/AutoLoop.framework/PregateAnalyzer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop (1)
 */

@interface PregateAnalyzer : NSObject {
    NSArray * _badFrameFlags;
    NSArray * _coarseFocusFlags;
    NSDictionary * _defaultParameters;
    NSArray * _exposureTimes;
    NSArray * _focusScores;
    NSArray * _gainScores;
    int  _gatingPassTrimResult_firstIndex;
    int  _gatingPassTrimResult_lastIndex;
    bool  _haveInputVideoSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputVideoSize;
    NSData * _perFrameTranslationVecs;
    int  _trimInput_firstIndex;
    int  _trimInput_lastIndex;
    PregateFeatureBuilder * featureBuilder;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  inputTrimTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  minimumRequiredTrimLength;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  outputTrimTime;
    NSDictionary * pregateParameters;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  requiredFrameTime;
}

@property (retain) NSArray *badFrameFlags;
@property (retain) NSArray *coarseFocusFlags;
@property (retain) NSDictionary *defaultParameters;
@property (retain) NSArray *exposureTimes;
@property (retain) PregateFeatureBuilder *featureBuilder;
@property (retain) NSArray *focusScores;
@property (retain) NSArray *gainScores;
@property int gatingPassTrimResult_firstIndex;
@property int gatingPassTrimResult_lastIndex;
@property bool haveInputVideoSize;
@property struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } inputTrimTime;
@property struct CGSize { double x1; double x2; } inputVideoSize;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } minimumRequiredTrimLength;
@property (readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } outputTrimTime;
@property (retain) NSData *perFrameTranslationVecs;
@property (retain) NSDictionary *pregateParameters;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } requiredFrameTime;
@property int trimInput_firstIndex;
@property int trimInput_lastIndex;

+ (id)pregateFailureReasonsToString:(int)arg1;

- (void).cxx_destruct;
- (id)badFrameFlags;
- (id)coarseFocusFlags;
- (struct MetadataFloatVector { float x1; float x2; })cumulativePanForStartIndex:(long long)arg1 lastIndex:(long long)arg2;
- (id)defaultParameters;
- (id)exposureTimes;
- (bool)exposureTriplet:(const float*)arg1 violatesThreshold:(float)arg2;
- (id)featureBuilder;
- (int)fetchVideoDimensionsFromMetadata;
- (bool)findFrameIndicesInFrameArray:(id)arg1 forTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 startIndex:(int*)arg3 endIndex:(int*)arg4;
- (int)findGatingPassViaTrimming:(id)arg1;
- (long long)findLongestPassingSegmentInFrameFlags:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3 startOfRun:(long long*)arg4 gatingFailures:(int*)arg5;
- (id)focusScores;
- (id)gainScores;
- (int)gatingPassTrimResult_firstIndex;
- (int)gatingPassTrimResult_lastIndex;
- (int)getFrameMetadataArray:(id*)arg1;
- (bool)getParamForKey:(id)arg1 toFloat:(float*)arg2;
- (int)getPerFrameGatingData:(id)arg1 firstIndex:(long long)arg2 lastIndex:(long long)arg3;
- (bool)haveInputVideoSize;
- (id)init;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })inputTrimTime;
- (struct CGSize { double x1; double x2; })inputVideoSize;
- (int)isCumulativePanAcceptableForFrames:(id)arg1 firstIndex:(long long)arg2 lastIndex:(long long)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumRequiredTrimLength;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })outputTrimTime;
- (id)paramValueForKey:(id)arg1;
- (id)perFrameTranslationVecs;
- (id)pregateParameters;
- (int)processExposureArray:(id)arg1 gainArray:(id)arg2 intoFlagsArray:(id)arg3 firstIndex:(long long)arg4 lastIndex:(long long)arg5;
- (int)processPregateSuccess:(int*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })requiredFrameTime;
- (void)setBadFrameFlags:(id)arg1;
- (void)setCoarseFocusFlags:(id)arg1;
- (void)setDefaultParameters:(id)arg1;
- (void)setExposureTimes:(id)arg1;
- (void)setFeatureBuilder:(id)arg1;
- (void)setFocusScores:(id)arg1;
- (void)setGainScores:(id)arg1;
- (void)setGatingPassTrimResult_firstIndex:(int)arg1;
- (void)setGatingPassTrimResult_lastIndex:(int)arg1;
- (void)setHaveInputVideoSize:(bool)arg1;
- (void)setInputTrimTime:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setInputVideoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinimumRequiredTrimLength:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPerFrameTranslationVecs:(id)arg1;
- (void)setPregateParameters:(id)arg1;
- (void)setRequiredFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTrimInput_firstIndex:(int)arg1;
- (void)setTrimInput_lastIndex:(int)arg1;
- (bool)subsegmentMeetsTrimCriteriaForFrames:(id)arg1 firstFrame:(long long)arg2 lastFrame:(long long)arg3 firstFrameTimeOut:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4 lastFrameTimeOut:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg5 preciseTrimTimeOut:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg6;
- (int)trimInput_firstIndex;
- (int)trimInput_lastIndex;

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
