<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ACDDatabase.h</title>
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

/PrivateFrameworks/AccountsDaemon.framework/ACDDatabase.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon (113)
 */

@interface ACDDatabase : NSObject {
    NSManagedObjectContext * _context;
    id  _contextDidSaveNotificationObserver;
    NSString * _path;
    NSPersistentStore * _store;
}

@property (nonatomic) long long keychainVersion;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic) long long version;

+ (bool)_addPersistentStoreWithURL:(id)arg1 toStoreCoordinator:(id)arg2 withOptions:(id)arg3 error:(id*)arg4;
+ (struct __CFString { }*)_copyRootPath;
+ (bool)_isUnrecoverableDatabaseError:(id)arg1;
+ (id)_managedObjectModel;
+ (id)_optionsForOpeningPersistentStore;
+ (void)_removePersistentStoreAtURL:(id)arg1 forStoreCoordinator:(id)arg2;
+ (void)_replacePersistentStoreAtURL:(id)arg1 withCleanStoreForCoordinator:(id)arg2;
+ (void)_resetPeristentStoreCoordinator;
+ (id)_sharedPersistentCoordinatorForStoreAtPath:(id)arg1;
+ (id)defaultPath;

- (void).cxx_destruct;
- (id)_accountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (bool)_createLocalBackupCopy:(id*)arg1;
- (bool)_databaseFileExists;
- (void)_handleManagedObjectContextDidSaveNotification:(id)arg1;
- (id)_localBackupDirectoryPath;
- (id)_localBackupDirectoryURL;
- (id)_localBackupStorePath;
- (void)_setupManagedObjectContext;
- (id)_store;
- (unsigned long long)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (void)dealloc;
- (void)deleteAccountPropertyWithKey:(id)arg1 owner:(id)arg2;
- (id)existingObjectWithURI:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;
- (id)initWithDefaultPath;
- (id)initWithPath:(id)arg1;
- (id)initWithTimeMachineHomeFolderPath:(id)arg1;
- (long long)keychainVersion;
- (id)managedObjectContext;
- (id)managedObjectIDForURI:(id)arg1;
- (id)objectForObjectURI:(id)arg1;
- (id)path;
- (bool)saveWithError:(id*)arg1;
- (bool)saveWithError:(id*)arg1 rollbackOnFailure:(bool)arg2;
- (void)setAccountPropertyWithKey:(id)arg1 value:(id)arg2 owner:(id)arg3;
- (void)setKeychainVersion:(long long)arg1;
- (void)setVersion:(long long)arg1;
- (long long)version;

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
