<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSSQLEntity.h</title>
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

/Frameworks/CoreData.framework/NSSQLEntity.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreData.framework/CoreData (866.6)
 */

@interface NSSQLEntity : NSStoreMapping {
    NSMutableArray * _attrColumns;
    NSMutableArray * _columnsToFetch;
    NSMutableArray * _ekColumns;
    NSEntityDescription * _entityDescription;
    unsigned int  _entityID;
    NSSQLEntityKey * _entityKey;
    void * _fetch_entity_plan;
    NSMutableArray * _fkColumns;
    NSMutableArray * _fokColumns;
    NSSQLStoreMappingGenerator * _mappingGenerator;
    NSSQLModel * _model;
    NSMutableArray * _multicolumnUniquenessConstraints;
    void * _odiousHashHackStorage;
    NSSQLOptLockKey * _optLockKey;
    NSSQLPrimaryKey * _primaryKey;
    NSMutableDictionary * _properties;
    NSArray * _propertiesAllToManysCache;
    NSArray * _propertyAllCache;
    NSArray * _propertyManyToManyCache;
    NSKnownKeysMappingStrategy * _propertyMapping;
    NSSQLEntity * _rootEntity;
    NSMutableDictionary * _rtreeIndices;
    struct __sqlentityFlags { 
        unsigned int _hasAttributesWithExternalDataReferences : 1; 
        unsigned int _hasAttributesWithFileBackedFutures : 1; 
        unsigned int _reserved : 30; 
    }  _sqlentityFlags;
    NSMutableArray * _subentities;
    unsigned int  _subentityMaxID;
    NSSQLEntity * _superentity;
    NSString * _tableName;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _toOneRange;
    NSMutableArray * _uniqueAttributes;
    NSMutableArray * _virtualFKs;
}

@property (nonatomic, readonly) NSDictionary *rtreeIndexes;

- (void)_addColumnToFetch:(id)arg1;
- (void)_addForeignOrderKeyForToOne:(id)arg1 entity:(id)arg2;
- (void)_addRootColumnToFetch:(id)arg1;
- (void)_addSubentity:(id)arg1;
- (id)_addVirtualToOneForToMany:(id)arg1 withInheritedProperty:(id)arg2;
- (bool)_collectFKSlots:(id)arg1 error:(id*)arg2;
- (void)_doPostModelGenerationCleanup;
- (bool)_entityIsBroken:(id*)arg1;
- (unsigned int)_generateIDWithSuperEntity:(id)arg1 nextID:(unsigned int)arg2;
- (void)_generateIndexes;
- (void)_generateInverseRelationshipsAndMore;
- (void)_generateMulticolumnUniquenessConstraints;
- (void)_generateProperties;
- (void*)_odiousHashHack;
- (void)_organizeConstraints;
- (id)_propertySearchMapping;
- (id)_sqlPropertyWithRenamingIdentifier:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_toOneRange;
- (bool)addPropertiesForReadOnlyFetch:(id)arg1 keys:(id)arg2 context:(id)arg3;
- (void)addUniqueAttribute:(id)arg1;
- (id)attributeColumns;
- (id)attributeNamed:(id)arg1;
- (id)attributes;
- (id)binaryIndexForIndexDescription:(id)arg1;
- (id)columnsToCreate;
- (id)columnsToFetch;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)entityDescription;
- (unsigned int)entityID;
- (id)externalName;
- (unsigned int)fetchIndexForKey:(id)arg1;
- (void)finalize;
- (id)foreignEntityKeyColumns;
- (id)foreignKeyColumns;
- (id)foreignOrderKeyColumns;
- (bool)hasAttributesWithExternalDataReferences;
- (bool)hasAttributesWithFileBackedFutures;
- (bool)hasInheritance;
- (bool)hasSubentities;
- (id)indexForIndexDescription:(id)arg1;
- (id)initWithModel:(id)arg1 entityDescription:(id)arg2;
- (bool)isKindOfSQLEntity:(id)arg1;
- (bool)isRootEntity;
- (id)manyToManyRelationships;
- (id)mappingGenerator;
- (id)model;
- (id)multicolumnUniquenessConstraints;
- (id)name;
- (id)optLockKey;
- (id)primaryKey;
- (id)properties;
- (id)propertiesByName;
- (id)propertyMapping;
- (id)propertyNamed:(id)arg1;
- (id)relationshipNamed:(id)arg1;
- (id)rootEntity;
- (id)rtreeIndexForIndexDescription:(id)arg1;
- (id)rtreeIndexForIndexNamed:(id)arg1;
- (id)rtreeIndexes;
- (void)setEntityID:(unsigned int)arg1;
- (void)setSubentities:(id)arg1;
- (void)setSuperentity:(id)arg1;
- (id)subentities;
- (id)subentityKey;
- (unsigned int)subentityMaxID;
- (id)superentity;
- (id)tableName;
- (id)tempTableName;
- (id)toManyRelationships;
- (id)uniqueAttributes;
- (id)virtualForeignKeyColumns;

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