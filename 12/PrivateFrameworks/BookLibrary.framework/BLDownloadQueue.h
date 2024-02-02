<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BLDownloadQueue.h</title>
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

/PrivateFrameworks/BookLibrary.framework/BLDownloadQueue.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary (153)
 */

@interface BLDownloadQueue : NSObject <SSBookDownloadQueue> {
    NSMutableDictionary * _activeDownloads;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _activeDownloadsLock;
    NSNumber * _currentAccountNumber;
    NSHashTable * _observers;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _observersLock;
    BLServiceProxy * _serviceProxy;
}

@property (nonatomic, retain) NSMutableDictionary *activeDownloads;
@property (nonatomic, retain) NSNumber *currentAccountNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *downloads;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) BLServiceProxy *serviceProxy;
@property (readonly) Class superclass;

+ (id)buyParametersValueForKey:(id)arg1 fromBuyParams:(id)arg2;
+ (void)cancelAllActiveDownloads;
+ (bool)isPreorderFromBuyParameters:(id)arg1;
+ (id)sharedInstance;
+ (id)storeIDFromBuyParameters:(id)arg1;

- (void).cxx_destruct;
- (void)_addDownloadWithMetadata:(id)arg1 isRestore:(bool)arg2 completion:(id /* block */)arg3;
- (void)_cancelAllPausedDownloads;
- (id)_dateFromObject:(id)arg1;
- (id)_downloadStatusFromDictionary:(id)arg1 outParamNewlyTrackedDownload:(bool*)arg2;
- (id)_downloadStatusStoreID:(id)arg1 orPermLink:(id)arg2 downloadID:(id)arg3 isPaused:(bool)arg4 isAudiobook:(bool)arg5;
- (void)_notifyComplete:(id)arg1;
- (void)_notifyFailed:(id)arg1;
- (void)_notifyProgress:(id)arg1;
- (id)_numberFromObject:(id)arg1;
- (void)_postDownloadCompleteNotificationWithDictionary:(id)arg1 failed:(bool)arg2;
- (void)_postUpdatesForCurrentlyPausedDownloadsForObserver:(id)arg1;
- (void)_purchaseFailed:(id)arg1;
- (id)_purchaseResponseFromDictionary:(id)arg1;
- (void)_purchaseSucceeded:(id)arg1;
- (void)_sendInitialProgressNotificationForDownloadWithStoreID:(id)arg1 orPermlink:(id)arg2 downloadID:(id)arg3 isPaused:(bool)arg4 isAudiobook:(bool)arg5 targetObserver:(id)arg6;
- (void)_storeChanged:(id)arg1;
- (id)_stringFromObject:(id)arg1;
- (id)activeDownloads;
- (void)addDownloadWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)addDownloadWithPermlink:(id)arg1 title:(id)arg2 completion:(id /* block */)arg3;
- (void)addDownloadWithPurchaseParameters:(id)arg1 completion:(id /* block */)arg2;
- (void)addDownloadWithPurchaseParameters:(id)arg1 storeID:(id)arg2 completion:(id /* block */)arg3;
- (void)addDownloadsWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)addObserver:(id)arg1;
- (void)addRestoreDownloadWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)addRestoreDownloadsWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelAllActiveDownloadsWithCompletion:(id /* block */)arg1;
- (void)cancelDownloadWithID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)currentAccountNumber;
- (void)dealloc;
- (id)downloads;
- (id)init;
- (id)observers;
- (void)pauseDownloadWithID:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 completion:(id /* block */)arg3;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 isAudiobook:(bool)arg3 completion:(id /* block */)arg4;
- (void)removeObserver:(id)arg1;
- (void)resumeDownloadWithID:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)serviceProxy;
- (void)setActiveDownloads:(id)arg1;
- (void)setCurrentAccountNumber:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setServiceProxy:(id)arg1;

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