<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>IMLibraryPlist.h</title>
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

/PrivateFrameworks/BookLibrary.framework/IMLibraryPlist.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary (153)
 */

@interface IMLibraryPlist : NSObject {
    NSString * _directory;
    long long  _kind;
    NSString * _path;
}

@property (nonatomic, copy) NSString *directory;
@property (nonatomic) long long kind;
@property (nonatomic, copy) NSString *path;
@property (nonatomic, readonly) NSString *sidecarPath;

+ (id)accessDateFromPlistEntry:(id)arg1;
+ (id)albumFromPlistEntry:(id)arg1;
+ (id)assetIDFromItunesMetadataEntry:(id)arg1;
+ (id)assetIDFromPlistEntry:(id)arg1;
+ (id)assetIDFromPlistEntry:(id)arg1 forAssetAtPath:(id)arg2;
+ (id)assetTypeFromPlistEntry:(id)arg1;
+ (id)authorFromPlistEntry:(id)arg1;
+ (id)backupFolderNameFromPlistEntry:(id)arg1;
+ (id)bookEpubIdFromPlistEntry:(id)arg1;
+ (id)booksArrayFromPlistEntry:(id)arg1;
+ (id)booksRepositoryPath;
+ (id)coverHashFromItunesMetadataEntry:(id)arg1;
+ (id)coverPathFromItunesMetadataEntry:(id)arg1;
+ (id)coverPathFromPlistEntry:(id)arg1;
+ (id)coverWritingModeFromPlistEntry:(id)arg1;
+ (id)deletesArrayFromPlistEntry:(id)arg1;
+ (id)entryForAssetID:(id)arg1 contents:(id)arg2;
+ (id)entryForAssetURL:(id)arg1 contents:(id)arg2;
+ (id)extensionFromPlistEntry:(id)arg1;
+ (id)feedURLFromPlistEntry:(id)arg1;
+ (id)folderNameFromPlistEntry:(id)arg1;
+ (id)genreFromPlistEntry:(id)arg1;
+ (id)humanReadablePublicationVersionFromPlistEntry:(id)arg1;
+ (id)importDateFromPlistEntry:(id)arg1;
+ (id)isEphemeralFromPlistEntry:(id)arg1;
+ (id)isExplicitContentFromPlistEntry:(id)arg1;
+ (id)isItunesUFromPlistEntry:(id)arg1;
+ (id)isManagedBookFromURL:(id)arg1;
+ (id)isProofedAssetFromPlistEntry:(id)arg1;
+ (id)isSampleFromPlistEntry:(id)arg1;
+ (bool)isThinnedAssetFromPlistEntry:(id)arg1;
+ (id)keyNameForAccessDate;
+ (id)keyNameForAssetType;
+ (id)keyNameForAuthor;
+ (id)keyNameForBackupPath;
+ (id)keyNameForBookDescription;
+ (id)keyNameForBooksArray;
+ (id)keyNameForComments;
+ (id)keyNameForCoverWritingMode;
+ (id)keyNameForDeletesArray;
+ (id)keyNameForExplicitContent;
+ (id)keyNameForFirstOpened;
+ (id)keyNameForGeneration;
+ (id)keyNameForGenre;
+ (id)keyNameForHighWaterMark;
+ (id)keyNameForHumanReadablePublicationVersion;
+ (id)keyNameForImportDate;
+ (id)keyNameForIsEphemeral;
+ (id)keyNameForLanguages;
+ (id)keyNameForLastOpened;
+ (id)keyNameForPageProgression;
+ (id)keyNameForPath;
+ (id)keyNameForPrimaryLanguage;
+ (id)keyNameForProofedAsset;
+ (id)keyNameForPublicationVersion;
+ (id)keyNameForRating;
+ (id)keyNameForReadingLocation;
+ (id)keyNameForScrollDirection;
+ (id)keyNameForSortAuthor;
+ (id)keyNameForSortTitle;
+ (id)keyNameForStoreId;
+ (id)keyNameForStoreId2;
+ (id)keyNameForSubject;
+ (id)keyNameForTitle;
+ (id)keyNameForUniqueId;
+ (id)keyNameForYear;
+ (id)languageFromPlistEntry:(id)arg1;
+ (id)languagesFromPlistEntry:(id)arg1;
+ (id)libraryPlistWithKind:(long long)arg1;
+ (id)lookupAssetURLStringFromAssetID:(id)arg1 contents:(id)arg2;
+ (id)lookupBackupFolderNameFromAssetID:(id)arg1 contents:(id)arg2;
+ (id)lookupCoverWritingModeFromAssetID:(id)arg1 contents:(id)arg2;
+ (id)lookupFolderNameFromAssetID:(id)arg1 contents:(id)arg2;
+ (id)lookupHumanReadablePublicationVersionFromAssetID:(id)arg1 contents:(id)arg2;
+ (bool)lookupIsThinnedFromAssetID:(id)arg1 contents:(id)arg2;
+ (id)lookupLanguageFromAssetID:(id)arg1 contents:(id)arg2;
+ (id)lookupPageProgressionFromAssetID:(id)arg1 contents:(id)arg2;
+ (id)lookupPublicationVersionFromAssetID:(id)arg1 contents:(id)arg2;
+ (id)lookupPublicationVersionNumberFromAssetID:(id)arg1 contents:(id)arg2;
+ (id)lookupScrollDirectionFromAssetID:(id)arg1 contents:(id)arg2;
+ (id)managedRepositoryPath;
+ (id)mimeTypeFromPlistEntry:(id)arg1;
+ (id)packageFileHashFromItunesMetadataEntry:(id)arg1;
+ (id)pageProgressionFromPlistEntry:(id)arg1;
+ (id)permlinkFromPlistEntry:(id)arg1;
+ (id)persistentIDFromPlistEntry:(id)arg1;
+ (id)primaryLanguageFromPlistEntry:(id)arg1;
+ (id)proofingRepositoryPath;
+ (id)publicationVersionFromPlistEntry:(id)arg1;
+ (id)publicationVersionNumberFromPlistEntry:(id)arg1;
+ (id)publisherUniqueIDFromItunesMetadataEntry:(id)arg1;
+ (id)purchasesRepositoryPath;
+ (id)sampleRepositoryPath;
+ (id)scrollDirectionFromPlistEntry:(id)arg1;
+ (void)setAccessDate:(id)arg1 toPlistEntry:(id)arg2;
+ (void)setBooksArray:(id)arg1 toPlistEntry:(id)arg2;
+ (void)setDeletesArray:(id)arg1 toPlistEntry:(id)arg2;
+ (id)sharedContainerURL;
+ (id)sharedRepositoryPath;
+ (id)sortAuthorFromPlistEntry:(id)arg1;
+ (id)sortTitleFromPlistEntry:(id)arg1;
+ (id)stashedSampleRepositoryPath;
+ (id)storeIDsforThinnedBooksFromContents:(id)arg1;
+ (id)storeIdFromPlistEntry:(id)arg1;
+ (id)temporaryItemIdentifierFromPlistEntry:(id)arg1;
+ (id)titleFromItunesMetadataEntry:(id)arg1;
+ (id)titleFromPlistEntry:(id)arg1;
+ (id)uniqueIDFromItunesMetadataEntry:(id)arg1;
+ (id)uniqueIdFromPlistEntry:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithDirectory:(id)arg1 fileName:(id)arg2;
- (void)addDeletedFiles:(id)arg1;
- (bool)bumpModificationDate;
- (id)calculateChecksum;
- (id)contents;
- (id)directory;
- (bool)isPathInDirectory:(id)arg1;
- (long long)kind;
- (id)p_contents:(id)arg1;
- (void)p_rewriteSidecarWithDeletes:(id)arg1;
- (id)path;
- (void)removeDeletedPaths:(id)arg1;
- (void)setDirectory:(id)arg1;
- (void)setKind:(long long)arg1;
- (void)setPath:(id)arg1;
- (id)sidecarPath;
- (id)unfilteredContents;
- (id)unfilteredSidecarContents;

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