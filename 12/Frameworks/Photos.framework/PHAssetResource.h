<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PHAssetResource.h</title>
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

/Frameworks/Photos.framework/PHAssetResource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Photos.framework/Photos (1)
 */

@interface PHAssetResource : NSObject {
    NSString * _assetLocalIdentifier;
    bool  _derivative;
    unsigned long long  _fileSize;
    NSURL * _fileURL;
    bool  _locallyAvailable;
    NSString * _originalFilename;
    PHPhotoLibrary * _photoLibrary;
    long long  _pixelHeight;
    long long  _pixelWidth;
    id /* block */  _privateFileLoader;
    NSURL * _privateFileURL;
    long long  _resourceType;
    NSString * _uniformTypeIdentifier;
}

@property (setter=_setAssetLocalIdentifier:, nonatomic, copy) NSString *assetLocalIdentifier;
@property (getter=isDerivative, nonatomic, readonly) bool derivative;
@property (setter=_setFileSize:, nonatomic) unsigned long long fileSize;
@property (setter=_setFileURL:, nonatomic, retain) NSURL *fileURL;
@property (getter=isLibraryAssetResource, nonatomic, readonly) bool libraryAssetResource;
@property (getter=isLocallyAvailable, setter=_setIsLocallyAvailable:, nonatomic) bool locallyAvailable;
@property (nonatomic, readonly) bool miro_isReallyLocallyAvailable;
@property (setter=_setOriginalFilename:, nonatomic, copy) NSString *originalFilename;
@property (setter=_setPhotoLibrary:, nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (setter=_setPixelHeight:, nonatomic) long long pixelHeight;
@property (setter=_setPixelWidth:, nonatomic) long long pixelWidth;
@property (setter=_setPrivateFileLoader:, nonatomic, copy) id /* block */ privateFileLoader;
@property (setter=_setPrivateFileURL:, nonatomic, retain) NSURL *privateFileURL;
@property (nonatomic, readonly) long long type;
@property (setter=_setUniformTypeIdentifier:, nonatomic, copy) NSString *uniformTypeIdentifier;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_managedAssetWithRelationshipsPrefetchedForAsset:(id)arg1 inLibrary:(id)arg2 error:(id*)arg3;
+ (id)assetResourcesForAsset:(id)arg1;
+ (id)assetResourcesForAsset:(id)arg1 includeDerivatives:(bool)arg2;
+ (id)assetResourcesForLivePhoto:(id)arg1;

- (void).cxx_destruct;
- (void)_setAssetLocalIdentifier:(id)arg1;
- (void)_setFileSize:(unsigned long long)arg1;
- (void)_setFileURL:(id)arg1;
- (void)_setIsLocallyAvailable:(bool)arg1;
- (void)_setOriginalFilename:(id)arg1;
- (void)_setPhotoLibrary:(id)arg1;
- (void)_setPixelHeight:(long long)arg1;
- (void)_setPixelWidth:(long long)arg1;
- (void)_setPrivateFileLoader:(id /* block */)arg1;
- (void)_setPrivateFileURL:(id)arg1;
- (void)_setUniformTypeIdentifier:(id)arg1;
- (long long)analysisType;
- (id)assetLocalIdentifier;
- (id)description;
- (unsigned long long)fileSize;
- (id)fileURL;
- (id)initWithResourceType:(long long)arg1;
- (bool)isDerivative;
- (bool)isLibraryAssetResource;
- (bool)isLocallyAvailable;
- (id)originalFilename;
- (id)photoLibrary;
- (long long)pixelHeight;
- (long long)pixelWidth;
- (id /* block */)privateFileLoader;
- (id)privateFileURL;
- (long long)type;
- (id)uniformTypeIdentifier;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

- (bool)miro_isReallyLocallyAvailable;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

+ (id)vcp_allResourcesForAsset:(id)arg1;

- (id)vcp_avAsset;
- (unsigned long long)vcp_fileSize;
- (bool)vcp_isDecodable;
- (bool)vcp_isLocallyAvailable;
- (bool)vcp_isMovie;
- (bool)vcp_isPhoto;
- (struct CGSize { double x1; double x2; })vcp_size;
- (id)vcp_url;

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