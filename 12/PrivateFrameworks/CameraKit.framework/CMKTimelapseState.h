<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CMKTimelapseState.h</title>
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

/PrivateFrameworks/CameraKit.framework/CMKTimelapseState.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit (1)
 */

@interface CMKTimelapseState : NSObject <NSCoding, NSCopying> {
    bool  _allFramesWritten;
    int  _captureOrientation;
    double  _captureTimeInterval;
    float  _focusLensPosition;
    long long  _frameIndexStride;
    NSDate * _lastFrameResponseTime;
    long long  _nextFrameIndex;
    CLLocation * _startLocation;
    NSDate * _startTime;
    long long  _stopReasons;
    NSDate * _stopTime;
    NSString * _timelapseUUID;
    bool  _usingFrontCamera;
}

@property (nonatomic) bool allFramesWritten;
@property (nonatomic) int captureOrientation;
@property (nonatomic, readonly) double captureTimeInterval;
@property (nonatomic, readonly) long long connectionMode;
@property (nonatomic) float focusLensPosition;
@property (nonatomic, readonly) long long frameIndexStride;
@property (nonatomic, retain) NSDate *lastFrameResponseTime;
@property (nonatomic, readonly) long long nextFrameIndex;
@property (nonatomic, retain) CLLocation *startLocation;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic) long long stopReasons;
@property (nonatomic, retain) NSDate *stopTime;
@property (nonatomic, retain) NSString *timelapseUUID;
@property (getter=isUsingFrontCamera, nonatomic) bool usingFrontCamera;

+ (double)maxTimeToWaitForWrittenFrameAfterStop;
+ (id)stateWithContentsOfFile:(id)arg1;

- (void).cxx_destruct;
- (bool)_commonCMKTimelapseStateInitWithCoder:(id)arg1;
- (bool)addStopReasons:(long long)arg1 stopTime:(id)arg2;
- (bool)allFramesWritten;
- (bool)canContinueCapture;
- (int)captureOrientation;
- (double)captureTimeInterval;
- (long long)connectionMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)filePathForNextFrameIndex;
- (float)focusLensPosition;
- (void)forceCompleted;
- (long long)frameIndexStride;
- (bool)incrementFrameIndex;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToState:(id)arg1;
- (bool)isReadyForWritingMovie;
- (bool)isUsingFrontCamera;
- (id)lastFrameResponseTime;
- (bool)mergeSecondaryState:(id)arg1;
- (long long)nextFrameIndex;
- (void)setAllFramesWritten:(bool)arg1;
- (void)setCaptureOrientation:(int)arg1;
- (void)setFocusLensPosition:(float)arg1;
- (void)setLastFrameResponseTime:(id)arg1;
- (void)setStartLocation:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setStopReasons:(long long)arg1;
- (void)setStopTime:(id)arg1;
- (void)setTimelapseUUID:(id)arg1;
- (void)setUsingFrontCamera:(bool)arg1;
- (id)startLocation;
- (id)startTime;
- (long long)stopReasons;
- (id)stopTime;
- (id)timelapseUUID;
- (bool)writeToFile:(id)arg1 createDirectoryIfNeeded:(bool)arg2;

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