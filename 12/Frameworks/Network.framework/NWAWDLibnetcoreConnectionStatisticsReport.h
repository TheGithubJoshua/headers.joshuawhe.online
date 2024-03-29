<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NWAWDLibnetcoreConnectionStatisticsReport.h</title>
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

/Frameworks/Network.framework/NWAWDLibnetcoreConnectionStatisticsReport.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Network.framework/Network (1)
 */

@interface NWAWDLibnetcoreConnectionStatisticsReport : PBCodable <NSCopying> {
    unsigned long long  _appDataStallTimerMsecs;
    unsigned long long  _appReportingDataStallCount;
    unsigned long long  _bestRTTMsecs;
    unsigned long long  _betterRouteEventCount;
    unsigned long long  _bytesDuplicate;
    unsigned long long  _bytesIn;
    unsigned long long  _bytesOut;
    unsigned long long  _bytesOutOfOrder;
    unsigned long long  _bytesRetransmitted;
    bool  _cellularFallback;
    bool  _cellularRRCConnected;
    bool  _connected;
    int  _connectedInterfaceType;
    unsigned long long  _connectionEstablishmentTimeMsecs;
    unsigned long long  _connectionReuseCount;
    unsigned long long  _currentRTTMsecs;
    bool  _dNSAnswersCached;
    unsigned long long  _dNSResolvedTimeMsecs;
    bool  _firstParty;
    unsigned long long  _flowDurationMsecs;
    struct { 
        unsigned int appDataStallTimerMsecs : 1; 
        unsigned int appReportingDataStallCount : 1; 
        unsigned int bestRTTMsecs : 1; 
        unsigned int betterRouteEventCount : 1; 
        unsigned int bytesDuplicate : 1; 
        unsigned int bytesIn : 1; 
        unsigned int bytesOut : 1; 
        unsigned int bytesOutOfOrder : 1; 
        unsigned int bytesRetransmitted : 1; 
        unsigned int connectionEstablishmentTimeMsecs : 1; 
        unsigned int connectionReuseCount : 1; 
        unsigned int currentRTTMsecs : 1; 
        unsigned int dNSResolvedTimeMsecs : 1; 
        unsigned int flowDurationMsecs : 1; 
        unsigned int iPAddressAttemptCount : 1; 
        unsigned int multipathBytesInCell : 1; 
        unsigned int multipathBytesInInitial : 1; 
        unsigned int multipathBytesInWiFi : 1; 
        unsigned int multipathBytesOutCell : 1; 
        unsigned int multipathBytesOutInitial : 1; 
        unsigned int multipathBytesOutWiFi : 1; 
        unsigned int multipathServiceType : 1; 
        unsigned int packetsDuplicate : 1; 
        unsigned int packetsIn : 1; 
        unsigned int packetsOut : 1; 
        unsigned int packetsOutOfOrder : 1; 
        unsigned int packetsRetransmitted : 1; 
        unsigned int rTTvariance : 1; 
        unsigned int smoothedRTTMsecs : 1; 
        unsigned int synRetransmissionCount : 1; 
        unsigned int timeToConnectionEstablishmentMsecs : 1; 
        unsigned int timeToConnectionStartMsecs : 1; 
        unsigned int timeToDNSResolvedMsecs : 1; 
        unsigned int timeToDNSStartMsecs : 1; 
        unsigned int trafficClass : 1; 
        unsigned int connectedInterfaceType : 1; 
        unsigned int interfaceType : 1; 
        unsigned int cellularFallback : 1; 
        unsigned int cellularRRCConnected : 1; 
        unsigned int connected : 1; 
        unsigned int dNSAnswersCached : 1; 
        unsigned int firstParty : 1; 
        unsigned int kernelReportedStalls : 1; 
        unsigned int kernelReportingConnectionStalled : 1; 
        unsigned int kernelReportingReadStalled : 1; 
        unsigned int kernelReportingWriteStalled : 1; 
        unsigned int tcpFastOpen : 1; 
    }  _has;
    unsigned long long  _iPAddressAttemptCount;
    int  _interfaceType;
    bool  _kernelReportedStalls;
    bool  _kernelReportingConnectionStalled;
    bool  _kernelReportingReadStalled;
    bool  _kernelReportingWriteStalled;
    unsigned long long  _multipathBytesInCell;
    unsigned long long  _multipathBytesInInitial;
    unsigned long long  _multipathBytesInWiFi;
    unsigned long long  _multipathBytesOutCell;
    unsigned long long  _multipathBytesOutInitial;
    unsigned long long  _multipathBytesOutWiFi;
    unsigned long long  _multipathServiceType;
    unsigned long long  _packetsDuplicate;
    unsigned long long  _packetsIn;
    unsigned long long  _packetsOut;
    unsigned long long  _packetsOutOfOrder;
    unsigned long long  _packetsRetransmitted;
    unsigned long long  _rTTvariance;
    unsigned long long  _smoothedRTTMsecs;
    unsigned long long  _synRetransmissionCount;
    bool  _tcpFastOpen;
    unsigned long long  _timeToConnectionEstablishmentMsecs;
    unsigned long long  _timeToConnectionStartMsecs;
    unsigned long long  _timeToDNSResolvedMsecs;
    unsigned long long  _timeToDNSStartMsecs;
    unsigned long long  _trafficClass;
}

@property (nonatomic) unsigned long long appDataStallTimerMsecs;
@property (nonatomic) unsigned long long appReportingDataStallCount;
@property (nonatomic) unsigned long long bestRTTMsecs;
@property (nonatomic) unsigned long long betterRouteEventCount;
@property (nonatomic) unsigned long long bytesDuplicate;
@property (nonatomic) unsigned long long bytesIn;
@property (nonatomic) unsigned long long bytesOut;
@property (nonatomic) unsigned long long bytesOutOfOrder;
@property (nonatomic) unsigned long long bytesRetransmitted;
@property (nonatomic) bool cellularFallback;
@property (nonatomic) bool cellularRRCConnected;
@property (nonatomic) bool connected;
@property (nonatomic) int connectedInterfaceType;
@property (nonatomic) unsigned long long connectionEstablishmentTimeMsecs;
@property (nonatomic) unsigned long long connectionReuseCount;
@property (nonatomic) unsigned long long currentRTTMsecs;
@property (nonatomic) bool dNSAnswersCached;
@property (nonatomic) unsigned long long dNSResolvedTimeMsecs;
@property (nonatomic) bool firstParty;
@property (nonatomic) unsigned long long flowDurationMsecs;
@property (nonatomic) bool hasAppDataStallTimerMsecs;
@property (nonatomic) bool hasAppReportingDataStallCount;
@property (nonatomic) bool hasBestRTTMsecs;
@property (nonatomic) bool hasBetterRouteEventCount;
@property (nonatomic) bool hasBytesDuplicate;
@property (nonatomic) bool hasBytesIn;
@property (nonatomic) bool hasBytesOut;
@property (nonatomic) bool hasBytesOutOfOrder;
@property (nonatomic) bool hasBytesRetransmitted;
@property (nonatomic) bool hasCellularFallback;
@property (nonatomic) bool hasCellularRRCConnected;
@property (nonatomic) bool hasConnected;
@property (nonatomic) bool hasConnectedInterfaceType;
@property (nonatomic) bool hasConnectionEstablishmentTimeMsecs;
@property (nonatomic) bool hasConnectionReuseCount;
@property (nonatomic) bool hasCurrentRTTMsecs;
@property (nonatomic) bool hasDNSAnswersCached;
@property (nonatomic) bool hasDNSResolvedTimeMsecs;
@property (nonatomic) bool hasFirstParty;
@property (nonatomic) bool hasFlowDurationMsecs;
@property (nonatomic) bool hasIPAddressAttemptCount;
@property (nonatomic) bool hasInterfaceType;
@property (nonatomic) bool hasKernelReportedStalls;
@property (nonatomic) bool hasKernelReportingConnectionStalled;
@property (nonatomic) bool hasKernelReportingReadStalled;
@property (nonatomic) bool hasKernelReportingWriteStalled;
@property (nonatomic) bool hasMultipathBytesInCell;
@property (nonatomic) bool hasMultipathBytesInInitial;
@property (nonatomic) bool hasMultipathBytesInWiFi;
@property (nonatomic) bool hasMultipathBytesOutCell;
@property (nonatomic) bool hasMultipathBytesOutInitial;
@property (nonatomic) bool hasMultipathBytesOutWiFi;
@property (nonatomic) bool hasMultipathServiceType;
@property (nonatomic) bool hasPacketsDuplicate;
@property (nonatomic) bool hasPacketsIn;
@property (nonatomic) bool hasPacketsOut;
@property (nonatomic) bool hasPacketsOutOfOrder;
@property (nonatomic) bool hasPacketsRetransmitted;
@property (nonatomic) bool hasRTTvariance;
@property (nonatomic) bool hasSmoothedRTTMsecs;
@property (nonatomic) bool hasSynRetransmissionCount;
@property (nonatomic) bool hasTcpFastOpen;
@property (nonatomic) bool hasTimeToConnectionEstablishmentMsecs;
@property (nonatomic) bool hasTimeToConnectionStartMsecs;
@property (nonatomic) bool hasTimeToDNSResolvedMsecs;
@property (nonatomic) bool hasTimeToDNSStartMsecs;
@property (nonatomic) bool hasTrafficClass;
@property (nonatomic) unsigned long long iPAddressAttemptCount;
@property (nonatomic) int interfaceType;
@property (nonatomic) bool kernelReportedStalls;
@property (nonatomic) bool kernelReportingConnectionStalled;
@property (nonatomic) bool kernelReportingReadStalled;
@property (nonatomic) bool kernelReportingWriteStalled;
@property (nonatomic) unsigned long long multipathBytesInCell;
@property (nonatomic) unsigned long long multipathBytesInInitial;
@property (nonatomic) unsigned long long multipathBytesInWiFi;
@property (nonatomic) unsigned long long multipathBytesOutCell;
@property (nonatomic) unsigned long long multipathBytesOutInitial;
@property (nonatomic) unsigned long long multipathBytesOutWiFi;
@property (nonatomic) unsigned long long multipathServiceType;
@property (nonatomic) unsigned long long packetsDuplicate;
@property (nonatomic) unsigned long long packetsIn;
@property (nonatomic) unsigned long long packetsOut;
@property (nonatomic) unsigned long long packetsOutOfOrder;
@property (nonatomic) unsigned long long packetsRetransmitted;
@property (nonatomic) unsigned long long rTTvariance;
@property (nonatomic) unsigned long long smoothedRTTMsecs;
@property (nonatomic) unsigned long long synRetransmissionCount;
@property (nonatomic) bool tcpFastOpen;
@property (nonatomic) unsigned long long timeToConnectionEstablishmentMsecs;
@property (nonatomic) unsigned long long timeToConnectionStartMsecs;
@property (nonatomic) unsigned long long timeToDNSResolvedMsecs;
@property (nonatomic) unsigned long long timeToDNSStartMsecs;
@property (nonatomic) unsigned long long trafficClass;

- (int)StringAsConnectedInterfaceType:(id)arg1;
- (int)StringAsInterfaceType:(id)arg1;
- (unsigned long long)appDataStallTimerMsecs;
- (unsigned long long)appReportingDataStallCount;
- (unsigned long long)bestRTTMsecs;
- (unsigned long long)betterRouteEventCount;
- (unsigned long long)bytesDuplicate;
- (unsigned long long)bytesIn;
- (unsigned long long)bytesOut;
- (unsigned long long)bytesOutOfOrder;
- (unsigned long long)bytesRetransmitted;
- (bool)cellularFallback;
- (bool)cellularRRCConnected;
- (bool)connected;
- (int)connectedInterfaceType;
- (id)connectedInterfaceTypeAsString:(int)arg1;
- (unsigned long long)connectionEstablishmentTimeMsecs;
- (unsigned long long)connectionReuseCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)currentRTTMsecs;
- (bool)dNSAnswersCached;
- (unsigned long long)dNSResolvedTimeMsecs;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)firstParty;
- (unsigned long long)flowDurationMsecs;
- (bool)hasAppDataStallTimerMsecs;
- (bool)hasAppReportingDataStallCount;
- (bool)hasBestRTTMsecs;
- (bool)hasBetterRouteEventCount;
- (bool)hasBytesDuplicate;
- (bool)hasBytesIn;
- (bool)hasBytesOut;
- (bool)hasBytesOutOfOrder;
- (bool)hasBytesRetransmitted;
- (bool)hasCellularFallback;
- (bool)hasCellularRRCConnected;
- (bool)hasConnected;
- (bool)hasConnectedInterfaceType;
- (bool)hasConnectionEstablishmentTimeMsecs;
- (bool)hasConnectionReuseCount;
- (bool)hasCurrentRTTMsecs;
- (bool)hasDNSAnswersCached;
- (bool)hasDNSResolvedTimeMsecs;
- (bool)hasFirstParty;
- (bool)hasFlowDurationMsecs;
- (bool)hasIPAddressAttemptCount;
- (bool)hasInterfaceType;
- (bool)hasKernelReportedStalls;
- (bool)hasKernelReportingConnectionStalled;
- (bool)hasKernelReportingReadStalled;
- (bool)hasKernelReportingWriteStalled;
- (bool)hasMultipathBytesInCell;
- (bool)hasMultipathBytesInInitial;
- (bool)hasMultipathBytesInWiFi;
- (bool)hasMultipathBytesOutCell;
- (bool)hasMultipathBytesOutInitial;
- (bool)hasMultipathBytesOutWiFi;
- (bool)hasMultipathServiceType;
- (bool)hasPacketsDuplicate;
- (bool)hasPacketsIn;
- (bool)hasPacketsOut;
- (bool)hasPacketsOutOfOrder;
- (bool)hasPacketsRetransmitted;
- (bool)hasRTTvariance;
- (bool)hasSmoothedRTTMsecs;
- (bool)hasSynRetransmissionCount;
- (bool)hasTcpFastOpen;
- (bool)hasTimeToConnectionEstablishmentMsecs;
- (bool)hasTimeToConnectionStartMsecs;
- (bool)hasTimeToDNSResolvedMsecs;
- (bool)hasTimeToDNSStartMsecs;
- (bool)hasTrafficClass;
- (unsigned long long)hash;
- (unsigned long long)iPAddressAttemptCount;
- (int)interfaceType;
- (id)interfaceTypeAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)kernelReportedStalls;
- (bool)kernelReportingConnectionStalled;
- (bool)kernelReportingReadStalled;
- (bool)kernelReportingWriteStalled;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)multipathBytesInCell;
- (unsigned long long)multipathBytesInInitial;
- (unsigned long long)multipathBytesInWiFi;
- (unsigned long long)multipathBytesOutCell;
- (unsigned long long)multipathBytesOutInitial;
- (unsigned long long)multipathBytesOutWiFi;
- (unsigned long long)multipathServiceType;
- (unsigned long long)packetsDuplicate;
- (unsigned long long)packetsIn;
- (unsigned long long)packetsOut;
- (unsigned long long)packetsOutOfOrder;
- (unsigned long long)packetsRetransmitted;
- (unsigned long long)rTTvariance;
- (bool)readFrom:(id)arg1;
- (void)setAppDataStallTimerMsecs:(unsigned long long)arg1;
- (void)setAppReportingDataStallCount:(unsigned long long)arg1;
- (void)setBestRTTMsecs:(unsigned long long)arg1;
- (void)setBetterRouteEventCount:(unsigned long long)arg1;
- (void)setBytesDuplicate:(unsigned long long)arg1;
- (void)setBytesIn:(unsigned long long)arg1;
- (void)setBytesOut:(unsigned long long)arg1;
- (void)setBytesOutOfOrder:(unsigned long long)arg1;
- (void)setBytesRetransmitted:(unsigned long long)arg1;
- (void)setCellularFallback:(bool)arg1;
- (void)setCellularRRCConnected:(bool)arg1;
- (void)setConnected:(bool)arg1;
- (void)setConnectedInterfaceType:(int)arg1;
- (void)setConnectionEstablishmentTimeMsecs:(unsigned long long)arg1;
- (void)setConnectionReuseCount:(unsigned long long)arg1;
- (void)setCurrentRTTMsecs:(unsigned long long)arg1;
- (void)setDNSAnswersCached:(bool)arg1;
- (void)setDNSResolvedTimeMsecs:(unsigned long long)arg1;
- (void)setFirstParty:(bool)arg1;
- (void)setFlowDurationMsecs:(unsigned long long)arg1;
- (void)setHasAppDataStallTimerMsecs:(bool)arg1;
- (void)setHasAppReportingDataStallCount:(bool)arg1;
- (void)setHasBestRTTMsecs:(bool)arg1;
- (void)setHasBetterRouteEventCount:(bool)arg1;
- (void)setHasBytesDuplicate:(bool)arg1;
- (void)setHasBytesIn:(bool)arg1;
- (void)setHasBytesOut:(bool)arg1;
- (void)setHasBytesOutOfOrder:(bool)arg1;
- (void)setHasBytesRetransmitted:(bool)arg1;
- (void)setHasCellularFallback:(bool)arg1;
- (void)setHasCellularRRCConnected:(bool)arg1;
- (void)setHasConnected:(bool)arg1;
- (void)setHasConnectedInterfaceType:(bool)arg1;
- (void)setHasConnectionEstablishmentTimeMsecs:(bool)arg1;
- (void)setHasConnectionReuseCount:(bool)arg1;
- (void)setHasCurrentRTTMsecs:(bool)arg1;
- (void)setHasDNSAnswersCached:(bool)arg1;
- (void)setHasDNSResolvedTimeMsecs:(bool)arg1;
- (void)setHasFirstParty:(bool)arg1;
- (void)setHasFlowDurationMsecs:(bool)arg1;
- (void)setHasIPAddressAttemptCount:(bool)arg1;
- (void)setHasInterfaceType:(bool)arg1;
- (void)setHasKernelReportedStalls:(bool)arg1;
- (void)setHasKernelReportingConnectionStalled:(bool)arg1;
- (void)setHasKernelReportingReadStalled:(bool)arg1;
- (void)setHasKernelReportingWriteStalled:(bool)arg1;
- (void)setHasMultipathBytesInCell:(bool)arg1;
- (void)setHasMultipathBytesInInitial:(bool)arg1;
- (void)setHasMultipathBytesInWiFi:(bool)arg1;
- (void)setHasMultipathBytesOutCell:(bool)arg1;
- (void)setHasMultipathBytesOutInitial:(bool)arg1;
- (void)setHasMultipathBytesOutWiFi:(bool)arg1;
- (void)setHasMultipathServiceType:(bool)arg1;
- (void)setHasPacketsDuplicate:(bool)arg1;
- (void)setHasPacketsIn:(bool)arg1;
- (void)setHasPacketsOut:(bool)arg1;
- (void)setHasPacketsOutOfOrder:(bool)arg1;
- (void)setHasPacketsRetransmitted:(bool)arg1;
- (void)setHasRTTvariance:(bool)arg1;
- (void)setHasSmoothedRTTMsecs:(bool)arg1;
- (void)setHasSynRetransmissionCount:(bool)arg1;
- (void)setHasTcpFastOpen:(bool)arg1;
- (void)setHasTimeToConnectionEstablishmentMsecs:(bool)arg1;
- (void)setHasTimeToConnectionStartMsecs:(bool)arg1;
- (void)setHasTimeToDNSResolvedMsecs:(bool)arg1;
- (void)setHasTimeToDNSStartMsecs:(bool)arg1;
- (void)setHasTrafficClass:(bool)arg1;
- (void)setIPAddressAttemptCount:(unsigned long long)arg1;
- (void)setInterfaceType:(int)arg1;
- (void)setKernelReportedStalls:(bool)arg1;
- (void)setKernelReportingConnectionStalled:(bool)arg1;
- (void)setKernelReportingReadStalled:(bool)arg1;
- (void)setKernelReportingWriteStalled:(bool)arg1;
- (void)setMultipathBytesInCell:(unsigned long long)arg1;
- (void)setMultipathBytesInInitial:(unsigned long long)arg1;
- (void)setMultipathBytesInWiFi:(unsigned long long)arg1;
- (void)setMultipathBytesOutCell:(unsigned long long)arg1;
- (void)setMultipathBytesOutInitial:(unsigned long long)arg1;
- (void)setMultipathBytesOutWiFi:(unsigned long long)arg1;
- (void)setMultipathServiceType:(unsigned long long)arg1;
- (void)setPacketsDuplicate:(unsigned long long)arg1;
- (void)setPacketsIn:(unsigned long long)arg1;
- (void)setPacketsOut:(unsigned long long)arg1;
- (void)setPacketsOutOfOrder:(unsigned long long)arg1;
- (void)setPacketsRetransmitted:(unsigned long long)arg1;
- (void)setRTTvariance:(unsigned long long)arg1;
- (void)setSmoothedRTTMsecs:(unsigned long long)arg1;
- (void)setSynRetransmissionCount:(unsigned long long)arg1;
- (void)setTcpFastOpen:(bool)arg1;
- (void)setTimeToConnectionEstablishmentMsecs:(unsigned long long)arg1;
- (void)setTimeToConnectionStartMsecs:(unsigned long long)arg1;
- (void)setTimeToDNSResolvedMsecs:(unsigned long long)arg1;
- (void)setTimeToDNSStartMsecs:(unsigned long long)arg1;
- (void)setTrafficClass:(unsigned long long)arg1;
- (unsigned long long)smoothedRTTMsecs;
- (unsigned long long)synRetransmissionCount;
- (bool)tcpFastOpen;
- (unsigned long long)timeToConnectionEstablishmentMsecs;
- (unsigned long long)timeToConnectionStartMsecs;
- (unsigned long long)timeToDNSResolvedMsecs;
- (unsigned long long)timeToDNSStartMsecs;
- (unsigned long long)trafficClass;
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
