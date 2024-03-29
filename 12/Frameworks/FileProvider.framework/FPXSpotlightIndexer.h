<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>FPXSpotlightIndexer.h</title>
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

/Frameworks/FileProvider.framework/FPXSpotlightIndexer.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider (125.201)
 */

@interface FPXSpotlightIndexer : NSObject <CSSearchableIndexDelegate> {
    unsigned long long  _clientState;
    NSObject<OS_dispatch_semaphore> * _clientStateSemaphore;
    NSOperation * _currentOperation;
    FPXDomainContext * _domainContext;
    CSSearchableIndex * _index;
    NSString * _indexName;
    bool  _isCanceled;
    NSData * _lastIndexState;
    NSOperationQueue * _operationQueue;
    NSString * _providerIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    <NSFileProviderEnumerator> * _vendorEnumerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) FPXDomainContext *domainContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CSSearchableIndex *index;
@property (nonatomic, readonly) NSData *lastIndexState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (readonly) <NSFileProviderEnumerator> *vendorEnumerator;

- (void).cxx_destruct;
- (void)_indexOneBatchWithCompletionHandler:(id /* block */)arg1;
- (void)_invalidate;
- (void)_learnNewIndexState:(id)arg1;
- (void)dealloc;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (id)domainContext;
- (void)dropIndexAndInvalidateWithCompletionHandler:(id /* block */)arg1;
- (void)dropIndexWithCompletionHandler:(id /* block */)arg1;
- (void)dumpStateTo:(id)arg1;
- (id)index;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)arg1;
- (id)initWithIndexName:(id)arg1 context:(id)arg2;
- (void)invalidate;
- (id)lastIndexState;
- (id)queue;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (id)vendorEnumerator;

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
