<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>PASymbolDataStore.h</title>
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

/PrivateFrameworks/PASampling.framework/PASymbolDataStore.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling (218.2)
 */

@interface PASymbolDataStore : NSObject <PASerializable> {
    PABinaryLocator * _binaryLocator;
    NSString * _dscSymDir;
    NSMutableArray * _dsymPaths;
    PAImageInfo * _kernelCache;
    NSMutableDictionary * _pidToCSSymbolicatorCache;
    PAImageInfo * _sharedCache32bit;
    struct _CSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _sharedCache32bitRange;
    PAImageInfo * _sharedCache64bit;
    struct _CSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _sharedCache64bitRange;
    NSMutableSet * _sharedCacheUUIDsAlreadySearchedFor;
    bool  _shouldSymbolicate;
    bool  _shouldUseDsymForUUIDToFindBinaries;
    NSMutableDictionary * _uuidToCSSymbolOwnerCache;
    NSMutableDictionary * _uuidToSharedCacheImageInfoDictionary;
    NSMutableDictionary * _uuidToSymbolOwnerDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *dscSymDir;
@property (readonly) unsigned long long hash;
@property (retain) PAImageInfo *kernelCache;
@property (retain) PAImageInfo *sharedCache32bit;
@property (retain) PAImageInfo *sharedCache64bit;
@property bool shouldSymbolicate;
@property bool shouldUseDsymForUUIDToFindBinaries;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;
+ (void)takeOwnershipOfCoreSymbolicationCachingPolicies;

- (void).cxx_destruct;
- (id)_PACSSymbolOwnerForImageUUID:(id)arg1 andPath:(id)arg2 andPidHint:(int)arg3;
- (void)_addNewSymbolOwnerForCSSymbolOwnerRef:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_fillUUIDCacheWithKernelSymbolOwners;
- (bool)_isLikelyToBeKernelAddress:(unsigned long long)arg1;
- (id)_sharedCacheMappingsForSharedCacheUUID:(id)arg1;
- (id)_symbolHandleForAddress:(unsigned long long)arg1 withImageUUIDMappings:(id)arg2 andImageMappingSlide:(unsigned long long)arg3 andPidHint:(int)arg4;
- (id)_symbolHandleForOffsetInBinary:(unsigned long long)arg1 inImageUUID:(id)arg2 andImageMappingSlide:(unsigned long long)arg3 andPidHint:(int)arg4;
- (id)_symbolHandleForOffsetIntoSymbolOwner:(unsigned long long)arg1 withSymbolOwner:(id)arg2 andSymbolOwnerBaseAddress:(unsigned long long)arg3 andPidHint:(int)arg4;
- (id)addDSCSymFromBuffer:(const void*)arg1 withLength:(unsigned long long)arg2;
- (void)addDsymPaths:(id)arg1;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)addSymbolsFromTailspin:(id)arg1;
- (void)cacheSymbolicatorForPid:(int)arg1;
- (id)copyImageInfosForLivingPid:(int)arg1;
- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })csSymbolicatorForPid:(int)arg1;
- (void)dealloc;
- (id)dscSymDir;
- (void)flushCachedSymbolOwnerForUUID:(id)arg1;
- (void)flushCachedSymbolicatorForPid:(int)arg1;
- (void)flushSymbolOwnerCache;
- (void)flushSymbolicatorCache;
- (id)init;
- (id)kernelCache;
- (void)makeSureKernelBinariesAreKnown;
- (id)ownerContainingSymbol:(id)arg1;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (struct _CSRange { unsigned long long x1; unsigned long long x2; })rangeOfSharedCacheWithArchitecture:(struct _CSArchitecture { int x1; int x2; })arg1;
- (void)setDscSymDir:(id)arg1;
- (void)setKernelCache:(id)arg1;
- (void)setSharedCache32bit:(id)arg1;
- (void)setSharedCache64bit:(id)arg1;
- (void)setShouldSymbolicate:(bool)arg1;
- (void)setShouldUseDsymForUUIDToFindBinaries:(bool)arg1;
- (id)sharedCache32bit;
- (id)sharedCache64bit;
- (id)sharedCacheForArch:(struct _CSArchitecture { int x1; int x2; })arg1;
- (bool)shouldSymbolicate;
- (bool)shouldUseDsymForUUIDToFindBinaries;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)symbolHandleForAddress:(unsigned long long)arg1 inLivingPid:(int)arg2;
- (id)symbolHandleForAddress:(unsigned long long)arg1 inSampleTask:(id)arg2 isLiving:(bool)arg3;
- (id)symbolHandleForAddress:(unsigned long long)arg1 withSymbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2;
- (id)symbolHandleForOffset:(unsigned long long)arg1 inBinary:(id)arg2 inLivingPid:(int)arg3;
- (id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 inLivingPid:(int)arg3;
- (id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 inSampleTask:(id)arg3 isLiving:(bool)arg4;
- (id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 withBinaryOffsetInTask:(unsigned long long)arg3 inLivingPid:(int)arg4;

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
