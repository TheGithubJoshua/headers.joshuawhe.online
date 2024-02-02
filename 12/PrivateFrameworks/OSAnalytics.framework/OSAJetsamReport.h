<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>OSAJetsamReport.h</title>
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

/PrivateFrameworks/OSAnalytics.framework/OSAJetsamReport.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics (1)
 */

@interface OSAJetsamReport : OSAAppleErrorReport <ConcreteReport> {
    unsigned long long  _event_code;
    NSString * _event_reason;
    bool  _isSuspendedOnlyJetsam;
    NSMutableArray * _killedActiveApps;
    unsigned int  _killed_or_suspended_count;
    NSString * _largestActiveApp;
    NSString * _largestProcess;
    struct jetsam_snapshot { unsigned long long x1; unsigned long long x2; unsigned long long x3; struct memorystatus_kernel_stats { unsigned int x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; unsigned int x_4_1_6; unsigned int x_4_1_7; unsigned int x_4_1_8; unsigned int x_4_1_9; unsigned int x_4_1_10; unsigned long long x_4_1_11; unsigned long long x_4_1_12; unsigned long long x_4_1_13; unsigned long long x_4_1_14; unsigned long long x_4_1_15; unsigned long long x_4_1_16; BOOL x_4_1_17[80]; } x4; unsigned long long x5; struct jetsam_snapshot_entry { int x_6_1_1; BOOL x_6_1_2[33]; int x_6_1_3; unsigned int x_6_1_4; unsigned int x_6_1_5; unsigned char x_6_1_6[16]; unsigned long long x_6_1_7; unsigned long long x_6_1_8; unsigned long long x_6_1_9; unsigned long long x_6_1_10; unsigned long long x_6_1_11; unsigned long long x_6_1_12; unsigned long long x_6_1_13; unsigned long long x_6_1_14; unsigned long long x_6_1_15; unsigned long long x_6_1_16; unsigned long long x_6_1_17; unsigned long long x_6_1_18; unsigned long long x_6_1_19; unsigned long long x_6_1_20; unsigned long long x_6_1_21; unsigned long long x_6_1_22; unsigned long long x_6_1_23; unsigned long long x_6_1_24; unsigned long long x_6_1_25; struct timeval64 { long long x_26_2_1; long long x_26_2_2; } x_6_1_26; unsigned long long x_6_1_27; } x6[0]; } * _snapshot;
    unsigned long long  _wiredBytes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)_daysSince1970;

- (void).cxx_destruct;
- (void)_getSnapshotWithFlags:(unsigned int)arg1;
- (void)_setDumpedSuspendedJetsamLog;
- (void)acquireJetsamData;
- (bool)alreadyDumpedSuspendedJetsamLogToday;
- (id)appleCareDetails;
- (void)dealloc;
- (void)generateLogAtLevel:(bool)arg1 withBlock:(id /* block */)arg2;
- (id)initWithIncidentID:(id)arg1;
- (bool)isActionable;
- (id)problemType;
- (id)reportNamePrefix;

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