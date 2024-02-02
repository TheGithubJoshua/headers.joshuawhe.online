<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VMUObjectIdentifier.h</title>
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

/PrivateFrameworks/Symbolication.framework/VMUObjectIdentifier.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication (64492.3)
 */

@interface VMUObjectIdentifier : NSObject {
    unsigned long long  _cfBooleanFalseAddress;
    unsigned long long  _cfBooleanTrueAddress;
    unsigned long long  _cfClassCount;
    VMUClassInfoMap * _cfTypeIDToClassInfo;
    unsigned long long  _coreFoundationCFTypeIsa;
    bool  _debugSwiftRemoteMirror;
    unsigned long long  _foundationCFTypeIsa;
    bool  _fragileNonPointerIsas;
    NSMapTable * _isaToObjectLabelHandlerMap;
    id /* block */  _isaTranslator;
    NSMapTable * _itemCountToLabelStringUniquingMap;
    id * _labelStringUniquingMaps;
    VMUClassInfo * _lastCPlusPlusClassInfo;
    unsigned long long  _lastCPlusPlusIsa;
    NSMutableDictionary * _libSwiftRemoteMirrors;
    id /* block */  _memoryReader;
    bool  _needToValidateAddressRange;
    NSHashTable * _nonObjectIsaHash;
    NSMutableDictionary * _nonobjectClassInfosDict;
    unsigned long long  _objCClassCount;
    unsigned int  _osDispatchMachOffsetInOSXPCConnection;
    NSMutableDictionary * _pidToProcessNameDict;
    VMUClassInfoMap * _realizedIsaToClassInfo;
    VMUTaskMemoryScanner * _scanner;
    id * _stringTypeDescriptions;
    NSMutableSet * _stringUniquingSet;
    unsigned long long  _swiftClassCount;
    struct libSwiftRemoteMirrorWrapper { struct SwiftReflectionInteropContext {} *x1; unsigned long long x2; } * _swiftMirror;
    VMUSwiftRuntimeInfo * _swiftRuntimeInfoPreABI;
    VMUSwiftRuntimeInfo * _swiftRuntimeInfoStableABI;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _symbolicator;
    bool  _targetProcessContainsMallocStackLoggingLiteZone;
    VMUNonOverlappingRangeArray * _targetProcessVMranges;
    bool  _targetUsesObjc2runtime;
    unsigned int  _task;
    VMUClassInfoMap * _unrealizedClassInfos;
}

@property (readonly) bool hasSwiftContent;
@property (readonly) bool hasSwiftReflection;
@property (nonatomic, readonly) id /* block */ memoryReader;
@property (readonly) bool needToValidateAddressRange;
@property (nonatomic, readonly) VMUClassInfoMap *realizedClasses;
@property (nonatomic, readonly) VMUSwiftRuntimeInfo *swiftRuntimeInfoPreABI;
@property (nonatomic, readonly) VMUSwiftRuntimeInfo *swiftRuntimeInfoStableABI;

- (void).cxx_destruct;
- (unsigned long long)CFTypeCount;
- (unsigned long long)ObjCclassCount;
- (unsigned long long)SwiftClassCount;
- (id)_classInfoWithNonobjectType:(id)arg1 binaryPath:(id)arg2;
- (id)_classInfoWithPthreadType:(id)arg1;
- (bool)_dlopenLibSwiftRemoteMirrorFromDir:(id)arg1;
- (bool)_dlopenLibSwiftRemoteMirrorNearExecutable;
- (bool)_dlopenLibSwiftRemoteMirrorNearLibSwiftCoreWithSymbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1 avoidSystem:(bool)arg2;
- (bool)_dlopenLibSwiftRemoteMirrorWithSymbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_faultClass:(unsigned long long)arg1 ofType:(unsigned int)arg2;
- (void)_findOffsetsInOSXPCConnection:(void*)arg1 length:(unsigned long long)arg2;
- (bool)_isValidInstanceLength:(unsigned long long)arg1 expectedLength:(unsigned long long)arg2;
- (void)_populateSwiftABIVariables;
- (int)_populateSwiftReflectionInfo:(struct SwiftReflectionInteropContext { }*)arg1;
- (id)_returnFaultedClass:(unsigned long long)arg1 ofType:(unsigned int)arg2;
- (id)_scanner;
- (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })_symbolicator;
- (unsigned long long)addressOfSymbol:(const char *)arg1 inLibrary:(const char *)arg2;
- (void)buildIsaToObjectLabelHandlerMap;
- (id)classInfoForMemory:(void*)arg1 length:(unsigned long long)arg2;
- (id)classInfoForMemory:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)classInfoForNonobjectMemory:(void*)arg1 length:(unsigned long long)arg2;
- (id)classInfoForObjectWithRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)dealloc;
- (void)enumerateAllClassInfosWithBlock:(id /* block */)arg1;
- (void)enumerateRealizedClassInfosWithBlock:(id /* block */)arg1;
- (void)findCFTypes;
- (void)findObjCclasses;
- (bool)hasSwiftContent;
- (bool)hasSwiftReflection;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg2 scanner:(id)arg3;
- (id)labelForCFBundle:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForItemCount:(long long)arg1;
- (id)labelForMallocBlock:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)labelForMallocBlock:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg1 usingHandlerBlock:(id /* block */)arg2;
- (id)labelForMemory:(void*)arg1 length:(unsigned long long)arg2;
- (id)labelForMemory:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForMemory:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 classInfo:(id)arg4;
- (id)labelForMemory:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 classInfo:(id)arg4 usingHandlerBlock:(id /* block */)arg5;
- (id)labelForNSArray:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSBundle:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSCFDictionary:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSCFSet:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSCFStringAtRemoteAddress:(unsigned long long)arg1 printDetail:(bool)arg2;
- (id)labelForNSConcreteAttributedString:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSConcreteData:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSConcreteHashTable:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSConcreteMutableData:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSData:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSDate:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSDictionary:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSInlineData:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSNumber:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSPathStore2:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSSet:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSString:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSString:(void*)arg1 mappedSize:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3 printDetail:(bool)arg4;
- (id)labelForNSURL:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSXPCConnection:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForNSXPCInterface:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSDispatchMach:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSDispatchQueue:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSLog:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSTransaction:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSXPCConnection:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForOSXPCObject:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForObjectOfClass:(id)arg1 atOffset:(unsigned int)arg2 ofObject:(void*)arg3;
- (id)labelForProtocol:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)labelForTaggedPointer:(void*)arg1;
- (id)labelFor__NSMallocBlock__:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (void)loadSwiftReflectionLibraries;
- (id /* block */)memoryReader;
- (bool)needToValidateAddressRange;
- (id)noLabelForOSXPCObject:(void*)arg1 length:(unsigned long long)arg2 remoteAddress:(unsigned long long)arg3;
- (id)objectLabelHandlerForRemoteIsa:(unsigned long long)arg1;
- (id)osMajorMinorVersionString;
- (id)realizedClasses;
- (id)swiftRuntimeInfoPreABI;
- (id)swiftRuntimeInfoStableABI;
- (id)uniquifyStringLabel:(id)arg1 stringType:(int)arg2 printDetail:(bool)arg3;
- (struct _VMURange { unsigned long long x1; unsigned long long x2; })vmRegionRangeForAddress:(unsigned long long)arg1;

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