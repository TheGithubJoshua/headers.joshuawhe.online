<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WFNetworkScanRecord.h</title>
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

/PrivateFrameworks/WiFiKit.framework/WFNetworkScanRecord.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit (1)
 */

@interface WFNetworkScanRecord : NSObject <NSCopying, WFNetworkListRecord> {
    bool  _adhoc;
    bool  _airPortBaseStation;
    bool  _ambiguousSSID;
    NSDictionary * _attributes;
    NSString * _bssid;
    bool  _carPlay;
    long long  _carPlayType;
    NSNumber * _channel;
    NSDictionary * _eapProfile;
    bool  _enterprise;
    bool  _hidden;
    bool  _hotspot20;
    NSString * _hotspot20Name;
    bool  _hotspot20Provisioned;
    NSString * _hotspotPluginLabel;
    bool  _iOSHotspot;
    bool  _instantHotspot;
    unsigned int  _phyMode;
    bool  _requiresPassword;
    bool  _requiresUsername;
    long long  _rssi;
    float  _scaledRSSI;
    bool  _secure;
    long long  _securityMode;
    NSString * _ssid;
    bool  _unconfiguredAccessory;
    bool  _unconfiguredAccessorySTAOnly;
    long long  _unconfiguredAccessoryType;
    NSString * _unconfiguredDeviceID;
    NSString * _unconfiguredDeviceName;
}

@property (getter=isAdhoc, nonatomic) bool adhoc;
@property (getter=isAirPortBaseStation, nonatomic) bool airPortBaseStation;
@property (getter=isAmbiguousSSID, nonatomic) bool ambiguousSSID;
@property (retain) NSDictionary *attributes;
@property (nonatomic, copy) NSString *bssid;
@property (getter=isCarPlay, nonatomic) bool carPlay;
@property (nonatomic) long long carPlayType;
@property (nonatomic, retain) NSNumber *channel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *eapProfile;
@property (getter=isEnterprise, nonatomic) bool enterprise;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (getter=isHotspot20, nonatomic) bool hotspot20;
@property (nonatomic, copy) NSString *hotspot20Name;
@property (getter=isHotspot20Provisioned, nonatomic) bool hotspot20Provisioned;
@property (nonatomic, copy) NSString *hotspotPluginLabel;
@property (nonatomic) bool iOSHotspot;
@property (nonatomic) bool instantHotspot;
@property (nonatomic) unsigned int phyMode;
@property (nonatomic) bool requiresPassword;
@property (nonatomic) bool requiresUsername;
@property (nonatomic) long long rssi;
@property (nonatomic) float scaledRSSI;
@property (getter=isSecure, nonatomic) bool secure;
@property (nonatomic) long long securityMode;
@property (nonatomic, copy) NSString *ssid;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (getter=isUnconfiguredAccessory, nonatomic) bool unconfiguredAccessory;
@property (getter=isUnconfiguredAccessorySTAOnly, nonatomic) bool unconfiguredAccessorySTAOnly;
@property (nonatomic) long long unconfiguredAccessoryType;
@property (copy) NSString *unconfiguredDeviceID;
@property (nonatomic, copy) NSString *unconfiguredDeviceName;

- (void).cxx_destruct;
- (bool)_isEqualToHotspotDevice:(id)arg1;
- (bool)_isEqualToNetwork:(id)arg1;
- (id)attributes;
- (id)bssid;
- (bool)canBeDisplayedAsCurrent;
- (long long)carPlayType;
- (id)channel;
- (id)configurationIssues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)eapProfile;
- (unsigned long long)hash;
- (id)hotspot20Name;
- (id)hotspotBatteryLife;
- (id)hotspotCellularProtocol;
- (id)hotspotPluginLabel;
- (id)hotspotSignalStrength;
- (bool)iOSHotspot;
- (id)init;
- (id)initWithNetworkRef:(struct __WiFiNetwork { }*)arg1;
- (bool)instantHotspot;
- (bool)isAdhoc;
- (bool)isAirPortBaseStation;
- (bool)isAmbiguousSSID;
- (bool)isCarPlay;
- (bool)isCloudSyncable;
- (bool)isEnterprise;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (bool)isHotspot20;
- (bool)isHotspot20Provisioned;
- (bool)isInstantHotspot;
- (bool)isSecure;
- (bool)isUnconfiguredAccessory;
- (bool)isUnconfiguredAccessorySTAOnly;
- (unsigned int)phyMode;
- (bool)requiresPassword;
- (bool)requiresUsername;
- (long long)rssi;
- (float)scaledRSSI;
- (long long)securityMode;
- (void)setAdhoc:(bool)arg1;
- (void)setAirPortBaseStation:(bool)arg1;
- (void)setAmbiguousSSID:(bool)arg1;
- (void)setAttributes:(id)arg1;
- (void)setBssid:(id)arg1;
- (void)setCarPlay:(bool)arg1;
- (void)setCarPlayType:(long long)arg1;
- (void)setChannel:(id)arg1;
- (void)setEapProfile:(id)arg1;
- (void)setEnterprise:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHotspot20:(bool)arg1;
- (void)setHotspot20Name:(id)arg1;
- (void)setHotspot20Provisioned:(bool)arg1;
- (void)setHotspotPluginLabel:(id)arg1;
- (void)setIOSHotspot:(bool)arg1;
- (void)setInstantHotspot:(bool)arg1;
- (void)setPhyMode:(unsigned int)arg1;
- (void)setRequiresPassword:(bool)arg1;
- (void)setRequiresUsername:(bool)arg1;
- (void)setRssi:(long long)arg1;
- (void)setScaledRSSI:(float)arg1;
- (void)setSecure:(bool)arg1;
- (void)setSecurityMode:(long long)arg1;
- (void)setSsid:(id)arg1;
- (void)setUnconfiguredAccessory:(bool)arg1;
- (void)setUnconfiguredAccessorySTAOnly:(bool)arg1;
- (void)setUnconfiguredAccessoryType:(long long)arg1;
- (void)setUnconfiguredDeviceID:(id)arg1;
- (void)setUnconfiguredDeviceName:(id)arg1;
- (id)ssid;
- (id)subtitle;
- (bool)supportsWiFiHealth;
- (id)title;
- (long long)type;
- (long long)unconfiguredAccessoryType;
- (id)unconfiguredDeviceID;
- (id)unconfiguredDeviceName;

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
