<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MNLocation.h</title>
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

/PrivateFrameworks/Navigation.framework/MNLocation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation (1)
 */

@interface MNLocation : CLLocation {
    GEONavigationMatchInfo * _detailedMatchInfo;
    NSDate * _expirationDate;
    bool  _isDirectional;
    bool  _isLeeched;
    bool  _locationUnreliable;
    NSDate * _originalDate;
    int  _rampType;
    CLLocation * _rawLocation;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _rawShiftedCoordinate;
    unsigned int  _roadLineType;
    GEORoadMatch * _roadMatch;
    NSString * _roadName;
    GEORouteMatch * _routeMatch;
    NSString * _shieldText;
    long long  _shieldType;
    unsigned long long  _speedLimit;
    bool  _speedLimitIsMPH;
    long long  _speedLimitShieldType;
    unsigned long long  _state;
}

@property (nonatomic, readonly) int _nav_source;
@property (nonatomic, retain) GEONavigationMatchInfo *detailedMatchInfo;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic) bool isDirectional;
@property (nonatomic) bool isLeeched;
@property (nonatomic, readonly) bool isProjected;
@property (nonatomic) bool locationUnreliable;
@property (nonatomic, retain) NSDate *originalDate;
@property (nonatomic) int rampType;
@property (nonatomic, retain) CLLocation *rawLocation;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } rawShiftedCoordinate;
@property (nonatomic) unsigned int roadLineType;
@property (nonatomic, retain) GEORoadMatch *roadMatch;
@property (nonatomic, copy) NSString *roadName;
@property (nonatomic, retain) GEORouteMatch *routeMatch;
@property (nonatomic, copy) NSString *shieldText;
@property (nonatomic) long long shieldType;
@property (nonatomic) unsigned long long speedLimit;
@property (nonatomic) bool speedLimitIsMPH;
@property (nonatomic) long long speedLimitShieldType;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) unsigned long long stepIndex;

- (void).cxx_destruct;
- (int)_nav_source;
- (id)_navigation_detailedMatchInfo;
- (bool)_navigation_hasValidCourse;
- (bool)_navigation_isStale;
- (struct CLLocationCoordinate2D { double x1; double x2; })_navigation_rawShiftedCoordinate;
- (id)_navigation_routeMatch;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned long long x_1_1_3; unsigned long long x_1_1_4; unsigned long long x_1_1_5; unsigned long long x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; bool x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; unsigned long long x_1_1_12; id x_1_1_13; int x_1_1_14; } x1; unsigned long long x2; unsigned long long x3; int x4; int x5; int x6; unsigned long long x7; unsigned long long x8; union { struct { struct { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_9_1_1; struct { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; bool x13; unsigned char x14; bool x15; bool x16; unsigned char x17; bool x18; unsigned char x19; struct _NSRange { unsigned long long x_20_1_1; unsigned long long x_20_1_2; } x20; bool x21; unsigned int x22; }*)_roadFeature;
- (id)description;
- (id)detailedMatchInfo;
- (id)expirationDate;
- (id)initWithClientLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; })arg1;
- (id)initWithGEOLocation:(id)arg1;
- (id)initWithLocationDetails:(id)arg1;
- (id)initWithLocationDetails:(id)arg1 route:(id)arg2;
- (id)initWithRawLocation:(id)arg1;
- (id)initWithRawLocation:(id)arg1 useMatchLocation:(bool)arg2;
- (id)initWithRoadMatch:(id)arg1 rawLocation:(id)arg2 useMatchLocation:(bool)arg3;
- (id)initWithRouteMatch:(id)arg1 rawLocation:(id)arg2 useMatchLocation:(bool)arg3;
- (bool)isDirectional;
- (bool)isLeeched;
- (bool)isProjected;
- (bool)locationUnreliable;
- (id)matchInfo;
- (id)originalDate;
- (id)propagatedLocationForTimeInterval:(double)arg1 shouldProjectAlongRoute:(bool)arg2;
- (int)rampType;
- (id)rawLocation;
- (struct CLLocationCoordinate2D { double x1; double x2; })rawShiftedCoordinate;
- (unsigned int)roadLineType;
- (id)roadMatch;
- (id)roadName;
- (id)routeMatch;
- (void)setDetailedMatchInfo:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIsDirectional:(bool)arg1;
- (void)setIsLeeched:(bool)arg1;
- (void)setLocationUnreliable:(bool)arg1;
- (void)setOriginalDate:(id)arg1;
- (void)setRampType:(int)arg1;
- (void)setRawLocation:(id)arg1;
- (void)setRawShiftedCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setRoadLineType:(unsigned int)arg1;
- (void)setRoadMatch:(id)arg1;
- (void)setRoadName:(id)arg1;
- (void)setRouteMatch:(id)arg1;
- (void)setShieldText:(id)arg1;
- (void)setShieldType:(long long)arg1;
- (void)setSpeedLimit:(unsigned long long)arg1;
- (void)setSpeedLimitIsMPH:(bool)arg1;
- (void)setSpeedLimitShieldType:(long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (id)shieldText;
- (long long)shieldType;
- (unsigned long long)speedLimit;
- (bool)speedLimitIsMPH;
- (long long)speedLimitShieldType;
- (unsigned long long)state;
- (unsigned long long)stepIndex;

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
