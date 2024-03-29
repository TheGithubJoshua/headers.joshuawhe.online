<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MSPowerBudget.h</title>
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

/PrivateFrameworks/MediaStream.framework/MSPowerBudget.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream (1)
 */

@interface MSPowerBudget : NSObject {
    <MSPowerBudgetDelegate> * _delegate;
    NSString * _focusAlbumGUID;
    NSString * _focusAssetCollectionGUID;
    double  _maxActiveTimeAfterGlobalResetSync;
    double  _maxActiveTimeAfterLossOfForeground;
    double  _maxActiveTimeAfterPush;
    NSString * _personID;
    NSObject<OS_dispatch_queue> * _workQueue;
    MSPBTimerContext * _workQueueGlobalResetSyncTimerContext;
    bool  _workQueueIsExternalPowered;
    bool  _workQueueIsFileTransferAllowed;
    bool  _workQueueIsForeground;
    MSPBTimerContext * _workQueuePostForegroundTimerContext;
    MSPBTimerContext * _workQueuePushTimerContext;
}

@property (nonatomic) <MSPowerBudgetDelegate> *delegate;
@property (getter=isFileTransferAllowed, nonatomic, readonly) bool fileTransferAllowed;
@property (nonatomic, retain) NSString *focusAlbumGUID;
@property (nonatomic, retain) NSString *focusAssetCollectionGUID;
@property (getter=hasForegroundFocus, nonatomic, readonly) bool foregroundFocus;
@property (nonatomic, readonly) bool hasActiveTimers;
@property (nonatomic) double maxActiveTimeAfterGlobalResetSync;
@property (nonatomic) double maxActiveTimeAfterLossOfForeground;
@property (nonatomic) double maxActiveTimeAfterPush;
@property (nonatomic, retain) NSString *personID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, retain) MSPBTimerContext *workQueueGlobalResetSyncTimerContext;
@property (setter=workQueueSetExternalPowered:, nonatomic) bool workQueueIsExternalPowered;
@property (setter=workQueueSetFileTransferAllowed:, nonatomic) bool workQueueIsFileTransferAllowed;
@property (setter=workQueueSetForeground:, nonatomic) bool workQueueIsForeground;
@property (nonatomic, retain) MSPBTimerContext *workQueuePostForegroundTimerContext;
@property (nonatomic, retain) MSPBTimerContext *workQueuePushTimerContext;

- (void).cxx_destruct;
- (void)_globalResetSyncTimerDidExpire:(id)arg1;
- (void)_postForegroundTimerDidExpire:(id)arg1;
- (id)delegate;
- (void)didBeginExternalPower;
- (void)didBeginForegroundFocus;
- (void)didEndExternalPower;
- (void)didEndForegroundFocus;
- (void)didReceiveGlobalResetSync;
- (void)didReceivePushNotification;
- (id)focusAlbumGUID;
- (id)focusAssetCollectionGUID;
- (bool)hasActiveTimers;
- (bool)hasForegroundFocus;
- (id)init;
- (bool)isFileTransferAllowed;
- (double)maxActiveTimeAfterGlobalResetSync;
- (double)maxActiveTimeAfterLossOfForeground;
- (double)maxActiveTimeAfterPush;
- (id)personID;
- (void)setDelegate:(id)arg1;
- (void)setFocusAlbumGUID:(id)arg1;
- (void)setFocusAssetCollectionGUID:(id)arg1;
- (void)setIsFileTransferAllowed:(bool)arg1;
- (void)setMaxActiveTimeAfterGlobalResetSync:(double)arg1;
- (void)setMaxActiveTimeAfterLossOfForeground:(double)arg1;
- (void)setMaxActiveTimeAfterPush:(double)arg1;
- (void)setPersonID:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setWorkQueueGlobalResetSyncTimerContext:(id)arg1;
- (void)setWorkQueuePostForegroundTimerContext:(id)arg1;
- (void)setWorkQueuePushTimerContext:(id)arg1;
- (void)shutDown;
- (id)workQueue;
- (void)workQueueCommitPersistedValues;
- (id)workQueueGlobalResetSyncTimerContext;
- (bool)workQueueIsExternalPowered;
- (bool)workQueueIsFileTransferAllowed;
- (bool)workQueueIsForeground;
- (double)workQueueMaxActiveTimeAfterGlobalResetSync;
- (double)workQueueMaxActiveTimeAfterLossOfForeground;
- (double)workQueueMaxActiveTimeAfterPush;
- (id)workQueuePostForegroundTimerContext;
- (id)workQueuePushTimerContext;
- (void)workQueueRecomputeFileTransferAllowed;
- (void)workQueueSetExternalPowered:(bool)arg1;
- (void)workQueueSetFileTransferAllowed:(bool)arg1;
- (void)workQueueSetForeground:(bool)arg1;
- (void)workQueueSetGlobalResetSyncTimerDate:(id)arg1;
- (void)workQueueSetIsFileTransferAllowed:(bool)arg1;
- (void)workQueueSetPostForegroundTimerDate:(id)arg1;
- (void)workQueueSetPushTimerDate:(id)arg1;

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
