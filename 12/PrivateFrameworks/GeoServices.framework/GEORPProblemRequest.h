<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GEORPProblemRequest.h</title>
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

/PrivateFrameworks/GeoServices.framework/GEORPProblemRequest.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices (1364.36.4.19.8)
 */

@interface GEORPProblemRequest : PBRequest <NSCopying> {
    GEOPDAnalyticMetadata * _analyticMetadata;
    GEORPClientCapabilities * _clientCapabilities;
    GEOPDClientMetadata * _clientMetadata;
    NSData * _devicePushToken;
    NSString * _inputLanguage;
    GEORPProblem * _problem;
    NSString * _problemUuid;
    GEORPUserCredentials * _userCredentials;
    NSString * _userEmail;
}

@property (nonatomic, retain) GEOPDAnalyticMetadata *analyticMetadata;
@property (nonatomic, retain) GEORPClientCapabilities *clientCapabilities;
@property (nonatomic, retain) GEOPDClientMetadata *clientMetadata;
@property (nonatomic, retain) NSData *devicePushToken;
@property (nonatomic, readonly) bool hasAnalyticMetadata;
@property (nonatomic, readonly) bool hasClientCapabilities;
@property (nonatomic, readonly) bool hasClientMetadata;
@property (nonatomic, readonly) bool hasDevicePushToken;
@property (nonatomic, readonly) bool hasInputLanguage;
@property (nonatomic, readonly) bool hasProblem;
@property (nonatomic, readonly) bool hasProblemUuid;
@property (nonatomic, readonly) bool hasUserCredentials;
@property (nonatomic, readonly) bool hasUserEmail;
@property (nonatomic, retain) NSString *inputLanguage;
@property (nonatomic, retain) GEORPProblem *problem;
@property (nonatomic, retain) NSString *problemUuid;
@property (nonatomic, retain) GEORPUserCredentials *userCredentials;
@property (nonatomic, retain) NSString *userEmail;

- (void).cxx_destruct;
- (id)analyticMetadata;
- (id)clientCapabilities;
- (id)clientMetadata;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)devicePushToken;
- (id)dictionaryRepresentation;
- (bool)hasAnalyticMetadata;
- (bool)hasClientCapabilities;
- (bool)hasClientMetadata;
- (bool)hasDevicePushToken;
- (bool)hasInputLanguage;
- (bool)hasProblem;
- (bool)hasProblemUuid;
- (bool)hasUserCredentials;
- (bool)hasUserEmail;
- (unsigned long long)hash;
- (id)initWithProblem:(id)arg1 userCredentials:(id)arg2 pushToken:(id)arg3 allowContactBackAtEmailAddress:(id)arg4 traits:(id)arg5;
- (id)inputLanguage;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)problem;
- (id)problemUuid;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAnalyticMetadata:(id)arg1;
- (void)setClientCapabilities:(id)arg1;
- (void)setClientMetadata:(id)arg1;
- (void)setDevicePushToken:(id)arg1;
- (void)setInputLanguage:(id)arg1;
- (void)setProblem:(id)arg1;
- (void)setProblemUuid:(id)arg1;
- (void)setUserCredentials:(id)arg1;
- (void)setUserEmail:(id)arg1;
- (id)userCredentials;
- (id)userEmail;
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
