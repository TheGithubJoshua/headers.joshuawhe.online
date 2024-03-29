<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ACProtobufAccount.h</title>
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

/Frameworks/Accounts.framework/ACProtobufAccount.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Accounts.framework/Accounts (113)
 */

@interface ACProtobufAccount : PBCodable <NSCopying> {
    NSString * _accountDescription;
    ACProtobufAccountType * _accountType;
    bool  _active;
    bool  _authenticated;
    NSString * _authenticationType;
    ACProtobufAccountCredential * _credential;
    NSString * _credentialType;
    NSMutableArray * _dataclassProperties;
    ACProtobufDate * _date;
    NSMutableArray * _dirtyAccountProperties;
    NSMutableArray * _dirtyDataclassProperties;
    NSMutableArray * _dirtyProperties;
    NSMutableArray * _enabledDataclasses;
    NSString * _identifier;
    ACProtobufDate * _lastCredentialRenewalRejectionDate;
    ACProtobufURL * _objectID;
    NSString * _owningBundleID;
    NSString * _parentAccountIdentifier;
    NSMutableArray * _properties;
    NSMutableArray * _provisionedDataclasses;
    bool  _supportsAuthentication;
    NSString * _username;
    bool  _visible;
}

@property (nonatomic, retain) NSString *accountDescription;
@property (nonatomic, retain) ACProtobufAccountType *accountType;
@property (nonatomic) bool active;
@property (nonatomic) bool authenticated;
@property (nonatomic, retain) NSString *authenticationType;
@property (nonatomic, retain) ACProtobufAccountCredential *credential;
@property (nonatomic, retain) NSString *credentialType;
@property (nonatomic, retain) NSMutableArray *dataclassProperties;
@property (nonatomic, copy) NSDictionary *dataclassPropertiesDictionary;
@property (nonatomic, retain) ACProtobufDate *date;
@property (nonatomic, retain) NSMutableArray *dirtyAccountProperties;
@property (nonatomic, retain) NSMutableArray *dirtyDataclassProperties;
@property (nonatomic, retain) NSMutableArray *dirtyProperties;
@property (nonatomic, retain) NSMutableArray *enabledDataclasses;
@property (nonatomic, readonly) bool hasAccountDescription;
@property (nonatomic, readonly) bool hasAuthenticationType;
@property (nonatomic, readonly) bool hasCredential;
@property (nonatomic, readonly) bool hasCredentialType;
@property (nonatomic, readonly) bool hasDate;
@property (nonatomic, readonly) bool hasLastCredentialRenewalRejectionDate;
@property (nonatomic, readonly) bool hasObjectID;
@property (nonatomic, readonly) bool hasOwningBundleID;
@property (nonatomic, readonly) bool hasParentAccountIdentifier;
@property (nonatomic, readonly) bool hasUsername;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) ACProtobufDate *lastCredentialRenewalRejectionDate;
@property (nonatomic, retain) ACProtobufURL *objectID;
@property (nonatomic, retain) NSString *owningBundleID;
@property (nonatomic, retain) NSString *parentAccountIdentifier;
@property (nonatomic, retain) NSMutableArray *properties;
@property (nonatomic, copy) NSDictionary *propertiesDictionary;
@property (nonatomic, retain) NSMutableArray *provisionedDataclasses;
@property (nonatomic) bool supportsAuthentication;
@property (nonatomic, retain) NSString *username;
@property (nonatomic) bool visible;

+ (Class)dataclassPropertiesType;
+ (Class)dirtyAccountPropertiesType;
+ (Class)dirtyDataclassPropertiesType;
+ (Class)dirtyPropertiesType;
+ (Class)enabledDataclassesType;
+ (Class)propertiesType;
+ (Class)provisionedDataclassesType;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountType;
- (bool)active;
- (void)addDataclassProperties:(id)arg1;
- (void)addDirtyAccountProperties:(id)arg1;
- (void)addDirtyDataclassProperties:(id)arg1;
- (void)addDirtyProperties:(id)arg1;
- (void)addEnabledDataclasses:(id)arg1;
- (void)addProperties:(id)arg1;
- (void)addProvisionedDataclasses:(id)arg1;
- (bool)authenticated;
- (id)authenticationType;
- (void)clearDataclassProperties;
- (void)clearDirtyAccountProperties;
- (void)clearDirtyDataclassProperties;
- (void)clearDirtyProperties;
- (void)clearEnabledDataclasses;
- (void)clearProperties;
- (void)clearProvisionedDataclasses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credential;
- (id)credentialType;
- (id)dataclassProperties;
- (id)dataclassPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataclassPropertiesCount;
- (id)dataclassPropertiesDictionary;
- (id)date;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dirtyAccountProperties;
- (id)dirtyAccountPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dirtyAccountPropertiesCount;
- (id)dirtyDataclassProperties;
- (id)dirtyDataclassPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dirtyDataclassPropertiesCount;
- (id)dirtyProperties;
- (id)dirtyPropertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)dirtyPropertiesCount;
- (id)enabledDataclasses;
- (id)enabledDataclassesAtIndex:(unsigned long long)arg1;
- (unsigned long long)enabledDataclassesCount;
- (bool)hasAccountDescription;
- (bool)hasAuthenticationType;
- (bool)hasCredential;
- (bool)hasCredentialType;
- (bool)hasDate;
- (bool)hasLastCredentialRenewalRejectionDate;
- (bool)hasObjectID;
- (bool)hasOwningBundleID;
- (bool)hasParentAccountIdentifier;
- (bool)hasUsername;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)lastCredentialRenewalRejectionDate;
- (void)mergeFrom:(id)arg1;
- (id)objectID;
- (id)owningBundleID;
- (id)parentAccountIdentifier;
- (id)properties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (id)propertiesDictionary;
- (id)provisionedDataclasses;
- (id)provisionedDataclassesAtIndex:(unsigned long long)arg1;
- (unsigned long long)provisionedDataclassesCount;
- (bool)readFrom:(id)arg1;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountType:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setAuthenticated:(bool)arg1;
- (void)setAuthenticationType:(id)arg1;
- (void)setCredential:(id)arg1;
- (void)setCredentialType:(id)arg1;
- (void)setDataclassProperties:(id)arg1;
- (void)setDataclassPropertiesDictionary:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDirtyAccountProperties:(id)arg1;
- (void)setDirtyDataclassProperties:(id)arg1;
- (void)setDirtyProperties:(id)arg1;
- (void)setEnabledDataclasses:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastCredentialRenewalRejectionDate:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setOwningBundleID:(id)arg1;
- (void)setParentAccountIdentifier:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setPropertiesDictionary:(id)arg1;
- (void)setProvisionedDataclasses:(id)arg1;
- (void)setSupportsAuthentication:(bool)arg1;
- (void)setUsername:(id)arg1;
- (void)setVisible:(bool)arg1;
- (bool)supportsAuthentication;
- (id)username;
- (bool)visible;
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
