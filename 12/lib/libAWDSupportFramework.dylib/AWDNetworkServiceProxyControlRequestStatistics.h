<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDNetworkServiceProxyControlRequestStatistics.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDNetworkServiceProxyControlRequestStatistics.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNetworkServiceProxyControlRequestStatistics : PBCodable <NSCopying> {
    struct { 
        unsigned int requestCount : 1; 
        unsigned int resultCertificateFailureCount : 1; 
        unsigned int resultConnectionResetCount : 1; 
        unsigned int resultNetworkUnavailableCount : 1; 
        unsigned int resultResponseTimeoutCount : 1; 
        unsigned int resultSendFailureCount : 1; 
        unsigned int resultServerUnreachableCount : 1; 
        unsigned int resultSuccessCount : 1; 
        unsigned int resultUnknownErrorCount : 1; 
        unsigned int timestamp : 1; 
        unsigned int interfaceType : 1; 
        unsigned int protocolType : 1; 
        unsigned int requestType : 1; 
    }  _has;
    int  _interfaceType;
    int  _protocolType;
    unsigned long long  _requestCount;
    int  _requestType;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _responseTimeBuckets;
    unsigned long long  _resultCertificateFailureCount;
    unsigned long long  _resultConnectionResetCount;
    unsigned long long  _resultNetworkUnavailableCount;
    unsigned long long  _resultResponseTimeoutCount;
    unsigned long long  _resultSendFailureCount;
    unsigned long long  _resultServerUnreachableCount;
    unsigned long long  _resultSuccessCount;
    unsigned long long  _resultUnknownErrorCount;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasInterfaceType;
@property (nonatomic) bool hasProtocolType;
@property (nonatomic) bool hasRequestCount;
@property (nonatomic) bool hasRequestType;
@property (nonatomic) bool hasResultCertificateFailureCount;
@property (nonatomic) bool hasResultConnectionResetCount;
@property (nonatomic) bool hasResultNetworkUnavailableCount;
@property (nonatomic) bool hasResultResponseTimeoutCount;
@property (nonatomic) bool hasResultSendFailureCount;
@property (nonatomic) bool hasResultServerUnreachableCount;
@property (nonatomic) bool hasResultSuccessCount;
@property (nonatomic) bool hasResultUnknownErrorCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int interfaceType;
@property (nonatomic) int protocolType;
@property (nonatomic) unsigned long long requestCount;
@property (nonatomic) int requestType;
@property (nonatomic, readonly) unsigned int*responseTimeBuckets;
@property (nonatomic, readonly) unsigned long long responseTimeBucketsCount;
@property (nonatomic) unsigned long long resultCertificateFailureCount;
@property (nonatomic) unsigned long long resultConnectionResetCount;
@property (nonatomic) unsigned long long resultNetworkUnavailableCount;
@property (nonatomic) unsigned long long resultResponseTimeoutCount;
@property (nonatomic) unsigned long long resultSendFailureCount;
@property (nonatomic) unsigned long long resultServerUnreachableCount;
@property (nonatomic) unsigned long long resultSuccessCount;
@property (nonatomic) unsigned long long resultUnknownErrorCount;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsInterfaceType:(id)arg1;
- (int)StringAsProtocolType:(id)arg1;
- (int)StringAsRequestType:(id)arg1;
- (void)addResponseTimeBuckets:(unsigned int)arg1;
- (void)clearResponseTimeBuckets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInterfaceType;
- (bool)hasProtocolType;
- (bool)hasRequestCount;
- (bool)hasRequestType;
- (bool)hasResultCertificateFailureCount;
- (bool)hasResultConnectionResetCount;
- (bool)hasResultNetworkUnavailableCount;
- (bool)hasResultResponseTimeoutCount;
- (bool)hasResultSendFailureCount;
- (bool)hasResultServerUnreachableCount;
- (bool)hasResultSuccessCount;
- (bool)hasResultUnknownErrorCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (int)interfaceType;
- (id)interfaceTypeAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)protocolType;
- (id)protocolTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)requestCount;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (unsigned int*)responseTimeBuckets;
- (unsigned int)responseTimeBucketsAtIndex:(unsigned long long)arg1;
- (unsigned long long)responseTimeBucketsCount;
- (unsigned long long)resultCertificateFailureCount;
- (unsigned long long)resultConnectionResetCount;
- (unsigned long long)resultNetworkUnavailableCount;
- (unsigned long long)resultResponseTimeoutCount;
- (unsigned long long)resultSendFailureCount;
- (unsigned long long)resultServerUnreachableCount;
- (unsigned long long)resultSuccessCount;
- (unsigned long long)resultUnknownErrorCount;
- (void)setHasInterfaceType:(bool)arg1;
- (void)setHasProtocolType:(bool)arg1;
- (void)setHasRequestCount:(bool)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setHasResultCertificateFailureCount:(bool)arg1;
- (void)setHasResultConnectionResetCount:(bool)arg1;
- (void)setHasResultNetworkUnavailableCount:(bool)arg1;
- (void)setHasResultResponseTimeoutCount:(bool)arg1;
- (void)setHasResultSendFailureCount:(bool)arg1;
- (void)setHasResultServerUnreachableCount:(bool)arg1;
- (void)setHasResultSuccessCount:(bool)arg1;
- (void)setHasResultUnknownErrorCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInterfaceType:(int)arg1;
- (void)setProtocolType:(int)arg1;
- (void)setRequestCount:(unsigned long long)arg1;
- (void)setRequestType:(int)arg1;
- (void)setResponseTimeBuckets:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setResultCertificateFailureCount:(unsigned long long)arg1;
- (void)setResultConnectionResetCount:(unsigned long long)arg1;
- (void)setResultNetworkUnavailableCount:(unsigned long long)arg1;
- (void)setResultResponseTimeoutCount:(unsigned long long)arg1;
- (void)setResultSendFailureCount:(unsigned long long)arg1;
- (void)setResultServerUnreachableCount:(unsigned long long)arg1;
- (void)setResultSuccessCount:(unsigned long long)arg1;
- (void)setResultUnknownErrorCount:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
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