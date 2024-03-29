<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FPItem.h</title>
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

/Frameworks/FileProvider.framework/FPItem.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider (125.201)
 */

@interface FPItem : NSObject <NSCopying, NSFileProviderItem, NSFileProviderItem_Private, NSSecureCoding> {
    NSString * _appContainerBundleIdentifier;
    unsigned long long  _capabilities;
    NSNumber * _childItemCount;
    NSString * _containerDisplayName;
    NSDate * _contentModificationDate;
    NSDate * _creationDate;
    NSString * _displayName;
    NSNumber * _documentSize;
    NSString * _domainIdentifier;
    bool  _downloaded;
    bool  _downloading;
    NSError * _downloadingError;
    NSNumber * _favoriteRank;
    NSURL * _fileURL;
    NSString * _filename;
    NSString * _formerIdentifier;
    NSNumber * _hasUnresolvedConflicts;
    bool  _hidden;
    NSArray * _hierarchyPath;
    bool  _isContainer;
    NSNumber * _isDownloadRequested;
    bool  _isUbiquitous;
    NSString * _itemIdentifier;
    NSDate * _lastUsedDate;
    NSPersonNameComponents * _mostRecentEditorNameComponents;
    bool  _mostRecentVersionDownloaded;
    bool  _offline;
    NSPersonNameComponents * _ownerNameComponents;
    NSString * _parentItemIdentifier;
    bool  _pending;
    NSString * _placeholdIdentifier;
    NSString * _preformattedMostRecentEditorName;
    NSString * _preformattedOwnerName;
    NSProgress * _progress;
    NSString * _providerIdentifier;
    bool  _shared;
    bool  _sharedByCurrentUser;
    NSString * _sharingPermissions;
    NSString * _spotlightDomainIdentifier;
    unsigned long long  _state;
    bool  _supportsMostRecentVersionDownloaded;
    NSArray * _tags;
    bool  _trashed;
    NSString * _typeIdentifier;
    bool  _uploaded;
    bool  _uploading;
    NSError * _uploadingError;
    NSDictionary * _userInfo;
    NSData * _versionIdentifier;
}

@property (nonatomic, copy) NSString *appContainerBundleIdentifier;
@property (nonatomic) unsigned long long capabilities;
@property (nonatomic, copy) NSNumber *childItemCount;
@property (getter=isCloudItem, nonatomic, readonly) bool cloudItem;
@property (nonatomic, readonly) NSString *containerDisplayName;
@property (nonatomic, copy) NSDate *contentModificationDate;
@property (nonatomic, readonly) NSProgress *copyingProgress;
@property (nonatomic, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long depthInHierarchy;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSNumber *documentSize;
@property (nonatomic, readonly) NSString *domainIdentifier;
@property (getter=isDownloadRequested, readonly, copy) NSNumber *downloadRequested;
@property (getter=isDownloaded, nonatomic) bool downloaded;
@property (getter=isDownloading, nonatomic) bool downloading;
@property (nonatomic, copy) NSError *downloadingError;
@property (nonatomic, readonly) NSProgress *downloadingProgress;
@property (nonatomic, copy) NSNumber *favoriteRank;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, copy) NSString *filename;
@property (nonatomic, readonly) unsigned long long folderType;
@property (nonatomic, retain) NSString *formerIdentifier;
@property (nonatomic, readonly) FPItemID *formerItemID;
@property (nonatomic, readonly) NSString *fp_appContainerBundleIdentifier;
@property (nonatomic, readonly) NSString *fp_domainIdentifier;
@property (getter=fp_isContainer, nonatomic, readonly) bool fp_isContainer;
@property (nonatomic, readonly) NSString *fp_spotlightDomainIdentifier;
@property (getter=fp_isUbiquitous, nonatomic, readonly) bool fp_ubiquitous;
@property (nonatomic, readonly) NSNumber *hasUnresolvedConflicts;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, retain) NSArray *hierarchyPath;
@property (nonatomic, readonly) NSString *hierarchyPathKey;
@property (nonatomic, readonly) bool isContainer;
@property (nonatomic, readonly) NSNumber *isDownloadRequested;
@property (nonatomic, readonly) bool isFolder;
@property (nonatomic, readonly) FPItemID *itemID;
@property (nonatomic, readonly, copy) NSString *itemIdentifier;
@property (nonatomic, copy) NSDate *lastUsedDate;
@property (nonatomic, retain) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (getter=isMostRecentVersionDownloaded, nonatomic) bool mostRecentVersionDownloaded;
@property (getter=isOffline, nonatomic) bool offline;
@property (nonatomic, retain) NSPersonNameComponents *ownerNameComponents;
@property (nonatomic, readonly, copy) NSString *parentItemIdentifier;
@property (getter=isPending, nonatomic) bool pending;
@property (nonatomic) NSString *placeholdIdentifier;
@property (getter=isPlaceholder, nonatomic, readonly) bool placeholder;
@property (nonatomic, retain) NSString *preformattedMostRecentEditorName;
@property (nonatomic, retain) NSString *preformattedOwnerName;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, readonly) NSString *providerIdentifier;
@property (getter=isReadable, nonatomic, readonly) bool readable;
@property (getter=isShared, nonatomic) bool shared;
@property (getter=isSharedByCurrentUser, nonatomic) bool sharedByCurrentUser;
@property (nonatomic, readonly) NSString *sharingPermissions;
@property (nonatomic, retain) NSString *spotlightDomainIdentifier;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsMostRecentVersionDownloaded;
@property (nonatomic, readonly, copy) NSData *tagData;
@property (nonatomic, copy) NSArray *tags;
@property (getter=isTrashed, nonatomic) bool trashed;
@property (nonatomic, copy) NSString *typeIdentifier;
@property (getter=isUbiquitous, nonatomic) bool ubiquitous;
@property (getter=isUploaded, nonatomic) bool uploaded;
@property (getter=isUploading, nonatomic) bool uploading;
@property (nonatomic, copy) NSError *uploadingError;
@property (nonatomic, readonly) NSProgress *uploadingProgress;
@property (nonatomic, retain) NSDictionary *userInfo;
@property (nonatomic, retain) NSData *versionIdentifier;
@property (getter=isWritable, nonatomic, readonly) bool writable;

+ (id)allUbiquitousResourceKeys;
+ (id)fp_queryFetchAttributes;
+ (id)generatePlaceholderIdentifier;
+ (id)generatePlaceholderIdentifierWithOriginalID:(id)arg1;
+ (id)placeholderWithCopyOfExistingItem:(id)arg1 lastUsageUpdatePolicy:(unsigned long long)arg2 underParent:(id)arg3 inProvider:(id)arg4;
+ (id)placeholderWithName:(id)arg1 isFolder:(bool)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProvider:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_downloadingStatus;
- (id)appContainerBundleIdentifier;
- (unsigned long long)capabilities;
- (id)childItemCount;
- (id)containerDisplayName;
- (id)contentModificationDate;
- (id)copyAsPending;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyingProgress;
- (id)creationDate;
- (unsigned long long)depthInHierarchy;
- (id)description;
- (id)displayName;
- (id)documentSize;
- (id)domainIdentifier;
- (id)downloadingError;
- (id)downloadingProgress;
- (void)encodeWithCoder:(id)arg1;
- (id)favoriteRank;
- (id)fileURL;
- (id)filename;
- (unsigned long long)folderType;
- (id)formerIdentifier;
- (id)formerItemID;
- (id)fp_appContainerBundleIdentifier;
- (id)fp_domainIdentifier;
- (bool)fp_isContainer;
- (bool)fp_isUbiquitous;
- (id)fp_spotlightDomainIdentifier;
- (id)hasUnresolvedConflicts;
- (unsigned long long)hash;
- (id)hierarchyPath;
- (id)hierarchyPathKey;
- (id)initWithCoder:(id)arg1;
- (id)initWithProvider:(id)arg1 domainIdentifier:(id)arg2 itemIdentifier:(id)arg3 parentItemIdentifier:(id)arg4 filename:(id)arg5 typeIdentifier:(id)arg6;
- (id)initWithProvider:(id)arg1 itemIdentifier:(id)arg2 parentItemIdentifier:(id)arg3 filename:(id)arg4 isDirectory:(bool)arg5;
- (id)initWithSearchableItem:(id)arg1;
- (id)initWithVendorItem:(id)arg1 provider:(id)arg2 domain:(id)arg3;
- (bool)isCloudItem;
- (bool)isContainer;
- (id)isDownloadRequested;
- (bool)isDownloaded;
- (bool)isDownloading;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItem:(id)arg1;
- (bool)isFolder;
- (bool)isHidden;
- (bool)isMostRecentVersionDownloaded;
- (bool)isOffline;
- (bool)isPending;
- (bool)isPlaceholder;
- (bool)isReadable;
- (bool)isShared;
- (bool)isSharedByCurrentUser;
- (bool)isTrashed;
- (bool)isUbiquitous;
- (bool)isUploaded;
- (bool)isUploading;
- (bool)isWritable;
- (id)itemID;
- (id)itemIdentifier;
- (id)lastUsedDate;
- (long long)localizedStandardTagsCompare:(id)arg1;
- (id)mostRecentEditorNameComponents;
- (id)ownerNameComponents;
- (id)parentItemIdentifier;
- (id)placeholdIdentifier;
- (id)preformattedMostRecentEditorName;
- (id)preformattedOwnerName;
- (id)progress;
- (id)providerIdentifier;
- (void)setAppContainerBundleIdentifier:(id)arg1;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setChildItemCount:(id)arg1;
- (void)setContentModificationDate:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDocumentSize:(id)arg1;
- (void)setDownloaded:(bool)arg1;
- (void)setDownloading:(bool)arg1;
- (void)setDownloadingError:(id)arg1;
- (void)setFavoriteRank:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setFormerIdentifier:(id)arg1;
- (void)setFp_SpotlightDomainIdentifier:(id)arg1;
- (void)setHierarchyPath:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setLastUsedDate:(id)arg1;
- (void)setMostRecentEditorNameComponents:(id)arg1;
- (void)setMostRecentVersionDownloaded:(bool)arg1;
- (void)setOffline:(bool)arg1;
- (void)setOwnerNameComponents:(id)arg1;
- (void)setParentItemIdentifier:(id)arg1;
- (void)setPending:(bool)arg1;
- (void)setPlaceholdIdentifier:(id)arg1;
- (void)setPreformattedMostRecentEditorName:(id)arg1;
- (void)setPreformattedOwnerName:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setProviderIdentifier:(id)arg1;
- (void)setShared:(bool)arg1;
- (void)setSharedByCurrentUser:(bool)arg1;
- (void)setSpotlightDomainIdentifier:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setSupportsMostRecentVersionDownloaded:(bool)arg1;
- (void)setTags:(id)arg1;
- (void)setTrashed:(bool)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (void)setUbiquitous:(bool)arg1;
- (void)setUploaded:(bool)arg1;
- (void)setUploading:(bool)arg1;
- (void)setUploadingError:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setVersionIdentifier:(id)arg1;
- (id)sharingPermissions;
- (id)spotlightDomainIdentifier;
- (unsigned long long)state;
- (bool)supportsMostRecentVersionDownloaded;
- (id)tagData;
- (id)tags;
- (id)toSearchableItem;
- (id)typeIdentifier;
- (id)ubiquitousResourceKeysDiffAgainstItem:(id)arg1;
- (id)uploadingError;
- (id)uploadingProgress;
- (id)userInfo;
- (id)versionIdentifier;

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
