<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PHAActivityGovernor.h</title>
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

/PrivateFrameworks/PhotoAnalysis.framework/PHAActivityGovernor.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis (3462.4.210)
 */

@interface PHAActivityGovernor : NSObject {
    NSObject<OS_xpc_object> * _backgroundActivity;
    char * _backgroundActivityName;
    NSObject<OS_dispatch_source> * _backgroundDeferCheckTimer;
    <PHAActivityGovernorDelegate> * _delegate;
    NSObject<OS_xpc_object> * _foregroundActivity;
    char * _foregroundActivityName;
    NSObject<OS_dispatch_source> * _foregroundDeferCheckTimer;
    bool  _hasBackgroundAccess;
    bool  _hasForegroundAccess;
    bool  _overrideAccess;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _simulatedNeverHasAccess;
    bool  _simulatedWantsDefer;
    double  _timeOfLastForegroundGrant;
    double  _timeOfLastForegroundWantRequest;
    double  _timeSpentForegroundGranted;
    double  _timeSpentWantingForeground;
    bool  _wantsBackgroundAccess;
    bool  _wantsForegroundAccess;
}

@property (retain) NSObject<OS_xpc_object> *backgroundActivity;
@property (retain) NSObject<OS_dispatch_source> *backgroundDeferCheckTimer;
@property (nonatomic) <PHAActivityGovernorDelegate> *delegate;
@property (retain) NSObject<OS_xpc_object> *foregroundActivity;
@property (retain) NSObject<OS_dispatch_source> *foregroundDeferCheckTimer;
@property (nonatomic) bool hasBackgroundAccess;
@property (nonatomic) bool hasForegroundAccess;
@property (nonatomic) bool overrideAccess;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool simulatedNeverHasAccess;
@property (nonatomic) bool simulatedWantsDefer;
@property (nonatomic) double timeOfLastForegroundGrant;
@property (nonatomic) double timeOfLastForegroundWantRequest;
@property (nonatomic) double timeSpentForegroundGranted;
@property (nonatomic) double timeSpentWantingForeground;
@property (nonatomic) bool wantsBackgroundAccess;
@property (nonatomic) bool wantsForegroundAccess;

- (void).cxx_destruct;
- (const char *)_activityNameForLevel:(unsigned long long)arg1;
- (void)_generateActivityNames;
- (void)_inq_finishActivity:(id*)arg1 accessLevel:(unsigned long long)arg2 timer:(id)arg3;
- (void)_inq_handleRequestChangeForAccessLevel:(unsigned long long)arg1;
- (bool)_inq_hasAccessForLevel:(unsigned long long)arg1;
- (void)_inq_installDeferMonitorForActivity:(id)arg1 accessLevel:(unsigned long long)arg2;
- (void)_inq_registerActivityNamed:(const char *)arg1 withCriteria:(id)arg2 accessLevel:(unsigned long long)arg3;
- (void)_inq_removeDeferTimer:(id)arg1;
- (void)_inq_teardownActivity:(id*)arg1 accessLevel:(unsigned long long)arg2 timer:(id)arg3;
- (bool)_inq_wantsAccessForLevel:(unsigned long long)arg1;
- (id)backgroundActivity;
- (id)backgroundDeferCheckTimer;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)foregroundActivity;
- (id)foregroundDeferCheckTimer;
- (bool)hasBackgroundAccess;
- (bool)hasForegroundAccess;
- (id)init;
- (bool)overrideAccess;
- (id)queue;
- (void)setBackgroundActivity:(id)arg1;
- (void)setBackgroundDeferCheckTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForegroundActivity:(id)arg1;
- (void)setForegroundDeferCheckTimer:(id)arg1;
- (void)setHasBackgroundAccess:(bool)arg1;
- (void)setHasForegroundAccess:(bool)arg1;
- (void)setOverrideAccess:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setSimulatedNeverHasAccess:(bool)arg1;
- (void)setSimulatedWantsDefer:(bool)arg1;
- (void)setTimeOfLastForegroundGrant:(double)arg1;
- (void)setTimeOfLastForegroundWantRequest:(double)arg1;
- (void)setTimeSpentForegroundGranted:(double)arg1;
- (void)setTimeSpentWantingForeground:(double)arg1;
- (void)setWantsBackgroundAccess:(bool)arg1;
- (void)setWantsForegroundAccess:(bool)arg1;
- (bool)simulatedNeverHasAccess;
- (bool)simulatedWantsDefer;
- (id)statusAsDictionary;
- (double)timeOfLastForegroundGrant;
- (double)timeOfLastForegroundWantRequest;
- (double)timeSpentForegroundGranted;
- (double)timeSpentWantingForeground;
- (bool)wantsBackgroundAccess;
- (bool)wantsForegroundAccess;

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
