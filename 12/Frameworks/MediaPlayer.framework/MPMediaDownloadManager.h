<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MPMediaDownloadManager.h</title>
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

/Frameworks/MediaPlayer.framework/MPMediaDownloadManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer (1.0)
 */

@interface MPMediaDownloadManager : NSObject <ATDownloadProgressObserver, MPStoreDownloadManagerObserver, NSXPCListenerDelegate> {
    NSXPCConnection * __downloadProgressConnection;
    NSXPCConnection * __keepLocalTaskConnection;
    NSMutableOrderedSet * _cachedATDownloads;
    NSMutableOrderedSet * _cachedATUnEnqueuedDownloads;
    NSMutableDictionary * _cachedProgressMap;
    bool  _callerCanConnectToAirTraffic;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSHashTable * _downloadObservers;
    bool  _prefetchATAssets;
    NSObject<OS_dispatch_queue> * _queue;
    MPStoreDownloadManager * _storeDownloadManager;
    NSObject<OS_dispatch_queue> * _xpcConnectionQueue;
}

@property (nonatomic, readonly) NSArray *allMediaDownloadLibraryIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_checkEntitlementToConnectToAirTraffic;
- (id)_downloadProgressConnection;
- (id)_init;
- (bool)_isValidMediaAsset:(id)arg1;
- (id)_keepLocalTaskConnection;
- (void)_notifyObserversOfAssetDownloadProgress:(id)arg1;
- (void)_notifyObserversOfDownloadCompleteForAssets:(id)arg1 withError:(id)arg2;
- (void)_prefectchAllATDownloads;
- (id)_statusChangeObservers;
- (id)_updateCacheAndGetMediaDownloadToReportForATAssetDownloadProgress:(id)arg1;
- (id)_updateCacheAndGetMediaDownloadToReportForStoreDownloadProgress:(id)arg1;
- (id)activeDownloadForMediaItemPersistentID:(long long)arg1;
- (id)activeDownloadForStoreID:(long long)arg1;
- (void)addObserver:(id)arg1;
- (id)allMediaDownloadLibraryIdentifiers;
- (void)atcDidDownloadAsset:(id)arg1 withError:(id)arg2;
- (void)atcDidEnqueueAsset:(id)arg1;
- (void)atcDidUpdateAsset:(id)arg1 withProgress:(float)arg2;
- (void)atcWillEnqueueDownloads:(id)arg1 cancelDownloads:(id)arg2;
- (void)cancelDownloads:(id)arg1;
- (void)dealloc;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (void)downloadManager:(id)arg1 downloadsDidProgress:(id)arg2;
- (void)enqueueAssetForDownload:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)hasActiveDownloads;
- (id)init;
- (void)prioritizeDownload:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)sendKeepLocalStatusChanged:(long long)arg1 forLibraryIdentifier:(long long)arg2 entityType:(long long)arg3 withCompletionHandler:(id /* block */)arg4;

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
