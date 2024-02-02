<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDWiFiMetricLinkChangeData.h</title>
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

/lib/libAWDSupportFramework.dylib/AWDWiFiMetricLinkChangeData.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricLinkChangeData : PBCodable <NSCopying> {
    unsigned int  _akmSuites;
    double  _associationDuration;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _bcnFrmsHistorys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _bcnPerHistorys;
    unsigned int  _capabilities;
    unsigned int  _channel;
    unsigned int  _channelWidth;
    NSString * _countryCode;
    unsigned int  _flags;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _fwTxFrmsHistorys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _fwTxPerHistorys;
    unsigned int  _gatewayARPHistory;
    struct { 
        unsigned int associationDuration : 1; 
        unsigned int timestamp : 1; 
        unsigned int akmSuites : 1; 
        unsigned int capabilities : 1; 
        unsigned int channel : 1; 
        unsigned int channelWidth : 1; 
        unsigned int flags : 1; 
        unsigned int gatewayARPHistory : 1; 
        unsigned int htASel : 1; 
        unsigned int htAmpduParams : 1; 
        unsigned int htExtended : 1; 
        unsigned int htInfo : 1; 
        unsigned int htTxBf : 1; 
        unsigned int mcastCipher : 1; 
        unsigned int phyMode : 1; 
        unsigned int reason : 1; 
        unsigned int securityType : 1; 
        unsigned int subreason : 1; 
        unsigned int ucastCipher : 1; 
        unsigned int vhtInfo : 1; 
        unsigned int wpaProtocol : 1; 
        unsigned int isInVol : 1; 
        unsigned int isLinkUp : 1; 
    }  _has;
    unsigned int  _htASel;
    unsigned int  _htAmpduParams;
    unsigned int  _htExtended;
    unsigned int  _htInfo;
    NSData * _htSupportedMcsSet;
    unsigned int  _htTxBf;
    bool  _isInVol;
    bool  _isLinkUp;
    NSString * _locale;
    unsigned int  _mcastCipher;
    NSData * _oui;
    unsigned int  _phyMode;
    unsigned int  _reason;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _rssiHistorys;
    unsigned int  _securityType;
    unsigned int  _subreason;
    unsigned long long  _timestamp;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _txFrmsHistorys;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _txPerHistorys;
    unsigned int  _ucastCipher;
    unsigned int  _vhtInfo;
    NSData * _vhtSupportedMcsSet;
    unsigned int  _wpaProtocol;
    NSString * _wpsConfigMethods;
    NSString * _wpsDeviceNameData;
    NSString * _wpsDeviceNameElement;
    NSString * _wpsManufacturerElement;
    NSString * _wpsModelName;
    NSString * _wpsModelNumber;
    NSString * _wpsPrimaryDeviceTypeCategory;
    NSString * _wpsPrimaryDeviceTypeSubCategory;
    NSString * _wpsResponseType;
}

@property (nonatomic) unsigned int akmSuites;
@property (nonatomic) double associationDuration;
@property (nonatomic, readonly) int*bcnFrmsHistorys;
@property (nonatomic, readonly) unsigned long long bcnFrmsHistorysCount;
@property (nonatomic, readonly) int*bcnPerHistorys;
@property (nonatomic, readonly) unsigned long long bcnPerHistorysCount;
@property (nonatomic) unsigned int capabilities;
@property (nonatomic) unsigned int channel;
@property (nonatomic) unsigned int channelWidth;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic) unsigned int flags;
@property (nonatomic, readonly) int*fwTxFrmsHistorys;
@property (nonatomic, readonly) unsigned long long fwTxFrmsHistorysCount;
@property (nonatomic, readonly) int*fwTxPerHistorys;
@property (nonatomic, readonly) unsigned long long fwTxPerHistorysCount;
@property (nonatomic) unsigned int gatewayARPHistory;
@property (nonatomic) bool hasAkmSuites;
@property (nonatomic) bool hasAssociationDuration;
@property (nonatomic) bool hasCapabilities;
@property (nonatomic) bool hasChannel;
@property (nonatomic) bool hasChannelWidth;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic) bool hasFlags;
@property (nonatomic) bool hasGatewayARPHistory;
@property (nonatomic) bool hasHtASel;
@property (nonatomic) bool hasHtAmpduParams;
@property (nonatomic) bool hasHtExtended;
@property (nonatomic) bool hasHtInfo;
@property (nonatomic, readonly) bool hasHtSupportedMcsSet;
@property (nonatomic) bool hasHtTxBf;
@property (nonatomic) bool hasIsInVol;
@property (nonatomic) bool hasIsLinkUp;
@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic) bool hasMcastCipher;
@property (nonatomic, readonly) bool hasOui;
@property (nonatomic) bool hasPhyMode;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasSecurityType;
@property (nonatomic) bool hasSubreason;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUcastCipher;
@property (nonatomic) bool hasVhtInfo;
@property (nonatomic, readonly) bool hasVhtSupportedMcsSet;
@property (nonatomic) bool hasWpaProtocol;
@property (nonatomic, readonly) bool hasWpsConfigMethods;
@property (nonatomic, readonly) bool hasWpsDeviceNameData;
@property (nonatomic, readonly) bool hasWpsDeviceNameElement;
@property (nonatomic, readonly) bool hasWpsManufacturerElement;
@property (nonatomic, readonly) bool hasWpsModelName;
@property (nonatomic, readonly) bool hasWpsModelNumber;
@property (nonatomic, readonly) bool hasWpsPrimaryDeviceTypeCategory;
@property (nonatomic, readonly) bool hasWpsPrimaryDeviceTypeSubCategory;
@property (nonatomic, readonly) bool hasWpsResponseType;
@property (nonatomic) unsigned int htASel;
@property (nonatomic) unsigned int htAmpduParams;
@property (nonatomic) unsigned int htExtended;
@property (nonatomic) unsigned int htInfo;
@property (nonatomic, retain) NSData *htSupportedMcsSet;
@property (nonatomic) unsigned int htTxBf;
@property (nonatomic) bool isInVol;
@property (nonatomic) bool isLinkUp;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic) unsigned int mcastCipher;
@property (nonatomic, retain) NSData *oui;
@property (nonatomic) unsigned int phyMode;
@property (nonatomic) unsigned int reason;
@property (nonatomic, readonly) int*rssiHistorys;
@property (nonatomic, readonly) unsigned long long rssiHistorysCount;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) unsigned int subreason;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) int*txFrmsHistorys;
@property (nonatomic, readonly) unsigned long long txFrmsHistorysCount;
@property (nonatomic, readonly) int*txPerHistorys;
@property (nonatomic, readonly) unsigned long long txPerHistorysCount;
@property (nonatomic) unsigned int ucastCipher;
@property (nonatomic) unsigned int vhtInfo;
@property (nonatomic, retain) NSData *vhtSupportedMcsSet;
@property (nonatomic) unsigned int wpaProtocol;
@property (nonatomic, retain) NSString *wpsConfigMethods;
@property (nonatomic, retain) NSString *wpsDeviceNameData;
@property (nonatomic, retain) NSString *wpsDeviceNameElement;
@property (nonatomic, retain) NSString *wpsManufacturerElement;
@property (nonatomic, retain) NSString *wpsModelName;
@property (nonatomic, retain) NSString *wpsModelNumber;
@property (nonatomic, retain) NSString *wpsPrimaryDeviceTypeCategory;
@property (nonatomic, retain) NSString *wpsPrimaryDeviceTypeSubCategory;
@property (nonatomic, retain) NSString *wpsResponseType;

- (void)addBcnFrmsHistory:(int)arg1;
- (void)addBcnPerHistory:(int)arg1;
- (void)addFwTxFrmsHistory:(int)arg1;
- (void)addFwTxPerHistory:(int)arg1;
- (void)addRssiHistory:(int)arg1;
- (void)addTxFrmsHistory:(int)arg1;
- (void)addTxPerHistory:(int)arg1;
- (unsigned int)akmSuites;
- (double)associationDuration;
- (int)bcnFrmsHistoryAtIndex:(unsigned long long)arg1;
- (int*)bcnFrmsHistorys;
- (unsigned long long)bcnFrmsHistorysCount;
- (int)bcnPerHistoryAtIndex:(unsigned long long)arg1;
- (int*)bcnPerHistorys;
- (unsigned long long)bcnPerHistorysCount;
- (unsigned int)capabilities;
- (unsigned int)channel;
- (unsigned int)channelWidth;
- (void)clearBcnFrmsHistorys;
- (void)clearBcnPerHistorys;
- (void)clearFwTxFrmsHistorys;
- (void)clearFwTxPerHistorys;
- (void)clearRssiHistorys;
- (void)clearTxFrmsHistorys;
- (void)clearTxPerHistorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)flags;
- (int)fwTxFrmsHistoryAtIndex:(unsigned long long)arg1;
- (int*)fwTxFrmsHistorys;
- (unsigned long long)fwTxFrmsHistorysCount;
- (int)fwTxPerHistoryAtIndex:(unsigned long long)arg1;
- (int*)fwTxPerHistorys;
- (unsigned long long)fwTxPerHistorysCount;
- (unsigned int)gatewayARPHistory;
- (bool)hasAkmSuites;
- (bool)hasAssociationDuration;
- (bool)hasCapabilities;
- (bool)hasChannel;
- (bool)hasChannelWidth;
- (bool)hasCountryCode;
- (bool)hasFlags;
- (bool)hasGatewayARPHistory;
- (bool)hasHtASel;
- (bool)hasHtAmpduParams;
- (bool)hasHtExtended;
- (bool)hasHtInfo;
- (bool)hasHtSupportedMcsSet;
- (bool)hasHtTxBf;
- (bool)hasIsInVol;
- (bool)hasIsLinkUp;
- (bool)hasLocale;
- (bool)hasMcastCipher;
- (bool)hasOui;
- (bool)hasPhyMode;
- (bool)hasReason;
- (bool)hasSecurityType;
- (bool)hasSubreason;
- (bool)hasTimestamp;
- (bool)hasUcastCipher;
- (bool)hasVhtInfo;
- (bool)hasVhtSupportedMcsSet;
- (bool)hasWpaProtocol;
- (bool)hasWpsConfigMethods;
- (bool)hasWpsDeviceNameData;
- (bool)hasWpsDeviceNameElement;
- (bool)hasWpsManufacturerElement;
- (bool)hasWpsModelName;
- (bool)hasWpsModelNumber;
- (bool)hasWpsPrimaryDeviceTypeCategory;
- (bool)hasWpsPrimaryDeviceTypeSubCategory;
- (bool)hasWpsResponseType;
- (unsigned long long)hash;
- (unsigned int)htASel;
- (unsigned int)htAmpduParams;
- (unsigned int)htExtended;
- (unsigned int)htInfo;
- (id)htSupportedMcsSet;
- (unsigned int)htTxBf;
- (bool)isEqual:(id)arg1;
- (bool)isInVol;
- (bool)isLinkUp;
- (id)locale;
- (unsigned int)mcastCipher;
- (void)mergeFrom:(id)arg1;
- (id)oui;
- (unsigned int)phyMode;
- (bool)readFrom:(id)arg1;
- (unsigned int)reason;
- (int)rssiHistoryAtIndex:(unsigned long long)arg1;
- (int*)rssiHistorys;
- (unsigned long long)rssiHistorysCount;
- (unsigned int)securityType;
- (void)setAkmSuites:(unsigned int)arg1;
- (void)setAssociationDuration:(double)arg1;
- (void)setBcnFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setBcnPerHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCapabilities:(unsigned int)arg1;
- (void)setChannel:(unsigned int)arg1;
- (void)setChannelWidth:(unsigned int)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setFwTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setFwTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setGatewayARPHistory:(unsigned int)arg1;
- (void)setHasAkmSuites:(bool)arg1;
- (void)setHasAssociationDuration:(bool)arg1;
- (void)setHasCapabilities:(bool)arg1;
- (void)setHasChannel:(bool)arg1;
- (void)setHasChannelWidth:(bool)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setHasGatewayARPHistory:(bool)arg1;
- (void)setHasHtASel:(bool)arg1;
- (void)setHasHtAmpduParams:(bool)arg1;
- (void)setHasHtExtended:(bool)arg1;
- (void)setHasHtInfo:(bool)arg1;
- (void)setHasHtTxBf:(bool)arg1;
- (void)setHasIsInVol:(bool)arg1;
- (void)setHasIsLinkUp:(bool)arg1;
- (void)setHasMcastCipher:(bool)arg1;
- (void)setHasPhyMode:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasSecurityType:(bool)arg1;
- (void)setHasSubreason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUcastCipher:(bool)arg1;
- (void)setHasVhtInfo:(bool)arg1;
- (void)setHasWpaProtocol:(bool)arg1;
- (void)setHtASel:(unsigned int)arg1;
- (void)setHtAmpduParams:(unsigned int)arg1;
- (void)setHtExtended:(unsigned int)arg1;
- (void)setHtInfo:(unsigned int)arg1;
- (void)setHtSupportedMcsSet:(id)arg1;
- (void)setHtTxBf:(unsigned int)arg1;
- (void)setIsInVol:(bool)arg1;
- (void)setIsLinkUp:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setMcastCipher:(unsigned int)arg1;
- (void)setOui:(id)arg1;
- (void)setPhyMode:(unsigned int)arg1;
- (void)setReason:(unsigned int)arg1;
- (void)setRssiHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setSecurityType:(unsigned int)arg1;
- (void)setSubreason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setUcastCipher:(unsigned int)arg1;
- (void)setVhtInfo:(unsigned int)arg1;
- (void)setVhtSupportedMcsSet:(id)arg1;
- (void)setWpaProtocol:(unsigned int)arg1;
- (void)setWpsConfigMethods:(id)arg1;
- (void)setWpsDeviceNameData:(id)arg1;
- (void)setWpsDeviceNameElement:(id)arg1;
- (void)setWpsManufacturerElement:(id)arg1;
- (void)setWpsModelName:(id)arg1;
- (void)setWpsModelNumber:(id)arg1;
- (void)setWpsPrimaryDeviceTypeCategory:(id)arg1;
- (void)setWpsPrimaryDeviceTypeSubCategory:(id)arg1;
- (void)setWpsResponseType:(id)arg1;
- (unsigned int)subreason;
- (unsigned long long)timestamp;
- (int)txFrmsHistoryAtIndex:(unsigned long long)arg1;
- (int*)txFrmsHistorys;
- (unsigned long long)txFrmsHistorysCount;
- (int)txPerHistoryAtIndex:(unsigned long long)arg1;
- (int*)txPerHistorys;
- (unsigned long long)txPerHistorysCount;
- (unsigned int)ucastCipher;
- (unsigned int)vhtInfo;
- (id)vhtSupportedMcsSet;
- (unsigned int)wpaProtocol;
- (id)wpsConfigMethods;
- (id)wpsDeviceNameData;
- (id)wpsDeviceNameElement;
- (id)wpsManufacturerElement;
- (id)wpsModelName;
- (id)wpsModelNumber;
- (id)wpsPrimaryDeviceTypeCategory;
- (id)wpsPrimaryDeviceTypeSubCategory;
- (id)wpsResponseType;
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