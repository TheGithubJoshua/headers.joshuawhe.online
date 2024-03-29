<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CUWiFiDevice.h</title>
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

/PrivateFrameworks/CoreUtils.framework/CUWiFiDevice.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils (592.2)
 */

@interface CUWiFiDevice : NSObject {
    NSData * _bssid;
    NSData * _deviceIDOUI;
    NSData * _deviceIDSetupHash;
    NSData * _deviceIEBluetoothMAC;
    unsigned int  _deviceIECategory;
    NSData * _deviceIEDeviceID;
    unsigned int  _deviceIEFlags;
    NSString * _deviceIEManufacturer;
    NSString * _deviceIEModel;
    NSString * _deviceIEName;
    NSUUID * _identifier;
    NSData * _ieData;
    id  _platformObject;
    int  _present;
    NSDictionary * _rawScanResult;
    int  _rssi;
    NSString * _ssid;
}

@property (nonatomic, copy) NSData *bssid;
@property (nonatomic, copy) NSData *deviceIDOUI;
@property (nonatomic, copy) NSData *deviceIDSetupHash;
@property (nonatomic, copy) NSData *deviceIEBluetoothMAC;
@property (nonatomic) unsigned int deviceIECategory;
@property (nonatomic, copy) NSData *deviceIEDeviceID;
@property (nonatomic) unsigned int deviceIEFlags;
@property (nonatomic, copy) NSString *deviceIEManufacturer;
@property (nonatomic, copy) NSString *deviceIEModel;
@property (nonatomic, copy) NSString *deviceIEName;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *ieData;
@property (nonatomic, retain) id platformObject;
@property (nonatomic) int present;
@property (nonatomic, copy) NSDictionary *rawScanResult;
@property (nonatomic) int rssi;
@property (nonatomic, copy) NSString *ssid;

- (void).cxx_destruct;
- (unsigned int)_updateWithDeviceIE:(const char *)arg1 end:(const char *)arg2;
- (id)bssid;
- (id)description;
- (id)deviceIDOUI;
- (id)deviceIDSetupHash;
- (id)deviceIEBluetoothMAC;
- (unsigned int)deviceIECategory;
- (id)deviceIEDeviceID;
- (unsigned int)deviceIEFlags;
- (id)deviceIEManufacturer;
- (id)deviceIEModel;
- (id)deviceIEName;
- (id)identifier;
- (id)ieData;
- (id)platformObject;
- (int)present;
- (id)rawScanResult;
- (int)rssi;
- (void)setBssid:(id)arg1;
- (void)setDeviceIDOUI:(id)arg1;
- (void)setDeviceIDSetupHash:(id)arg1;
- (void)setDeviceIEBluetoothMAC:(id)arg1;
- (void)setDeviceIECategory:(unsigned int)arg1;
- (void)setDeviceIEDeviceID:(id)arg1;
- (void)setDeviceIEFlags:(unsigned int)arg1;
- (void)setDeviceIEManufacturer:(id)arg1;
- (void)setDeviceIEModel:(id)arg1;
- (void)setDeviceIEName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIeData:(id)arg1;
- (void)setPlatformObject:(id)arg1;
- (void)setPresent:(int)arg1;
- (void)setRawScanResult:(id)arg1;
- (void)setRssi:(int)arg1;
- (void)setSsid:(id)arg1;
- (id)ssid;

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
