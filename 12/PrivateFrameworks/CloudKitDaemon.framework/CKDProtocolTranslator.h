<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKDProtocolTranslator.h</title>
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

/PrivateFrameworks/CloudKitDaemon.framework/CKDProtocolTranslator.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon (736.235)
 */

@interface CKDProtocolTranslator : NSObject {
    NSString * _bundleIdentifier;
    NSString * _containerScopedUserID;
    long long  _databaseScope;
    bool  _dontCreateValidatingParentReferences;
    NSMutableDictionary * _downloadPreauthorizationMap;
    <CKDProtocolTranslatorIdentityDelegate> * _identityDelegate;
    NSString * _orgAdminUserID;
    NSString * _overriddenContainerScopedUserID;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *containerScopedUserID;
@property (nonatomic, readonly) long long databaseScope;
@property (nonatomic) bool dontCreateValidatingParentReferences;
@property (nonatomic, retain) NSMutableDictionary *downloadPreauthorizationMap;
@property (nonatomic) <CKDProtocolTranslatorIdentityDelegate> *identityDelegate;
@property (nonatomic, copy) NSString *orgAdminUserID;
@property (nonatomic, copy) NSString *overriddenContainerScopedUserID;
@property (nonatomic, readonly) CKDPIdentifier *pUserID;

+ (id)translatorIgnoringUserIDsWithDatabaseScope:(long long)arg1;

- (void).cxx_destruct;
- (id)_initWithContainerScopedUserID:(id)arg1 orgAdminUserID:(id)arg2 bundleIdentifier:(id)arg3 databaseScope:(long long)arg4;
- (bool)_isDefaultUserNameFromClient:(id)arg1;
- (bool)_isDefaultUserNameFromServer:(id)arg1;
- (id)_pRecordFromRecordSansValues:(id)arg1 forCache:(bool)arg2;
- (bool)_valueTypeIsAnEncryptedBytesTypeForField:(id)arg1;
- (id)ancestorFromPAncestor:(id)arg1 error:(id*)arg2;
- (id)assetFromPAsset:(id)arg1 error:(id*)arg2;
- (id)bundleIdentifier;
- (unsigned long long)capabilitiesFromPZoneCapabilities:(id)arg1;
- (void)consumeResponseHeader:(id)arg1;
- (id)containerPrivacySettingsFromPContainerPrivacySettings:(id)arg1;
- (id)containerScopedUserID;
- (long long)databaseScope;
- (id)deltaPRecordFromRecord:(id)arg1 withAllFields:(bool)arg2 outDeletedMergeFields:(id*)arg3 outKeysToSend:(id*)arg4;
- (bool)dontCreateValidatingParentReferences;
- (id)downloadPreauthorizationMap;
- (id)encryptedFieldValueOfType:(int)arg1 withObject:(id)arg2;
- (id)encryptedObjectRepresentationFromFieldValue:(id)arg1;
- (id)fieldValueFromObject:(id)arg1;
- (id)fieldValueListOfType:(int)arg1 withList:(id)arg2;
- (id)fieldValueOfType:(int)arg1 withObject:(id)arg2;
- (int)fieldValueTypeFromEncryptedDataObject:(id)arg1 isInList:(bool)arg2;
- (int)fieldValueTypeFromObject:(id)arg1;
- (id)identityDelegate;
- (id)identityFromPUser:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 databaseScope:(long long)arg2;
- (id)initWithContainerScopedUserID:(id)arg1 orgAdminUserID:(id)arg2 bundleIdentifier:(id)arg3 databaseScope:(long long)arg4;
- (id)locationFieldValueWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)notificationFromPPushMessage:(id)arg1;
- (bool)objectIsAnEncryptedType:(id)arg1;
- (id)objectRepresentationFromFieldValue:(id)arg1;
- (id)orgAdminUserID;
- (id)overriddenContainerScopedUserID;
- (id)pAliasWithEmailAddress:(id)arg1;
- (id)pAliasWithHashedStringID:(id)arg1 type:(int)arg2;
- (id)pAliasWithIdentityLookupInfo:(id)arg1;
- (id)pAliasWithPhoneNumber:(id)arg1;
- (id)pAliasWithUserRecordID:(id)arg1;
- (id)pAssetFromAsset:(id)arg1;
- (id)pContainerScopedRecordIdentifierWithPRecordIdentifier:(id)arg1;
- (id)pContainerScopedRecordZoneIdentifierFromFromPRecordZoneIdentifier:(id)arg1;
- (id)pContainerScopedUserIdentifierFromPUserIdentifier:(id)arg1;
- (id)pFieldWithKey:(id)arg1 value:(id)arg2;
- (id)pIdentifierFromUserRecordID:(id)arg1;
- (id)pPackageFromPackage:(id)arg1;
- (id)pParticipantFromShareParticipant:(id)arg1 forCache:(bool)arg2;
- (id)pQueryFromQuery:(id)arg1 error:(id*)arg2;
- (id)pRecordFromRecord:(id)arg1;
- (id)pRecordFromRecord:(id)arg1 forCache:(bool)arg2;
- (id)pRecordIdentifierFromRecordID:(id)arg1;
- (id)pRecordIdentifierFromUserRecordName:(id)arg1;
- (id)pRecordZoneFromRecordZone:(id)arg1;
- (id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1;
- (id)pReferenceFromReference:(id)arg1 error:(id*)arg2;
- (id)pShareFromShare:(id)arg1 forCache:(bool)arg2;
- (id)pShareIdentifierFromRecordID:(id)arg1;
- (id)pSubscriptionFromSubscription:(id)arg1 error:(id*)arg2;
- (id)pUserID;
- (id)pUserIdentifierFromUserRecordName:(id)arg1;
- (id)packageFromPPackage:(id)arg1 error:(id*)arg2;
- (id)recordFromPRecord:(id)arg1 error:(id*)arg2;
- (id)recordIDFromPRecordIdentifier:(id)arg1 error:(id*)arg2;
- (id)recordIDFromPShareIdentifier:(id)arg1 error:(id*)arg2;
- (id)recordIDFromPUserName:(id)arg1 error:(id*)arg2;
- (id)recordZoneFromPRecordZone:(id)arg1 error:(id*)arg2;
- (id)recordZoneIDFromPRecordZoneIdentifier:(id)arg1 error:(id*)arg2;
- (id)referenceFromPReference:(id)arg1 error:(id*)arg2;
- (void)setContainerScopedUserID:(id)arg1;
- (void)setDontCreateValidatingParentReferences:(bool)arg1;
- (void)setDownloadPreauthorizationMap:(id)arg1;
- (void)setIdentityDelegate:(id)arg1;
- (void)setOrgAdminUserID:(id)arg1;
- (void)setOverriddenContainerScopedUserID:(id)arg1;
- (id)shareFromPShare:(id)arg1 error:(id*)arg2;
- (id)shareParticipantFromPParticipant:(id)arg1 error:(id*)arg2;
- (id)subscriptionFromPSubscription:(id)arg1 error:(id*)arg2;
- (id)userNameFromPIdentifier:(id)arg1 error:(id*)arg2;

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