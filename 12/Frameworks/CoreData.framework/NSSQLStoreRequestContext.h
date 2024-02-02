<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSSQLStoreRequestContext.h</title>
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

/Frameworks/CoreData.framework/NSSQLStoreRequestContext.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreData.framework/CoreData (866.6)
 */

@interface NSSQLStoreRequestContext : NSObject {
    NSSQLiteConnection * _connection;
    NSManagedObjectContext * _context;
    NSError * _error;
    NSException * _exception;
    bool  _hasHistoryTracking;
    NSPersistentStoreRequest * _persistentStoreRequest;
    id  _result;
    NSSQLCore * _sqlCore;
    bool  _storeIsInMemory;
    NSNumber * _transactionID;
    bool  _useColoredLogging;
    bool  _useConcurrentFetching;
}

@property (nonatomic, retain) NSSQLiteConnection *connection;
@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (nonatomic, readonly) int debugLogLevel;
@property (nonatomic, retain) id exception;
@property (nonatomic, readonly) bool isWritingRequest;
@property (nonatomic, retain) NSError *localError;
@property (nonatomic, readonly) NSPersistentStoreRequest *persistentStoreRequest;
@property (nonatomic, readonly) NSQueryGenerationToken *queryGenerationToken;
@property (nonatomic, readonly) unsigned long long requestType;
@property (nonatomic, retain) id result;
@property (nonatomic, readonly) NSSQLRowCache *rowCache;
@property (nonatomic, readonly) bool shouldRegisterQueryGeneration;
@property (nonatomic, readonly) NSSQLCore *sqlCore;
@property (nonatomic, readonly) bool storeIsInMemory;
@property (nonatomic, readonly) NSNumber *transactionID;
@property (nonatomic, readonly) bool useColoredLogging;
@property (nonatomic, readonly) bool useConcurrentFetching;

- (id)connection;
- (id)context;
- (id)createNestedObjectFaultContextForObjectWithID:(id)arg1;
- (void)dealloc;
- (int)debugLogLevel;
- (id)exception;
- (void)executeEpilogue;
- (void)executePrologue;
- (void)executeRequestCore:(id*)arg1;
- (bool)executeRequestUsingConnection:(id)arg1;
- (bool)forConflictAnalysis;
- (bool)hasHistoryTracking;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;
- (id)localError;
- (id)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;
- (id)newStatementWithSQLString:(id)arg1;
- (id)notificationSourceObject;
- (id)persistentStoreRequest;
- (id)queryGenerationToken;
- (unsigned long long)requestType;
- (id)result;
- (id)rowCache;
- (void)setConnection:(id)arg1;
- (void)setException:(id)arg1;
- (void)setLocalError:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setTransactionID:(id)arg1;
- (bool)shouldRegisterQueryGeneration;
- (id)sqlCore;
- (bool)storeIsInMemory;
- (id)transactionID;
- (bool)useColoredLogging;
- (bool)useConcurrentFetching;

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