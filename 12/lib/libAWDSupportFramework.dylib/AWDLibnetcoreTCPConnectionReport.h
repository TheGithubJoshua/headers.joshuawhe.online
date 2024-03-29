<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDLibnetcoreTCPConnectionReport.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDLibnetcoreTCPConnectionReport.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDLibnetcoreTCPConnectionReport : PBCodable <NSCopying> {
    AWDLibnetcoreCellularFallbackReport * _cellularFallbackReport;
    NSString * _clientIdentifier;
    NSMutableArray * _connectionAttemptStatisticsReports;
    AWDLibnetcoreConnectionStatisticsReport * _connectionStatisticsReport;
    bool  _delegated;
    struct { 
        unsigned int iPAddressAttemptCount : 1; 
        unsigned int timestamp : 1; 
        unsigned int reportReason : 1; 
        unsigned int delegated : 1; 
    }  _has;
    unsigned long long  _iPAddressAttemptCount;
    int  _reportReason;
    NSString * _sourceAppIdentifier;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) AWDLibnetcoreCellularFallbackReport *cellularFallbackReport;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) NSMutableArray *connectionAttemptStatisticsReports;
@property (nonatomic, retain) AWDLibnetcoreConnectionStatisticsReport *connectionStatisticsReport;
@property (nonatomic) bool delegated;
@property (nonatomic, readonly) bool hasCellularFallbackReport;
@property (nonatomic, readonly) bool hasClientIdentifier;
@property (nonatomic, readonly) bool hasConnectionStatisticsReport;
@property (nonatomic) bool hasDelegated;
@property (nonatomic) bool hasIPAddressAttemptCount;
@property (nonatomic) bool hasReportReason;
@property (nonatomic, readonly) bool hasSourceAppIdentifier;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long iPAddressAttemptCount;
@property (nonatomic) int reportReason;
@property (nonatomic, retain) NSString *sourceAppIdentifier;
@property (nonatomic) unsigned long long timestamp;

+ (Class)connectionAttemptStatisticsReportsType;

- (int)StringAsReportReason:(id)arg1;
- (void)addConnectionAttemptStatisticsReports:(id)arg1;
- (id)cellularFallbackReport;
- (void)clearConnectionAttemptStatisticsReports;
- (id)clientIdentifier;
- (id)connectionAttemptStatisticsReports;
- (id)connectionAttemptStatisticsReportsAtIndex:(unsigned long long)arg1;
- (unsigned long long)connectionAttemptStatisticsReportsCount;
- (id)connectionStatisticsReport;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)delegated;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCellularFallbackReport;
- (bool)hasClientIdentifier;
- (bool)hasConnectionStatisticsReport;
- (bool)hasDelegated;
- (bool)hasIPAddressAttemptCount;
- (bool)hasReportReason;
- (bool)hasSourceAppIdentifier;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned long long)iPAddressAttemptCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reportReason;
- (id)reportReasonAsString:(int)arg1;
- (void)setCellularFallbackReport:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setConnectionAttemptStatisticsReports:(id)arg1;
- (void)setConnectionStatisticsReport:(id)arg1;
- (void)setDelegated:(bool)arg1;
- (void)setHasDelegated:(bool)arg1;
- (void)setHasIPAddressAttemptCount:(bool)arg1;
- (void)setHasReportReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIPAddressAttemptCount:(unsigned long long)arg1;
- (void)setReportReason:(int)arg1;
- (void)setSourceAppIdentifier:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)sourceAppIdentifier;
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
