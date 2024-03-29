<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_GCAppleTVRemoteControllerProfile.h</title>
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

/Frameworks/GameController.framework/_GCAppleTVRemoteControllerProfile.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/GameController.framework/GameController (1)
 */

@interface _GCAppleTVRemoteControllerProfile : _GCMicroGamepad <DigitizerValueChangedDelegate, _GCACHomeButtonDelegate> {
    _GCACHomeButton * _acHome;
    unsigned int  _accumInputSampleCount;
    int  _candidateOrientation;
    NSDate * _candidateOrientationTimestamp;
    double  _deadzoneSize;
    unsigned int  _digitizerTouchState;
    GCMotion * _motion;
    int  _orientation;
    unsigned long long  _owner;
    double  _prevLogTime;
    unsigned int  _sampleCount;
    double  _windowBufferSize;
    double  _windowSize;
    double  _windowX;
    double  _windowY;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) GCControllerDirectionPad *dpad;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long owner;
@property (readonly) Class superclass;

+ (int)updateDevice:(struct __IOHIDDevice { }*)arg1 withButtonDebounceTime:(unsigned char)arg2 withDelay:(bool)arg3;

- (void).cxx_destruct;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (void)digitizerTouchEvent:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(bool)arg5;
- (void)digitizerTouchUp:(id)arg1 timestamp:(unsigned long long)arg2 forceSkipDpadRotation:(bool)arg3;
- (void)getPositionInSlidingWindowForRealX:(double)arg1 realY:(double)arg2 outXInWindow:(double*)arg3 outYInWindow:(double*)arg4;
- (void)handleReport:(unsigned int)arg1 data:(id)arg2;
- (void)initCommon:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(bool)arg2;
- (id)inputForElement:(struct __IOHIDElement { }*)arg1;
- (id)menuButton;
- (id)motion;
- (id)name;
- (unsigned long long)owner;
- (bool)ownershipClaimingElementsZero;
- (void)processOrientationData:(id)arg1;
- (unsigned int)sampleRate;
- (void)setAllowsRotation:(bool)arg1;
- (void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 timestamp:(unsigned long long)arg4 forceSkipDpadRotation:(bool)arg5;
- (void)setOwner:(unsigned long long)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (void)set_motion:(id)arg1;
- (void)toggleSuspendResume;

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
