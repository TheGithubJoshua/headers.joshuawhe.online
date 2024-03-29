<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WBSFaviconProvider.h</title>
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

/PrivateFrameworks/SafariShared.framework/WBSFaviconProvider.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared (607.3.18)
 */

@interface WBSFaviconProvider : NSObject <WBSSiteMetadataProvider> {
    NSArray * _allIconScales;
    NSURL * _baseURL;
    NSCalendar * _calendar;
    double  _expirationInterval;
    NSMutableDictionary * _hostsToRequestsMap;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSObject<OS_dispatch_queue> * _internalSavingQueue;
    bool  _isReadOnly;
    WBSFaviconProviderPersistenceController * _persistenceController;
    double  _preferredIconScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredIconSize;
    unsigned long long  _privateDataRetentionCount;
    <WBSSiteMetadataProviderDelegate> * _providerDelegate;
    long long  _providerState;
    NSCache * _responseCache;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaledPreferredIconSize;
    id /* block */  _shouldCheckIntegrityWhenOpeningDatabaseBlock;
    NSMutableDictionary * _urlsToFaviconRecordsSavedDuringMigration;
}

@property (nonatomic, readonly, copy) NSArray *allIconScales;
@property (nonatomic, readonly) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isReadOnly;
@property (nonatomic, readonly) double preferredIconScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredIconSize;
@property (nonatomic) <WBSSiteMetadataProviderDelegate> *providerDelegate;
@property (nonatomic, readonly) bool providesFavicons;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })defaultFaviconSize;

- (void).cxx_destruct;
- (void)_addCachedResponse:(id)arg1 forRequest:(id)arg2;
- (void)_atomicallyLinkPageURLs:(id)arg1 toIconWithInfo:(id)arg2 isPrivate:(bool)arg3;
- (void)_atomicallySaveImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 size:(struct CGSize { double x1; double x2; })arg5 isPrivate:(bool)arg6 completionHandler:(id /* block */)arg7;
- (id)_cachedResponseForRequest:(id)arg1;
- (void)_confirmImageDataShouldBeSaved:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 pageURL:(id)arg3 iconURL:(id)arg4 includingPrivateData:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)_getIconForRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_hostFromRequest:(id)arg1;
- (id)_hostFromURL:(id)arg1;
- (bool)_isIconDateExpired:(id)arg1;
- (void)_linkPageURL:(id)arg1 toIconWithInfo:(id)arg2 isPrivate:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_prepareAndSendResponseForRequests:(id)arg1 forceDidReceiveNewData:(bool)arg2;
- (void)_registerRequest:(id)arg1;
- (void)_removeCachedResponsesForRequest:(id)arg1;
- (void)_removeCachedResponsesForURL:(id)arg1;
- (id)_requestsForHost:(id)arg1;
- (id)_responseCacheKeyForRequest:(id)arg1;
- (id)_responseDictionaryKeyForRequest:(id)arg1;
- (void)_saveImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 size:(struct CGSize { double x1; double x2; })arg5 isPrivate:(bool)arg6 completionHandler:(id /* block */)arg7;
- (void)_updateOutstandingRequestsAfterSuccessfulSetup;
- (void)_updateOutstandingRequestsForPageURL:(id)arg1 forceDidReceiveNewData:(bool)arg2;
- (id)allIconScales;
- (id)baseURL;
- (id)builtInIconForRequest:(id)arg1;
- (bool)canHandleRequest:(id)arg1;
- (void)cleanUpAfterPersistenceSetUpDidSucceed:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)emptyCaches;
- (id)fallbackIconForRequest:(id)arg1;
- (void)flushPrivateDataFromMemoryWithCompletionHandler:(id /* block */)arg1;
- (void)imageForRequestDuringPersistenceSetUp:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(struct CGSize { double x1; double x2; })arg3 atScale:(double)arg4 allScales:(id)arg5 isReadOnly:(bool)arg6 shouldCheckIntegrityWhenOpeningDatabaseBlock:(id /* block */)arg7;
- (id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 preferredIconSize:(struct CGSize { double x1; double x2; })arg3 atScale:(double)arg4 allScales:(id)arg5 shouldCheckIntegrityWhenOpeningDatabaseBlock:(id /* block */)arg6;
- (bool)isReadOnly;
- (void)linkIconFromPageURL:(id)arg1 toCurrentPageURL:(id)arg2 isPrivate:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)persistenceController;
- (double)preferredIconScale;
- (struct CGSize { double x1; double x2; })preferredIconSize;
- (void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(bool)arg2;
- (id)providerDelegate;
- (long long)providerState;
- (bool)providesFavicons;
- (void)releasePrivateData;
- (void)removeAllIconsForURLStringsNotIn:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeIconForURLString:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)responseForRequest:(id)arg1 willProvideUpdates:(bool*)arg2;
- (void)retainPrivateData;
- (void)saveFaviconImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 size:(struct CGSize { double x1; double x2; })arg5 isPrivate:(bool)arg6 completionHandler:(id /* block */)arg7;
- (void)savePendingChangesBeforeTermination;
- (void)setProviderDelegate:(id)arg1;
- (void)setUpPersistenceAtPath:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setUpWithCompletionHandler:(id /* block */)arg1;
- (void)shouldIconDataBeSavedForIconWithPageURL:(id)arg1 originalPageURL:(id)arg2 iconURL:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4 isPrivate:(bool)arg5 completionHandler:(id /* block */)arg6;
- (void)stopWatchingUpdatesForRequest:(id)arg1;

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
