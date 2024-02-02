<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ICInAppMessageStore.h</title>
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

/PrivateFrameworks/iTunesCloud.framework/ICInAppMessageStore.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud (1)
 */

@interface ICInAppMessageStore : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSString * _filePath;
    NSMutableDictionary * _messageEntryCache;
    NSMutableDictionary * _messageMetadataCache;
    NSMutableArray * _pendingEvents;
    NSMutableDictionary * _propertyCache;
}

- (void).cxx_destruct;
- (void)_commit;
- (id)_defaultStoreFilePath;
- (void)_load;
- (void)addMessageEntry:(id)arg1 completion:(id /* block */)arg2;
- (void)addPendingMessageEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)allStorePropertiesWithCompletion:(id /* block */)arg1;
- (void)getAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getAllMessageEntriesWithCompletion:(id /* block */)arg1;
- (void)getAllMetadataForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getMessageEntryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)getStorePropertyForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithFilePath:(id)arg1;
- (void)pendingMessageEventsWithCompletion:(id /* block */)arg1;
- (void)removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeAllMetadataForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeMessageEntry:(id)arg1 completion:(id /* block */)arg2;
- (void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)removeMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)removePendingMessageEventWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)resetStoreWithCompletion:(id /* block */)arg1;
- (void)updateMessageEntry:(id)arg1 completion:(id /* block */)arg2;
- (void)updateMetadata:(id)arg1 messageIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)updateStoreProperty:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;

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