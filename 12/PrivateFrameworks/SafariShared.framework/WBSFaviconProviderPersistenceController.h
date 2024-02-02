<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WBSFaviconProviderPersistenceController.h</title>
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

/PrivateFrameworks/SafariShared.framework/WBSFaviconProviderPersistenceController.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared (607.3.18)
 */

@interface WBSFaviconProviderPersistenceController : NSObject <WBSDataCacheDelegate, WBSSQLiteStoreDelegate> {
    NSURL * _baseURL;
    long long  _controllerState;
    NSURL * _databaseURL;
    NSURL * _diskCacheURL;
    WBSFaviconProviderDatabaseController * _faviconDatabase;
    WBSOnDiskDataCache * _faviconDiskCache;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isReadOnly;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredIconSize;
    WBSFaviconProviderPrivateCache * _privateCache;
    WBSFaviconProviderRecordCache * _recordsCache;
    id /* block */  _setUpCompletionHandler;
}

@property (nonatomic, readonly) NSURL *databaseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *diskCacheURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_faviconStatusFromWBSSQLStoreStatus:(long long)arg1;
- (void)_finishSetUpWithStatus:(long long)arg1;
- (void)_iconForIconUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_imageFromURL:(id)arg1;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (void)dataCacheDidSetUp:(id)arg1;
- (id)databaseURL;
- (id)diskCacheURL;
- (void)firstIconForVariantsOfDomainString:(id)arg1 includingPrivateData:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)firstIconForVariantsOfPageURLString:(id)arg1 includingPrivateData:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)flushPrivateDataFromMemoryWithCompletionHandler:(id /* block */)arg1;
- (void)iconForIconURLString:(id)arg1 includingPrivateData:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)iconForPageURLString:(id)arg1 includingPrivateData:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)iconInfoForIconURLString:(id)arg1 includingPrivateData:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)iconInfoForPageURLString:(id)arg1 includingPrivateData:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithPersistenceBaseURL:(id)arg1 databaseName:(id)arg2 preferredIconSize:(struct CGSize { double x1; double x2; })arg3 isReadOnly:(bool)arg4;
- (void)linkPageURLString:(id)arg1 toIconURLString:(id)arg2 isPrivate:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)openAndCheckIntegrity:(bool)arg1 createIfNeeded:(bool)arg2 fallBackToMemoryStoreIfError:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)pageURLStringsPrefixedWithVariantsOfDomainString:(id)arg1 includingPrivateData:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)rejectedResourceInfoForPageURLString:(id)arg1 iconURLString:(id)arg2 includingPrivateData:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)removeAllIconsWithCompletionHandler:(id /* block */)arg1;
- (void)removeIconWithPageURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeIconsWithURLStringsNotFoundIn:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)savePendingChangesBeforeTermination;
- (void)setIconData:(id)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 iconSize:(struct CGSize { double x1; double x2; })arg4 hasGeneratedResolutions:(bool)arg5 isPrivate:(bool)arg6 completionHandler:(id /* block */)arg7;
- (void)setIconIsRejectedResource:(bool)arg1 forPageURLString:(id)arg2 iconURLString:(id)arg3 isPrivate:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)sqliteStoreDidFailDatabaseIntegrityCheck:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sqliteStoreDidFallBackToInMemoryStore:(id)arg1;

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