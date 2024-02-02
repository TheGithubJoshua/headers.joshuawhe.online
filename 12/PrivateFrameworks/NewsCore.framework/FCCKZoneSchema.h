<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FCCKZoneSchema.h</title>
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

/PrivateFrameworks/NewsCore.framework/FCCKZoneSchema.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore (2166)
 */

@interface FCCKZoneSchema : NSObject {
    NSString * _clientZoneName;
    bool  _isDefaultZone;
    NSDictionary * _recordSchemasByClientType;
    NSDictionary * _recordSchemasByServerType;
    NSString * _serverZoneName;
    bool  _shouldUseSecureContainer;
    bool  _shouldUseZoneWidePCS;
    NSDictionary * _staticClientRecordNamesByServerName;
    NSArray * _staticRecordNamesEligibleForMigration;
    NSDictionary * _staticServerRecordNamesByClientName;
    bool  _supportsRecordFieldEncryption;
    bool  _supportsRecordNameEncryption;
}

@property (nonatomic, readonly, copy) NSArray *allClientRecordTypes;
@property (nonatomic, readonly, copy) NSString *clientZoneName;
@property (nonatomic, readonly) bool isDefaultZone;
@property (nonatomic, readonly, copy) NSString *serverZoneName;
@property (nonatomic, readonly) bool shouldUseSecureContainer;
@property (nonatomic, readonly) bool shouldUseZoneWidePCS;
@property (nonatomic, readonly, copy) NSArray *staticRecordNamesEligibleForMigration;
@property (nonatomic, readonly) bool supportsRecordFieldEncryption;
@property (nonatomic, readonly) bool supportsRecordNameEncryption;

+ (id)defaultZoneWithRecords:(id)arg1 staticRecordNames:(id)arg2 staticRecordNameMigrationBlacklist:(id)arg3 shouldUseSecureContainer:(bool)arg4;
+ (id)zoneWithClientName:(id)arg1 serverName:(id)arg2 records:(id)arg3;
+ (id)zoneWithClientName:(id)arg1 serverName:(id)arg2 records:(id)arg3 staticRecordNames:(id)arg4 shouldEncryptRecordNames:(bool)arg5 shouldUseZoneWidePCS:(bool)arg6 shouldUseSecureContainer:(bool)arg7;

- (void).cxx_destruct;
- (id)allClientRecordTypes;
- (id)clientRecordNameForServerRecordName:(id)arg1;
- (id)clientZoneName;
- (void)enumerateRecordSchemasWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithClientZoneName:(id)arg1 serverZoneName:(id)arg2 recordSchemas:(id)arg3 staticRecordNames:(id)arg4 staticRecordNameMigrationBlacklist:(id)arg5 shouldEncryptRecordNames:(bool)arg6 shouldUseZoneWidePCS:(bool)arg7 shouldUseSecureContainer:(bool)arg8;
- (bool)isDefaultZone;
- (bool)isKnownClientRecordName:(id)arg1;
- (bool)isKnownServerRecordName:(id)arg1;
- (id)schemaForRecordWithClientType:(id)arg1;
- (id)schemaForRecordWithServerType:(id)arg1;
- (id)serverRecordNameForClientRecordName:(id)arg1;
- (id)serverZoneName;
- (bool)shouldDecryptServerRecordName:(id)arg1;
- (bool)shouldEncryptClientRecordName:(id)arg1;
- (bool)shouldUseSecureContainer;
- (bool)shouldUseZoneWidePCS;
- (id)staticRecordNamesEligibleForMigration;
- (bool)supportsRecordFieldEncryption;
- (bool)supportsRecordNameEncryption;

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