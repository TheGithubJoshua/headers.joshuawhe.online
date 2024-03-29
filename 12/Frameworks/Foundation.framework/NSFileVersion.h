<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSFileVersion.h</title>
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

/Frameworks/Foundation.framework/NSFileVersion.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Foundation.framework/Foundation (1575.23)
 */

@interface NSFileVersion : NSObject {
    id  _addition;
    NSURL * _contentsURL;
    bool  _contentsURLIsAccessed;
    id  _deadVersionIdentifier;
    bool  _discardable;
    NSURL * _fileURL;
    bool  _isBackup;
    bool  _isResolved;
    NSString * _localizedComputerName;
    NSString * _localizedName;
    NSDate * _modificationDate;
    NSString * _name;
    id  _nonLocalVersion;
    id  _reserved;
}

@property (readonly, copy) NSURL *URL;
@property (getter=_isBackup, readonly) bool _isBackup;
@property (getter=isConflict, readonly) bool conflict;
@property (getter=isDiscardable) bool discardable;
@property (readonly, copy) NSString *etag;
@property (readonly) bool hasLocalContents;
@property (readonly) bool hasThumbnail;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *localizedNameOfSavingComputer;
@property (readonly, copy) NSDate *modificationDate;
@property (readonly, copy) NSString *originalPOSIXName;
@property (readonly, copy) NSString *originatorName;
@property (readonly, copy) NSPersonNameComponents *originatorNameComponents;
@property (readonly, retain) <NSCoding> *persistentIdentifier;
@property (getter=isResolved) bool resolved;
@property (readonly) unsigned long long size;
@property (getter=isUbiquitous, readonly) bool ubiquitous;

+ (void*)_addConflictObserverForItemAtURL:(id)arg1 statusChangedHandler:(id /* block */)arg2;
+ (id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 temporaryStorageIdentifier:(id*)arg4 error:(id*)arg5;
+ (id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 temporaryStorageIdentifier:(id*)arg5 error:(id*)arg6;
+ (id)_autosaveDirectoryURLCreateIfNecessary:(bool)arg1;
+ (bool)_conflictsExistForItemAtURL:(id)arg1;
+ (struct NSObject { Class x1; }*)_existingLibraryForURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (bool)_isTemporaryStorageRequiredForGSError:(id)arg1 andURL:(id)arg2;
+ (struct NSObject { Class x1; }*)_libraryForURL:(id)arg1 temporaryStorageIdentifier:(id*)arg2;
+ (id)_makePermanentStorageLibraryForURL:(id)arg1 temporaryStorageRequired:(bool*)arg2 error:(id*)arg3;
+ (id)_makeTemporaryStorageIdentifier;
+ (void)_markConflicts:(id)arg1 asHandledForItemAtURL:(id)arg2;
+ (id)_otherNonpurgeableVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 withoutOptions:(unsigned long long)arg3;
+ (bool)_permanentVersionStorageSupportedForURL:(id)arg1 temporaryStorageIdentifier:(id*)arg2 error:(id*)arg3;
+ (void)_removeConflictObserver:(void*)arg1;
+ (bool)_removeOtherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 error:(id*)arg3;
+ (void)_removeTemporaryDirectoryAtURL:(id)arg1;
+ (id)_supportedGenerationalStorageClientIDs;
+ (id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_temporaryStorageLocationForIdentifier:(id)arg1;
+ (id)_versionOfItemAtURL:(id)arg1 forClientID:(id)arg2 name:(id)arg3 temporaryStorageIdentifier:(id)arg4 evenIfDeleted:(bool)arg5;
+ (id)_versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 temporaryStorageIdentifier:(id)arg3;
+ (id)addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
+ (id)currentVersionOfItemAtURL:(id)arg1;
+ (void)discoverUbiquitousVersionsOfItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getNonlocalVersionsOfItemAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)getNonlocalVersionsOfItemAtURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)otherVersionsOfItemAtURL:(id)arg1;
+ (bool)removeOtherVersionsOfItemAtURL:(id)arg1 error:(id*)arg2;
+ (id)temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1;
+ (id)unresolvedConflictVersionsOfItemAtURL:(id)arg1;
+ (bool)unresolvedConflictsExistForItemAtURL:(id)arg1;
+ (id)versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2;
+ (id)versionsOfItemAtURL:(id)arg1;

- (id)URL;
- (id)_documentInfo;
- (id)_initWithAddition:(id)arg1;
- (id)_initWithFileURL:(id)arg1 library:(id)arg2 clientID:(id)arg3 name:(id)arg4 contentsURL:(id)arg5 isBackup:(bool)arg6 revision:(id)arg7;
- (id)_initWithFileURL:(id)arg1 nonLocalVersion:(id)arg2;
- (bool)_isBackup;
- (void)_overrideModificationDateWithDate:(id)arg1;
- (bool)_preserveConflictVersionLocally;
- (bool)_setDocumentInfo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)etag;
- (bool)hasLocalContents;
- (bool)hasThumbnail;
- (unsigned long long)hash;
- (id)init;
- (bool)isConflict;
- (bool)isDiscardable;
- (bool)isEqual:(id)arg1;
- (bool)isResolved;
- (bool)isUbiquitous;
- (id)localizedName;
- (id)localizedNameOfSavingComputer;
- (id)modificationDate;
- (id)originalPOSIXName;
- (id)originatorName;
- (id)originatorNameComponents;
- (id)persistentIdentifier;
- (bool)removeAndReturnError:(id*)arg1;
- (id)replaceItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)restoreOverItemAtURL:(id)arg1 error:(id*)arg2;
- (void)setDiscardable:(bool)arg1;
- (void)setResolved:(bool)arg1;
- (unsigned long long)size;

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
