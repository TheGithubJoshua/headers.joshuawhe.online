<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSFileProviderManager.h</title>
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

/Frameworks/FileProvider.framework/NSFileProviderManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider (125.201)
 */

@interface NSFileProviderManager : NSObject {
    NSMutableDictionary * _completionHandlersByItemID;
    NSXPCConnection<FPDDaemon> * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSURL * _documentStorageURL;
    NSFileProviderDomain * _domain;
    NSArray * _presentedFiles;
    NSString * _providerIdentifier;
    <FPDRemoteFileProvider><NSXPCProxyCreating> * _remoteFileProvider;
    NSObject<OS_dispatch_queue> * _requestQueue;
    NSObject<OS_dispatch_semaphore> * _sem;
    NSObject<OS_dispatch_queue> * _signalUpdateQueue;
    NSObject<OS_dispatch_source> * _signalUpdateSource;
}

@property (nonatomic, readonly) NSURL *documentStorageURL;
@property (copy) NSArray *presentedFiles;
@property (nonatomic, readonly) NSString *providerIdentifier;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (void)addDomain:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)addDomain:(id)arg1 forProviderIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)defaultManager;
+ (void)getDomainsWithCompletionHandler:(id /* block */)arg1;
+ (id)managerForDomain:(id)arg1;
+ (id)placeholderURLForURL:(id)arg1;
+ (void)removeAllDomainsForProviderIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)removeAllDomainsWithCompletionHandler:(id /* block */)arg1;
+ (void)removeDomain:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)removeDomain:(id)arg1 forProviderIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)writePlaceholderAtURL:(id)arg1 withDictionary:(id)arg2 error:(id*)arg3;
+ (bool)writePlaceholderAtURL:(id)arg1 withMetadata:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_cacheProviderInfo;
- (void)_callCompletionHandlers:(id)arg1 error:(id)arg2;
- (id)_connection;
- (void)_failToSignalPendingChangesWithError:(id)arg1 completionHandlersByItemID:(id)arg2;
- (id)_initWithProviderIdentifier:(id)arg1;
- (id)_initWithProviderIdentifier:(id)arg1 domain:(id)arg2;
- (void)_signalPendingEnumerators;
- (void)dealloc;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)documentStorageURL;
- (void)fetchRemoteFileProviderSynchronously:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)itemIDForIdentifier:(id)arg1;
- (id)presentedFiles;
- (id)providerIdentifier;
- (void)registerURLSessionTask:(id)arg1 forItemWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)remoteFileProviderWithCompletionHandler:(id /* block */)arg1;
- (void)setPresentedFiles:(id)arg1;
- (void)signalEnumeratorForContainerItemIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)brc_sharedProviderManager;

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