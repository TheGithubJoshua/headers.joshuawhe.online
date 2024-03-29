<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HKCodableCondensedWorkout.h</title>
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

/Frameworks/HealthKit.framework/HKCodableCondensedWorkout.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit (1)
 */

@interface HKCodableCondensedWorkout : PBCodable <NSCopying> {
    double  _condenserDate;
    long long  _condenserVersion;
    double  _creationDate;
    double  _duration;
    double  _endDate;
    struct { 
        unsigned int condenserDate : 1; 
        unsigned int condenserVersion : 1; 
        unsigned int creationDate : 1; 
        unsigned int duration : 1; 
        unsigned int endDate : 1; 
        unsigned int persistentID : 1; 
        unsigned int startDate : 1; 
        unsigned int type : 1; 
    }  _has;
    long long  _persistentID;
    double  _startDate;
    long long  _type;
    NSData * _uuid;
}

@property (nonatomic) double condenserDate;
@property (nonatomic) long long condenserVersion;
@property (nonatomic) double creationDate;
@property (nonatomic) double duration;
@property (nonatomic) double endDate;
@property (nonatomic) bool hasCondenserDate;
@property (nonatomic) bool hasCondenserVersion;
@property (nonatomic) bool hasCreationDate;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasPersistentID;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) long long persistentID;
@property (nonatomic) double startDate;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSData *uuid;

- (void).cxx_destruct;
- (double)condenserDate;
- (long long)condenserVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (double)endDate;
- (bool)hasCondenserDate;
- (bool)hasCondenserVersion;
- (bool)hasCreationDate;
- (bool)hasDuration;
- (bool)hasEndDate;
- (bool)hasPersistentID;
- (bool)hasStartDate;
- (bool)hasType;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)persistentID;
- (bool)readFrom:(id)arg1;
- (void)setCondenserDate:(double)arg1;
- (void)setCondenserVersion:(long long)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasCondenserDate:(bool)arg1;
- (void)setHasCondenserVersion:(bool)arg1;
- (void)setHasCreationDate:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasPersistentID:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setStartDate:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setUuid:(id)arg1;
- (double)startDate;
- (long long)type;
- (id)uuid;
- (void)writeTo:(id)arg1;

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
