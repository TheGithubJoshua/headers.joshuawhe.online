<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSPersistentStore.h</title>
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

/Frameworks/CoreData.framework/NSPersistentStore.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreData.framework/CoreData (866.6)
 */

@interface NSPersistentStore : NSObject {
    NSString * _configurationName;
    NSPersistentStoreCoordinator * _coordinator;
    id  _coreSpotlightDelegate;
    id  _defaultFaultHandler;
    struct _objectStoreFlags { 
        unsigned int isReadOnly : 1; 
        unsigned int cleanOnRemove : 1; 
        unsigned int isMDDirty : 1; 
        unsigned int _RESERVED : 29; 
    }  _flags;
    id * _oidFactories;
    NSDictionary * _options;
    void * _reserved1;
    void * _temporaryIDClass;
    NSURL * _url;
}

@property (retain) NSURL *URL;
@property (readonly, copy) NSString *configurationName;
@property (nonatomic, readonly) NSCoreDataCoreSpotlightDelegate *coreSpotlightExporter;
@property (copy) NSString *identifier;
@property (nonatomic, retain) NSDictionary *metadata;
@property (readonly) NSDictionary *options;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (getter=isReadOnly) bool readOnly;
@property (readonly, copy) NSString *type;

+ (bool)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1;
+ (bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5;
+ (bool)accessInstanceVariablesDirectly;
+ (id)cachedModelForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (bool)doURLStuff:(id)arg1 createdStubFile:(bool*)arg2 readOnly:(bool*)arg3 error:(id*)arg4 options:(id)arg5;
+ (void)initialize;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2;
+ (Class)migrationManagerClass;
+ (Class)rowCacheClass;
+ (bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3;

- (id)URL;
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id*)arg3;
- (id)_defaultMetadata;
- (void)_didLoadMetadata;
- (bool)_isMetadataDirty;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (Class)_objectIDClass;
- (void)_preflightCrossCheck;
- (bool)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)_rawMetadata__;
- (void)_resetObjectIDFactoriesForStoreUUIDChange;
- (void)_setMetadataDirty:(bool)arg1;
- (void)_setupObserver;
- (id)_storeInfoForEntityDescription:(id)arg1;
- (bool)_unload:(id*)arg1;
- (void)_updateAncillaryVersionHashesInMetadata:(id)arg1;
- (void)_updateMetadata;
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(bool)arg2;
- (id)ancillaryModels;
- (id)configurationName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreSpotlightExporter;
- (id)currentChangeToken;
- (id)currentQueryGeneration;
- (void)dealloc;
- (id)description;
- (void)didAddToPersistentStoreCoordinator:(id)arg1;
- (void)doFilesystemCleanupOnRemove:(bool)arg1;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (id)faultHandler;
- (Class)faultHandlerClass;
- (void)freeQueryGenerationWithIdentifier:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (bool)isReadOnly;
- (bool)load:(id*)arg1;
- (bool)loadMetadata:(id*)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (id)metadata;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
- (Class)objectIDClassForEntity:(id)arg1;
- (id)objectIDFactoryForEntity:(id)arg1;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)options;
- (id)persistentStoreCoordinator;
- (id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id*)arg2;
- (void)setIdentifier:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setURL:(id)arg1;
- (bool)supportsConcurrentRequestHandling;
- (bool)supportsGenerationalQuerying;
- (id)type;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;

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