<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>BRCNotificationPipe.h</title>
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

/PrivateFrameworks/CloudDocsDaemon.framework/BRCNotificationPipe.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon (575.504)
 */

@interface BRCNotificationPipe : NSObject <BRItemNotificationSending> {
    id /* block */  _boostReply;
    BRCXPCClient * _client;
    <BRCNotificationPipeDelegate> * _delegate;
    NSMutableSet * _externalAppLibraries;
    BRCDataOrDocsScopeGatherer * _gatherer;
    bool  _hasProgressUpdatesInFlight;
    bool  _hasUpdatesInFlight;
    unsigned long long  _initialGatherMaxRank;
    BRCNotificationManager * _manager;
    BRNotificationQueue * _notifs;
    BRCItemGlobalID * _oldWatchedAncestorItemGlobalID;
    NSMutableDictionary * _pendingProgressUpdatesByID;
    NSObject<OS_dispatch_queue> * _queue;
    <BRItemNotificationReceiving> * _receiver;
    bool  _volumeIsCaseSensitive;
    NSString * _watchForBundleID;
    unsigned short  _watchItemOptions;
    int  _watchKind;
    NSString * _watchNamePrefix;
    BRFileObjectID * _watchedAncestorFileObjectID;
    NSString * _watchedAncestorFilenameToItem;
    BRCItemGlobalID * _watchedAncestorItemGlobalID;
    NSSet * _watchedAppLibraries;
    unsigned long long  _watchedAppLibrariesFlags;
    NSSet * _watchedAppLibraryIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BRCNotificationPipeDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BRCNotificationManager *manager;
@property (retain) BRCItemGlobalID *oldWatchedAncestorItemGlobalID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (retain) BRFileObjectID *watchedAncestorFileObjectID;
@property (retain) NSString *watchedAncestorFilenameToItem;
@property (retain) BRCItemGlobalID *watchedAncestorItemGlobalID;

- (void).cxx_destruct;
- (void)__flush;
- (void)_addIntraContainerUpdatesFromInterContainerUpdate:(id)arg1 toArray:(id)arg2;
- (void)_flushProgressUpdates;
- (void)_gatherIfNeededAndFlushAsync;
- (id)_initWithManager:(id)arg1 startingRank:(unsigned long long)arg2;
- (int)_isInterestingUpdate:(id)arg1;
- (void)_processProgressUpdates:(id)arg1;
- (void)_registerAsWatcherIfNeeded;
- (void)_stopWatchingItems;
- (void)_triggerImmediateReadOfDocumentIfNeeded;
- (void)addDequeueCallback:(id /* block */)arg1;
- (void)addNotification:(id)arg1 asDead:(bool)arg2;
- (void)boostPriority:(id /* block */)arg1;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)initWithReceiver:(id)arg1 manager:(id)arg2 startingRank:(unsigned long long)arg3;
- (id)initWithXPCReceiver:(id)arg1 client:(id)arg2 manager:(id)arg3 startingRank:(unsigned long long)arg4;
- (oneway void)invalidate;
- (void)invalidateIfWatchingAppLibraryIDs:(id)arg1;
- (void)invalidateReceiverIfWatchingAppLibraryIDs:(id)arg1;
- (id)manager;
- (id)oldWatchedAncestorItemGlobalID;
- (void)processProgressUpdates:(id)arg1;
- (void)processUpdates:(id)arg1 withRank:(unsigned long long)arg2;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setOldWatchedAncestorItemGlobalID:(id)arg1;
- (void)setWatchedAncestorFileObjectID:(id)arg1;
- (void)setWatchedAncestorFilenameToItem:(id)arg1;
- (void)setWatchedAncestorItemGlobalID:(id)arg1;
- (void)watchItemAtURL:(id)arg1 lookup:(id)arg2 options:(unsigned short)arg3 gatherReply:(id /* block */)arg4;
- (void)watchItemAtURL:(id)arg1 options:(unsigned short)arg2 gatherReply:(id /* block */)arg3;
- (void)watchItemInProcessAtURL:(id)arg1 options:(unsigned short)arg2 gatherReply:(id /* block */)arg3;
- (void)watchItemsNamesPrefixedBy:(id)arg1 inScopes:(unsigned short)arg2 appLibraryIDs:(id)arg3 gatherReply:(id /* block */)arg4;
- (void)watchScopes:(unsigned short)arg1 appLibraryIDs:(id)arg2 gatherReply:(id /* block */)arg3;
- (void)watchScopes:(unsigned short)arg1 gatherReply:(id /* block */)arg2;
- (void)watchScopes:(unsigned short)arg1 trustedAppLibraryIDs:(id)arg2 gatherReply:(id /* block */)arg3;
- (id)watchedAncestorFileObjectID;
- (id)watchedAncestorFilenameToItem;
- (id)watchedAncestorItemGlobalID;

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
