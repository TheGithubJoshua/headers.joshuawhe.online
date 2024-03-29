<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ALAssetsLibrary.h</title>
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

/Frameworks/AssetsLibrary.framework/ALAssetsLibrary.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary (1)
 */

@interface ALAssetsLibrary : NSObject {
    id  _internal;
}

@property (nonatomic, retain) ALAssetsLibraryPrivate *internal;

+ (struct CGImage { }*)_aspectRatioThumbnailForAssetURL:(id)arg1;
+ (long long)_estimatedOutputFileLengthForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4;
+ (long long)_estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4;
+ (id)_exportSessionForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3;
+ (id)_exportSessionForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3;
+ (id)_filePathForVideoURL:(id)arg1 outMetadata:(id*)arg2;
+ (id)_library;
+ (bool)_linkedBefore7;
+ (id)_playerItemForVideoFilePath:(id)arg1 metadata:(id)arg2;
+ (id)_playerItemForVideoURL:(id)arg1 fallbackFilePath:(id)arg2;
+ (struct CGImage { }*)_thumbnailForAssetURL:(id)arg1;
+ (long long)authorizationStatus;
+ (void)disableSharedPhotoStreamsSupport;

- (void)_addGroupForAlbum:(struct NSObject { Class x1; }*)arg1 ofType:(unsigned long long)arg2 toArray:(id)arg3;
- (void)_addGroupListForContainerList:(id)arg1 ofType:(unsigned long long)arg2 toArray:(id)arg3;
- (id)_copyGroupForURL:(id)arg1;
- (bool)_libraryIsAvailable;
- (void)_performBlock:(id /* block */)arg1;
- (void)_performBlockAndWait:(id /* block */)arg1;
- (void)_writeImageToSavedPhotosAlbum:(struct CGImage { }*)arg1 orientation:(long long)arg2 imageData:(id)arg3 metadata:(id)arg4 internalProperties:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)_writeVideoAtPathToSavedPhotosAlbum:(id)arg1 internalProperties:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)addAssetsGroupAlbumWithName:(id)arg1 resultBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)assetForURL:(id)arg1 resultBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (id)assetsGroupsRelatedToAssetsGroup:(id)arg1;
- (void)dealloc;
- (void)deleteAssetForURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)enumerateGroupsWithTypes:(unsigned long long)arg1 usingBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)groupForURL:(id)arg1 resultBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (bool)hasCompletedRestorePostProcessing;
- (id)init;
- (id)internal;
- (bool)isValid;
- (id)publicErrorForPrivateDomain:(id)arg1 withPrivateCode:(long long)arg2;
- (id)publicErrorFromPrivateError:(id)arg1;
- (void)registerAlbum:(struct NSObject { Class x1; }*)arg1 assetGroupPrivate:(id)arg2;
- (void)setInternal:(id)arg1;
- (bool)videoAtPathIsCompatibleWithSavedPhotosAlbum:(id)arg1;
- (void)writeImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage { }*)arg1 metadata:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage { }*)arg1 orientation:(long long)arg2 completionBlock:(id /* block */)arg3;
- (void)writeVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(id /* block */)arg2;

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
