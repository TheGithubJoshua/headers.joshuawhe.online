<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CSDBThreadedRecordStore.h</title>
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

/PrivateFrameworks/CoreSDB.framework/CSDBThreadedRecordStore.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/CoreSDB.framework/CoreSDB (1000)
 */

@interface CSDBThreadedRecordStore : NSObject {
    NSString * _identifier;
    struct CSDBRecordStore { struct __CFString {} *x1; struct CSDBSqliteDatabase {} *x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; struct __CFDictionary {} *x5; struct __CFDictionary {} *x6; struct __CFSet {} *x7; bool x8; struct { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; } x9; int (*x10)(); struct __CFSet {} *x11; struct __CFDictionary {} *x12; void *x13; int x14; struct { int x_15_1_1; int x_15_1_2; long long *x_15_1_3; struct __CFSet {} *x_15_1_4; } x15; } * _recordStore;
    NSObject<OS_dispatch_queue> * _recordStoreQueue;
    _CSDBThreadObject * _thread;
    bool  _wantsRegister;
}

- (void)_teardownDatabaseOnQueue;
- (void)dealloc;
- (id)initWithIdentifier:(struct __CFString { }*)arg1 qosClass:(unsigned short)arg2;
- (bool)ownsCurrentThreadOtherwiseAssert:(bool)arg1;
- (void)performBlock:(id /* block */)arg1 afterDelay:(double)arg2;
- (void)performBlock:(id /* block */)arg1 waitUntilDone:(bool)arg2;
- (void)registerClass:(const struct { char *x1; int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); unsigned char x8; void *x9; int x10; struct { /* ? */ } *x11; void *x12; char *x13; int (*x14)(); int (*x15)(); int x16; struct { /* ? */ } *x17; int x18; int (*x19)(); int x20; }*)arg1;
- (void)setupDatabaseWithAllowLocalMigration:(bool)arg1 pathBlock:(id /* block */)arg2 setupStoreHandler:(int (*)arg3 connectionInitializer:(int (*)arg4 versionChecker:(int (*)arg5 migrationHandler:(int (*)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned int)arg8 registerBlock:(id /* block */)arg9;
- (void)setupDatabaseWithAllowLocalMigration:(bool)arg1 pathBlock:(id /* block */)arg2 setupStoreHandler:(int (*)arg3 connectionInitializer:(int (*)arg4 versionChecker:(int (*)arg5 migrationHandler:(int (*)arg6 schemaVersion:(int)arg7 dataProtectionClass:(unsigned int)arg8 registerBlock:(id /* block */)arg9 exclusiveOwnership:(bool)arg10;
- (void)teardownDatabase;

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
