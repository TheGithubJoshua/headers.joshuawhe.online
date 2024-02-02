<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EKPersistentCalendarItem.h</title>
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

/Frameworks/EventKit.framework/EKPersistentCalendarItem.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKit.framework/EventKit (1.0)
 */

@interface EKPersistentCalendarItem : EKPersistentObject

@property (getter=isDefaultAlarmRemoved, nonatomic) bool defaultAlarmRemoved;

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (id)URL;
- (id)UUID;
- (id)action;
- (void)addAlarm:(id)arg1;
- (void)addAttachment:(id)arg1;
- (void)addAttendee:(id)arg1;
- (void)addRecurrenceRule:(id)arg1;
- (id)alarms;
- (id)appLink;
- (id)attachments;
- (id)attendees;
- (id)calendar;
- (id)calendarScale;
- (id)clientLocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)detachedItems;
- (id)ekExceptionDates;
- (id)endTimeZoneName;
- (id)exceptionDates;
- (id)externalData;
- (id)externalID;
- (id)externalModificationTag;
- (bool)hasAttendees;
- (bool)hasNotes;
- (bool)hasRecurrenceRules;
- (bool)isAllDay;
- (bool)isDefaultAlarmRemoved;
- (bool)isPhantomMaster;
- (id)lastModifiedDate;
- (id)localStructuredData;
- (id)location;
- (unsigned int)modifiedProperties;
- (id)notes;
- (id)organizer;
- (id)originalItem;
- (id)participationStatusModifiedDate;
- (int)priority;
- (id)recurrenceRules;
- (void)removeAlarm:(id)arg1;
- (void)removeAttachment:(id)arg1;
- (void)removeAttendee:(id)arg1;
- (void)removeRecurrenceRule:(id)arg1;
- (id)selfAttendee;
- (int)selfParticipantStatus;
- (int)sequence;
- (int)sequenceNumber;
- (void)setAction:(id)arg1;
- (void)setAlarms:(id)arg1;
- (void)setAllDay:(bool)arg1;
- (void)setAppLink:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setAttendees:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCalendarScale:(id)arg1;
- (void)setClientLocation:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDefaultAlarmRemoved:(bool)arg1;
- (void)setDetachedItems:(id)arg1;
- (void)setEkExceptionDates:(id)arg1;
- (void)setEndTimeZoneName:(id)arg1;
- (void)setExceptionDates:(id)arg1;
- (void)setExternalData:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setHasAttendees:(bool)arg1;
- (void)setHasNotes:(bool)arg1;
- (void)setHasRecurrenceRules:(bool)arg1;
- (void)setLastModifiedDate:(id)arg1;
- (void)setLocalStructuredData:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setModifiedProperties:(unsigned int)arg1;
- (void)setNotes:(id)arg1;
- (void)setOrganizer:(id)arg1;
- (void)setOriginalItem:(id)arg1;
- (void)setParticipationStatusModifiedDate:(id)arg1;
- (void)setPhantomMaster:(bool)arg1;
- (void)setPriority:(int)arg1;
- (void)setRecurrenceRules:(id)arg1;
- (void)setSelfAttendee:(id)arg1;
- (void)setSequence:(int)arg1;
- (void)setSharedItemCreatedByAddress:(id)arg1;
- (void)setSharedItemCreatedByDisplayName:(id)arg1;
- (void)setSharedItemCreatedByFirstName:(id)arg1;
- (void)setSharedItemCreatedByLastName:(id)arg1;
- (void)setSharedItemCreatedDate:(id)arg1;
- (void)setSharedItemCreatedTimeZoneName:(id)arg1;
- (void)setSharedItemModifiedByAddress:(id)arg1;
- (void)setSharedItemModifiedByDisplayName:(id)arg1;
- (void)setSharedItemModifiedByFirstName:(id)arg1;
- (void)setSharedItemModifiedByLastName:(id)arg1;
- (void)setSharedItemModifiedDate:(id)arg1;
- (void)setSharedItemModifiedTimeZoneName:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStartLocation:(id)arg1;
- (void)setStartTimeZoneName:(id)arg1;
- (void)setStructuredData:(id)arg1;
- (void)setStructuredLocationWithoutPrediction:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTravelStartLocation:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)sharedItemCreatedByAddress;
- (id)sharedItemCreatedByDisplayName;
- (id)sharedItemCreatedByFirstName;
- (id)sharedItemCreatedByLastName;
- (id)sharedItemCreatedDate;
- (id)sharedItemCreatedTimeZoneName;
- (id)sharedItemModifiedByAddress;
- (id)sharedItemModifiedByDisplayName;
- (id)sharedItemModifiedByFirstName;
- (id)sharedItemModifiedByLastName;
- (id)sharedItemModifiedDate;
- (id)sharedItemModifiedTimeZoneName;
- (id)startDate;
- (id)startLocation;
- (id)startTimeZoneName;
- (id)structuredData;
- (id)structuredLocationWithoutPrediction;
- (id)title;
- (id)travelStartLocation;
- (id)uniqueID;

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