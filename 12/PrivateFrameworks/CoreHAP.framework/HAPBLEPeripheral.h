<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HAPBLEPeripheral.h</title>
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

/PrivateFrameworks/CoreHAP.framework/HAPBLEPeripheral.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP (484.7.17.1)
 */

@interface HAPBLEPeripheral : HMFObject {
    NSString * _accessoryName;
    NSNumber * _advInterval;
    NSNumber * _averageRSSI;
    NSNumber * _category;
    NSNumber * _compatibleVersion;
    NSNumber * _configNumber;
    NSData * _encryptedPayload;
    NSNumber * _hkType;
    double  _lastSeen;
    NSString * _pairingIdentifier;
    NSNumber * _pairingStatusFlag;
    NSUUID * _peripheralUUID;
    NSData * _setupHash;
    NSNumber * _stateNumber;
}

@property (nonatomic, retain) NSString *accessoryName;
@property (nonatomic, retain) NSNumber *advInterval;
@property (nonatomic, retain) NSNumber *averageRSSI;
@property (nonatomic, retain) NSNumber *category;
@property (nonatomic, retain) NSNumber *compatibleVersion;
@property (nonatomic, retain) NSNumber *configNumber;
@property (nonatomic, copy) NSData *encryptedPayload;
@property (nonatomic, retain) NSNumber *hkType;
@property (nonatomic) double lastSeen;
@property (nonatomic, retain) NSString *pairingIdentifier;
@property (nonatomic, retain) NSNumber *pairingStatusFlag;
@property (nonatomic, retain) NSUUID *peripheralUUID;
@property (nonatomic, readonly) NSData *setupHash;
@property (nonatomic, retain) NSNumber *stateNumber;

- (void).cxx_destruct;
- (void)_resetAverageRSSI;
- (id)accessoryName;
- (id)advInterval;
- (id)averageRSSI;
- (id)category;
- (id)compatibleVersion;
- (id)configNumber;
- (id)description;
- (id)encryptedPayload;
- (unsigned long long)hash;
- (id)hkType;
- (id)initWithName:(id)arg1 peripheralUUID:(id)arg2 hkType:(id)arg3 advInterval:(id)arg4 pairingStatusFlag:(id)arg5 pairingIdentifier:(id)arg6 category:(id)arg7 stateNumber:(id)arg8 configNumber:(id)arg9 hapBLECompatibleVersion:(id)arg10 setupHash:(id)arg11 encryptedPayload:(id)arg12;
- (bool)isEqual:(id)arg1;
- (double)lastSeen;
- (id)pairingIdentifier;
- (id)pairingStatusFlag;
- (id)peripheralUUID;
- (void)setAccessoryName:(id)arg1;
- (void)setAdvInterval:(id)arg1;
- (void)setAverageRSSI:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setCompatibleVersion:(id)arg1;
- (void)setConfigNumber:(id)arg1;
- (void)setEncryptedPayload:(id)arg1;
- (void)setHkType:(id)arg1;
- (void)setLastSeen:(double)arg1;
- (void)setPairingIdentifier:(id)arg1;
- (void)setPairingStatusFlag:(id)arg1;
- (void)setPeripheralUUID:(id)arg1;
- (void)setStateNumber:(id)arg1;
- (id)setupHash;
- (id)stateNumber;
- (void)updateStateNumber:(id)arg1;
- (bool)updateWithPeripheral:(id)arg1;

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
