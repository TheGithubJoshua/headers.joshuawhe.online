<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPAbstractNetworkArtworkDataSource.h</title>
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

/Frameworks/MediaPlayer.framework/MPAbstractNetworkArtworkDataSource.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPAbstractNetworkArtworkDataSource : NSObject <MPArtworkDataSource, NSURLSessionDataDelegate> {
    NSURLSession * _URLSession;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMapTable * _catalogTaskMap;
    NSCache * _fallbackArtworkRepresentationCache;
    NSMutableDictionary * _pendingRequestToCompletionHandlers;
}

@property (nonatomic, retain) NSURLSession *URLSession;
@property (nonatomic, readonly) NSURLSessionConfiguration *URLSessionConfiguration;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NSMapTable *catalogTaskMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSCache *fallbackArtworkRepresentationCache;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *pendingRequestToCompletionHandlers;
@property (readonly) Class superclass;

+ (void)_applyURLCachePolicy:(unsigned long long)arg1 cacheDiskPath:(id)arg2 toConfiguration:(id)arg3;

- (void).cxx_destruct;
- (id)URLSession;
- (id)URLSessionConfiguration;
- (id)_artworkRepresentationWithImageFromData:(id)arg1 forURLResponse:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 immediateImageDecompressionAllowed:(bool)arg4;
- (id)_existingRepresentationFromURLCacheForArtworkCatalog:(id)arg1 immediateImageDecompressionAllowed:(bool)arg2;
- (id)_existingRepresentativeObjectForArtworkCatalog:(id)arg1 handler:(id /* block */)arg2;
- (bool)_isRepresentationSize:(struct CGSize { double x1; double x2; })arg1 validForCatalog:(id)arg2;
- (void)_performAsyncBarrierBlock:(id /* block */)arg1;
- (void)_performSyncBlock:(id /* block */)arg1;
- (id)accessQueue;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)callbackQueue;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)catalogTaskMap;
- (id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)fallbackArtworkRepresentationCache;
- (id)init;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)pendingRequestToCompletionHandlers;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)setAccessQueue:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setCatalogTaskMap:(id)arg1;
- (void)setFallbackArtworkRepresentationCache:(id)arg1;
- (void)setPendingRequestToCompletionHandlers:(id)arg1;
- (void)setURLSession:(id)arg1;
- (bool)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
- (id)sortedSupportedSizesForCatalog:(id)arg1;
- (id)supportedSizesForCatalog:(id)arg1;
- (void)updateURLSessionWithCachePolicy:(unsigned long long)arg1 cachePath:(id)arg2;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;
- (bool)wantsBackgroundImageDecompression;

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
