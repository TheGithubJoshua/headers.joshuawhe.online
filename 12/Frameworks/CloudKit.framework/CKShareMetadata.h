<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKShareMetadata.h</title>
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

/Frameworks/CloudKit.framework/CKShareMetadata.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit (736.235)
 */

@interface CKShareMetadata : NSObject <NSCopying, NSSecureCoding> {
    bool  _acceptedInProcess;
    CKShareParticipant * _callingParticipant;
    NSString * _containerIdentifier;
    NSData * _encryptedData;
    long long  _environment;
    NSArray * _outOfNetworkMatches;
    CKUserIdentity * _ownerIdentity;
    long long  _participantPermission;
    long long  _participantRole;
    long long  _participantStatus;
    NSData * _privateToken;
    NSData * _protectedFullToken;
    NSData * _publicToken;
    CKRecord * _rootRecord;
    CKRecordID * _rootRecordID;
    NSString * _rootRecordType;
    CKShare * _share;
    NSArray * _sharedItemHierarchy;
}

@property (nonatomic) bool acceptedInProcess;
@property (getter=baseToken, nonatomic, readonly) NSString *baseToken;
@property (nonatomic, copy) CKShareParticipant *callingParticipant;
@property (nonatomic, copy) NSString *containerIdentifier;
@property (nonatomic, retain) NSData *encryptedData;
@property (nonatomic) long long environment;
@property (nonatomic, retain) NSArray *outOfNetworkMatches;
@property (nonatomic, retain) CKUserIdentity *ownerIdentity;
@property (nonatomic) long long participantPermission;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantStatus;
@property (nonatomic, readonly) long long participantType;
@property (nonatomic, copy) NSData *privateToken;
@property (nonatomic, copy) NSData *protectedFullToken;
@property (nonatomic, copy) NSData *publicToken;
@property (nonatomic, retain) CKRecord *rootRecord;
@property (nonatomic, copy) CKRecordID *rootRecordID;
@property (nonatomic, retain) NSString *rootRecordType;
@property (nonatomic, retain) CKShare *share;
@property (nonatomic, copy) NSArray *sharedItemHierarchy;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (bool)acceptedInProcess;
- (id)baseToken;
- (id)callingParticipant;
- (id)ckShortDescription;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedData;
- (long long)environment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)outOfNetworkMatches;
- (id)ownerIdentity;
- (long long)participantPermission;
- (long long)participantRole;
- (long long)participantStatus;
- (long long)participantType;
- (id)privateToken;
- (id)protectedFullToken;
- (id)publicToken;
- (id)rootRecord;
- (id)rootRecordID;
- (id)rootRecordType;
- (void)setAcceptedInProcess:(bool)arg1;
- (void)setCallingParticipant:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setEncryptedData:(id)arg1;
- (void)setEnvironment:(long long)arg1;
- (void)setOutOfNetworkMatches:(id)arg1;
- (void)setOwnerIdentity:(id)arg1;
- (void)setParticipantPermission:(long long)arg1;
- (void)setParticipantRole:(long long)arg1;
- (void)setParticipantStatus:(long long)arg1;
- (void)setPrivateToken:(id)arg1;
- (void)setProtectedFullToken:(id)arg1;
- (void)setPublicToken:(id)arg1;
- (void)setRootRecord:(id)arg1;
- (void)setRootRecordID:(id)arg1;
- (void)setRootRecordType:(id)arg1;
- (void)setShare:(id)arg1;
- (void)setSharedItemHierarchy:(id)arg1;
- (id)share;
- (id)sharedItemHierarchy;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)_decryptDataWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 pcsManager:(id)arg2;
- (void)_encryptDataWithPCSBlob:(struct _OpaquePCSShareProtection { }*)arg1 pcsManager:(id)arg2;
- (bool)hasEncryptedData;
- (struct _OpaquePCSShareProtection { }*)publicPCS;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection { }*)arg1;

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
