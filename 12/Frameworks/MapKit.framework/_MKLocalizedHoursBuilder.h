<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_MKLocalizedHoursBuilder.h</title>
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

/Frameworks/MapKit.framework/_MKLocalizedHoursBuilder.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MapKit.framework/MapKit (1.0)
 */

@interface _MKLocalizedHoursBuilder : NSObject {
    NSDate * _compareDate;
    unsigned long long  _geoMapItemOpeningHourOptions;
    UIColor * _hoursStateLabelColor;
    bool  _isClosedTodayAllDay;
    bool  _isClosingSoon;
    bool  _isCurrentlyClosed;
    bool  _isOpeningSoon;
    bool  _isPermanentlyClosed;
    bool  _isTemporarilyClosed;
    unsigned long long  _localizedHoursStringOptions;
    NSString * _localizedOpenState;
    NSString * _localizedOperatingHours;
    GEOBusinessHours * _operatingHours;
    NSTimeZone * _timeZone;
}

@property (nonatomic, retain) NSDate *compareDate;
@property (nonatomic) unsigned long long geoMapItemOpeningHourOptions;
@property (nonatomic, readonly) UIColor *hoursStateLabelColor;
@property (nonatomic) unsigned long long localizedHoursStringOptions;
@property (nonatomic, readonly) NSString *localizedOpenState;
@property (nonatomic, readonly) NSString *localizedOperatingHours;
@property (nonatomic, retain) GEOBusinessHours *operatingHours;
@property (nonatomic, retain) NSTimeZone *timeZone;

+ (id)localizedHoursDayRangeString:(id)arg1;
+ (id)localizedHoursStringNormalHours;
+ (id)localizedHoursStringSpecialHours;
+ (id)testGetDayOfWeekFormatterFull;
+ (id)testGetDayOfWeekFormatterShort;
+ (id)testGetHoursFormatter;
+ (id)testGetMonthAndDayFormatter;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_resetLocalizedBuilder:(bool)arg1;
- (id)_updateLocalizedOperatingHoursString:(unsigned long long)arg1;
- (void)_updateLocalizedString;
- (void)calculateWidthsForData:(id)arg1;
- (id)compareDate;
- (id)formatData:(id)arg1;
- (unsigned long long)geoMapItemOpeningHourOptions;
- (id)hoursStateLabelColor;
- (id)initWithBusinessHours:(id)arg1 timeZone:(id)arg2 localizedHoursStringOptions:(unsigned long long)arg3;
- (id)initWithMapItem:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;
- (id)initWithMapItemForMessageForBusiness:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;
- (unsigned long long)localizedHoursStringOptions;
- (id)localizedOpenState;
- (id)localizedOperatingHours;
- (id)operatingHours;
- (void)setCompareDate:(id)arg1;
- (void)setGeoMapItemOpeningHourOptions:(unsigned long long)arg1;
- (void)setLocalizedHoursStringOptions:(unsigned long long)arg1;
- (void)setOperatingHours:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (void)updateHoursLabelColor;

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