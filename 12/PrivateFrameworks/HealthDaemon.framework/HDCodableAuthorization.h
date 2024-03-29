<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDCodableAuthorization.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDCodableAuthorization.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDCodableAuthorization : PBCodable <NSCopying> {
    long long  _authorizationMode;
    long long  _authorizationRequest;
    long long  _authorizationStatus;
    struct { 
        unsigned int authorizationMode : 1; 
        unsigned int authorizationRequest : 1; 
        unsigned int authorizationStatus : 1; 
        unsigned int modificationDate : 1; 
        unsigned int modificationEpoch : 1; 
        unsigned int objectType : 1; 
    }  _has;
    double  _modificationDate;
    long long  _modificationEpoch;
    long long  _objectType;
}

@property (nonatomic) long long authorizationMode;
@property (nonatomic) long long authorizationRequest;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) bool hasAuthorizationMode;
@property (nonatomic) bool hasAuthorizationRequest;
@property (nonatomic) bool hasAuthorizationStatus;
@property (nonatomic) bool hasModificationDate;
@property (nonatomic) bool hasModificationEpoch;
@property (nonatomic) bool hasObjectType;
@property (nonatomic) double modificationDate;
@property (nonatomic) long long modificationEpoch;
@property (nonatomic) long long objectType;

- (long long)_authorizationMode;
- (long long)_authorizationRequest;
- (long long)_authorizationStatus;
- (long long)_dataTypeCode;
- (id)_modificationDate;
- (void)_setAuthorizationModeWithNumber:(id)arg1;
- (void)_setAuthorizationRequestWithNumber:(id)arg1;
- (void)_setAuthorizationStatusWithNumber:(id)arg1;
- (void)_setDataTypeCodeWithObjectType:(id)arg1;
- (void)_setModificationDate:(id)arg1;
- (long long)authorizationMode;
- (long long)authorizationRequest;
- (long long)authorizationStatus;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAuthorizationMode;
- (bool)hasAuthorizationRequest;
- (bool)hasAuthorizationStatus;
- (bool)hasModificationDate;
- (bool)hasModificationEpoch;
- (bool)hasObjectType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)modificationDate;
- (long long)modificationEpoch;
- (long long)objectType;
- (bool)readFrom:(id)arg1;
- (void)setAuthorizationMode:(long long)arg1;
- (void)setAuthorizationRequest:(long long)arg1;
- (void)setAuthorizationStatus:(long long)arg1;
- (void)setHasAuthorizationMode:(bool)arg1;
- (void)setHasAuthorizationRequest:(bool)arg1;
- (void)setHasAuthorizationStatus:(bool)arg1;
- (void)setHasModificationDate:(bool)arg1;
- (void)setHasModificationEpoch:(bool)arg1;
- (void)setHasObjectType:(bool)arg1;
- (void)setModificationDate:(double)arg1;
- (void)setModificationEpoch:(long long)arg1;
- (void)setObjectType:(long long)arg1;
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
