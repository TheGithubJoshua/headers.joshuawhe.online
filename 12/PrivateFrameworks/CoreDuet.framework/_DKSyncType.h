<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_DKSyncType.h</title>
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

/PrivateFrameworks/CoreDuet.framework/_DKSyncType.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet (1)
 */

@interface _DKSyncType : NSObject {
    bool  _didActivatePeer;
    bool  _didAddSyncedEvents;
    bool  _didDeleteSyncedEvents;
    bool  _didReceivePush;
    bool  _didSetMediumUrgency;
    bool  _forceSync;
    bool  _isInitialSync;
    bool  _isPeriodicSync;
    bool  _isSingleDevice;
    bool  _isTriggeredSync;
    _CDPeriodicSchedulerJob * _periodicJob;
    unsigned long long  _urgency;
}

@property (nonatomic) bool didActivatePeer;
@property (nonatomic) bool didAddSyncedEvents;
@property (nonatomic) bool didDeleteSyncedEvents;
@property (nonatomic) bool didReceivePush;
@property (nonatomic) bool didSetMediumUrgency;
@property (nonatomic) bool forceSync;
@property (nonatomic) bool isInitialSync;
@property (nonatomic) bool isPeriodicSync;
@property (nonatomic, readonly) bool isSingleDevice;
@property (nonatomic) bool isTriggeredSync;
@property (nonatomic, retain) _CDPeriodicSchedulerJob *periodicJob;
@property (nonatomic) unsigned long long urgency;

- (void).cxx_destruct;
- (id)description;
- (bool)didActivatePeer;
- (bool)didAddSyncedEvents;
- (bool)didDeleteSyncedEvents;
- (bool)didReceivePush;
- (bool)didSetMediumUrgency;
- (bool)forceSync;
- (id)initWithIsSingleDevice:(bool)arg1;
- (bool)isInitialSync;
- (bool)isPeriodicSync;
- (bool)isSingleDevice;
- (bool)isTriggeredSync;
- (void)mergeType:(id)arg1;
- (id)periodicJob;
- (void)setDidActivatePeer:(bool)arg1;
- (void)setDidAddSyncedEvents:(bool)arg1;
- (void)setDidDeleteSyncedEvents:(bool)arg1;
- (void)setDidReceivePush:(bool)arg1;
- (void)setDidSetMediumUrgency:(bool)arg1;
- (void)setForceSync:(bool)arg1;
- (void)setIsInitialSync:(bool)arg1;
- (void)setIsPeriodicSync:(bool)arg1;
- (void)setIsTriggeredSync:(bool)arg1;
- (void)setPeriodicJob:(id)arg1;
- (void)setUrgency:(unsigned long long)arg1;
- (unsigned long long)urgency;

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