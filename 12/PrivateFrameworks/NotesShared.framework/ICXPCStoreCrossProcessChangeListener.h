<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ICXPCStoreCrossProcessChangeListener.h</title>
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

/PrivateFrameworks/NotesShared.framework/ICXPCStoreCrossProcessChangeListener.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared (1349.30)
 */

@interface ICXPCStoreCrossProcessChangeListener : NSObject {
    NSManagedObjectContext * _context;
    ICSelectorDelayer * _delayer;
    bool  _listening;
    unsigned long long  _numberOfCoalescedNotifications;
    NSDate * _previousHistoryDate;
    NSPersistentHistoryToken * _previousHistoryToken;
    NSObject<OS_dispatch_queue> * _queue;
    NSPersistentStore * _store;
}

@property (nonatomic) NSManagedObjectContext *context;
@property (nonatomic, retain) ICSelectorDelayer *delayer;
@property (getter=isListening, nonatomic) bool listening;
@property (nonatomic) unsigned long long numberOfCoalescedNotifications;
@property (nonatomic, retain) NSDate *previousHistoryDate;
@property (nonatomic, retain) NSPersistentHistoryToken *previousHistoryToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) NSPersistentStore *store;

+ (id)contextSaveNotificationFromPersistentHistoryResult:(id)arg1 ignoringContextName:(id)arg2 fromTransactionAuthor:(id)arg3 latestToken:(id*)arg4 latestTimestamp:(id*)arg5;

- (void).cxx_destruct;
- (id)context;
- (void)dealloc;
- (id)delayer;
- (void)fetchChangeHistory;
- (void)handleDistributedNotification:(id)arg1;
- (void)handleLocalSaveNotification:(id)arg1;
- (void)handleXPCStoreNotification:(id)arg1;
- (id)init;
- (id)initWithStore:(id)arg1 context:(id)arg2;
- (bool)isListening;
- (unsigned long long)numberOfCoalescedNotifications;
- (void)postDistributedSaveNotification;
- (id)previousHistoryDate;
- (id)previousHistoryToken;
- (id)queue;
- (void)setContext:(id)arg1;
- (void)setDelayer:(id)arg1;
- (void)setListening:(bool)arg1;
- (void)setNumberOfCoalescedNotifications:(unsigned long long)arg1;
- (void)setPreviousHistoryDate:(id)arg1;
- (void)setPreviousHistoryToken:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setStore:(id)arg1;
- (void)startListening;
- (void)stopListening;
- (id)store;

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
