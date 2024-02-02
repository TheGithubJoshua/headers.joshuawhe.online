<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ICAttachmentPreviewImage.h</title>
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

/PrivateFrameworks/NotesShared.framework/ICAttachmentPreviewImage.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared (1349.30)
 */

@interface ICAttachmentPreviewImage : ICCloudSyncingObject <ICAttachmentPreviewImageUI> {
    NSObject<OS_dispatch_queue> * _fileQueue;
    unsigned long long  _imageID;
}

@property (nonatomic, retain) ICAttachment *attachment;
@property (nonatomic, retain) NSData *cryptoMetadataInitializationVector;
@property (nonatomic, retain) NSData *cryptoMetadataTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *encryptedMetadata;
@property (readonly) NSObject<OS_dispatch_queue> *fileQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) double height;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic) unsigned long long imageID;
@property (nonatomic, retain) NSData *metadata;
@property (nonatomic, retain) NSDate *modifiedDate;
@property (nonatomic, readonly) UIImage *orientedImage;
@property (nonatomic) double scale;
@property (nonatomic) bool scaleWhenDrawing;
@property (readonly) Class superclass;
@property (nonatomic) short version;
@property (nonatomic) bool versionOutOfDate;
@property (nonatomic) double width;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)allAttachmentPreviewImagesInContext:(id)arg1;
+ (id)attachmentPreviewImageIdentifiersForAccount:(id)arg1;
+ (id)attachmentPreviewImageWithIdentifier:(id)arg1 inContext:(id)arg2;
+ (id)attachmentPreviewImagesMatchingPredicate:(id)arg1 inContext:(id)arg2;
+ (id)concurrentFileLoadLimitSemaphore;
+ (void)deleteStrandedAttachmentPreviewImagesInContext:(id)arg1;
+ (id)fileGlobalQueue;
+ (id)fileQueueGroup;
+ (id)identifierForContentIdentifier:(id)arg1 scale:(double)arg2 width:(double)arg3 height:(double)arg4;
+ (id)newAttachmentPreviewImageWithIdentifier:(id)arg1 inContext:(id)arg2;
+ (id)previewImageDirectoryURL;
+ (id)previewImageURLsForIdentifier:(id)arg1;
+ (void)purgeAllAttachmentPreviewImagesInContext:(id)arg1;
+ (void)purgeAllPreviewImageFiles;
+ (void)purgePreviewImageFilesForIdentifiers:(id)arg1;
+ (long long)updateFileWriteCounterBy:(long long)arg1 identifier:(id)arg2;
+ (id)visibleAttachmentPreviewImagesInContext:(id)arg1;
+ (void)waitUntilAllFileWritesAreFinished;

- (void).cxx_destruct;
- (id)_decryptedImageData;
- (void)createOrientedPreviewIfNeeded;
- (id)decryptedImageData;
- (void)deleteFromLocalDatabase;
- (id)encryptedPreviewImageURL;
- (id)fileQueue;
- (bool)hasAnyPNGPreviewImageFiles;
- (id)ic_loggingValues;
- (unsigned long long)imageID;
- (bool)imageIsValid;
- (bool)imageIsWriting;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)invalidateCache;
- (void)invalidateImage;
- (void)invalidateOrientedImage;
- (bool)makeSurePreviewImageDirectoryExists:(id*)arg1;
- (id)metadata;
- (bool)needsInitialFetchFromCloud;
- (bool)needsToBeDeletedFromCloud;
- (bool)needsToBeFetchedFromCloud;
- (bool)needsToBePushedToCloud;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })orientedImageTransform;
- (id)orientedPreviewImageURL;
- (id)orientedPreviewImageURLWithoutCreating;
- (id)parentEncryptableObject;
- (void)prepareForDeletion;
- (id)previewImagePathExtension;
- (id)previewImageURL;
- (void)removeItemAtURL:(id)arg1;
- (void)saveAndClearDecryptedData;
- (void)saveScaledImageFromImageSrc:(struct CGImageSource { }*)arg1 typeUTI:(struct __CFString { }*)arg2 completion:(id /* block */)arg3;
- (void)setImageData:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3 completion:(id /* block */)arg4;
- (void)setImageID:(unsigned long long)arg1;
- (void)setMetadata:(id)arg1;
- (bool)shouldSyncToCloud;
- (struct CGSize { double x1; double x2; })size;
- (void)updateFlagToExcludeFromCloudBackup;
- (void)updateFlagToExcludeFromCloudBackupForURL:(id)arg1;
- (void)updateFlagToExcludeFromCloudBackupForURLs:(id)arg1;
- (void)willTurnIntoFault;
- (bool)writeEncryptedImageFromData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)imageCache;
+ (struct UIImage { Class x1; }*)orientedImage:(struct UIImage { Class x1; }*)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 background:(int)arg3 backgroundTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4;

- (id /* block */)asyncImage:(id /* block */)arg1 aboutToLoadHandler:(id /* block */)arg2;
- (struct UIImage { Class x1; }*)cachedImage;
- (struct UIImage { Class x1; }*)cachedOrientedImage;
- (void)clearCachedImage;
- (void)clearCachedOrientedImage;
- (bool)hasCachedImage;
- (struct UIImage { Class x1; }*)image;
- (struct UIImage { Class x1; }*)imageWithBackground:(int)arg1;
- (id)newImageLoaderForUpdatingImageOnCompletion:(bool)arg1;
- (id)newImageLoaderForUpdatingImageOnCompletion:(bool)arg1 asyncDataLoading:(bool)arg2;
- (struct UIImage { Class x1; }*)orientedImage;
- (id)orientedImageID;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })orientedImageTransform;
- (struct UIImage { Class x1; }*)orientedImageWithBackground:(int)arg1;
- (long long)previewImageOrientation;
- (void)setCachedImage:(struct UIImage { Class x1; }*)arg1;
- (void)setCachedOrientedImage:(struct UIImage { Class x1; }*)arg1;
- (void)writeOrientedPreviewToDisk;

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