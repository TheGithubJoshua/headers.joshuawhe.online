<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOTrafficRerouteFeedback.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOTrafficRerouteFeedback.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOTrafficRerouteFeedback : PBCodable <NSCopying> {
    int  _actionType;
    int  _alertType;
    bool  _backgrounded;
    struct { 
        unsigned int actionType : 1; 
        unsigned int alertType : 1; 
        unsigned int oldRouteHistoricTravelTime : 1; 
        unsigned int oldRouteTravelTime : 1; 
        unsigned int rerouteType : 1; 
        unsigned int reroutedRouteHistoricTravelTime : 1; 
        unsigned int reroutedRouteTravelTime : 1; 
        unsigned int backgrounded : 1; 
    }  _has;
    unsigned int  _oldRouteHistoricTravelTime;
    NSData * _oldRouteID;
    NSMutableArray * _oldRouteIncidents;
    unsigned int  _oldRouteTravelTime;
    int  _rerouteType;
    unsigned int  _reroutedRouteHistoricTravelTime;
    NSData * _reroutedRouteID;
    unsigned int  _reroutedRouteTravelTime;
    NSData * _responseId;
}

@property (nonatomic) int actionType;
@property (nonatomic) int alertType;
@property (nonatomic) bool backgrounded;
@property (nonatomic) bool hasActionType;
@property (nonatomic) bool hasAlertType;
@property (nonatomic) bool hasBackgrounded;
@property (nonatomic) bool hasOldRouteHistoricTravelTime;
@property (nonatomic, readonly) bool hasOldRouteID;
@property (nonatomic) bool hasOldRouteTravelTime;
@property (nonatomic) bool hasRerouteType;
@property (nonatomic) bool hasReroutedRouteHistoricTravelTime;
@property (nonatomic, readonly) bool hasReroutedRouteID;
@property (nonatomic) bool hasReroutedRouteTravelTime;
@property (nonatomic, readonly) bool hasResponseId;
@property (nonatomic) unsigned int oldRouteHistoricTravelTime;
@property (nonatomic, retain) NSData *oldRouteID;
@property (nonatomic, retain) NSMutableArray *oldRouteIncidents;
@property (nonatomic) unsigned int oldRouteTravelTime;
@property (nonatomic) int rerouteType;
@property (nonatomic) unsigned int reroutedRouteHistoricTravelTime;
@property (nonatomic, retain) NSData *reroutedRouteID;
@property (nonatomic) unsigned int reroutedRouteTravelTime;
@property (nonatomic, retain) NSData *responseId;

+ (Class)oldRouteIncidentsType;

- (void).cxx_destruct;
- (int)StringAsActionType:(id)arg1;
- (int)StringAsAlertType:(id)arg1;
- (int)StringAsRerouteType:(id)arg1;
- (int)actionType;
- (id)actionTypeAsString:(int)arg1;
- (void)addOldRouteIncidents:(id)arg1;
- (int)alertType;
- (id)alertTypeAsString:(int)arg1;
- (bool)backgrounded;
- (void)clearOldRouteIncidents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionType;
- (bool)hasAlertType;
- (bool)hasBackgrounded;
- (bool)hasOldRouteHistoricTravelTime;
- (bool)hasOldRouteID;
- (bool)hasOldRouteTravelTime;
- (bool)hasRerouteType;
- (bool)hasReroutedRouteHistoricTravelTime;
- (bool)hasReroutedRouteID;
- (bool)hasReroutedRouteTravelTime;
- (bool)hasResponseId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)oldRouteHistoricTravelTime;
- (id)oldRouteID;
- (id)oldRouteIncidents;
- (id)oldRouteIncidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)oldRouteIncidentsCount;
- (unsigned int)oldRouteTravelTime;
- (bool)readFrom:(id)arg1;
- (int)rerouteType;
- (id)rerouteTypeAsString:(int)arg1;
- (unsigned int)reroutedRouteHistoricTravelTime;
- (id)reroutedRouteID;
- (unsigned int)reroutedRouteTravelTime;
- (id)responseId;
- (void)setActionType:(int)arg1;
- (void)setAlertType:(int)arg1;
- (void)setBackgrounded:(bool)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasAlertType:(bool)arg1;
- (void)setHasBackgrounded:(bool)arg1;
- (void)setHasOldRouteHistoricTravelTime:(bool)arg1;
- (void)setHasOldRouteTravelTime:(bool)arg1;
- (void)setHasRerouteType:(bool)arg1;
- (void)setHasReroutedRouteHistoricTravelTime:(bool)arg1;
- (void)setHasReroutedRouteTravelTime:(bool)arg1;
- (void)setOldRouteHistoricTravelTime:(unsigned int)arg1;
- (void)setOldRouteID:(id)arg1;
- (void)setOldRouteIncidents:(id)arg1;
- (void)setOldRouteTravelTime:(unsigned int)arg1;
- (void)setRerouteType:(int)arg1;
- (void)setReroutedRouteHistoricTravelTime:(unsigned int)arg1;
- (void)setReroutedRouteID:(id)arg1;
- (void)setReroutedRouteTravelTime:(unsigned int)arg1;
- (void)setResponseId:(id)arg1;
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
