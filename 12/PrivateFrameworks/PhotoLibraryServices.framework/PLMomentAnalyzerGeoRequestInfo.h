<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PLMomentAnalyzerGeoRequestInfo.h</title>
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

/PrivateFrameworks/PhotoLibraryServices.framework/PLMomentAnalyzerGeoRequestInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices (1.0)
 */

@interface PLMomentAnalyzerGeoRequestInfo : NSObject {
    NSArray * _assetIds;
    NSArray * _extraAssetIds;
    NSArray * _extraLocations;
    unsigned long long  _failureCount;
    NSObject<NSCopying> * _momentId;
    NSString * _momentUuid;
    unsigned long long  _requestType;
    PLRevGeoLocationInfo * _revGeoLocationInfo;
    <GEOMapServiceTicket> * _reverseGeocodeRequest;
    unsigned long long  _signpostId;
}

@property (nonatomic, copy) NSArray *assetIds;
@property (nonatomic, copy) NSArray *extraAssetIds;
@property (getter=hasExtraData, nonatomic, readonly) bool extraData;
@property (nonatomic, copy) NSArray *extraLocations;
@property (nonatomic) unsigned long long failureCount;
@property (nonatomic, retain) NSObject<NSCopying> *momentId;
@property (nonatomic, copy) NSString *momentUuid;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic, retain) PLRevGeoLocationInfo *revGeoLocationInfo;
@property (nonatomic, retain) <GEOMapServiceTicket> *reverseGeocodeRequest;
@property (nonatomic) unsigned long long signpostId;

- (id)assetIds;
- (void)dealloc;
- (id)description;
- (id)extraAssetIds;
- (id)extraLocations;
- (unsigned long long)failureCount;
- (bool)hasExtraData;
- (unsigned long long)hash;
- (id)initWithRequestType:(unsigned long long)arg1 momentId:(id)arg2 momentUuid:(id)arg3 assetIds:(id)arg4 reverseGeocodeRequest:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)momentId;
- (id)momentUuid;
- (unsigned long long)requestType;
- (id)revGeoLocationInfo;
- (id)reverseGeocodeRequest;
- (void)setAssetIds:(id)arg1;
- (void)setExtraAssetIds:(id)arg1;
- (void)setExtraLocations:(id)arg1;
- (void)setFailureCount:(unsigned long long)arg1;
- (void)setMomentId:(id)arg1;
- (void)setMomentUuid:(id)arg1;
- (void)setRequestType:(unsigned long long)arg1;
- (void)setRevGeoLocationInfo:(id)arg1;
- (void)setReverseGeocodeRequest:(id)arg1;
- (void)setSignpostId:(unsigned long long)arg1;
- (unsigned long long)signpostId;

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
