<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EKCalendarEventInvitationNotification.h</title>
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

/Frameworks/EventKit.framework/EKCalendarEventInvitationNotification.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKit.framework/EventKit (1.0)
 */

@interface EKCalendarEventInvitationNotification : EKCalendarNotification {
    bool  _allDay;
    bool  _attendeeReplyChanged;
    NSArray * _attendees;
    bool  _dateChanged;
    NSDate * _endDate;
    NSString * _invitedBy;
    NSString * _location;
    bool  _locationChanged;
    EKCalendarEventInvitationNotificationAttendee * _owner;
    long long  _participationStatus;
    NSDate * _participationStatusModifiedDate;
    EKRecurrenceRule * _recurrenceRule;
    NSDate * _startDate;
    NSDate * _startDateForNextOccurrence;
    long long  _status;
    bool  _timeChanged;
    NSTimeZone * _timeZone;
}

@property (getter=isAllDay, nonatomic) bool allDay;
@property (nonatomic) bool attendeeReplyChanged;
@property (nonatomic, retain) NSArray *attendees;
@property (nonatomic) bool couldBeJunk;
@property (nonatomic) bool dateChanged;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, readonly) NSString *invitedBy;
@property (nonatomic, retain) NSString *location;
@property (nonatomic) bool locationChanged;
@property (nonatomic, retain) EKCalendarEventInvitationNotificationAttendee *owner;
@property (nonatomic) long long participationStatus;
@property (nonatomic, retain) NSDate *participationStatusModifiedDate;
@property (nonatomic, retain) EKRecurrenceRule *recurrenceRule;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSDate *startDateForNextOccurrence;
@property (nonatomic) long long status;
@property (nonatomic) bool timeChanged;
@property (nonatomic, retain) NSTimeZone *timeZone;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (void).cxx_destruct;
- (bool)attendeeReplyChanged;
- (id)attendees;
- (bool)dateChanged;
- (id)endDate;
- (id)eventFromEventStore:(id)arg1;
- (bool)hasRecurrenceRules;
- (id)initWithEvent:(id)arg1;
- (id)invitedBy;
- (bool)isAllDay;
- (id)location;
- (bool)locationChanged;
- (id)owner;
- (long long)participationStatus;
- (id)participationStatusModifiedDate;
- (id)recurrenceRule;
- (void)setAllDay:(bool)arg1;
- (void)setAttendeeReplyChanged:(bool)arg1;
- (void)setAttendees:(id)arg1;
- (void)setDateChanged:(bool)arg1;
- (void)setEndDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationChanged:(bool)arg1;
- (void)setOwner:(id)arg1;
- (void)setParticipationStatus:(long long)arg1;
- (void)setParticipationStatusModifiedDate:(id)arg1;
- (void)setRecurrenceRule:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartDateForNextOccurrence:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTimeChanged:(bool)arg1;
- (void)setTimeZone:(id)arg1;
- (id)startDate;
- (id)startDateForNextOccurrence;
- (long long)status;
- (bool)timeChanged;
- (id)timeZone;

// Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit

- (id)_allDescriptionStringsRankedByImportance:(bool)arg1 options:(unsigned long long)arg2;
- (id)_attachmentString;
- (id)_attendeeReplyStringWithOptions:(unsigned long long)arg1;
- (id)_attendeeString:(unsigned long long)arg1;
- (id)_dateString:(unsigned long long)arg1;
- (id)_errorString:(unsigned long long)arg1;
- (id)_locationString:(unsigned long long)arg1;
- (id)_organizerString:(unsigned long long)arg1;
- (id)allDescriptionStringsWithOptions:(unsigned long long)arg1;
- (id)importantDescriptionStringWithOptions:(unsigned long long)arg1;
- (id)senderStringWithOptions:(unsigned long long)arg1;
- (bool)supportsDisplay;

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