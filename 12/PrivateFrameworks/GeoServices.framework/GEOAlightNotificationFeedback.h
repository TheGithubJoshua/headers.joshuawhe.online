<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOAlightNotificationFeedback.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOAlightNotificationFeedback.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOAlightNotificationFeedback : PBCodable <NSCopying> {
    unsigned long long  _alightStopMuid;
    bool  _arrivalDetected;
    double  _arrivedAtTimestamp;
    bool  _displayed;
    struct { 
        unsigned int alightStopMuid : 1; 
        unsigned int arrivedAtTimestamp : 1; 
        unsigned int lastDetectedLocationHorizontalAccuracy : 1; 
        unsigned int lastDetectedLocationTimestamp : 1; 
        unsigned int lineMuid : 1; 
        unsigned int previousStopMuid : 1; 
        unsigned int triggeredTimestamp : 1; 
        unsigned int lastDetectedLocationTraversalPercent : 1; 
        unsigned int stepID : 1; 
        unsigned int trigger : 1; 
        unsigned int triggeredLocationTraversalPercent : 1; 
        unsigned int arrivalDetected : 1; 
        unsigned int displayed : 1; 
        unsigned int triggered : 1; 
    }  _has;
    double  _lastDetectedLocationHorizontalAccuracy;
    double  _lastDetectedLocationTimestamp;
    int  _lastDetectedLocationTraversalPercent;
    unsigned long long  _lineMuid;
    unsigned long long  _previousStopMuid;
    unsigned int  _stepID;
    int  _trigger;
    bool  _triggered;
    int  _triggeredLocationTraversalPercent;
    double  _triggeredTimestamp;
}

@property (nonatomic) unsigned long long alightStopMuid;
@property (nonatomic) bool arrivalDetected;
@property (nonatomic) double arrivedAtTimestamp;
@property (nonatomic) bool displayed;
@property (nonatomic) bool hasAlightStopMuid;
@property (nonatomic) bool hasArrivalDetected;
@property (nonatomic) bool hasArrivedAtTimestamp;
@property (nonatomic) bool hasDisplayed;
@property (nonatomic) bool hasLastDetectedLocationHorizontalAccuracy;
@property (nonatomic) bool hasLastDetectedLocationTimestamp;
@property (nonatomic) bool hasLastDetectedLocationTraversalPercent;
@property (nonatomic) bool hasLineMuid;
@property (nonatomic) bool hasPreviousStopMuid;
@property (nonatomic) bool hasStepID;
@property (nonatomic) bool hasTrigger;
@property (nonatomic) bool hasTriggered;
@property (nonatomic) bool hasTriggeredLocationTraversalPercent;
@property (nonatomic) bool hasTriggeredTimestamp;
@property (nonatomic) double lastDetectedLocationHorizontalAccuracy;
@property (nonatomic) double lastDetectedLocationTimestamp;
@property (nonatomic) int lastDetectedLocationTraversalPercent;
@property (nonatomic) unsigned long long lineMuid;
@property (nonatomic) unsigned long long previousStopMuid;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) int trigger;
@property (nonatomic) bool triggered;
@property (nonatomic) int triggeredLocationTraversalPercent;
@property (nonatomic) double triggeredTimestamp;

- (int)StringAsTrigger:(id)arg1;
- (unsigned long long)alightStopMuid;
- (bool)arrivalDetected;
- (double)arrivedAtTimestamp;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)displayed;
- (bool)hasAlightStopMuid;
- (bool)hasArrivalDetected;
- (bool)hasArrivedAtTimestamp;
- (bool)hasDisplayed;
- (bool)hasLastDetectedLocationHorizontalAccuracy;
- (bool)hasLastDetectedLocationTimestamp;
- (bool)hasLastDetectedLocationTraversalPercent;
- (bool)hasLineMuid;
- (bool)hasPreviousStopMuid;
- (bool)hasStepID;
- (bool)hasTrigger;
- (bool)hasTriggered;
- (bool)hasTriggeredLocationTraversalPercent;
- (bool)hasTriggeredTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)lastDetectedLocationHorizontalAccuracy;
- (double)lastDetectedLocationTimestamp;
- (int)lastDetectedLocationTraversalPercent;
- (unsigned long long)lineMuid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)previousStopMuid;
- (bool)readFrom:(id)arg1;
- (void)setAlightStopMuid:(unsigned long long)arg1;
- (void)setArrivalDetected:(bool)arg1;
- (void)setArrivedAtTimestamp:(double)arg1;
- (void)setDisplayed:(bool)arg1;
- (void)setHasAlightStopMuid:(bool)arg1;
- (void)setHasArrivalDetected:(bool)arg1;
- (void)setHasArrivedAtTimestamp:(bool)arg1;
- (void)setHasDisplayed:(bool)arg1;
- (void)setHasLastDetectedLocationHorizontalAccuracy:(bool)arg1;
- (void)setHasLastDetectedLocationTimestamp:(bool)arg1;
- (void)setHasLastDetectedLocationTraversalPercent:(bool)arg1;
- (void)setHasLineMuid:(bool)arg1;
- (void)setHasPreviousStopMuid:(bool)arg1;
- (void)setHasStepID:(bool)arg1;
- (void)setHasTrigger:(bool)arg1;
- (void)setHasTriggered:(bool)arg1;
- (void)setHasTriggeredLocationTraversalPercent:(bool)arg1;
- (void)setHasTriggeredTimestamp:(bool)arg1;
- (void)setLastDetectedLocationHorizontalAccuracy:(double)arg1;
- (void)setLastDetectedLocationTimestamp:(double)arg1;
- (void)setLastDetectedLocationTraversalPercent:(int)arg1;
- (void)setLineMuid:(unsigned long long)arg1;
- (void)setPreviousStopMuid:(unsigned long long)arg1;
- (void)setStepID:(unsigned int)arg1;
- (void)setTrigger:(int)arg1;
- (void)setTriggered:(bool)arg1;
- (void)setTriggeredLocationTraversalPercent:(int)arg1;
- (void)setTriggeredTimestamp:(double)arg1;
- (unsigned int)stepID;
- (int)trigger;
- (id)triggerAsString:(int)arg1;
- (bool)triggered;
- (int)triggeredLocationTraversalPercent;
- (double)triggeredTimestamp;
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