<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>RPEndpoint.h</title>
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

/PrivateFrameworks/Rapport.framework/RPEndpoint.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport (174.26)
 */

@interface RPEndpoint : NSObject <NSSecureCoding> {
    SFDevice * _bleDevice;
    CUBonjourDevice * _bonjourDevice;
    NSString * _homeKitUserIdentifier;
    unsigned int  _hotspotInfo;
    NSString * _identifier;
    IDSDevice * _idsDevice;
    NSString * _idsDeviceIdentifier;
    int  _linkType;
    NSString * _mediaRemoteIdentifier;
    NSString * _mediaRouteIdentifier;
    NSString * _model;
    NSString * _name;
    bool  _present;
    int  _proximity;
    NSString * _serviceType;
    NSArray * _serviceTypes;
    NSString * _sourceVersion;
    unsigned long long  _statusFlags;
}

@property (nonatomic, retain) SFDevice *bleDevice;
@property (nonatomic, retain) CUBonjourDevice *bonjourDevice;
@property (nonatomic, readonly, copy) NSString *homeKitUserIdentifier;
@property (nonatomic, readonly) unsigned int hotspotInfo;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) IDSDevice *idsDevice;
@property (nonatomic, copy) NSString *idsDeviceIdentifier;
@property (nonatomic) int linkType;
@property (nonatomic, copy) NSString *mediaRemoteIdentifier;
@property (nonatomic, copy) NSString *mediaRouteIdentifier;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool present;
@property (nonatomic, readonly) int proximity;
@property (nonatomic, readonly, copy) NSString *serviceType;
@property (nonatomic, copy) NSArray *serviceTypes;
@property (nonatomic, copy) NSString *sourceVersion;
@property (nonatomic) unsigned long long statusFlags;

+ (id)nullEndpoint;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bleDevice;
- (id)bonjourDevice;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)homeKitUserIdentifier;
- (unsigned int)hotspotInfo;
- (id)identifier;
- (id)idsDevice;
- (id)idsDeviceIdentifier;
- (id)initWithCoder:(id)arg1;
- (int)linkType;
- (id)mediaRemoteIdentifier;
- (id)mediaRouteIdentifier;
- (id)model;
- (id)name;
- (bool)present;
- (int)proximity;
- (bool)removeBonjourDevice:(id)arg1;
- (unsigned int)removeIDSDevice;
- (bool)removeSFDevice:(id)arg1;
- (id)serviceType;
- (id)serviceTypes;
- (void)setBleDevice:(id)arg1;
- (void)setBonjourDevice:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdsDevice:(id)arg1;
- (void)setIdsDeviceIdentifier:(id)arg1;
- (void)setLinkType:(int)arg1;
- (void)setMediaRemoteIdentifier:(id)arg1;
- (void)setMediaRouteIdentifier:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPresent:(bool)arg1;
- (void)setServiceTypes:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (void)setStatusFlags:(unsigned long long)arg1;
- (id)sourceVersion;
- (unsigned long long)statusFlags;
- (unsigned int)updateWithBonjourDevice:(id)arg1;
- (unsigned int)updateWithIDSDevice:(id)arg1;
- (unsigned int)updateWithSFDevice:(id)arg1;

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