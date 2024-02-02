<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDSourceOrderManager.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDSourceOrderManager.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDSourceOrderManager : NSObject {
    HDProfile * _profile;
    HDDatabaseValueCache * _sourceOrdersForTypeCache;
}

+ (id)_defaultOrderingWithSources:(id)arg1;

- (void).cxx_destruct;
- (bool)_addOrderedSource:(id)arg1 objectType:(id)arg2 transactionCache:(id)arg3 database:(id)arg4 error:(id*)arg5;
- (id)_defaultSourceCacheItemWithTransactionCache:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (bool)_insertCodableObjectTypeSourceOrder:(id)arg1 transactionCache:(id)arg2 database:(id)arg3 error:(id*)arg4;
- (id)_mergedOrderedSourcesForExistingOrder:(id)arg1 codableSourceOrder:(id)arg2 incomingSources:(id)arg3;
- (id)_orderedSourceIDsForOrderedSources:(id)arg1 sourcesByID:(id)arg2 objectType:(id)arg3 transactionCache:(id)arg4 database:(id)arg5 error:(id*)arg6;
- (id)_sourceCacheItemForObjectType:(id)arg1 error:(id*)arg2;
- (id)_sourceCacheItemForObjectType:(id)arg1 transactionCache:(id)arg2 database:(id)arg3 error:(id*)arg4;
- (id)_sourceCacheItemFromOrderedIDs:(id)arg1 userOrdered:(bool)arg2 transactionCache:(id)arg3 database:(id)arg4 error:(id*)arg5;
- (id)_sourcesForCodableSourceOrder:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (bool)_updateOrderedSources:(id)arg1 objectType:(id)arg2 userOrdered:(bool)arg3 error:(id*)arg4;
- (bool)addOrderedSource:(id)arg1 objectTypes:(id)arg2 error:(id*)arg3;
- (bool)createSourceOrdersWithCodables:(id)arg1 error:(id*)arg2;
- (id)initWithProfile:(id)arg1;
- (id)orderedSourceIDsForObjectType:(id)arg1 bundleIdentifierMapping:(id)arg2 userOrdered:(bool*)arg3 error:(id*)arg4;
- (id)orderedSourcesForObjectType:(id)arg1 error:(id*)arg2;
- (void)resetCacheInDatabase:(id)arg1;
- (bool)resetCacheWithError:(id*)arg1;
- (bool)updateOrderedSources:(id)arg1 forObjectType:(id)arg2 error:(id*)arg3;

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