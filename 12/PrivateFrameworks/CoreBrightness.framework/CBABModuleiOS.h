<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CBABModuleiOS.h</title>
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

/PrivateFrameworks/CoreBrightness.framework/CBABModuleiOS.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness (1)
 */

@interface CBABModuleiOS : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol> {
    struct AABC { int (**x1)(); float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; bool x16; int x17; int x18; long long x19; float x20; float x21; int (*x22)(); void *x23; int x24; int x25; int x26; struct __CFDictionary {} *x27; struct __CFDictionary {} *x28; unsigned char x29; bool x30; struct WndBrightnessValues {} *x31; int x32; double x33; double x34; float x35; float x36; bool x37; bool x38; struct __IOHIDEvent {} *x39; struct __IOHIDServiceClient {} *x40; float *x41; unsigned int *x42; float x43; float x44; float x45; bool x46; bool x47; struct __Display {} *x48; float x49; struct __CFDictionary {} *x50; struct __CFDictionary {} *x51; bool x52; bool x53; bool x54; bool x55; bool x56; int x57; struct ALS {} *x58; struct ALS {} *x59; struct __IOHIDServiceClient {} *x60; struct __IOHIDServiceClient {} *x61; int x62; float x63; float x64; float x65; int x66; int x67; int x68; int x69; int x70; float x71; float x72; float x73; float x74; } * _AABC;
    NSMutableArray * _alsServiceClients;
    CBDisplayModuleiOS * _display;
    NSMutableArray * _otherServiceClients;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)addHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (void)dealloc;
- (bool)handleHIDEvent:(struct __IOHIDEvent { }*)arg1 from:(struct __IOHIDServiceClient { }*)arg2;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)initWithDisplayModule:(id)arg1 andQueue:(id)arg2;
- (bool)removeHIDServiceClient:(struct __IOHIDServiceClient { }*)arg1;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
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
