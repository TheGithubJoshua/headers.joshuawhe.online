<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ICSUserAddress.h</title>
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

/PrivateFrameworks/iCalendar.framework/ICSUserAddress.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar (287)
 */

@interface ICSUserAddress : ICSProperty

@property (nonatomic) ICSAlternateTimeProposal *alternateTimeProposal;
@property (nonatomic, retain) NSString *cn;
@property (nonatomic) int cutype;
@property (nonatomic, retain) NSString *dir;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) NSString *likenessDataString;
@property (nonatomic) int partstat;
@property (nonatomic, retain) ICSDateValue *partstatModified;
@property (nonatomic) int role;
@property (nonatomic) bool rsvp;
@property (nonatomic) int scheduleagent;
@property (nonatomic) int scheduleforcesend;
@property (nonatomic) int schedulestatus;
@property (nonatomic, retain) NSString *x_apple_inviterName;
@property (nonatomic) bool x_apple_self_invited;
@property (nonatomic, retain) NSString *x_apple_telephone;

+ (id)ICSStringFromCalendarUser:(int)arg1;
+ (id)ICSStringFromParticipationStatus:(int)arg1;
+ (id)ICSStringFromRole:(int)arg1;
+ (id)ICSStringFromScheduleAgent:(int)arg1;
+ (id)ICSStringFromScheduleForceSend:(int)arg1;
+ (id)ICSStringFromScheduleStatus:(int)arg1;
+ (id)URLForNoMail;
+ (int)calendarUserFromICSString:(id)arg1;
+ (int)participationStatusFromICSString:(id)arg1;
+ (int)roleFromICSString:(id)arg1;
+ (int)scheduleAgentFromICSString:(id)arg1;
+ (int)scheduleForceSendFromICSString:(id)arg1;
+ (int)scheduleStatusFromICSString:(id)arg1;

- (id)alternateTimeProposal;
- (id)cn;
- (int)cutype;
- (id)dir;
- (id)displayName;
- (id)email;
- (id)emailAddress;
- (void)fixAddress;
- (bool)hasEmailAddress;
- (bool)hasPhoneNumber;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isEmailAddress;
- (bool)isHTTPAddress;
- (bool)isHTTPSAddress;
- (bool)isPhoneNumber;
- (id)likenessDataString;
- (id)parametersToObscure;
- (int)partstat;
- (id)partstatModified;
- (id)phoneNumber;
- (id)propertiesToObscure;
- (int)role;
- (bool)rsvp;
- (int)scheduleagent;
- (int)scheduleforcesend;
- (int)schedulestatus;
- (void)setAlternateTimeProposal:(id)arg1;
- (void)setCn:(id)arg1;
- (void)setCutype:(int)arg1;
- (void)setDir:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setLikenessDataString:(id)arg1;
- (void)setPartstat:(int)arg1;
- (void)setPartstatModified:(id)arg1;
- (void)setRole:(int)arg1;
- (void)setRsvp:(bool)arg1;
- (void)setScheduleagent:(int)arg1;
- (void)setScheduleforcesend:(int)arg1;
- (void)setSchedulestatus:(int)arg1;
- (void)setURL:(id)arg1;
- (void)setX_apple_inviterName:(id)arg1;
- (void)setX_apple_self_invited:(bool)arg1;
- (void)setX_apple_telephone:(id)arg1;
- (void)setX_calendarserver_email:(id)arg1;
- (bool)shouldObscureValue;
- (id)x_apple_inviterName;
- (bool)x_apple_self_invited;
- (id)x_apple_telephone;
- (id)x_calendarserver_email;

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