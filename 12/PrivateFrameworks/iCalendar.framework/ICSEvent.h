<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ICSEvent.h</title>
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

/PrivateFrameworks/iCalendar.framework/ICSEvent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar (287)
 */

@interface ICSEvent : ICSCalendarItem

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property int classification;
@property (retain) NSArray *conferences;
@property (retain) ICSDate *created;
@property (retain) NSString *description;
@property (retain) ICSDate *dtend;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (retain) ICSDuration *duration;
@property (retain) NSArray *exdate;
@property (retain) NSArray *exrule;
@property bool forcedAllDay;
@property (readonly) bool isAllDay;
@property (retain) ICSDate *last_modified;
@property (retain) NSString *location;
@property (retain) ICSUserAddress *organizer;
@property (retain) NSArray *rdate;
@property (retain) ICSDate *recurrence_id;
@property (retain) NSArray *rrule;
@property unsigned long long sequence;
@property int status;
@property (retain) NSString *summary;
@property (nonatomic) int transp;
@property (retain) NSString *uid;
@property (retain) NSURL *url;
@property (nonatomic) bool x_apple_dontschedule;
@property (retain) NSString *x_apple_dropbox;
@property (retain) ICSStructuredLocation *x_apple_end_location;
@property (nonatomic) int x_apple_ews_busystatus;
@property (retain) NSString *x_apple_ews_changekey;
@property (retain) NSString *x_apple_ews_itemid;
@property bool x_apple_ews_needsserverconfirmation;
@property (retain) NSString *x_apple_ews_permission;
@property bool x_apple_ignore_on_restore;
@property (nonatomic) bool x_apple_needs_reply;
@property (retain) ICSStructuredLocation *x_apple_structured_location;
@property (retain) ICSTravelAdvisoryBehavior *x_apple_travel_advisory_behavior;
@property (retain) ICSTravelDuration *x_apple_travel_duration;
@property (retain) ICSStructuredLocation *x_apple_travel_start;
@property (nonatomic, retain) NSArray *x_calendarserver_attendee_comment;
@property (nonatomic, retain) NSString *x_calendarserver_private_comment;
@property (nonatomic) bool x_wr_itipalreadysent;
@property (nonatomic) bool x_wr_itipstatusattendeeml;
@property (nonatomic) bool x_wr_itipstatusml;
@property (nonatomic) bool x_wr_rsvpneeded;

// Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar

+ (id)name;

- (void)fixAttendeeComments;
- (void)fixComponent;
- (bool)isDefaultAlarmDeleted;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)setTransp:(int)arg1;
- (void)setX_apple_dontschedule:(bool)arg1;
- (void)setX_apple_ews_busystatus:(int)arg1;
- (void)setX_apple_needs_reply:(bool)arg1;
- (void)setX_calendarserver_attendee_comment:(id)arg1;
- (void)setX_calendarserver_private_comment:(id)arg1;
- (void)setX_wr_itipalreadysent:(bool)arg1;
- (void)setX_wr_itipstatusattendeeml:(bool)arg1;
- (void)setX_wr_itipstatusml:(bool)arg1;
- (void)setX_wr_rsvpneeded:(bool)arg1;
- (int)transp;
- (bool)validate:(id*)arg1;
- (bool)x_apple_dontschedule;
- (int)x_apple_ews_busystatus;
- (bool)x_apple_needs_reply;
- (id)x_calendarserver_attendee_comment;
- (id)x_calendarserver_private_comment;
- (bool)x_wr_itipalreadysent;
- (bool)x_wr_itipstatusattendeeml;
- (bool)x_wr_itipstatusml;
- (bool)x_wr_rsvpneeded;

// Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals

- (id)attendeeEmailAddresses;
- (id)entityWithParentEntity:(id)arg1 withCalendar:(id)arg2;
- (id)entityWithParentEntity:(id)arg1 withCalendar:(id)arg2 withCorrectnessFlag:(bool*)arg3;
- (id)firstValueOfPropertyForName:(id)arg1;
- (int)method;

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
