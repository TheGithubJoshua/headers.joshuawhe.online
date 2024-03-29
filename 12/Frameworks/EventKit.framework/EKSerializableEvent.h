<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EKSerializableEvent.h</title>
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

/Frameworks/EventKit.framework/EKSerializableEvent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKit.framework/EventKit (1.0)
 */

@interface EKSerializableEvent : EKSerializableObject {
    NSArray * _alarms;
    NSArray * _attachments;
    NSArray * _attendees;
    NSString * _calendarIdentifier;
    NSDate * _endDate;
    bool  _isAllDay;
    NSString * _location;
    NSString * _notes;
    NSMutableArray * _recurrenceRules;
    NSDate * _startDate;
    EKSerializableStructuredLocation * _structuredLocation;
    NSTimeZone * _timeZone;
    NSString * _title;
    double  _travelTime;
    NSURL * _url;
}

@property (nonatomic, retain) NSArray *alarms;
@property (nonatomic, retain) NSArray *attachments;
@property (nonatomic, retain) NSArray *attendees;
@property (nonatomic, copy) NSString *calendarIdentifier;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) bool isAllDay;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *notes;
@property (nonatomic, retain) NSMutableArray *recurrenceRules;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, retain) EKSerializableStructuredLocation *structuredLocation;
@property (nonatomic, copy) NSTimeZone *timeZone;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) double travelTime;
@property (nonatomic, retain) NSURL *url;

+ (id)classesForKey;
+ (id)serializedProperties;

- (void).cxx_destruct;
- (void)_initAlarms:(id)arg1;
- (void)_initAttachments:(id)arg1;
- (void)_initAttendees:(id)arg1;
- (void)_initRecurrenceRules:(id)arg1;
- (id)alarms;
- (id)attachments;
- (id)attendees;
- (id)calendarIdentifier;
- (id)createEventInEventStore:(id)arg1;
- (id)endDate;
- (id)initWithEvent:(id)arg1;
- (bool)isAllDay;
- (id)location;
- (id)notes;
- (id)recurrenceRules;
- (void)setAlarms:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setAttendees:(id)arg1;
- (void)setCalendarIdentifier:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setIsAllDay:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setRecurrenceRules:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStructuredLocation:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTravelTime:(double)arg1;
- (void)setUrl:(id)arg1;
- (id)startDate;
- (id)structuredLocation;
- (id)timeZone;
- (id)title;
- (double)travelTime;
- (id)url;

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
