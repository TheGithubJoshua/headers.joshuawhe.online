<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PLNotification.h</title>
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

/PrivateFrameworks/PhotoLibraryServices.framework/PLNotification.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices (1.0)
 */

@interface PLNotification : NSObject {
    NSString * _albumCloudGUID;
    NSString * _albumTitle;
    NSString * _albumUUID;
    bool  _allMultipleAssetIsMine;
    long long  _assetCount;
    NSMutableSet * _assetUUIDs;
    long long  _commentCount;
    NSDate * _commentDate;
    bool  _commentIsCaption;
    NSString * _commentText;
    bool  _containsBatchFirstKnownAsset;
    NSDate * _date;
    NSDate * _expirationDate;
    NSString * _firstCommentGUID;
    bool  _forMultipleAsset;
    NSString * _interestingMemoryUUID;
    int  _invitationState;
    bool  _isMixedType;
    NSString * _keyMomentShareUUID;
    NSMutableSet * _lowResThumbAssetUUIDs;
    bool  _mainAssetIsMine;
    bool  _mainAssetIsVideo;
    NSString * _mainAssetUUID;
    NSArray * _momentShareUUIDs;
    NSDate * _notificationDeliveryDate;
    NSString * _notificationSubtitle;
    NSString * _notificationTitle;
    long long  _notificationType;
    bool  _offerToReportAsJunk;
    NSDate * _originalDate;
    NSString * _photosBatchID;
    NSMutableSet * _placeholderAssetUUIDs;
    NSString * _senderEmailAddress;
    NSString * _senderName;
    NSMutableSet * _senderNames;
    NSString * _suggestedCMMUUID;
    bool  _suppressAlert;
    NSData * _thumbnailImageData;
}

@property (readonly, copy) NSString *albumCloudGUID;
@property (readonly, copy) NSString *albumUUID;
@property (readonly) bool allAssetsAreFullResolution;
@property (readonly) bool canMergeWithPersistedNotifications;
@property (readonly) NSString *commentText;
@property (readonly) double completionPercentage;
@property (readonly, copy) NSDate *date;
@property (readonly) NSString *destinationURLString;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, copy) NSDate *expirationDate;
@property (readonly) bool hasThumbnail;
@property (readonly) NSString *interestingMemoryUUID;
@property (readonly) NSString *keyObjectUUID;
@property (readonly, copy) NSString *mainAssetUUID;
@property (readonly) NSString *message;
@property (copy) NSDate *notificationDeliveryDate;
@property (readonly) long long notificationType;
@property (readonly) bool offerToReportAsJunk;
@property (copy) NSDate *originalDate;
@property (readonly) NSString *photosBatchID;
@property (readonly) NSString *requestIdentifier;
@property (readonly, copy) NSString *senderEmailAddress;
@property bool suppressAlert;
@property (readonly) NSArray *suppressionContexts;
@property (readonly) bool thumbnailAssetIsPlaceholder;
@property (retain) NSData *thumbnailImageData;
@property (readonly) NSString *title;

+ (id)_UNCategoryFromNotificationType:(long long)arg1;
+ (id)requestIdentifierByNotificationType:(long long)arg1 keyObjectUUID:(id)arg2 photosBatchID:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithCommentsCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(bool)arg6 mainAssetIsVideo:(bool)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 albumCloudGUID:(id)arg10 assetUUIDs:(id)arg11 placeholderAssetUUIDs:(id)arg12 lowResThumbAssetUUIDs:(id)arg13;
- (id)_initWithLikesCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(bool)arg6 mainAssetIsVideo:(bool)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 albumCloudGUID:(id)arg10 assetUUIDs:(id)arg11 placeholderAssetUUIDs:(id)arg12 lowResThumbAssetUUIDs:(id)arg13 senderNames:(id)arg14 forMultipleAsset:(bool)arg15 allMultipleAssetIsMine:(bool)arg16 isMixedType:(bool)arg17;
- (id)_initWithPhotosAddedNotification:(id)arg1 mergedWithNotification:(id)arg2;
- (id)_initWithPhotosAddedNotification:(id)arg1 mergedWithNotificationDictionary:(id)arg2;
- (id)_initWithType:(long long)arg1;
- (id)_localizedCountFormatter;
- (id)albumCloudGUID;
- (id)albumUUID;
- (bool)allAssetsAreFullResolution;
- (bool)assetWithUUID:(id)arg1 didChangePlaceholderKindTo:(short)arg2 fromOldKind:(short)arg3;
- (bool)canMergeWithPersistedNotifications;
- (id)commentText;
- (double)completionPercentage;
- (id)date;
- (id)description;
- (id)destinationURLString;
- (id)dictionaryRepresentation;
- (id)expirationDate;
- (bool)hasThumbnail;
- (id)init;
- (id)initCMMInvitationReadyToViewWithMomentShare:(id)arg1;
- (id)initCMMInvitationWithMomentShare:(id)arg1;
- (id)initWithAssetAdded:(id)arg1 atIndex:(unsigned long long)arg2 toAlbum:(id)arg3;
- (id)initWithAssetsAdded:(id)arg1 toAlbum:(id)arg2;
- (id)initWithCommentAdded:(id)arg1;
- (id)initWithExpiringMomentShareUUIDs:(id)arg1 thumbnailImageData:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
- (id)initWithExpiringMomentShares:(id)arg1;
- (id)initWithInterestingMemoryNotificationWithMemoryUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
- (id)initWithInvitationAlbum:(id)arg1;
- (id)initWithInvitationRecordStatusChanged:(id)arg1;
- (id)initWithLikeAdded:(id)arg1;
- (id)initWithMultipleContributorEnabledForAlbum:(id)arg1;
- (id)initWithSuggestedCMMUUID:(id)arg1 keyAssetUUID:(id)arg2 notificationTitle:(id)arg3 notificationSubtitle:(id)arg4;
- (id)interestingMemoryUUID;
- (bool)isCommentPiggyBackedOnPhotosAddedNotification;
- (id)keyObjectUUID;
- (id)mainAssetUUID;
- (id)message;
- (id)notificationByMergingWithNotification:(id)arg1;
- (id)notificationByMergingWithNotificationDictionary:(id)arg1;
- (id)notificationDeliveryDate;
- (long long)notificationType;
- (bool)offerToReportAsJunk;
- (id)originalDate;
- (id)photosBatchID;
- (id)requestIdentifier;
- (id)senderEmailAddress;
- (void)setNotificationDeliveryDate:(id)arg1;
- (void)setOriginalDate:(id)arg1;
- (void)setSuppressAlert:(bool)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (bool)suppressAlert;
- (id)suppressionContexts;
- (bool)thumbnailAssetIsPlaceholder;
- (id)thumbnailImageData;
- (id)title;

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
