<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ACHMonthlyChallengeAwardingSource.h</title>
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

/PrivateFrameworks/ActivityAchievements.framework/ACHMonthlyChallengeAwardingSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements (1)
 */

@interface ACHMonthlyChallengeAwardingSource : NSObject <ACHAchievementProgressProviding, ACHEarnedInstanceAwarding, HDCurrentActivitySummaryHelperObserver, HDDataObserver, HDHealthDaemonReadyObserver> {
    unsigned char  _creatorDevice;
    ACHEarnedInstanceStore * _earnedInstanceStore;
    ACHEarnedInstanceAwardingEngine * _engine;
    ACHMonthlyChallengeDataSource * _monthlyDataSource;
    HDProfile * _profile;
    ACHAchievementProgressEngine * _progressProvider;
    ACHTemplateStore * _templateStore;
}

@property (nonatomic) unsigned char creatorDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (nonatomic) ACHEarnedInstanceAwardingEngine *engine;
@property (readonly) unsigned long long hash;
@property (nonatomic) ACHMonthlyChallengeDataSource *monthlyDataSource;
@property (nonatomic) HDProfile *profile;
@property (nonatomic) ACHAchievementProgressEngine *progressProvider;
@property (readonly) Class superclass;
@property (nonatomic) ACHTemplateStore *templateStore;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (id)_earnedInstancesForInterval:(id)arg1;
- (id)_evaluationEnvironmentForTemplate:(id)arg1;
- (id)_monthlyChallengeTemplatesForHistoricalInterval:(id)arg1;
- (void)_requestIncrementalEvaluation;
- (unsigned char)creatorDevice;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (id)currentGoalQuantityForTemplate:(id)arg1;
- (id)currentProgressQuantityForTemplate:(id)arg1;
- (void)daemonReady:(id)arg1;
- (id)earnedInstanceStore;
- (id)earnedInstancesForHistoricalInterval:(id)arg1 databaseContext:(id)arg2;
- (id)engine;
- (id)initWithProfile:(id)arg1 awardingEngine:(id)arg2 templateStore:(id)arg3 earnedInstanceStore:(id)arg4 monthlyDataSource:(id)arg5 creatorDevice:(unsigned char)arg6 progressProvider:(id)arg7;
- (id)monthlyDataSource;
- (id)profile;
- (id)progressProvider;
- (bool)providesProgressForTemplate:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)setCreatorDevice:(unsigned char)arg1;
- (void)setEarnedInstanceStore:(id)arg1;
- (void)setEngine:(id)arg1;
- (void)setMonthlyDataSource:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setProgressProvider:(id)arg1;
- (void)setTemplateStore:(id)arg1;
- (id)templateStore;
- (id)uniqueName;

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