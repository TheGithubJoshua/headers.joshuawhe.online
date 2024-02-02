<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>C2MPNetworkEvent.h</title>
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

/PrivateFrameworks/C2.framework/C2MPNetworkEvent.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/C2.framework/C2 (438.212)
 */

@interface C2MPNetworkEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int networkRequestBodyBytesSent : 1; 
        unsigned int networkResponseBodyBytesReceived : 1; 
        unsigned int networkStatusCode : 1; 
        unsigned int reportFrequency : 1; 
        unsigned int reportFrequencyBase : 1; 
        unsigned int timestampC2Init : 1; 
        unsigned int timestampC2Now : 1; 
        unsigned int timestampC2Start : 1; 
        unsigned int timestampDnsEnd : 1; 
        unsigned int timestampDnsStart : 1; 
        unsigned int timestampRequestEnd : 1; 
        unsigned int timestampRequestStart : 1; 
        unsigned int timestampResponseEnd : 1; 
        unsigned int timestampResponseStart : 1; 
        unsigned int timestampSslStart : 1; 
        unsigned int timestampTcpEnd : 1; 
        unsigned int timestampTcpStart : 1; 
        unsigned int triggers : 1; 
        unsigned int networkPreviousAttemptCount : 1; 
        unsigned int networkRequestHeaderSize : 1; 
        unsigned int networkResponseHeaderSize : 1; 
        unsigned int optionsTimeoutIntervalForRequest : 1; 
        unsigned int optionsTimeoutIntervalForResource : 1; 
        unsigned int networkConnectionReused : 1; 
        unsigned int optionsAllowExpensiveAccess : 1; 
        unsigned int optionsAllowPowerNapScheduling : 1; 
        unsigned int optionsAppleIdContext : 1; 
        unsigned int optionsOutOfProcess : 1; 
        unsigned int optionsOutOfProcessForceDiscretionary : 1; 
        unsigned int optionsTlsPinningRequired : 1; 
    }  _has;
    bool  _networkConnectionReused;
    NSString * _networkConnectionUuid;
    C2MPError * _networkFatalError;
    NSString * _networkHostname;
    NSString * _networkInterfaceIdentifier;
    unsigned int  _networkPreviousAttemptCount;
    NSString * _networkProtocolName;
    NSString * _networkRemoteAddresssAndPort;
    unsigned long long  _networkRequestBodyBytesSent;
    unsigned int  _networkRequestHeaderSize;
    NSString * _networkRequestUri;
    unsigned long long  _networkResponseBodyBytesReceived;
    unsigned int  _networkResponseHeaderSize;
    unsigned long long  _networkStatusCode;
    NSString * _networkTaskDescription;
    bool  _optionsAllowExpensiveAccess;
    bool  _optionsAllowPowerNapScheduling;
    bool  _optionsAppleIdContext;
    bool  _optionsOutOfProcess;
    bool  _optionsOutOfProcessForceDiscretionary;
    NSString * _optionsQualityOfService;
    NSString * _optionsSourceApplicationBundleIdentifier;
    NSString * _optionsSourceApplicationSecondaryIdentifier;
    unsigned int  _optionsTimeoutIntervalForRequest;
    unsigned int  _optionsTimeoutIntervalForResource;
    bool  _optionsTlsPinningRequired;
    unsigned long long  _reportFrequency;
    unsigned long long  _reportFrequencyBase;
    unsigned long long  _timestampC2Init;
    unsigned long long  _timestampC2Now;
    unsigned long long  _timestampC2Start;
    unsigned long long  _timestampDnsEnd;
    unsigned long long  _timestampDnsStart;
    unsigned long long  _timestampRequestEnd;
    unsigned long long  _timestampRequestStart;
    unsigned long long  _timestampResponseEnd;
    unsigned long long  _timestampResponseStart;
    unsigned long long  _timestampSslStart;
    unsigned long long  _timestampTcpEnd;
    unsigned long long  _timestampTcpStart;
    unsigned long long  _triggers;
}

@property (nonatomic) bool hasNetworkConnectionReused;
@property (nonatomic, readonly) bool hasNetworkConnectionUuid;
@property (nonatomic, readonly) bool hasNetworkFatalError;
@property (nonatomic, readonly) bool hasNetworkHostname;
@property (nonatomic, readonly) bool hasNetworkInterfaceIdentifier;
@property (nonatomic) bool hasNetworkPreviousAttemptCount;
@property (nonatomic, readonly) bool hasNetworkProtocolName;
@property (nonatomic, readonly) bool hasNetworkRemoteAddresssAndPort;
@property (nonatomic) bool hasNetworkRequestBodyBytesSent;
@property (nonatomic) bool hasNetworkRequestHeaderSize;
@property (nonatomic, readonly) bool hasNetworkRequestUri;
@property (nonatomic) bool hasNetworkResponseBodyBytesReceived;
@property (nonatomic) bool hasNetworkResponseHeaderSize;
@property (nonatomic) bool hasNetworkStatusCode;
@property (nonatomic, readonly) bool hasNetworkTaskDescription;
@property (nonatomic) bool hasOptionsAllowExpensiveAccess;
@property (nonatomic) bool hasOptionsAllowPowerNapScheduling;
@property (nonatomic) bool hasOptionsAppleIdContext;
@property (nonatomic) bool hasOptionsOutOfProcess;
@property (nonatomic) bool hasOptionsOutOfProcessForceDiscretionary;
@property (nonatomic, readonly) bool hasOptionsQualityOfService;
@property (nonatomic, readonly) bool hasOptionsSourceApplicationBundleIdentifier;
@property (nonatomic, readonly) bool hasOptionsSourceApplicationSecondaryIdentifier;
@property (nonatomic) bool hasOptionsTimeoutIntervalForRequest;
@property (nonatomic) bool hasOptionsTimeoutIntervalForResource;
@property (nonatomic) bool hasOptionsTlsPinningRequired;
@property (nonatomic) bool hasReportFrequency;
@property (nonatomic) bool hasReportFrequencyBase;
@property (nonatomic) bool hasTimestampC2Init;
@property (nonatomic) bool hasTimestampC2Now;
@property (nonatomic) bool hasTimestampC2Start;
@property (nonatomic) bool hasTimestampDnsEnd;
@property (nonatomic) bool hasTimestampDnsStart;
@property (nonatomic) bool hasTimestampRequestEnd;
@property (nonatomic) bool hasTimestampRequestStart;
@property (nonatomic) bool hasTimestampResponseEnd;
@property (nonatomic) bool hasTimestampResponseStart;
@property (nonatomic) bool hasTimestampSslStart;
@property (nonatomic) bool hasTimestampTcpEnd;
@property (nonatomic) bool hasTimestampTcpStart;
@property (nonatomic) bool hasTriggers;
@property (nonatomic) bool networkConnectionReused;
@property (nonatomic, retain) NSString *networkConnectionUuid;
@property (nonatomic, retain) C2MPError *networkFatalError;
@property (nonatomic, retain) NSString *networkHostname;
@property (nonatomic, retain) NSString *networkInterfaceIdentifier;
@property (nonatomic) unsigned int networkPreviousAttemptCount;
@property (nonatomic, retain) NSString *networkProtocolName;
@property (nonatomic, retain) NSString *networkRemoteAddresssAndPort;
@property (nonatomic) unsigned long long networkRequestBodyBytesSent;
@property (nonatomic) unsigned int networkRequestHeaderSize;
@property (nonatomic, retain) NSString *networkRequestUri;
@property (nonatomic) unsigned long long networkResponseBodyBytesReceived;
@property (nonatomic) unsigned int networkResponseHeaderSize;
@property (nonatomic) unsigned long long networkStatusCode;
@property (nonatomic, retain) NSString *networkTaskDescription;
@property (nonatomic) bool optionsAllowExpensiveAccess;
@property (nonatomic) bool optionsAllowPowerNapScheduling;
@property (nonatomic) bool optionsAppleIdContext;
@property (nonatomic) bool optionsOutOfProcess;
@property (nonatomic) bool optionsOutOfProcessForceDiscretionary;
@property (nonatomic, retain) NSString *optionsQualityOfService;
@property (nonatomic, retain) NSString *optionsSourceApplicationBundleIdentifier;
@property (nonatomic, retain) NSString *optionsSourceApplicationSecondaryIdentifier;
@property (nonatomic) unsigned int optionsTimeoutIntervalForRequest;
@property (nonatomic) unsigned int optionsTimeoutIntervalForResource;
@property (nonatomic) bool optionsTlsPinningRequired;
@property (nonatomic) unsigned long long reportFrequency;
@property (nonatomic) unsigned long long reportFrequencyBase;
@property (nonatomic) unsigned long long timestampC2Init;
@property (nonatomic) unsigned long long timestampC2Now;
@property (nonatomic) unsigned long long timestampC2Start;
@property (nonatomic) unsigned long long timestampDnsEnd;
@property (nonatomic) unsigned long long timestampDnsStart;
@property (nonatomic) unsigned long long timestampRequestEnd;
@property (nonatomic) unsigned long long timestampRequestStart;
@property (nonatomic) unsigned long long timestampResponseEnd;
@property (nonatomic) unsigned long long timestampResponseStart;
@property (nonatomic) unsigned long long timestampSslStart;
@property (nonatomic) unsigned long long timestampTcpEnd;
@property (nonatomic) unsigned long long timestampTcpStart;
@property (nonatomic) unsigned long long triggers;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNetworkConnectionReused;
- (bool)hasNetworkConnectionUuid;
- (bool)hasNetworkFatalError;
- (bool)hasNetworkHostname;
- (bool)hasNetworkInterfaceIdentifier;
- (bool)hasNetworkPreviousAttemptCount;
- (bool)hasNetworkProtocolName;
- (bool)hasNetworkRemoteAddresssAndPort;
- (bool)hasNetworkRequestBodyBytesSent;
- (bool)hasNetworkRequestHeaderSize;
- (bool)hasNetworkRequestUri;
- (bool)hasNetworkResponseBodyBytesReceived;
- (bool)hasNetworkResponseHeaderSize;
- (bool)hasNetworkStatusCode;
- (bool)hasNetworkTaskDescription;
- (bool)hasOptionsAllowExpensiveAccess;
- (bool)hasOptionsAllowPowerNapScheduling;
- (bool)hasOptionsAppleIdContext;
- (bool)hasOptionsOutOfProcess;
- (bool)hasOptionsOutOfProcessForceDiscretionary;
- (bool)hasOptionsQualityOfService;
- (bool)hasOptionsSourceApplicationBundleIdentifier;
- (bool)hasOptionsSourceApplicationSecondaryIdentifier;
- (bool)hasOptionsTimeoutIntervalForRequest;
- (bool)hasOptionsTimeoutIntervalForResource;
- (bool)hasOptionsTlsPinningRequired;
- (bool)hasReportFrequency;
- (bool)hasReportFrequencyBase;
- (bool)hasTimestampC2Init;
- (bool)hasTimestampC2Now;
- (bool)hasTimestampC2Start;
- (bool)hasTimestampDnsEnd;
- (bool)hasTimestampDnsStart;
- (bool)hasTimestampRequestEnd;
- (bool)hasTimestampRequestStart;
- (bool)hasTimestampResponseEnd;
- (bool)hasTimestampResponseStart;
- (bool)hasTimestampSslStart;
- (bool)hasTimestampTcpEnd;
- (bool)hasTimestampTcpStart;
- (bool)hasTriggers;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)networkConnectionReused;
- (id)networkConnectionUuid;
- (id)networkFatalError;
- (id)networkHostname;
- (id)networkInterfaceIdentifier;
- (unsigned int)networkPreviousAttemptCount;
- (id)networkProtocolName;
- (id)networkRemoteAddresssAndPort;
- (unsigned long long)networkRequestBodyBytesSent;
- (unsigned int)networkRequestHeaderSize;
- (id)networkRequestUri;
- (unsigned long long)networkResponseBodyBytesReceived;
- (unsigned int)networkResponseHeaderSize;
- (unsigned long long)networkStatusCode;
- (id)networkTaskDescription;
- (bool)optionsAllowExpensiveAccess;
- (bool)optionsAllowPowerNapScheduling;
- (bool)optionsAppleIdContext;
- (bool)optionsOutOfProcess;
- (bool)optionsOutOfProcessForceDiscretionary;
- (id)optionsQualityOfService;
- (id)optionsSourceApplicationBundleIdentifier;
- (id)optionsSourceApplicationSecondaryIdentifier;
- (unsigned int)optionsTimeoutIntervalForRequest;
- (unsigned int)optionsTimeoutIntervalForResource;
- (bool)optionsTlsPinningRequired;
- (bool)readFrom:(id)arg1;
- (unsigned long long)reportFrequency;
- (unsigned long long)reportFrequencyBase;
- (void)setHasNetworkConnectionReused:(bool)arg1;
- (void)setHasNetworkPreviousAttemptCount:(bool)arg1;
- (void)setHasNetworkRequestBodyBytesSent:(bool)arg1;
- (void)setHasNetworkRequestHeaderSize:(bool)arg1;
- (void)setHasNetworkResponseBodyBytesReceived:(bool)arg1;
- (void)setHasNetworkResponseHeaderSize:(bool)arg1;
- (void)setHasNetworkStatusCode:(bool)arg1;
- (void)setHasOptionsAllowExpensiveAccess:(bool)arg1;
- (void)setHasOptionsAllowPowerNapScheduling:(bool)arg1;
- (void)setHasOptionsAppleIdContext:(bool)arg1;
- (void)setHasOptionsOutOfProcess:(bool)arg1;
- (void)setHasOptionsOutOfProcessForceDiscretionary:(bool)arg1;
- (void)setHasOptionsTimeoutIntervalForRequest:(bool)arg1;
- (void)setHasOptionsTimeoutIntervalForResource:(bool)arg1;
- (void)setHasOptionsTlsPinningRequired:(bool)arg1;
- (void)setHasReportFrequency:(bool)arg1;
- (void)setHasReportFrequencyBase:(bool)arg1;
- (void)setHasTimestampC2Init:(bool)arg1;
- (void)setHasTimestampC2Now:(bool)arg1;
- (void)setHasTimestampC2Start:(bool)arg1;
- (void)setHasTimestampDnsEnd:(bool)arg1;
- (void)setHasTimestampDnsStart:(bool)arg1;
- (void)setHasTimestampRequestEnd:(bool)arg1;
- (void)setHasTimestampRequestStart:(bool)arg1;
- (void)setHasTimestampResponseEnd:(bool)arg1;
- (void)setHasTimestampResponseStart:(bool)arg1;
- (void)setHasTimestampSslStart:(bool)arg1;
- (void)setHasTimestampTcpEnd:(bool)arg1;
- (void)setHasTimestampTcpStart:(bool)arg1;
- (void)setHasTriggers:(bool)arg1;
- (void)setNetworkConnectionReused:(bool)arg1;
- (void)setNetworkConnectionUuid:(id)arg1;
- (void)setNetworkFatalError:(id)arg1;
- (void)setNetworkHostname:(id)arg1;
- (void)setNetworkInterfaceIdentifier:(id)arg1;
- (void)setNetworkPreviousAttemptCount:(unsigned int)arg1;
- (void)setNetworkProtocolName:(id)arg1;
- (void)setNetworkRemoteAddresssAndPort:(id)arg1;
- (void)setNetworkRequestBodyBytesSent:(unsigned long long)arg1;
- (void)setNetworkRequestHeaderSize:(unsigned int)arg1;
- (void)setNetworkRequestUri:(id)arg1;
- (void)setNetworkResponseBodyBytesReceived:(unsigned long long)arg1;
- (void)setNetworkResponseHeaderSize:(unsigned int)arg1;
- (void)setNetworkStatusCode:(unsigned long long)arg1;
- (void)setNetworkTaskDescription:(id)arg1;
- (void)setOptionsAllowExpensiveAccess:(bool)arg1;
- (void)setOptionsAllowPowerNapScheduling:(bool)arg1;
- (void)setOptionsAppleIdContext:(bool)arg1;
- (void)setOptionsOutOfProcess:(bool)arg1;
- (void)setOptionsOutOfProcessForceDiscretionary:(bool)arg1;
- (void)setOptionsQualityOfService:(id)arg1;
- (void)setOptionsSourceApplicationBundleIdentifier:(id)arg1;
- (void)setOptionsSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setOptionsTimeoutIntervalForRequest:(unsigned int)arg1;
- (void)setOptionsTimeoutIntervalForResource:(unsigned int)arg1;
- (void)setOptionsTlsPinningRequired:(bool)arg1;
- (void)setReportFrequency:(unsigned long long)arg1;
- (void)setReportFrequencyBase:(unsigned long long)arg1;
- (void)setTimestampC2Init:(unsigned long long)arg1;
- (void)setTimestampC2Now:(unsigned long long)arg1;
- (void)setTimestampC2Start:(unsigned long long)arg1;
- (void)setTimestampDnsEnd:(unsigned long long)arg1;
- (void)setTimestampDnsStart:(unsigned long long)arg1;
- (void)setTimestampRequestEnd:(unsigned long long)arg1;
- (void)setTimestampRequestStart:(unsigned long long)arg1;
- (void)setTimestampResponseEnd:(unsigned long long)arg1;
- (void)setTimestampResponseStart:(unsigned long long)arg1;
- (void)setTimestampSslStart:(unsigned long long)arg1;
- (void)setTimestampTcpEnd:(unsigned long long)arg1;
- (void)setTimestampTcpStart:(unsigned long long)arg1;
- (void)setTriggers:(unsigned long long)arg1;
- (unsigned long long)timestampC2Init;
- (unsigned long long)timestampC2Now;
- (unsigned long long)timestampC2Start;
- (unsigned long long)timestampDnsEnd;
- (unsigned long long)timestampDnsStart;
- (unsigned long long)timestampRequestEnd;
- (unsigned long long)timestampRequestStart;
- (unsigned long long)timestampResponseEnd;
- (unsigned long long)timestampResponseStart;
- (unsigned long long)timestampSslStart;
- (unsigned long long)timestampTcpEnd;
- (unsigned long long)timestampTcpStart;
- (unsigned long long)triggers;
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