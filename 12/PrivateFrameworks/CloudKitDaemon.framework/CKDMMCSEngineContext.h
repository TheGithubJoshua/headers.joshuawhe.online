<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CKDMMCSEngineContext.h</title>
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

/PrivateFrameworks/CloudKitDaemon.framework/CKDMMCSEngineContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon (736.235)
 */

@interface CKDMMCSEngineContext : NSObject {
    CKDMMCS * _MMCS;
    struct _mmcs_engine { } * _MMCSEngine;
    NSString * _applicationBundleID;
    NSMutableIndexSet * _inMemoryItemsIDs;
    unsigned int  _maxChunkCountForSection;
    NSString * _path;
    long long  _refCount;
    NSRunLoop * _runLoop;
    NSString * _runLoopMode;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    long long  _state;
    bool  _stopMMCSThread;
}

@property (nonatomic) CKDMMCS *MMCS;
@property (nonatomic) struct _mmcs_engine { }*MMCSEngine;
@property (nonatomic, retain) NSString *applicationBundleID;
@property (nonatomic, retain) NSMutableIndexSet *inMemoryItemsIDs;
@property (nonatomic) unsigned int maxChunkCountForSection;
@property (nonatomic, retain) NSString *path;
@property (nonatomic) long long refCount;
@property (nonatomic, retain) NSRunLoop *runLoop;
@property (nonatomic, retain) NSString *runLoopMode;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (nonatomic) long long state;
@property (nonatomic) bool stopMMCSThread;

+ (id)_appID;
+ (bool)hasCachedCKDMMCSEngineContextForPath:(id)arg1;
+ (id)setupMMCSEngineWithApplicationBundleID:(id)arg1 path:(id)arg2 wasCached:(bool*)arg3 error:(id*)arg4;
+ (id)sharedContextsByPath;
+ (id)sharedContextsQueue;
+ (bool)tearDownMMCSEngineWithContext:(id)arg1;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)MMCS;
- (struct _mmcs_engine { }*)MMCSEngine;
- (void)_MMCSThread;
- (void)_MMCSTreadAbort;
- (bool)_setupMMCSEngineWithError:(id*)arg1;
- (bool)_setupMMCSEngineWithRetryCount:(unsigned long long)arg1 error:(id*)arg2;
- (void)_tearDownMMCSEngine;
- (id)applicationBundleID;
- (void)cancelRequestWithContext:(void*)arg1;
- (void)dealloc;
- (long long)decRefCount;
- (id)description;
- (id)inMemoryItemsIDs;
- (long long)incRefCount;
- (id)initWithApplicationBundleID:(id)arg1 path:(id)arg2;
- (unsigned int)maxChunkCountForSection;
- (unsigned long long)nextAvailableItemID;
- (id)path;
- (void)performOnRunLoop:(id /* block */)arg1;
- (long long)refCount;
- (id)runLoop;
- (id)runLoopMode;
- (id)semaphore;
- (void)setApplicationBundleID:(id)arg1;
- (void)setInMemoryItemsIDs:(id)arg1;
- (void)setMMCS:(id)arg1;
- (void)setMMCSEngine:(struct _mmcs_engine { }*)arg1;
- (void)setMaxChunkCountForSection:(unsigned int)arg1;
- (void)setPath:(id)arg1;
- (void)setRefCount:(long long)arg1;
- (void)setRunLoop:(id)arg1;
- (void)setRunLoopMode:(id)arg1;
- (void)setSemaphore:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStopMMCSThread:(bool)arg1;
- (long long)state;
- (bool)stopMMCSThread;
- (void)stopTrackingItemID:(unsigned long long)arg1;

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
