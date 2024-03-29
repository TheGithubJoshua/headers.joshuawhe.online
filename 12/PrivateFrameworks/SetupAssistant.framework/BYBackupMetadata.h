<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BYBackupMetadata.h</title>
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

/PrivateFrameworks/SetupAssistant.framework/BYBackupMetadata.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant (1)
 */

@interface BYBackupMetadata : PBCodable <NSCopying> {
    unsigned int  _appAnalyticsOptIn;
    bool  _autoUpdateEnabled;
    unsigned int  _deviceAnalyticsOptIn;
    bool  _didSeeTrueTonePane;
    bool  _findMyiPhoneOptIn;
    struct { 
        unsigned int appAnalyticsOptIn : 1; 
        unsigned int deviceAnalyticsOptIn : 1; 
        unsigned int homeButtonHapticKind : 1; 
        unsigned int autoUpdateEnabled : 1; 
        unsigned int didSeeTrueTonePane : 1; 
        unsigned int findMyiPhoneOptIn : 1; 
        unsigned int locationServicesOptIn : 1; 
        unsigned int screenTimeEnabled : 1; 
        unsigned int siriOptIn : 1; 
    }  _has;
    unsigned int  _homeButtonHapticKind;
    bool  _locationServicesOptIn;
    NSData * _nanoRegistryData;
    bool  _screenTimeEnabled;
    bool  _siriOptIn;
    unsigned int  _version;
}

@property (nonatomic) unsigned int appAnalyticsOptIn;
@property (nonatomic) bool autoUpdateEnabled;
@property (nonatomic) unsigned int deviceAnalyticsOptIn;
@property (nonatomic) bool didSeeTrueTonePane;
@property (nonatomic) bool findMyiPhoneOptIn;
@property (nonatomic) bool hasAppAnalyticsOptIn;
@property (nonatomic) bool hasAutoUpdateEnabled;
@property (nonatomic) bool hasDeviceAnalyticsOptIn;
@property (nonatomic) bool hasDidSeeTrueTonePane;
@property (nonatomic) bool hasFindMyiPhoneOptIn;
@property (nonatomic) bool hasHomeButtonHapticKind;
@property (nonatomic) bool hasLocationServicesOptIn;
@property (nonatomic, readonly) bool hasNanoRegistryData;
@property (nonatomic) bool hasScreenTimeEnabled;
@property (nonatomic) bool hasSiriOptIn;
@property (nonatomic) unsigned int homeButtonHapticKind;
@property (nonatomic) bool locationServicesOptIn;
@property (nonatomic, retain) NSData *nanoRegistryData;
@property (nonatomic) bool screenTimeEnabled;
@property (nonatomic) bool siriOptIn;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (unsigned int)appAnalyticsOptIn;
- (bool)autoUpdateEnabled;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)deviceAnalyticsOptIn;
- (id)dictionaryRepresentation;
- (bool)didSeeTrueTonePane;
- (bool)findMyiPhoneOptIn;
- (bool)hasAppAnalyticsOptIn;
- (bool)hasAutoUpdateEnabled;
- (bool)hasDeviceAnalyticsOptIn;
- (bool)hasDidSeeTrueTonePane;
- (bool)hasFindMyiPhoneOptIn;
- (bool)hasHomeButtonHapticKind;
- (bool)hasLocationServicesOptIn;
- (bool)hasNanoRegistryData;
- (bool)hasScreenTimeEnabled;
- (bool)hasSiriOptIn;
- (unsigned long long)hash;
- (unsigned int)homeButtonHapticKind;
- (bool)isEqual:(id)arg1;
- (bool)locationServicesOptIn;
- (void)mergeFrom:(id)arg1;
- (id)nanoRegistryData;
- (bool)readFrom:(id)arg1;
- (bool)screenTimeEnabled;
- (void)setAppAnalyticsOptIn:(unsigned int)arg1;
- (void)setAutoUpdateEnabled:(bool)arg1;
- (void)setDeviceAnalyticsOptIn:(unsigned int)arg1;
- (void)setDidSeeTrueTonePane:(bool)arg1;
- (void)setFindMyiPhoneOptIn:(bool)arg1;
- (void)setHasAppAnalyticsOptIn:(bool)arg1;
- (void)setHasAutoUpdateEnabled:(bool)arg1;
- (void)setHasDeviceAnalyticsOptIn:(bool)arg1;
- (void)setHasDidSeeTrueTonePane:(bool)arg1;
- (void)setHasFindMyiPhoneOptIn:(bool)arg1;
- (void)setHasHomeButtonHapticKind:(bool)arg1;
- (void)setHasLocationServicesOptIn:(bool)arg1;
- (void)setHasScreenTimeEnabled:(bool)arg1;
- (void)setHasSiriOptIn:(bool)arg1;
- (void)setHomeButtonHapticKind:(unsigned int)arg1;
- (void)setLocationServicesOptIn:(bool)arg1;
- (void)setNanoRegistryData:(id)arg1;
- (void)setScreenTimeEnabled:(bool)arg1;
- (void)setSiriOptIn:(bool)arg1;
- (void)setVersion:(unsigned int)arg1;
- (bool)siriOptIn;
- (unsigned int)version;
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
