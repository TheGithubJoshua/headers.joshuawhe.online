<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEORPProblemStatusRequest.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEORPProblemStatusRequest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEORPProblemStatusRequest : PBRequest <NSCopying> {
    GEOABSecondPartyPlaceRequestClientMetaData * _abAssignmentMetadata;
    GEOPDAnalyticMetadata * _analyticMetadata;
    GEORPClientCapabilities * _clientCapabilities;
    NSMutableArray * _problemIds;
    GEOServicesState * _servicesState;
    NSString * _statusNotificationId;
    GEORPUserCredentials * _userCredentials;
}

@property (nonatomic, retain) GEOABSecondPartyPlaceRequestClientMetaData *abAssignmentMetadata;
@property (nonatomic, retain) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, retain) GEORPClientCapabilities *clientCapabilities;
@property (nonatomic, readonly) bool hasAbAssignmentMetadata;
@property (nonatomic, readonly) bool hasAnalyticMetadata;
@property (nonatomic, readonly) bool hasClientCapabilities;
@property (nonatomic, readonly) bool hasServicesState;
@property (nonatomic, readonly) bool hasStatusNotificationId;
@property (nonatomic, readonly) bool hasUserCredentials;
@property (nonatomic, retain) NSMutableArray *problemIds;
@property (nonatomic, retain) GEOServicesState *servicesState;
@property (nonatomic, retain) NSString *statusNotificationId;
@property (nonatomic, retain) GEORPUserCredentials *userCredentials;

+ (Class)problemIdType;

- (void).cxx_destruct;
- (id)abAssignmentMetadata;
- (void)addProblemId:(id)arg1;
- (id)analyticMetadata;
- (void)clearProblemIds;
- (id)clientCapabilities;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbAssignmentMetadata;
- (bool)hasAnalyticMetadata;
- (bool)hasClientCapabilities;
- (bool)hasServicesState;
- (bool)hasStatusNotificationId;
- (bool)hasUserCredentials;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)populateAnalyticsMetadata;
- (id)problemIdAtIndex:(unsigned long long)arg1;
- (id)problemIds;
- (unsigned long long)problemIdsCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)servicesState;
- (void)setAbAssignmentMetadata:(id)arg1;
- (void)setAnalyticMetadata:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setProblemIds:(id)arg1;
- (void)setServicesState:(id)arg1;
- (void)setStatusNotificationId:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (id)statusNotificationId;
- (id)userCredentials;
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