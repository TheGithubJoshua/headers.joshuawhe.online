<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDCodableDateComponents.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDCodableDateComponents.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDCodableDateComponents : PBCodable <NSCopying> {
    NSString * _calendar;
    long long  _day;
    long long  _era;
    struct { 
        unsigned int day : 1; 
        unsigned int era : 1; 
        unsigned int hour : 1; 
        unsigned int minute : 1; 
        unsigned int month : 1; 
        unsigned int nanosecond : 1; 
        unsigned int quarter : 1; 
        unsigned int second : 1; 
        unsigned int weekOfMonth : 1; 
        unsigned int weekOfYear : 1; 
        unsigned int weekday : 1; 
        unsigned int weekdayOrdinal : 1; 
        unsigned int year : 1; 
        unsigned int yearForWeekOfYear : 1; 
    }  _has;
    long long  _hour;
    long long  _minute;
    long long  _month;
    long long  _nanosecond;
    long long  _quarter;
    long long  _second;
    NSString * _timeZone;
    long long  _weekOfMonth;
    long long  _weekOfYear;
    long long  _weekday;
    long long  _weekdayOrdinal;
    long long  _year;
    long long  _yearForWeekOfYear;
}

@property (nonatomic, retain) NSString *calendar;
@property (nonatomic) long long day;
@property (nonatomic) long long era;
@property (nonatomic, readonly) bool hasCalendar;
@property (nonatomic) bool hasDay;
@property (nonatomic) bool hasEra;
@property (nonatomic) bool hasHour;
@property (nonatomic) bool hasMinute;
@property (nonatomic) bool hasMonth;
@property (nonatomic) bool hasNanosecond;
@property (nonatomic) bool hasQuarter;
@property (nonatomic) bool hasSecond;
@property (nonatomic, readonly) bool hasTimeZone;
@property (nonatomic) bool hasWeekOfMonth;
@property (nonatomic) bool hasWeekOfYear;
@property (nonatomic) bool hasWeekday;
@property (nonatomic) bool hasWeekdayOrdinal;
@property (nonatomic) bool hasYear;
@property (nonatomic) bool hasYearForWeekOfYear;
@property (nonatomic) long long hour;
@property (nonatomic) long long minute;
@property (nonatomic) long long month;
@property (nonatomic) long long nanosecond;
@property (nonatomic) long long quarter;
@property (nonatomic) long long second;
@property (nonatomic, retain) NSString *timeZone;
@property (nonatomic) long long weekOfMonth;
@property (nonatomic) long long weekOfYear;
@property (nonatomic) long long weekday;
@property (nonatomic) long long weekdayOrdinal;
@property (nonatomic) long long year;
@property (nonatomic) long long yearForWeekOfYear;

- (void).cxx_destruct;
- (id)calendar;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)day;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)era;
- (bool)hasCalendar;
- (bool)hasDay;
- (bool)hasEra;
- (bool)hasHour;
- (bool)hasMinute;
- (bool)hasMonth;
- (bool)hasNanosecond;
- (bool)hasQuarter;
- (bool)hasSecond;
- (bool)hasTimeZone;
- (bool)hasWeekOfMonth;
- (bool)hasWeekOfYear;
- (bool)hasWeekday;
- (bool)hasWeekdayOrdinal;
- (bool)hasYear;
- (bool)hasYearForWeekOfYear;
- (unsigned long long)hash;
- (long long)hour;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)minute;
- (long long)month;
- (long long)nanosecond;
- (long long)quarter;
- (bool)readFrom:(id)arg1;
- (long long)second;
- (void)setCalendar:(id)arg1;
- (void)setDay:(long long)arg1;
- (void)setEra:(long long)arg1;
- (void)setHasDay:(bool)arg1;
- (void)setHasEra:(bool)arg1;
- (void)setHasHour:(bool)arg1;
- (void)setHasMinute:(bool)arg1;
- (void)setHasMonth:(bool)arg1;
- (void)setHasNanosecond:(bool)arg1;
- (void)setHasQuarter:(bool)arg1;
- (void)setHasSecond:(bool)arg1;
- (void)setHasWeekOfMonth:(bool)arg1;
- (void)setHasWeekOfYear:(bool)arg1;
- (void)setHasWeekday:(bool)arg1;
- (void)setHasWeekdayOrdinal:(bool)arg1;
- (void)setHasYear:(bool)arg1;
- (void)setHasYearForWeekOfYear:(bool)arg1;
- (void)setHour:(long long)arg1;
- (void)setMinute:(long long)arg1;
- (void)setMonth:(long long)arg1;
- (void)setNanosecond:(long long)arg1;
- (void)setQuarter:(long long)arg1;
- (void)setSecond:(long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setWeekOfMonth:(long long)arg1;
- (void)setWeekOfYear:(long long)arg1;
- (void)setWeekday:(long long)arg1;
- (void)setWeekdayOrdinal:(long long)arg1;
- (void)setYear:(long long)arg1;
- (void)setYearForWeekOfYear:(long long)arg1;
- (id)timeZone;
- (long long)weekOfMonth;
- (long long)weekOfYear;
- (long long)weekday;
- (long long)weekdayOrdinal;
- (void)writeTo:(id)arg1;
- (long long)year;
- (long long)yearForWeekOfYear;

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
