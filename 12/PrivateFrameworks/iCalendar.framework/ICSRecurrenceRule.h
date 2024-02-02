<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ICSRecurrenceRule.h</title>
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

/PrivateFrameworks/iCalendar.framework/ICSRecurrenceRule.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar (287)
 */

@interface ICSRecurrenceRule : NSObject <ICSWriting, NSSecureCoding> {
    int  _freq;
    NSMutableDictionary * _parameters;
}

@property (nonatomic, retain) NSArray *byday;
@property (nonatomic, retain) NSArray *byhour;
@property (nonatomic, retain) NSArray *byminute;
@property (nonatomic, retain) NSArray *bymonth;
@property (nonatomic, retain) NSArray *bymonthday;
@property (nonatomic, retain) NSArray *bysecond;
@property (nonatomic, retain) NSArray *bysetpos;
@property (nonatomic, retain) NSArray *byweekno;
@property (nonatomic, retain) NSArray *byyearday;
@property (nonatomic) NSNumber *count;
@property (nonatomic) int freq;
@property (nonatomic) NSNumber *interval;
@property (nonatomic, retain) ICSDateValue *until;
@property (nonatomic) NSNumber *wkst;

+ (id)recurrenceRuleFromICSCString:(const char *)arg1 withTokenizer:(id)arg2;
+ (id)recurrenceRuleFromICSString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ICSStringWithOptions:(unsigned long long)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)byday;
- (id)byhour;
- (id)byminute;
- (id)bymonth;
- (id)bymonthday;
- (id)bysecond;
- (id)bysetpos;
- (id)byweekno;
- (id)byyearday;
- (void)cleanUpForStartDate:(id)arg1;
- (id)count;
- (void)encodeWithCoder:(id)arg1;
- (int)freq;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrequency:(int)arg1;
- (id)interval;
- (id)occurrencesForStartDate:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 inTimeZone:(id)arg4;
- (id)parameterValueForName:(id)arg1;
- (id)parametersToIncludeForChecksumVersion:(int)arg1;
- (id)parametersToObscure;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (id)propertiesToObscure;
- (void)removeParameterValueForName:(id)arg1;
- (void)setByday:(id)arg1;
- (void)setByhour:(id)arg1;
- (void)setByminute:(id)arg1;
- (void)setBymonth:(id)arg1;
- (void)setBymonthday:(id)arg1;
- (void)setBysecond:(id)arg1;
- (void)setBysetpos:(id)arg1;
- (void)setByweekno:(id)arg1;
- (void)setByyearday:(id)arg1;
- (void)setCount:(id)arg1;
- (void)setFreq:(int)arg1;
- (void)setInterval:(id)arg1;
- (void)setParameterValue:(id)arg1 forName:(id)arg2;
- (void)setUntil:(id)arg1;
- (void)setWkst:(id)arg1;
- (bool)shouldObscureValue;
- (id)until;
- (id)wkst;

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