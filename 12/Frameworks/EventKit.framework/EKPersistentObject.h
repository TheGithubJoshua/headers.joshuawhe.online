<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>EKPersistentObject.h</title>
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

/Frameworks/EventKit.framework/EKPersistentObject.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/EventKit.framework/EventKit (1.0)
 */

@interface EKPersistentObject : NSObject <EKFrozenMeltedPair, EKProtocolObject> {
    NSMutableDictionary * _committedProperties;
    NSMutableSet * _dirtyProperties;
    EKEventStore * _eventStore;
    unsigned int  _flags;
    NSMutableDictionary * _loadedProperties;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    EKObjectID * _objectID;
}

@property (nonatomic, readonly) bool canBeConvertedToFullObject;
@property (nonatomic, retain) NSMutableDictionary *committedProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int entityType;
@property (nonatomic, readonly) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFrozen;
@property (nonatomic, readonly) bool isPartialObject;
@property (nonatomic, readonly) NSDictionary *preFrozenRelationshipObjects;
@property (nonatomic, readonly) NSString *semanticIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)_relationForKey:(id)arg1;
+ (bool)_shouldRetainPropertyForKey:(id)arg1;
+ (id)defaultPropertiesToLoad;
+ (Class)frozenClass;
+ (Class)meltedClass;
+ (id)propertiesUnavailableForPartialObjects;
+ (id)relations;

- (void).cxx_destruct;
- (void)_addDirtyProperty:(id)arg1;
- (void)_addObjectCore:(id)arg1 toValues:(id)arg2 relation:(id)arg3;
- (bool)_areDefaultPropertiesLoaded;
- (void)_createLoadedPropertiesIfNeeded;
- (bool)_isNew;
- (bool)_isPendingDelete;
- (bool)_isPendingInsert;
- (bool)_isPendingUpdate;
- (bool)_loadChildIdentifiersForKey:(id)arg1 values:(id*)arg2;
- (void)_loadDefaultPropertiesIfNeeded;
- (bool)_loadRelationForKey:(id)arg1 value:(id*)arg2;
- (id)_loadStringValueForKey:(id)arg1;
- (id)_loadedPropertyKeys;
- (void)_primitiveSetValue:(id)arg1 forKey:(id)arg2 daemonSetter:(id /* block */)arg3;
- (id)_primitiveValueForKey:(id)arg1 loader:(id /* block */)arg2;
- (id)_propertyForKey:(id)arg1;
- (void)_releaseLoadedProperties;
- (void)_removeObjectCore:(id)arg1 fromValues:(id)arg2 relation:(id)arg3;
- (void)_setDefaultPropertiesLoaded:(bool)arg1;
- (void)_setEventStore:(id)arg1;
- (void)_setObjectID:(id)arg1;
- (void)_setPendingDelete:(bool)arg1;
- (void)_setPendingInsert:(bool)arg1;
- (void)_setPendingUpdate:(bool)arg1;
- (void)_setProperty:(id)arg1 forKey:(id)arg2;
- (void)_setProperty:(id)arg1 forKey:(id)arg2 forRelation:(id)arg3;
- (void)_setProperty:(id)arg1 forKey:(id)arg2 isRelation:(bool)arg3;
- (void)_takeValues:(id)arg1 forKeys:(id)arg2;
- (void)_takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2;
- (bool)canBeConvertedToFullObject;
- (id)changeSet;
- (void)changed;
- (id)committedProperties;
- (id)committedValueForKey:(id)arg1;
- (void)dealloc;
- (id)dirtyProperties;
- (id)dump;
- (int)entityType;
- (id)eventStore;
- (id)existingMeltedObject;
- (bool)existsInStore;
- (struct EKPersistentObject { Class x1; struct _opaque_pthread_mutex_t { long long x_2_1_1; BOOL x_2_1_2[56]; } x2; id x3; id x4; id x5; unsigned int x6; id x7; id x8; }*)frozenObject;
- (id)init;
- (id)initWithObject:(id)arg1;
- (bool)isCompletelyEqual:(id)arg1;
- (bool)isDirty;
- (bool)isEqual:(id)arg1;
- (bool)isEqual:(id)arg1 ignoringProperties:(id)arg2;
- (bool)isFrozen;
- (bool)isNew;
- (bool)isPartialObject;
- (bool)isPropertyDirty:(id)arg1;
- (bool)isPropertyLoaded:(id)arg1;
- (bool)isPropertyUnavailable:(id)arg1;
- (id)meltedObjectInStore:(id)arg1;
- (id)objectID;
- (id)preFrozenRelationshipObjects;
- (void)primitiveAddRelatedObject:(id)arg1 forKey:(id)arg2;
- (bool)primitiveBoolValueForKey:(id)arg1;
- (id)primitiveDataValueForKey:(id)arg1;
- (id)primitiveDateValueForKey:(id)arg1;
- (double)primitiveDoubleValueForKey:(id)arg1;
- (int)primitiveIntValueForKey:(id)arg1;
- (id)primitiveNumberValueForKey:(id)arg1;
- (id)primitiveRelationValueForKey:(id)arg1;
- (void)primitiveRemoveRelatedObject:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetBoolValue:(bool)arg1 forKey:(id)arg2;
- (void)primitiveSetDataValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetDateValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetDoubleValue:(double)arg1 forKey:(id)arg2;
- (void)primitiveSetIntValue:(int)arg1 forKey:(id)arg2;
- (void)primitiveSetNumberValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetRelationValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetStringValue:(id)arg1 forKey:(id)arg2;
- (void)primitiveSetURLValue:(id)arg1 forKey:(id)arg2;
- (id)primitiveStringValueForKey:(id)arg1;
- (id)primitiveURLValueForKey:(id)arg1;
- (bool)pushDirtyProperties:(id*)arg1;
- (bool)refresh;
- (void)reset;
- (void)rollback;
- (void)saved;
- (id)semanticIdentifier;
- (bool)setAttributes:(id)arg1 relations:(id)arg2 objectID:(id)arg3 eventStore:(id)arg4 error:(id*)arg5;
- (void)setCommittedProperties:(id)arg1;
- (void)takeValues:(id)arg1 forKeys:(id)arg2;
- (void)takeValuesForDefaultPropertyKeys:(id)arg1 values:(id)arg2;
- (id)uniqueIdentifier;
- (void)unloadPropertyForKey:(id)arg1;

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