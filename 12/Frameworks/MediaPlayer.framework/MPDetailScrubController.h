<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPDetailScrubController.h</title>
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

/Frameworks/MediaPlayer.framework/MPDetailScrubController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPDetailScrubController : NSObject {
    float  _accumulatedDelta;
    struct CGPoint { 
        double x; 
        double y; 
    }  _beginLocationInView;
    long long  _currentScrubSpeed;
    float  _currentValue;
    <MPDetailScrubControllerDelegate> * _delegate;
    bool  _detailedScrubbingEnabled;
    bool  _didBeginTracking;
    double  _duration;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    bool  _isTracking;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastCommittedLocationInView;
    bool  _needsCommit;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousLocationInView;
    UIControl<MPDetailedScrubbing> * _scrubbingControl;
    double  _scrubbingVerticalRange;
}

@property (nonatomic, readonly) long long currentScrubSpeed;
@property (nonatomic) <MPDetailScrubControllerDelegate> *delegate;
@property (nonatomic) bool detailedScrubbingEnabled;
@property (nonatomic) double duration;
@property (nonatomic, readonly) bool durationAllowsForDetailedScrubbing;
@property (nonatomic, readonly) bool isTracking;
@property (nonatomic) UIControl<MPDetailedScrubbing> *scrubbingControl;
@property (nonatomic) double scrubbingVerticalRange;

- (void).cxx_destruct;
- (void)_beginScrubbing;
- (void)_commitValue:(float)arg1;
- (void)_endScrubbing;
- (float)_minimumScale;
- (float)_scaleForIdealValueForVerticalPosition:(double)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (long long)currentScrubSpeed;
- (id)delegate;
- (bool)detailedScrubbingEnabled;
- (double)duration;
- (bool)durationAllowsForDetailedScrubbing;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)init;
- (id)initWithScrubbingControl:(id)arg1;
- (bool)isTracking;
- (float)scaleForVerticalPosition:(double)arg1;
- (id)scrubbingControl;
- (double)scrubbingVerticalRange;
- (void)setDelegate:(id)arg1;
- (void)setDetailedScrubbingEnabled:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setScrubbingControl:(id)arg1;
- (void)setScrubbingVerticalRange:(double)arg1;

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
