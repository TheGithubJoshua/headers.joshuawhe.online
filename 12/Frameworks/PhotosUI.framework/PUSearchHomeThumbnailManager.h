<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PUSearchHomeThumbnailManager.h</title>
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

/Frameworks/PhotosUI.framework/PUSearchHomeThumbnailManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI (1)
 */

@interface PUSearchHomeThumbnailManager : NSObject <NSCacheDelegate> {
    NSCache * _cache;
    NSMutableDictionary * _metadataPlist;
    NSObject<OS_dispatch_queue> * _metadataQueue;
    PXPlacesSearchProvider * _placesProvider;
}

@property (nonatomic, retain) NSCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *metadataPlist;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *metadataQueue;
@property (nonatomic, retain) PXPlacesSearchProvider *placesProvider;
@property (readonly) Class superclass;

+ (id)_filePathForHash:(id)arg1;
+ (id)_filePathForMetadataPlist;
+ (id)_thumbnailFilePath;

- (void).cxx_destruct;
- (void)_createThumbnailDirectoryIfNeeded;
- (void)_fetchImageForLocation:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (id)_hashForKeyString:(id)arg1;
- (id)_imageForHomeZeroKeywordWithMapImage:(id)arg1;
- (void)_setMetadataDate:(id)arg1 forKey:(id)arg2;
- (void)_setThumbnail:(id)arg1 forKey:(id)arg2;
- (void)_writeMetadataPlistToDisk;
- (id)cache;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)init;
- (id)metadataPlist;
- (id)metadataQueue;
- (id)placesProvider;
- (void)setCache:(id)arg1;
- (void)setMetadataPlist:(id)arg1;
- (void)setMetadataQueue:(id)arg1;
- (void)setPlacesProvider:(id)arg1;
- (void)thumbnailForKey:(id)arg1 type:(long long)arg2 withSize:(struct CGSize { double x1; double x2; })arg3 completion:(id /* block */)arg4;

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