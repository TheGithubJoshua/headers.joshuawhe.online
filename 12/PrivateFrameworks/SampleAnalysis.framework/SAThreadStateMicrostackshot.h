<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SAThreadStateMicrostackshot.h</title>
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

/PrivateFrameworks/SampleAnalysis.framework/SAThreadStateMicrostackshot.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis (218.2)
 */

@interface SAThreadStateMicrostackshot : SAThreadState {
    unsigned char  _microstackshotFlags;
}

+ (id)stateWithMicrostackshot:(const struct micro_snapshot { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned short x6; }*)arg1 thread:(const struct thread_snapshot { unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; int x9; int x10; int x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18[3]; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23[4]; unsigned long long x24[4]; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; BOOL x35[64]; }*)arg2 startTimestamp:(id)arg3 endTimestamp:(id)arg4 startSampleIndex:(unsigned long long)arg5 endSampleIndex:(unsigned long long)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg9;

- (id)initWithMicrostackshot:(const struct micro_snapshot { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned short x6; }*)arg1 thread:(const struct thread_snapshot { unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; int x9; int x10; int x11; int x12; BOOL x13; BOOL x14; BOOL x15; BOOL x16; BOOL x17; BOOL x18[3]; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23[4]; unsigned long long x24[4]; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned long long x30; unsigned long long x31; unsigned long long x32; unsigned long long x33; unsigned long long x34; BOOL x35[64]; }*)arg2 startTimestamp:(id)arg3 endTimestamp:(id)arg4 startSampleIndex:(unsigned long long)arg5 endSampleIndex:(unsigned long long)arg6 leafUserFrame:(id)arg7 leafKernelFrame:(id)arg8 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg9;
- (id)initWithMicrostackshotFlags:(unsigned char)arg1;
- (bool)isBatteryAndUserActivityValid;
- (bool)isIORecord;
- (bool)isInterruptRecord;
- (bool)isMicrostackshot;
- (bool)isOnBattery;
- (bool)isTimerArmingRecord;
- (bool)isUserActive;
- (bool)isUserMode;
- (unsigned char)microstackshotFlags;

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