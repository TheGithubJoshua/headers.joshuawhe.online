<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEOPDAnalyticMetadata.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEOPDAnalyticMetadata.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEOPDAnalyticMetadata : PBCodable <NSCopying> {
    GEOAbAssignInfo * _abAssignInfo;
    NSString * _appIdentifier;
    NSString * _appMajorVersion;
    NSString * _appMinorVersion;
    NSString * _hardwareModel;
    struct { 
        unsigned int sessionId : 1; 
        unsigned int relativeTimestamp : 1; 
        unsigned int requestSource : 1; 
        unsigned int sequenceNumber : 1; 
        unsigned int isFromApi : 1; 
        unsigned int isInternalInstall : 1; 
        unsigned int isInternalTool : 1; 
    }  _has;
    bool  _isFromApi;
    bool  _isInternalInstall;
    bool  _isInternalTool;
    NSString * _loggedAbExperiment;
    NSString * _osVersion;
    NSString * _productName;
    double  _relativeTimestamp;
    int  _requestSource;
    GEOLocalTime * _requestTime;
    unsigned int  _sequenceNumber;
    NSMutableArray * _serviceTags;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionId;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOAbAssignInfo *abAssignInfo;
@property (nonatomic, retain) NSString *appIdentifier;
@property (nonatomic, retain) NSString *appMajorVersion;
@property (nonatomic, retain) NSString *appMinorVersion;
@property (nonatomic, retain) NSString *hardwareModel;
@property (nonatomic, readonly) bool hasAbAssignInfo;
@property (nonatomic, readonly) bool hasAppIdentifier;
@property (nonatomic, readonly) bool hasAppMajorVersion;
@property (nonatomic, readonly) bool hasAppMinorVersion;
@property (nonatomic, readonly) bool hasHardwareModel;
@property (nonatomic) bool hasIsFromApi;
@property (nonatomic) bool hasIsInternalInstall;
@property (nonatomic) bool hasIsInternalTool;
@property (nonatomic, readonly) bool hasLoggedAbExperiment;
@property (nonatomic, readonly) bool hasOsVersion;
@property (nonatomic, readonly) bool hasProductName;
@property (nonatomic) bool hasRelativeTimestamp;
@property (nonatomic) bool hasRequestSource;
@property (nonatomic, readonly) bool hasRequestTime;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic) bool hasSessionId;
@property (nonatomic) bool isFromApi;
@property (nonatomic) bool isInternalInstall;
@property (nonatomic) bool isInternalTool;
@property (nonatomic, retain) NSString *loggedAbExperiment;
@property (nonatomic, retain) NSString *osVersion;
@property (nonatomic, retain) NSString *productName;
@property (nonatomic) double relativeTimestamp;
@property (nonatomic) int requestSource;
@property (nonatomic, retain) GEOLocalTime *requestTime;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic, retain) NSMutableArray *serviceTags;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionId;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)serviceTagType;

- (void).cxx_destruct;
- (int)StringAsRequestSource:(id)arg1;
- (id)abAssignInfo;
- (void)addServiceTag:(id)arg1;
- (id)appIdentifier;
- (id)appMajorVersion;
- (id)appMinorVersion;
- (void)clearServiceTags;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)hardwareModel;
- (bool)hasAbAssignInfo;
- (bool)hasAppIdentifier;
- (bool)hasAppMajorVersion;
- (bool)hasAppMinorVersion;
- (bool)hasHardwareModel;
- (bool)hasIsFromApi;
- (bool)hasIsInternalInstall;
- (bool)hasIsInternalTool;
- (bool)hasLoggedAbExperiment;
- (bool)hasOsVersion;
- (bool)hasProductName;
- (bool)hasRelativeTimestamp;
- (bool)hasRequestSource;
- (bool)hasRequestTime;
- (bool)hasSequenceNumber;
- (bool)hasSessionId;
- (unsigned long long)hash;
- (id)initWithTraits:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFromApi;
- (bool)isInternalInstall;
- (bool)isInternalTool;
- (id)loggedAbExperiment;
- (void)mergeFrom:(id)arg1;
- (id)osVersion;
- (id)productName;
- (bool)readFrom:(id)arg1;
- (double)relativeTimestamp;
- (int)requestSource;
- (id)requestSourceAsString:(int)arg1;
- (id)requestTime;
- (unsigned int)sequenceNumber;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (id)serviceTags;
- (unsigned long long)serviceTagsCount;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setAbAssignInfo:(id)arg1;
- (void)setAppIdentifier:(id)arg1;
- (void)setAppMajorVersion:(id)arg1;
- (void)setAppMinorVersion:(id)arg1;
- (void)setHardwareModel:(id)arg1;
- (void)setHasIsFromApi:(bool)arg1;
- (void)setHasIsInternalInstall:(bool)arg1;
- (void)setHasIsInternalTool:(bool)arg1;
- (void)setHasRelativeTimestamp:(bool)arg1;
- (void)setHasRequestSource:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setIsFromApi:(bool)arg1;
- (void)setIsInternalInstall:(bool)arg1;
- (void)setIsInternalTool:(bool)arg1;
- (void)setLoggedAbExperiment:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setProductName:(id)arg1;
- (void)setRelativeTimestamp:(double)arg1;
- (void)setRequestSource:(int)arg1;
- (void)setRequestTime:(id)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setServiceTags:(id)arg1;
- (void)setSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (id)unknownFields;
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
