<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXSnappingController.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXSnappingController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXSnappingController : NSObject {
    double  __accumulatedOffset;
    bool  __hasEnteredAttractionThreshold;
    bool  __hasEnteredRetentionThreshold;
    double  __previousOffset;
    bool  __previousOffsetInvalid;
    bool  _accumulateOffsetWhileSnapped;
    double  _attractionOffsetThreshold;
    double  _attractionVelocityThreshold;
    double  _retentionOffsetThreshold;
    bool  _snappedToTarget;
    double  _snappingTarget;
}

@property (setter=_setAccumulatedOffset:, nonatomic) double _accumulatedOffset;
@property (setter=_setHasEnteredAttractionThreshold:, nonatomic) bool _hasEnteredAttractionThreshold;
@property (setter=_setHasEnteredRetentionThreshold:, nonatomic) bool _hasEnteredRetentionThreshold;
@property (setter=_setPreviousOffset:, nonatomic) double _previousOffset;
@property (getter=_isPreviousOffsetInvalid, setter=_setPreviousOffsetInvalid:, nonatomic) bool _previousOffsetInvalid;
@property (nonatomic) bool accumulateOffsetWhileSnapped;
@property (nonatomic) double attractionOffsetThreshold;
@property (nonatomic) double attractionVelocityThreshold;
@property (nonatomic) double retentionOffsetThreshold;
@property (getter=isSnappedToTarget, nonatomic, readonly) bool snappedToTarget;
@property (nonatomic, readonly) double snappingTarget;

- (double)_accumulatedOffset;
- (bool)_hasEnteredAttractionThreshold;
- (bool)_hasEnteredRetentionThreshold;
- (bool)_isOffset:(double)arg1 inThreshold:(double)arg2;
- (bool)_isPreviousOffsetInvalid;
- (double)_previousOffset;
- (void)_reset;
- (void)_setAccumulatedOffset:(double)arg1;
- (void)_setBoolPointer:(inout bool*)arg1 toValue:(bool)arg2;
- (void)_setHasEnteredAttractionThreshold:(bool)arg1;
- (void)_setHasEnteredRetentionThreshold:(bool)arg1;
- (void)_setPreviousOffset:(double)arg1;
- (void)_setPreviousOffsetInvalid:(bool)arg1;
- (bool)accumulateOffsetWhileSnapped;
- (double)attractionOffsetThreshold;
- (double)attractionVelocityThreshold;
- (void)didSnapByAttraction;
- (id)init;
- (id)initWithSnappingTarget:(double)arg1;
- (void)interactionBegan;
- (void)interactionEnded;
- (bool)isSnappedToTarget;
- (double)retentionOffsetThreshold;
- (void)setAccumulateOffsetWhileSnapped:(bool)arg1;
- (void)setAttractionOffsetThreshold:(double)arg1;
- (void)setAttractionVelocityThreshold:(double)arg1;
- (void)setRetentionOffsetThreshold:(double)arg1;
- (double)snappingTarget;
- (void)updateOffset:(inout double*)arg1 withVelocity:(double)arg2 shouldSnap:(out bool*)arg3 shouldBreak:(out bool*)arg4;

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
