<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IMCloudKitSyncProgress.h</title>
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

/PrivateFrameworks/IMCore.framework/IMCloudKitSyncProgress.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore (1000)
 */

@interface IMCloudKitSyncProgress : NSObject {
    NSString * _actionLabel;
    long long  _actionType;
    double  _broadcastDeferralOverride;
    double  _progressBarMax;
    double  _progressBarValue;
    NSString * _progressLabel;
    bool  _shouldShowIndeterminateProgress;
    bool  _shouldShowProgressBar;
    bool  _shouldShowUserActionLabel;
    bool  _shouldShowUserMessageLabel;
    IMCloudKitSyncState * _syncState;
    IMCloudKitSyncStatistics * _syncStatistics;
    NSString * _userMessageLabel;
}

@property (nonatomic, retain) NSString *actionLabel;
@property (nonatomic) long long actionType;
@property (nonatomic) double broadcastDeferralOverride;
@property (nonatomic, readonly) NSArray *errors;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) double percentComplete;
@property (nonatomic, readonly) NSString *percentCompleteString;
@property (nonatomic) double progressBarMax;
@property (nonatomic) double progressBarValue;
@property (nonatomic, retain) NSString *progressLabel;
@property (nonatomic, readonly) double remainingItems;
@property (nonatomic) bool shouldShowIndeterminateProgress;
@property (nonatomic) bool shouldShowProgressBar;
@property (nonatomic) bool shouldShowUserActionLabel;
@property (nonatomic) bool shouldShowUserMessageLabel;
@property (nonatomic, readonly) IMCloudKitSyncState *syncState;
@property (nonatomic, readonly) IMCloudKitSyncStatistics *syncStatistics;
@property (nonatomic, retain) NSString *userMessageLabel;

- (void).cxx_destruct;
- (id)actionLabel;
- (long long)actionType;
- (double)broadcastDeferralOverride;
- (void)configureSelf;
- (id)description;
- (id)errors;
- (id)init;
- (id)initWithSyncState:(id)arg1 syncStatistics:(id)arg2;
- (bool)isHidden;
- (double)percentComplete;
- (id)percentCompleteString;
- (double)progressBarMax;
- (double)progressBarValue;
- (id)progressLabel;
- (double)remainingItems;
- (void)setActionLabel:(id)arg1;
- (void)setActionType:(long long)arg1;
- (void)setBroadcastDeferralOverride:(double)arg1;
- (void)setProgressBarMax:(double)arg1;
- (void)setProgressBarValue:(double)arg1;
- (void)setProgressLabel:(id)arg1;
- (void)setShouldShowIndeterminateProgress:(bool)arg1;
- (void)setShouldShowProgressBar:(bool)arg1;
- (void)setShouldShowUserActionLabel:(bool)arg1;
- (void)setShouldShowUserMessageLabel:(bool)arg1;
- (void)setUserMessageLabel:(id)arg1;
- (bool)shouldShowIndeterminateProgress;
- (bool)shouldShowProgressBar;
- (bool)shouldShowUserActionLabel;
- (bool)shouldShowUserMessageLabel;
- (id)syncState;
- (id)syncStatistics;
- (id)userMessageLabel;

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