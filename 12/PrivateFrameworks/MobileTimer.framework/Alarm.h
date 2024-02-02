<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>Alarm.h</title>
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

/PrivateFrameworks/MobileTimer.framework/Alarm.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer (1)
 */

@interface Alarm : NSObject {
    NSString * _alarmID;
    NSURL * _alarmIDURL;
    bool  _allowsSnooze;
    unsigned int  _daySetting;
    <AlarmDelegate> * _delegate;
    Alarm * _editingProxy;
    bool  _forceActiveForMigration;
    unsigned int  _hour;
    bool  _isSleepAlarm;
    NSDate * _lastModified;
    unsigned int  _minute;
    bool  _pretendActiveIfProxy;
    NSArray * _repeatDays;
    unsigned int  _revision;
    NSMutableDictionary * _settings;
    bool  _snoozed;
    NSString * _sound;
    long long  _soundType;
    NSString * _title;
    NSString * _vibrationID;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, retain) NSString *alarmID;
@property (nonatomic, retain) NSURL *alarmIDURL;
@property (nonatomic) bool allowsSnooze;
@property (nonatomic) long long bedtimeHour;
@property (nonatomic) long long bedtimeMinute;
@property (nonatomic, copy) NSNumber *bedtimeReminderMinutes;
@property (nonatomic) unsigned int daySetting;
@property (nonatomic) <AlarmDelegate> *delegate;
@property (nonatomic, readonly) Alarm *editingProxy;
@property (nonatomic) bool forceActiveForMigration;
@property (nonatomic) unsigned int hour;
@property (nonatomic) bool isSleepAlarm;
@property (nonatomic, readonly) NSDate *lastModified;
@property (nonatomic) unsigned int minute;
@property (nonatomic, readonly) NSArray *repeatDays;
@property (nonatomic, readonly) bool repeats;
@property (nonatomic, readonly) unsigned int revision;
@property (nonatomic, readonly) NSDictionary *settings;
@property (getter=isSnoozed, nonatomic, readonly) bool snoozed;
@property (nonatomic, readonly) NSString *sound;
@property (nonatomic, readonly) long long soundType;
@property (nonatomic, copy) NSNumber *soundVolume;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) NSString *uiTitle;
@property (nonatomic, retain) NSString *vibrationID;

+ (id /* block */)timeComparator;
+ (bool)verifyDaySetting:(id)arg1 withMessageList:(id)arg2;
+ (bool)verifyHourSetting:(id)arg1 withMessageList:(id)arg2;
+ (bool)verifyIdSetting:(id)arg1 withMessageList:(id)arg2;
+ (bool)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2;
+ (bool)verifySettings:(id)arg1;

- (void).cxx_destruct;
- (id)_newBaseDateComponentsForDay:(long long)arg1;
- (id)alarmID;
- (id)alarmIDURL;
- (id)alarmSoundIdentifier;
- (long long)alarmSoundType;
- (id)alarmSoundVolume;
- (bool)allowsSnooze;
- (void)applyChangesFromEditingProxy;
- (void)applySettings:(id)arg1;
- (long long)bedtimeHour;
- (long long)bedtimeMinute;
- (id)bedtimeReminderMinutes;
- (long long)compareTime:(id)arg1;
- (unsigned int)daySetting;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (void)dropEditingProxy;
- (id)editingProxy;
- (bool)forceActiveForMigration;
- (unsigned long long)hash;
- (unsigned int)hour;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isSleepAlarm;
- (bool)isSnoozed;
- (id)lastModified;
- (void)markModified;
- (unsigned int)minute;
- (id)nowDateForOffsetCalculation;
- (void)prepareEditingProxy;
- (void)refreshActiveState;
- (id)repeatDays;
- (bool)repeats;
- (unsigned int)revision;
- (void)setAlarmID:(id)arg1;
- (void)setAlarmIDURL:(id)arg1;
- (void)setAlarmSoundIdentifier:(id)arg1 ofType:(long long)arg2;
- (void)setAlarmSoundVolume:(id)arg1;
- (void)setAllowsSnooze:(bool)arg1;
- (void)setBedtimeHour:(long long)arg1;
- (void)setBedtimeMinute:(long long)arg1;
- (void)setBedtimeReminderMinutes:(id)arg1;
- (void)setDaySetting:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceActiveForMigration:(bool)arg1;
- (void)setHour:(unsigned int)arg1;
- (void)setIsSleepAlarm:(bool)arg1;
- (void)setMinute:(unsigned int)arg1;
- (void)setSound:(id)arg1 ofType:(long long)arg2;
- (void)setSoundVolume:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVibrationID:(id)arg1;
- (id)settings;
- (id)sound;
- (long long)soundType;
- (id)soundVolume;
- (id)timeZoneForOffsetCalculation;
- (id)title;
- (id)uiTitle;
- (id)vibrationID;

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