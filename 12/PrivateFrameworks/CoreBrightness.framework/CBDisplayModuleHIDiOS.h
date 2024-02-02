<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CBDisplayModuleHIDiOS.h</title>
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

/PrivateFrameworks/CoreBrightness.framework/CBDisplayModuleHIDiOS.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness (1)
 */

@interface CBDisplayModuleHIDiOS : CBDisplayModule <CBContainerModuleProtocol> {
    unsigned long long  _PID;
    unsigned long long  _VID;
    unsigned long long  _brighntessUpdateCounter;
    struct __IOHIDElement { } * _brightnessElement;
    NSObject<OS_dispatch_queue> * _brightnessUpdateQueue;
    float  _brightnessUpdateTarget;
    NSUUID * _containerID;
    float  _currentNits;
    struct __IOHIDElement { } * _durationElement;
    NSArray * _elements;
    struct __IOHIDDevice { } * _hidDisplayDevice;
    NSObject<OS_os_log> * _logHandle;
    float  _maxNits;
    float  _minLinearBrightness;
    float  _minNits;
    float  _nitsScaler;
    bool  _noHID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) unsigned long long PID;
@property (readonly) unsigned long long VID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)PID;
- (unsigned long long)VID;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (void)dealloc;
- (float)getLinearBrightness;
- (bool)getNits:(float*)arg1;
- (float)getNitsForUserBrightness:(float)arg1;
- (float)getUserBrightnessForNits:(float)arg1;
- (bool)handleDisplayBrightnessProperty:(id)arg1;
- (bool)handleDisplayLinearBrightnessProperty:(id)arg1;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)initWithDevice:(unsigned int)arg1 andQueue:(id)arg2;
- (id)newDisplayBrightnessData;
- (double)scaleForExponent:(unsigned int)arg1;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (bool)setLinearBrightness:(float)arg1;
- (bool)setNits:(float)arg1;
- (bool)setNits:(float)arg1 withPeriod:(float)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (bool)setSlider:(float)arg1;
- (void)start;
- (void)stop;

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