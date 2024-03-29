<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CMVO2MaxInputs.h</title>
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

/Frameworks/CoreMotion.framework/CMVO2MaxInputs.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion (2245.16.14)
 */

@interface CMVO2MaxInputs : NSObject <NSCopying, NSSecureCoding> {
    double  fCadence;
    double  fGrade;
    long long  fGradeType;
    bool  fHasGPS;
    bool  fHasStrideCal;
    double  fHeartRate;
    double  fHeartRateConfidence;
    long long  fMetSource;
    double  fMets;
    double  fPace;
    unsigned long long  fRecordId;
    NSDate * fStartDate;
    long long  fWorkoutType;
}

@property (nonatomic, readonly) double cadence;
@property (nonatomic, readonly) double grade;
@property (nonatomic, readonly) long long gradeType;
@property (nonatomic, readonly) bool hasGPS;
@property (nonatomic, readonly) bool hasStrideCal;
@property (nonatomic, readonly) double heartRate;
@property (nonatomic, readonly) double heartRateConfidence;
@property (nonatomic, readonly) long long metSource;
@property (nonatomic, readonly) double mets;
@property (nonatomic, readonly) double pace;
@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) long long workoutType;

+ (struct VO2MaxInput { unsigned long long x1; unsigned char x2[16]; float x3; double x4; float x5; float x6; int x7; double x8; bool x9; bool x10; int x11; long long x12; double x13; double x14; bool x15; })VO2MaxInputFromCMVO2MaxInputs:(id)arg1;
+ (bool)supportsSecureCoding;

- (double)cadence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)grade;
- (long long)gradeType;
- (bool)hasGPS;
- (bool)hasStrideCal;
- (double)heartRate;
- (double)heartRateConfidence;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 startDate:(id)arg2 mets:(double)arg3 metSource:(long long)arg4 heartRate:(double)arg5 heartRateConfidence:(double)arg6 grade:(double)arg7 gradeType:(long long)arg8 cadence:(double)arg9 pace:(double)arg10 hasGPS:(bool)arg11 hasStrideCal:(bool)arg12 workoutType:(long long)arg13;
- (id)initWithSample:(struct VO2MaxInput { unsigned long long x1; unsigned char x2[16]; float x3; double x4; float x5; float x6; int x7; double x8; bool x9; bool x10; int x11; long long x12; double x13; double x14; bool x15; })arg1;
- (long long)metSource;
- (double)mets;
- (double)pace;
- (unsigned long long)recordId;
- (id)startDate;
- (long long)workoutType;

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
