<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NFHardwareSecureElementInfo.h</title>
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

/PrivateFrameworks/NearField.framework/NFHardwareSecureElementInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField (296.3)
 */

@interface NFHardwareSecureElementInfo : NSObject <NSSecureCoding> {
    unsigned long long  _OSMode;
    unsigned long long  _OSVersion;
    unsigned long long  _appletMap;
    NSString * _atrString;
    NSArray * _bootHistory;
    NSNumber * _compiledFWVersion;
    unsigned long long  _deviceType;
    NSString * _ecdsaCertificate;
    NSString * _eckaCertificate;
    NSString * _firmwareKeyID;
    unsigned long long  _firmwareVersion;
    unsigned long long  _hardwareVersion;
    NSString * _identifier;
    bool  _jcopTooOld;
    NSData * _manifestQuery;
    unsigned long long  _migrationContext;
    NSNumber * _migrationInstances;
    NSNumber * _migrationPackages;
    unsigned long long  _migrationState;
    NSString * _nonce;
    NSString * _osKeyID;
    bool  _osUpdateMode;
    unsigned long long  _osid;
    NSNumber * _otherOSValid;
    NSNumber * _persistentConfigID;
    bool  _personalisable;
    NSString * _platformIdentifier;
    NSNumber * _referenceCounter;
    bool  _restrictedMode;
    NSString * _rootKeyID;
    NSString * _rsaCertificate;
    unsigned long long  _seType;
    NSNumber * _sequenceCounter;
    NSString * _serialNumber;
    unsigned long long  _signingKeyType;
    unsigned long long  _supportedTechnologies;
}

@property (nonatomic, readonly) unsigned long long OSMode;
@property (nonatomic, readonly) unsigned long long OSVersion;
@property (nonatomic, readonly) unsigned long long appletMap;
@property (nonatomic, readonly) NSString *atrString;
@property (nonatomic, readonly) NSArray *bootHistory;
@property (nonatomic, readonly) NSNumber *compiledFWVersion;
@property (nonatomic, readonly) unsigned long long deviceType;
@property (nonatomic, readonly) NSString *ecdsaCertificate;
@property (nonatomic, readonly) NSString *eckaCertificate;
@property (nonatomic, readonly) NSString *firmwareKeyID;
@property (nonatomic, readonly) unsigned long long firmwareVersion;
@property (nonatomic, readonly) unsigned long long hardwareVersion;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool jcopTooOld;
@property (nonatomic, readonly) NSData *manifestQuery;
@property (nonatomic, readonly) unsigned long long migrationContext;
@property (nonatomic, readonly) NSNumber *migrationInstances;
@property (nonatomic, readonly) NSNumber *migrationPackages;
@property (nonatomic, readonly) unsigned long long migrationState;
@property (nonatomic, readonly) NSString *nonce;
@property (nonatomic, readonly) NSString *osKeyID;
@property (nonatomic, readonly) bool osUpdateMode;
@property (nonatomic, readonly) unsigned long long osid;
@property (nonatomic, readonly) NSNumber *otherOSValid;
@property (nonatomic, readonly) NSNumber *persistentConfigID;
@property (nonatomic, readonly) bool personalisable;
@property (nonatomic, readonly) NSString *platformIdentifier;
@property (nonatomic, readonly) NSNumber *referenceCounter;
@property (nonatomic, readonly) bool restrictedMode;
@property (nonatomic, readonly) NSString *rootKeyID;
@property (nonatomic, readonly) NSString *rsaCertificate;
@property (nonatomic, readonly) unsigned long long seType;
@property (nonatomic, readonly) NSNumber *sequenceCounter;
@property (nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) unsigned long long signingKeyType;
@property (nonatomic, readonly) unsigned long long supportedTechnologies;

+ (bool)supportsSecureCoding;

- (unsigned long long)OSMode;
- (unsigned long long)OSVersion;
- (void)_setIsInRestrictedMode:(bool)arg1;
- (unsigned long long)appletMap;
- (id)asDictionary;
- (id)atrString;
- (id)bootHistory;
- (id)compiledFWVersion;
- (void)dealloc;
- (unsigned long long)deviceType;
- (id)ecdsaCertificate;
- (id)eckaCertificate;
- (void)encodeWithCoder:(id)arg1;
- (id)firmwareKeyID;
- (unsigned long long)firmwareVersion;
- (unsigned long long)hardwareVersion;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)jcopTooOld;
- (id)manifestQuery;
- (unsigned long long)migrationContext;
- (id)migrationInstances;
- (id)migrationPackages;
- (unsigned long long)migrationState;
- (id)nonce;
- (id)osKeyID;
- (bool)osUpdateMode;
- (unsigned long long)osid;
- (id)otherOSValid;
- (id)persistentConfigID;
- (bool)personalisable;
- (id)platformIdentifier;
- (id)referenceCounter;
- (bool)restrictedMode;
- (id)rootKeyID;
- (id)rsaCertificate;
- (unsigned long long)seType;
- (id)sequenceCounter;
- (id)serialNumber;
- (void)setBootHistory:(id)arg1;
- (unsigned long long)signingKeyType;
- (unsigned long long)supportedTechnologies;

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
