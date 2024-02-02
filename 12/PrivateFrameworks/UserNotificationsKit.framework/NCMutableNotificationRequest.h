<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NCMutableNotificationRequest.h</title>
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

/PrivateFrameworks/UserNotificationsKit.framework/NCMutableNotificationRequest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit (1)
 */

@interface NCMutableNotificationRequest : NCNotificationRequest

@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic, retain) NCNotificationAction *clearAction;
@property (nonatomic, retain) NCNotificationAction *closeAction;
@property (nonatomic) unsigned long long collapsedNotificationsCount;
@property (nonatomic, retain) NCNotificationContent *content;
@property (nonatomic, copy) NSDictionary *context;
@property (getter=isCriticalAlert, nonatomic) bool criticalAlert;
@property (nonatomic, retain) NCNotificationAction *defaultAction;
@property (nonatomic, copy) NSString *highestPrioritySubSectionIdentifier;
@property (nonatomic) bool isCollapsedNotification;
@property (nonatomic, copy) NSString *notificationIdentifier;
@property (nonatomic, retain) NCNotificationOptions *options;
@property (nonatomic, copy) NSString *parentSectionIdentifier;
@property (nonatomic, copy) NSArray *peopleIdentifiers;
@property (nonatomic, copy) NSSet *requestDestinations;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (nonatomic, copy) NSSet *settingsSections;
@property (nonatomic, retain) NCNotificationAction *silenceAction;
@property (nonatomic, retain) NCNotificationSound *sound;
@property (nonatomic, copy) NSDictionary *sourceInfo;
@property (nonatomic, copy) NSSet *subSectionIdentifiers;
@property (nonatomic, copy) NSDictionary *supplementaryActions;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic, retain) NSDate *timestamp;
@property (getter=isUniqueThreadIdentifier, nonatomic) bool uniqueThreadIdentifier;
@property (nonatomic, retain) UNNotification *userNotification;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setClearAction:(id)arg1;
- (void)setCloseAction:(id)arg1;
- (void)setCollapsedNotificationsCount:(unsigned long long)arg1;
- (void)setContent:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCriticalAlert:(bool)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setHighestPrioritySubSectionIdentifier:(id)arg1;
- (void)setIsCollapsedNotification:(bool)arg1;
- (void)setNotificationIdentifier:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setParentSectionIdentifier:(id)arg1;
- (void)setPeopleIdentifiers:(id)arg1;
- (void)setRequestDestinations:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setSettingsSections:(id)arg1;
- (void)setSilenceAction:(id)arg1;
- (void)setSound:(id)arg1;
- (void)setSourceInfo:(id)arg1;
- (void)setSubSectionIdentifiers:(id)arg1;
- (void)setSupplementaryActions:(id)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUniqueThreadIdentifier:(bool)arg1;
- (void)setUserNotification:(id)arg1;

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