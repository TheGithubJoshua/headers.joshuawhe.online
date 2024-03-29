<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CLSDataStore.h</title>
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

/Frameworks/ClassKit.framework/CLSDataStore.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit (144.0.27)
 */

@interface CLSDataStore : NSObject <CLSFaultProcessorDelegate, NSLocking> {
    int  _accountChangeToken;
    NSString * _appBundleIdentifier;
    NSString * _appName;
    CLSAuthTree * _authTree;
    CLSCurrentUser * _cachedCurrentUser;
    NSMutableSet * _dataObservers;
    <CLSDataStoreDelegate> * _delegate;
    struct NSMutableDictionary { Class x1; } * _deletedObjectsByID;
    CLSEndpointConnection * _endpointConnection;
    CLSGraph * _graph;
    NSDate * _lastPruneDate;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    CLSContext * _mainAppContext;
    NSMutableDictionary * _objectGenerationsByID;
    NSMutableArray * _pendingSaves;
    NSMutableArray * _runningActivities;
    bool  _saveInProgress;
}

@property (nonatomic, readonly) CLSContext *activeContext;
@property (nonatomic, readonly) CLSAuthTree *authTree;
@property (nonatomic, retain) CLSCurrentUser *cachedCurrentUser;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CLSDataStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLSEndpointConnection *endpointConnection;
@property (nonatomic, readonly) CLSGraph *graph;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CLSContext *mainAppContext;
@property (nonatomic, readonly) CLSActivity *runningActivity;
@property (readonly) Class superclass;

+ (Class)endpointClass;
+ (bool)isAvailable;
+ (bool)isDashboardApp;
+ (bool)isPDTool;
+ (id)newDatastore;
+ (id)shared;

- (void).cxx_destruct;
- (id)_addObject:(id)arg1;
- (void)_classesForCurrentUserWithRole:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_connectionConnected;
- (void)_connectionInterupted;
- (void)_createMainAppContext;
- (id)_filterObjectsBeingSavedFromObjects:(id)arg1;
- (id)_modifiedObjects;
- (void)_reconnect;
- (void)_reenableObservers;
- (void)_refreshMainAppContext;
- (void)_registerForDarwinNotifications;
- (void)_save;
- (void)_saveObjects:(id)arg1 completion:(id /* block */)arg2;
- (id)_validateObjects:(id)arg1;
- (id)activeContext;
- (void)addFavorite:(id)arg1;
- (void)addHandout:(id)arg1;
- (id)addObject:(id)arg1;
- (void)addRunningActivitiesObject:(id)arg1;
- (id)allContexts;
- (id)appIdentifier;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)authTree;
- (void)awaitExecuteQuery:(id)arg1 completion:(id /* block */)arg2;
- (id)cachedCurrentUser;
- (id)cachedMainAppContext;
- (void)classesForPersonID:(id)arg1 role:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)completeAllAssignedActivitiesMatching:(id)arg1;
- (void)contextsMatchingIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)contextsMatchingIdentifierPath:(id)arg1 completion:(id /* block */)arg2;
- (void)contextsMatchingIdentifierPath:(id)arg1 parentContext:(id)arg2 completion:(id /* block */)arg3;
- (void)contextsMatchingPredicate:(id)arg1 completion:(id /* block */)arg2;
- (id)currentUser;
- (void)currentUserWithCompletion:(id /* block */)arg1;
- (void)currentUserWithServer:(id)arg1 completion:(id /* block */)arg2;
- (id)dataServer:(id /* block */)arg1;
- (void)dataServer:(id)arg1 executeQuery:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)deregisterDataObserver:(id)arg1;
- (void)developerModeChanged:(id)arg1;
- (id)endpointConnection;
- (void)enrolledClassesWithCompletion:(id /* block */)arg1;
- (void)executeQuery:(id)arg1;
- (void)faultMainAppContext;
- (bool)faultProcessor:(id)arg1 shouldFaultRelation:(id)arg2 fromObject:(struct NSObject { Class x1; }*)arg3;
- (void)fetchAndCompleteAllAssignedActivitiesForContextPath:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)fetchTransparencyMessageInfoWithCompletion:(id /* block */)arg1;
- (id)graph;
- (void)handoutAttachmentForDocumentURL:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithEndpoint:(id)arg1;
- (void)instructedClassesWithCompletion:(id /* block */)arg1;
- (bool)isAllowedToInsertObject:(id)arg1;
- (bool)isAppClient;
- (bool)isDashboardAPIEnabled;
- (bool)isRemovedObject:(id)arg1;
- (void)lock;
- (id)mainAppContext;
- (void)markObjectAsDeleted:(id)arg1;
- (id)objectWithObjectID:(id)arg1;
- (void)personsInClassWithClassID:(id)arg1 role:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)pruneDeletedObjectsWithCompletion:(id /* block */)arg1;
- (void)publishHandout:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshAuthTreeWithCompletion:(id /* block */)arg1;
- (void)refreshMainAppContext;
- (void)registerDataObserver:(id)arg1;
- (void)removeContext:(id)arg1;
- (void)removeContextWithObjectID:(id)arg1;
- (void)removeFavorite:(id)arg1;
- (void)removeHandout:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)removeObjectWithObjectID:(id)arg1 class:(Class)arg2;
- (void)removeRunningActivitiesObject:(id)arg1;
- (void)reset;
- (id)runningActivities;
- (id)runningActivity;
- (void)saveObjects:(id)arg1 completion:(id /* block */)arg2;
- (void)saveWithCompletion:(id /* block */)arg1;
- (void)setCachedCurrentUser:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEndpointConnection:(id)arg1;
- (void)setMainAppContext:(id)arg1;
- (void)setShouldSyncTeacherBrowsedContexts:(bool)arg1 completion:(id /* block */)arg2;
- (void)shouldSyncTeacherBrowsedContextsWithCompletion:(id /* block */)arg1;
- (id)syncDataServer:(id /* block */)arg1;
- (void)syncFetchWithCompletion:(id /* block */)arg1;
- (id)syncUtilityServer:(id /* block */)arg1;
- (void)triggerProgressTransparencyMessageIfNeeded;
- (void)unlock;
- (id)utilityServer:(id /* block */)arg1;

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
