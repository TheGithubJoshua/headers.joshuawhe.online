<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKDPRequestOperation.h</title>
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

/PrivateFrameworks/CloudKitDaemon.framework/CKDPRequestOperation.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon (736.235)
 */

@interface CKDPRequestOperation : PBCodable <NSCopying> {
    CKDPArchiveRecordsRequest * _archiveRecordsRequest;
    CKDPAssetUploadTokenRetrieveRequest * _assetUploadTokenRetrieveRequest;
    CKDPBundlesForContainerRequest * _bundlesForContainerRequest;
    CKDPDeleteCommentRequest * _deleteCommentRequest;
    CKDPDeleteContainerRequest * _deleteContainerRequest;
    CKDPFetchArchivedRecordsRequest * _fetchArchivedRecordsRequest;
    CKDPCodeFunctionInvokeRequest * _functionInvokeRequest;
    CKDPGetCommentRequest * _getCommentRequest;
    CKDPGetCommentsRequest * _getCommentsRequest;
    CKDPGetLikesRequest * _getLikesRequest;
    CKDPRequestOperationHeader * _header;
    CKDPLikeRequest * _likeRequest;
    CKDPMescalCertificateRequest * _mescalCertificateRequest;
    CKDPMescalSessionInfoRequest * _mescalSessionInfoRequest;
    CKDPMescalSignatureRequest * _mescalSignatureRequest;
    CKDPNotificationMarkReadRequest * _notificationMarkReadRequest;
    CKDPNotificationSyncRequest * _notificationSyncRequest;
    CKDPPostCommentRequest * _postCommentRequest;
    CKDPPulseRequest * _pulseRequest;
    CKDPQueryRetrieveRequest * _queryRetrieveRequest;
    CKDPRecordDeleteRequest * _recordDeleteRequest;
    CKDPRecordResolveTokenRequest * _recordResolveTokenRequest;
    CKDPRecordRetrieveAncestorsRequest * _recordRetrieveAncestorsRequest;
    CKDPRecordRetrieveChangesRequest * _recordRetrieveChangesRequest;
    CKDPRecordRetrieveRequest * _recordRetrieveRequest;
    CKDPRecordRetrieveVersionsRequest * _recordRetrieveVersionsRequest;
    CKDPRecordSaveRequest * _recordSaveRequest;
    CKDPOperation * _request;
    CKDPSetBadgeCountRequest * _setBadgeCountRequest;
    CKDPShareAcceptRequest * _shareAcceptRequest;
    CKDPShareDeleteRequest * _shareDeleteRequest;
    CKDPShareRetrieveRequest * _shareRetrieveRequest;
    CKDPShareSaveRequest * _shareSaveRequest;
    CKDPShareTokenDeleteRequest * _shareTokenDeleteRequest;
    CKDPShareTokenRetrieveRequest * _shareTokenRetrieveRequest;
    CKDPShareTokenSaveRequest * _shareTokenSaveRequest;
    CKDPShareVettingInitiateRequest * _shareVettingInitiateRequest;
    CKDPSubscriptionCreateRequest * _subscriptionCreateRequest;
    CKDPSubscriptionDeleteRequest * _subscriptionDeleteRequest;
    CKDPSubscriptionRetrieveRequest * _subscriptionRetrieveRequest;
    CKDPTokenRegistrationRequest * _tokenRegistrationRequest;
    CKDPTokenUnregistrationRequest * _tokenUnregistrationRequest;
    CKDPUnlikeRequest * _unlikeRequest;
    CKDPUserAvailableQuotaRequest * _userAvailableQuotaRequest;
    CKDPUserPrivacySettingsBatchLookupRequest * _userPrivacySettingsBatchLookupRequest;
    CKDPUserPrivacySettingsResetRequest * _userPrivacySettingsResetRequest;
    CKDPUserPrivacySettingsRetrieveRequest * _userPrivacySettingsRetrieveRequest;
    CKDPUserPrivacySettingsUpdateRequest * _userPrivacySettingsUpdateRequest;
    CKDPUserQueryRequest * _userQueryRequest;
    CKDPUserRetrieveRequest * _userRetrieveRequest;
    CKDPWebAuthTokenRetrieveRequest * _webAuthTokenRetrieveRequest;
    CKDPZoneDeleteRequest * _zoneDeleteRequest;
    CKDPZoneRetrieveChangesRequest * _zoneRetrieveChangesRequest;
    CKDPZoneRetrieveRequest * _zoneRetrieveRequest;
    CKDPZoneSaveRequest * _zoneSaveRequest;
}

@property (nonatomic, retain) CKDPArchiveRecordsRequest *archiveRecordsRequest;
@property (nonatomic, retain) CKDPAssetUploadTokenRetrieveRequest *assetUploadTokenRetrieveRequest;
@property (nonatomic, retain) CKDPBundlesForContainerRequest *bundlesForContainerRequest;
@property (nonatomic, retain) CKDPDeleteCommentRequest *deleteCommentRequest;
@property (nonatomic, retain) CKDPDeleteContainerRequest *deleteContainerRequest;
@property (nonatomic, retain) CKDPFetchArchivedRecordsRequest *fetchArchivedRecordsRequest;
@property (nonatomic, retain) CKDPCodeFunctionInvokeRequest *functionInvokeRequest;
@property (nonatomic, retain) CKDPGetCommentRequest *getCommentRequest;
@property (nonatomic, retain) CKDPGetCommentsRequest *getCommentsRequest;
@property (nonatomic, retain) CKDPGetLikesRequest *getLikesRequest;
@property (nonatomic, readonly) bool hasArchiveRecordsRequest;
@property (nonatomic, readonly) bool hasAssetUploadTokenRetrieveRequest;
@property (nonatomic, readonly) bool hasBundlesForContainerRequest;
@property (nonatomic, readonly) bool hasDeleteCommentRequest;
@property (nonatomic, readonly) bool hasDeleteContainerRequest;
@property (nonatomic, readonly) bool hasFetchArchivedRecordsRequest;
@property (nonatomic, readonly) bool hasFunctionInvokeRequest;
@property (nonatomic, readonly) bool hasGetCommentRequest;
@property (nonatomic, readonly) bool hasGetCommentsRequest;
@property (nonatomic, readonly) bool hasGetLikesRequest;
@property (nonatomic, readonly) bool hasHeader;
@property (nonatomic, readonly) bool hasLikeRequest;
@property (nonatomic, readonly) bool hasMescalCertificateRequest;
@property (nonatomic, readonly) bool hasMescalSessionInfoRequest;
@property (nonatomic, readonly) bool hasMescalSignatureRequest;
@property (nonatomic, readonly) bool hasNotificationMarkReadRequest;
@property (nonatomic, readonly) bool hasNotificationSyncRequest;
@property (nonatomic, readonly) bool hasPostCommentRequest;
@property (nonatomic, readonly) bool hasPulseRequest;
@property (nonatomic, readonly) bool hasQueryRetrieveRequest;
@property (nonatomic, readonly) bool hasRecordDeleteRequest;
@property (nonatomic, readonly) bool hasRecordResolveTokenRequest;
@property (nonatomic, readonly) bool hasRecordRetrieveAncestorsRequest;
@property (nonatomic, readonly) bool hasRecordRetrieveChangesRequest;
@property (nonatomic, readonly) bool hasRecordRetrieveRequest;
@property (nonatomic, readonly) bool hasRecordRetrieveVersionsRequest;
@property (nonatomic, readonly) bool hasRecordSaveRequest;
@property (nonatomic, readonly) bool hasRequest;
@property (nonatomic, readonly) bool hasSetBadgeCountRequest;
@property (nonatomic, readonly) bool hasShareAcceptRequest;
@property (nonatomic, readonly) bool hasShareDeleteRequest;
@property (nonatomic, readonly) bool hasShareRetrieveRequest;
@property (nonatomic, readonly) bool hasShareSaveRequest;
@property (nonatomic, readonly) bool hasShareTokenDeleteRequest;
@property (nonatomic, readonly) bool hasShareTokenRetrieveRequest;
@property (nonatomic, readonly) bool hasShareTokenSaveRequest;
@property (nonatomic, readonly) bool hasShareVettingInitiateRequest;
@property (nonatomic, readonly) bool hasSubscriptionCreateRequest;
@property (nonatomic, readonly) bool hasSubscriptionDeleteRequest;
@property (nonatomic, readonly) bool hasSubscriptionRetrieveRequest;
@property (nonatomic, readonly) bool hasTokenRegistrationRequest;
@property (nonatomic, readonly) bool hasTokenUnregistrationRequest;
@property (nonatomic, readonly) bool hasUnlikeRequest;
@property (nonatomic, readonly) bool hasUserAvailableQuotaRequest;
@property (nonatomic, readonly) bool hasUserPrivacySettingsBatchLookupRequest;
@property (nonatomic, readonly) bool hasUserPrivacySettingsResetRequest;
@property (nonatomic, readonly) bool hasUserPrivacySettingsRetrieveRequest;
@property (nonatomic, readonly) bool hasUserPrivacySettingsUpdateRequest;
@property (nonatomic, readonly) bool hasUserQueryRequest;
@property (nonatomic, readonly) bool hasUserRetrieveRequest;
@property (nonatomic, readonly) bool hasWebAuthTokenRetrieveRequest;
@property (nonatomic, readonly) bool hasZoneDeleteRequest;
@property (nonatomic, readonly) bool hasZoneRetrieveChangesRequest;
@property (nonatomic, readonly) bool hasZoneRetrieveRequest;
@property (nonatomic, readonly) bool hasZoneSaveRequest;
@property (nonatomic, retain) CKDPRequestOperationHeader *header;
@property (nonatomic, retain) CKDPLikeRequest *likeRequest;
@property (nonatomic, retain) CKDPMescalCertificateRequest *mescalCertificateRequest;
@property (nonatomic, retain) CKDPMescalSessionInfoRequest *mescalSessionInfoRequest;
@property (nonatomic, retain) CKDPMescalSignatureRequest *mescalSignatureRequest;
@property (nonatomic, retain) CKDPNotificationMarkReadRequest *notificationMarkReadRequest;
@property (nonatomic, retain) CKDPNotificationSyncRequest *notificationSyncRequest;
@property (nonatomic, retain) CKDPPostCommentRequest *postCommentRequest;
@property (nonatomic, retain) CKDPPulseRequest *pulseRequest;
@property (nonatomic, retain) CKDPQueryRetrieveRequest *queryRetrieveRequest;
@property (nonatomic, retain) CKDPRecordDeleteRequest *recordDeleteRequest;
@property (nonatomic, retain) CKDPRecordResolveTokenRequest *recordResolveTokenRequest;
@property (nonatomic, retain) CKDPRecordRetrieveAncestorsRequest *recordRetrieveAncestorsRequest;
@property (nonatomic, retain) CKDPRecordRetrieveChangesRequest *recordRetrieveChangesRequest;
@property (nonatomic, retain) CKDPRecordRetrieveRequest *recordRetrieveRequest;
@property (nonatomic, retain) CKDPRecordRetrieveVersionsRequest *recordRetrieveVersionsRequest;
@property (nonatomic, retain) CKDPRecordSaveRequest *recordSaveRequest;
@property (nonatomic, retain) CKDPOperation *request;
@property (nonatomic, retain) CKDPSetBadgeCountRequest *setBadgeCountRequest;
@property (nonatomic, retain) CKDPShareAcceptRequest *shareAcceptRequest;
@property (nonatomic, retain) CKDPShareDeleteRequest *shareDeleteRequest;
@property (nonatomic, retain) CKDPShareRetrieveRequest *shareRetrieveRequest;
@property (nonatomic, retain) CKDPShareSaveRequest *shareSaveRequest;
@property (nonatomic, retain) CKDPShareTokenDeleteRequest *shareTokenDeleteRequest;
@property (nonatomic, retain) CKDPShareTokenRetrieveRequest *shareTokenRetrieveRequest;
@property (nonatomic, retain) CKDPShareTokenSaveRequest *shareTokenSaveRequest;
@property (nonatomic, retain) CKDPShareVettingInitiateRequest *shareVettingInitiateRequest;
@property (nonatomic, retain) CKDPSubscriptionCreateRequest *subscriptionCreateRequest;
@property (nonatomic, retain) CKDPSubscriptionDeleteRequest *subscriptionDeleteRequest;
@property (nonatomic, retain) CKDPSubscriptionRetrieveRequest *subscriptionRetrieveRequest;
@property (nonatomic, retain) CKDPTokenRegistrationRequest *tokenRegistrationRequest;
@property (nonatomic, retain) CKDPTokenUnregistrationRequest *tokenUnregistrationRequest;
@property (nonatomic, retain) CKDPUnlikeRequest *unlikeRequest;
@property (nonatomic, retain) CKDPUserAvailableQuotaRequest *userAvailableQuotaRequest;
@property (nonatomic, retain) CKDPUserPrivacySettingsBatchLookupRequest *userPrivacySettingsBatchLookupRequest;
@property (nonatomic, retain) CKDPUserPrivacySettingsResetRequest *userPrivacySettingsResetRequest;
@property (nonatomic, retain) CKDPUserPrivacySettingsRetrieveRequest *userPrivacySettingsRetrieveRequest;
@property (nonatomic, retain) CKDPUserPrivacySettingsUpdateRequest *userPrivacySettingsUpdateRequest;
@property (nonatomic, retain) CKDPUserQueryRequest *userQueryRequest;
@property (nonatomic, retain) CKDPUserRetrieveRequest *userRetrieveRequest;
@property (nonatomic, retain) CKDPWebAuthTokenRetrieveRequest *webAuthTokenRetrieveRequest;
@property (nonatomic, retain) CKDPZoneDeleteRequest *zoneDeleteRequest;
@property (nonatomic, retain) CKDPZoneRetrieveChangesRequest *zoneRetrieveChangesRequest;
@property (nonatomic, retain) CKDPZoneRetrieveRequest *zoneRetrieveRequest;
@property (nonatomic, retain) CKDPZoneSaveRequest *zoneSaveRequest;

- (void).cxx_destruct;
- (id)archiveRecordsRequest;
- (id)assetUploadTokenRetrieveRequest;
- (id)bundlesForContainerRequest;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deleteCommentRequest;
- (id)deleteContainerRequest;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fetchArchivedRecordsRequest;
- (id)functionInvokeRequest;
- (id)getCommentRequest;
- (id)getCommentsRequest;
- (id)getLikesRequest;
- (bool)hasArchiveRecordsRequest;
- (bool)hasAssetUploadTokenRetrieveRequest;
- (bool)hasBundlesForContainerRequest;
- (bool)hasDeleteCommentRequest;
- (bool)hasDeleteContainerRequest;
- (bool)hasFetchArchivedRecordsRequest;
- (bool)hasFunctionInvokeRequest;
- (bool)hasGetCommentRequest;
- (bool)hasGetCommentsRequest;
- (bool)hasGetLikesRequest;
- (bool)hasHeader;
- (bool)hasLikeRequest;
- (bool)hasMescalCertificateRequest;
- (bool)hasMescalSessionInfoRequest;
- (bool)hasMescalSignatureRequest;
- (bool)hasNotificationMarkReadRequest;
- (bool)hasNotificationSyncRequest;
- (bool)hasPostCommentRequest;
- (bool)hasPulseRequest;
- (bool)hasQueryRetrieveRequest;
- (bool)hasRecordDeleteRequest;
- (bool)hasRecordResolveTokenRequest;
- (bool)hasRecordRetrieveAncestorsRequest;
- (bool)hasRecordRetrieveChangesRequest;
- (bool)hasRecordRetrieveRequest;
- (bool)hasRecordRetrieveVersionsRequest;
- (bool)hasRecordSaveRequest;
- (bool)hasRequest;
- (bool)hasSetBadgeCountRequest;
- (bool)hasShareAcceptRequest;
- (bool)hasShareDeleteRequest;
- (bool)hasShareRetrieveRequest;
- (bool)hasShareSaveRequest;
- (bool)hasShareTokenDeleteRequest;
- (bool)hasShareTokenRetrieveRequest;
- (bool)hasShareTokenSaveRequest;
- (bool)hasShareVettingInitiateRequest;
- (bool)hasSubscriptionCreateRequest;
- (bool)hasSubscriptionDeleteRequest;
- (bool)hasSubscriptionRetrieveRequest;
- (bool)hasTokenRegistrationRequest;
- (bool)hasTokenUnregistrationRequest;
- (bool)hasUnlikeRequest;
- (bool)hasUserAvailableQuotaRequest;
- (bool)hasUserPrivacySettingsBatchLookupRequest;
- (bool)hasUserPrivacySettingsResetRequest;
- (bool)hasUserPrivacySettingsRetrieveRequest;
- (bool)hasUserPrivacySettingsUpdateRequest;
- (bool)hasUserQueryRequest;
- (bool)hasUserRetrieveRequest;
- (bool)hasWebAuthTokenRetrieveRequest;
- (bool)hasZoneDeleteRequest;
- (bool)hasZoneRetrieveChangesRequest;
- (bool)hasZoneRetrieveRequest;
- (bool)hasZoneSaveRequest;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (id)likeRequest;
- (void)mergeFrom:(id)arg1;
- (id)mescalCertificateRequest;
- (id)mescalSessionInfoRequest;
- (id)mescalSignatureRequest;
- (id)notificationMarkReadRequest;
- (id)notificationSyncRequest;
- (id)postCommentRequest;
- (id)pulseRequest;
- (id)queryRetrieveRequest;
- (bool)readFrom:(id)arg1;
- (id)recordDeleteRequest;
- (id)recordResolveTokenRequest;
- (id)recordRetrieveAncestorsRequest;
- (id)recordRetrieveChangesRequest;
- (id)recordRetrieveRequest;
- (id)recordRetrieveVersionsRequest;
- (id)recordSaveRequest;
- (id)request;
- (void)setArchiveRecordsRequest:(id)arg1;
- (void)setAssetUploadTokenRetrieveRequest:(id)arg1;
- (id)setBadgeCountRequest;
- (void)setBundlesForContainerRequest:(id)arg1;
- (void)setDeleteCommentRequest:(id)arg1;
- (void)setDeleteContainerRequest:(id)arg1;
- (void)setFetchArchivedRecordsRequest:(id)arg1;
- (void)setFunctionInvokeRequest:(id)arg1;
- (void)setGetCommentRequest:(id)arg1;
- (void)setGetCommentsRequest:(id)arg1;
- (void)setGetLikesRequest:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setLikeRequest:(id)arg1;
- (void)setMescalCertificateRequest:(id)arg1;
- (void)setMescalSessionInfoRequest:(id)arg1;
- (void)setMescalSignatureRequest:(id)arg1;
- (void)setNotificationMarkReadRequest:(id)arg1;
- (void)setNotificationSyncRequest:(id)arg1;
- (void)setPostCommentRequest:(id)arg1;
- (void)setPulseRequest:(id)arg1;
- (void)setQueryRetrieveRequest:(id)arg1;
- (void)setRecordDeleteRequest:(id)arg1;
- (void)setRecordResolveTokenRequest:(id)arg1;
- (void)setRecordRetrieveAncestorsRequest:(id)arg1;
- (void)setRecordRetrieveChangesRequest:(id)arg1;
- (void)setRecordRetrieveRequest:(id)arg1;
- (void)setRecordRetrieveVersionsRequest:(id)arg1;
- (void)setRecordSaveRequest:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setSetBadgeCountRequest:(id)arg1;
- (void)setShareAcceptRequest:(id)arg1;
- (void)setShareDeleteRequest:(id)arg1;
- (void)setShareRetrieveRequest:(id)arg1;
- (void)setShareSaveRequest:(id)arg1;
- (void)setShareTokenDeleteRequest:(id)arg1;
- (void)setShareTokenRetrieveRequest:(id)arg1;
- (void)setShareTokenSaveRequest:(id)arg1;
- (void)setShareVettingInitiateRequest:(id)arg1;
- (void)setSubscriptionCreateRequest:(id)arg1;
- (void)setSubscriptionDeleteRequest:(id)arg1;
- (void)setSubscriptionRetrieveRequest:(id)arg1;
- (void)setTokenRegistrationRequest:(id)arg1;
- (void)setTokenUnregistrationRequest:(id)arg1;
- (void)setUnlikeRequest:(id)arg1;
- (void)setUserAvailableQuotaRequest:(id)arg1;
- (void)setUserPrivacySettingsBatchLookupRequest:(id)arg1;
- (void)setUserPrivacySettingsResetRequest:(id)arg1;
- (void)setUserPrivacySettingsRetrieveRequest:(id)arg1;
- (void)setUserPrivacySettingsUpdateRequest:(id)arg1;
- (void)setUserQueryRequest:(id)arg1;
- (void)setUserRetrieveRequest:(id)arg1;
- (void)setWebAuthTokenRetrieveRequest:(id)arg1;
- (void)setZoneDeleteRequest:(id)arg1;
- (void)setZoneRetrieveChangesRequest:(id)arg1;
- (void)setZoneRetrieveRequest:(id)arg1;
- (void)setZoneSaveRequest:(id)arg1;
- (id)shareAcceptRequest;
- (id)shareDeleteRequest;
- (id)shareRetrieveRequest;
- (id)shareSaveRequest;
- (id)shareTokenDeleteRequest;
- (id)shareTokenRetrieveRequest;
- (id)shareTokenSaveRequest;
- (id)shareVettingInitiateRequest;
- (id)subscriptionCreateRequest;
- (id)subscriptionDeleteRequest;
- (id)subscriptionRetrieveRequest;
- (id)tokenRegistrationRequest;
- (id)tokenUnregistrationRequest;
- (id)unlikeRequest;
- (id)userAvailableQuotaRequest;
- (id)userPrivacySettingsBatchLookupRequest;
- (id)userPrivacySettingsResetRequest;
- (id)userPrivacySettingsRetrieveRequest;
- (id)userPrivacySettingsUpdateRequest;
- (id)userQueryRequest;
- (id)userRetrieveRequest;
- (id)webAuthTokenRetrieveRequest;
- (void)writeTo:(id)arg1;
- (id)zoneDeleteRequest;
- (id)zoneRetrieveChangesRequest;
- (id)zoneRetrieveRequest;
- (id)zoneSaveRequest;

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