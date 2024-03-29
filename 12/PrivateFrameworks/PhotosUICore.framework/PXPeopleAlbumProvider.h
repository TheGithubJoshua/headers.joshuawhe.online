<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PXPeopleAlbumProvider.h</title>
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

/PrivateFrameworks/PhotosUICore.framework/PXPeopleAlbumProvider.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore (3462.11.110)
 */

@interface PXPeopleAlbumProvider : NSObject <PXPeopleSectionedDataSourceChangeObserver, PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    NSObject<OS_dispatch_queue> * _cacheIsolationQueue;
    long long  _cachedPeopleCount;
    _Atomic int  _currentRequestId;
    bool  _didInitiatePeopleCountFetchRequest;
    bool  _didInitiateReCacheRequest;
    bool  _didPrepareDataSource;
    NSMutableDictionary * _imageCache;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    PXPeopleSectionedDataSource * _peopleDataSource;
    PHPhotoLibrary * _photoLibrary;
    PXPeopleProgressManager * _progressMgr;
    id /* block */  _requestCompletion;
}

@property (nonatomic) long long cachedPeopleCount;
@property _Atomic int currentRequestId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *imageCache;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) bool isCountAvailable;
@property (nonatomic, readonly) long long peopleCount;
@property (nonatomic, readonly) PXPeopleSectionedDataSource *peopleDataSource;
@property (nonatomic, retain) PXPeopleProgressManager *progressMgr;
@property (nonatomic, copy) id /* block */ requestCompletion;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_appWillEnterForeground;
- (void)_asyncAddImagesToCacheWithItems:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleRequestResult:(void *)arg1 forRequestID:(void *)arg2 person:(void *)arg3 atIndex:(void *)arg4 error:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 7: id, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, int, id, long long, id, id /* block */
- (void)_invalidateCache;
- (id)_members;
- (void)_prepareIfNeeded;
- (void)_reCacheImagesCompletion:(id /* block */)arg1;
- (bool)_shouldShowInterstitialProgress;
- (void)_updateCachedCountIfNeeded;
- (long long)cachedPeopleCount;
- (int)currentRequestId;
- (void)dealloc;
- (id)imageCache;
- (void)imageCacheDidChanged:(id)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (bool)isCountAvailable;
- (long long)peopleCount;
- (id)peopleDataSource;
- (void)peopleSectionedDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleSectionedDataSourceMembersChanged:(id)arg1;
- (id)peopleViewController;
- (id)progressMgr;
- (void)requestAlbumImagesWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id /* block */)requestCompletion;
- (void)setCachedPeopleCount:(long long)arg1;
- (void)setCurrentRequestId:(int)arg1;
- (void)setImageCache:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setProgressMgr:(id)arg1;
- (void)setRequestCompletion:(id /* block */)arg1;

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
