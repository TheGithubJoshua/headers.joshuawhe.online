<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ENSQLiteConnection.h</title>
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

/PrivateFrameworks/ExposureNotificationDaemon.framework/ENSQLiteConnection.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon (100.1)
 */

@interface ENSQLiteConnection : NSObject {
    int  _additionalOpenFlags;
    struct sqlite3 { } * _db;
    NSURL * _fileURL;
    bool  _isInTransaction;
    struct __CFDictionary { } * _statementCache;
}

@property (nonatomic) int additionalOpenFlags;
@property (nonatomic, readonly, copy) NSURL *fileURL;
@property (nonatomic, readonly) bool isOpen;
@property (nonatomic, readonly) long long lastInsertedRowID;

- (void).cxx_destruct;
- (bool)_executeSQL:(id)arg1 cacheStatement:(bool)arg2 error:(id*)arg3 bindingHandler:(id /* block */)arg4 enumerationHandler:(id /* block */)arg5;
- (id)_initWithDatabaseURL:(id)arg1;
- (id)_lastErrorWithResultCode:(int)arg1;
- (bool)_prepareStatementForSQL:(id)arg1 cache:(bool)arg2 error:(id*)arg3 statementHandler:(id /* block */)arg4;
- (bool)_stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(bool*)arg2 error:(id*)arg3;
- (int)additionalOpenFlags;
- (void)close;
- (void)dealloc;
- (bool)executeSQL:(id)arg1 error:(id*)arg2;
- (bool)executeSQL:(id)arg1 error:(id*)arg2 bindingHandler:(id /* block */)arg3 enumerationHandler:(id /* block */)arg4;
- (bool)executeUncachedSQL:(id)arg1 error:(id*)arg2;
- (bool)executeUncachedSQLStatements:(id)arg1 error:(id*)arg2;
- (id)fileURL;
- (bool)getIntegerValue:(long long*)arg1 forPragma:(id)arg2 error:(id*)arg3;
- (bool)getUserVersion:(long long*)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithDatabaseURL:(id)arg1;
- (bool)isOpen;
- (long long)lastInsertedRowID;
- (int)openWithError:(id*)arg1;
- (bool)performTransactionWithType:(long long)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (void)setAdditionalOpenFlags:(int)arg1;
- (bool)setIntegerValue:(long long)arg1 forPragma:(id)arg2 error:(id*)arg3;
- (bool)setUserVersion:(long long)arg1 error:(id*)arg2;
- (bool)truncateWithError:(id*)arg1;

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
