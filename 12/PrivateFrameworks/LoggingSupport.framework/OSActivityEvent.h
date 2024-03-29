<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>OSActivityEvent.h</title>
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

/PrivateFrameworks/LoggingSupport.framework/OSActivityEvent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport (906.260.1)
 */

@interface OSActivityEvent : NSObject {
    unsigned long long  _activityID;
    NSString * _eventMessage;
    unsigned long long  _eventType;
    unsigned long long  _machTimestamp;
    unsigned long long  _parentActivityID;
    bool  _persisted;
    int  _processID;
    NSString * _processImagePath;
    NSUUID * _processImageUUID;
    unsigned long long  _processUniqueID;
    NSString * _senderImagePath;
    NSUUID * _senderImageUUID;
    unsigned long long  _threadID;
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    }  _timeGMT;
    NSDate * _timestamp;
    NSTimeZone * _timezone;
    NSString * _timezoneName;
    unsigned long long  _traceID;
    struct timezone { 
        int tz_minuteswest; 
        int tz_dsttime; 
    }  _tz;
}

@property (nonatomic, readonly) unsigned long long activityID;
@property (nonatomic, copy) NSString *eventMessage;
@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) unsigned long long machTimestamp;
@property (nonatomic, readonly) unsigned long long parentActivityID;
@property (nonatomic, readonly) bool persisted;
@property (nonatomic, readonly, copy) NSString *process;
@property (nonatomic, readonly) int processID;
@property (nonatomic, readonly, copy) NSString *processImagePath;
@property (nonatomic, readonly, copy) NSUUID *processImageUUID;
@property (nonatomic, readonly) unsigned long long processUniqueID;
@property (nonatomic, readonly, copy) NSString *sender;
@property (nonatomic, readonly, copy) NSString *senderImagePath;
@property (nonatomic, readonly, copy) NSUUID *senderImageUUID;
@property (nonatomic, readonly) unsigned long long threadID;
@property (nonatomic, readonly) struct timeval { long long x1; int x2; } timeGMT;
@property (nonatomic, readonly, copy) NSDate *timestamp;
@property (nonatomic, readonly, copy) NSTimeZone *timezone;
@property (nonatomic, retain) NSString *timezoneName;
@property (nonatomic, readonly) unsigned long long traceID;
@property (nonatomic, readonly) struct timezone { int x1; int x2; } tz;

+ (id)activityEventFromStreamEntry:(struct os_activity_stream_entry_s { unsigned int x1; int x2; unsigned long long x3; char *x4; char *x5; unsigned long long x6; unsigned long long x7; union { struct os_activity_stream_common_s { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; char *x_1_2_4; char *x_1_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_1_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_8_1_1; struct os_activity_stream_common_with_name_s { unsigned long long x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; char *x_2_2_4; char *x_2_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_2_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; char *x_2_2_10; } x_8_1_2; struct os_activity_create_s { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; char *x_3_2_4; char *x_3_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_3_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_3_2_7; unsigned int x_3_2_8; unsigned int x_3_2_9; char *x_3_2_10; unsigned long long x_3_2_11; unsigned long long x_3_2_12; } x_8_1_3; } x8; }*)arg1;

- (void).cxx_destruct;
- (void)_addProperties:(id)arg1;
- (void)_initWithProperties:(id)arg1;
- (unsigned long long)activityID;
- (id)description;
- (id)eventMessage;
- (unsigned long long)eventType;
- (void)fillFromStreamEntry:(struct os_activity_stream_entry_s { unsigned int x1; int x2; unsigned long long x3; char *x4; char *x5; unsigned long long x6; unsigned long long x7; union { struct os_activity_stream_common_s { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; char *x_1_2_4; char *x_1_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_1_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_1_2_7; unsigned int x_1_2_8; unsigned int x_1_2_9; } x_8_1_1; struct os_activity_stream_common_with_name_s { unsigned long long x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; char *x_2_2_4; char *x_2_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_2_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; char *x_2_2_10; } x_8_1_2; struct os_activity_create_s { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; char *x_3_2_4; char *x_3_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_3_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_3_2_7; unsigned int x_3_2_8; unsigned int x_3_2_9; char *x_3_2_10; unsigned long long x_3_2_11; unsigned long long x_3_2_12; } x_8_1_3; } x8; }*)arg1 eventMessage:(const char *)arg2 persisted:(bool)arg3;
- (unsigned long long)machTimestamp;
- (unsigned long long)parentActivityID;
- (bool)persisted;
- (id)process;
- (int)processID;
- (id)processImagePath;
- (id)processImageUUID;
- (unsigned long long)processUniqueID;
- (id)properties;
- (id)sender;
- (id)senderImagePath;
- (id)senderImageUUID;
- (void)setEventMessage:(id)arg1;
- (void)setTimezoneName:(id)arg1;
- (unsigned long long)threadID;
- (struct timeval { long long x1; int x2; })timeGMT;
- (id)timestamp;
- (id)timezone;
- (id)timezoneName;
- (unsigned long long)traceID;
- (struct timezone { int x1; int x2; })tz;

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
