<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EKAttendee.h</title>
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

/Frameworks/EventKit.framework/EKAttendee.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKit.framework/EventKit (1.0)
 */

@interface EKAttendee : EKParticipant

@property (nonatomic) bool commentChanged;
@property (nonatomic, readonly) NSDate *lastModifiedParticipationStatus;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantStatus;
@property (nonatomic) long long participantType;
@property (nonatomic) long long pendingStatus;
@property (nonatomic) bool proposedStartDateChanged;
@property (nonatomic) bool statusChanged;

+ (int)_calAttendeeStatusFromEKParticipantStatus:(long long)arg1;
+ (long long)_ekParticipantStatusFromCalAttendeeStatus:(int)arg1;
+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 url:(id)arg4;
+ (id)attendeeWithName:(id)arg1 phoneNumber:(id)arg2;
+ (id)attendeeWithName:(id)arg1 url:(id)arg2;
+ (Class)frozenClass;

- (bool)_isParticipantStatusDirty;
- (void)_setFlag:(unsigned int)arg1 value:(bool)arg2;
- (bool)_valueForFlag:(unsigned int)arg1;
- (bool)commentChanged;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)flags;
- (bool)isCurrentUser;
- (id)lastModifiedParticipationStatus;
- (void)markAsForward;
- (id)owner;
- (long long)participantRole;
- (long long)participantStatus;
- (long long)participantType;
- (long long)pendingStatus;
- (int)pendingStatusRaw;
- (bool)proposedStartDateChanged;
- (void)setCommentChanged:(bool)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setParticipantRole:(long long)arg1;
- (void)setParticipantStatus:(long long)arg1;
- (void)setParticipantType:(long long)arg1;
- (void)setPendingStatus:(long long)arg1;
- (void)setPendingStatusRaw:(int)arg1;
- (void)setProposedStartDateChanged:(bool)arg1;
- (void)setStatusChanged:(bool)arg1;
- (void)setStatusRaw:(int)arg1;
- (bool)statusChanged;
- (int)statusRaw;

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