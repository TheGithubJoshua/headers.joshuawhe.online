<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>SignpostSupportObject.h</title>
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

/PrivateFrameworks/SignpostSupport.framework/SignpostSupportObject.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport (31.1)
 */

@interface SignpostSupportObject : NSObject <SignpostSerializable, SignpostSupportTimeInterval> {
    NSString * _category;
    NSString * _subsystem;
    double  _timebaseRatio;
}

@property (nonatomic, readonly) NSDate *beginDate;
@property (nonatomic, retain) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long durationMachContinuousTime;
@property (nonatomic, readonly) float durationSeconds;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned long long endMachContinuousTime;
@property (nonatomic, readonly) unsigned long long endNanoseconds;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long startMachContinuousTime;
@property (nonatomic, readonly) unsigned long long startNanoseconds;
@property (nonatomic, retain) NSString *subsystem;
@property (readonly) Class superclass;
@property (nonatomic) double timebaseRatio;
@property (nonatomic, readonly) long long tv_sec;
@property (nonatomic, readonly) int tv_usec;
@property (nonatomic, readonly) int tz_dsttime;
@property (nonatomic, readonly) int tz_minuteswest;

+ (id)headerWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2;
+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (void)_adjustBeginTimeVal:(struct timeval { long long x1; int x2; }*)arg1;
- (void)_adjustEndTimeVal:(struct timeval { long long x1; int x2; }*)arg1;
- (id)_containedObjectsFromArray:(id)arg1;
- (bool)_containsMCT:(unsigned long long)arg1;
- (bool)_containsTimeObject:(id)arg1;
- (id)_descriptionStringForColumn:(unsigned long long)arg1 timeFormat:(unsigned long long)arg2 asBegin:(bool)arg3;
- (id)_descriptionWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2 asBegin:(bool)arg3;
- (id)_dictionaryRepresentationWithIsHumanReadable:(bool)arg1 shouldRedact:(bool)arg2;
- (bool)_hasBeginTimeval;
- (bool)_hasEndTimeval;
- (bool)_populateTimeStruct:(struct time { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; }*)arg1 withTimeval:(struct timeval { long long x1; int x2; }*)arg2 withTZString:(id)arg3;
- (id)_wallTimeStringWithTimeZone:(id)arg1 isBegin:(bool)arg2;
- (id)beginDate;
- (bool)beginTimeval:(struct timeval { long long x1; int x2; }*)arg1;
- (bool)beginTimezone:(struct timezone { int x1; int x2; }*)arg1;
- (id)beginWallTimeStringWithTimeZoneName:(id)arg1;
- (id)category;
- (id)descriptionWithTimeFormat:(unsigned long long)arg1 verbosity:(unsigned char)arg2;
- (unsigned long long)durationMachContinuousTime;
- (double)durationMs;
- (unsigned long long)durationNanoseconds;
- (float)durationSeconds;
- (id)endDate;
- (unsigned long long)endMachContinuousTime;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (bool)endTimeval:(struct timeval { long long x1; int x2; }*)arg1;
- (bool)endTimezone:(struct timezone { int x1; int x2; }*)arg1;
- (id)endWallTimeStringWithTimeZoneName:(id)arg1;
- (unsigned long long)hash;
- (id)humanReadableDictionaryRepresentation;
- (id)humanReadableType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 timebaseRatio:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)serializeableDictionaryWithShouldRedact:(bool)arg1;
- (void)setCategory:(id)arg1;
- (void)setSubsystem:(id)arg1;
- (void)setTimebaseRatio:(double)arg1;
- (unsigned long long)startMachContinuousTime;
- (double)startMs;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;
- (id)subsystem;
- (double)timebaseRatio;
- (long long)tv_sec;
- (int)tv_usec;
- (int)tz_dsttime;
- (int)tz_minuteswest;

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
