<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>VMUFieldInfo.h</title>
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

/PrivateFrameworks/Symbolication.framework/VMUFieldInfo.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication (64492.3)
 */

@interface VMUFieldInfo : NSObject {
    VMUClassInfo * _destinationLayout;
    unsigned int  _flags;
    NSString * _ivarName;
    unsigned int  _offset;
    unsigned int  _scanType;
    unsigned int  _scannable;
    unsigned int  _size;
    unsigned int  _stride;
    NSMutableArray * _subFieldArray;
    NSString * _typeName;
}

@property (readonly) unsigned int bitfieldWidth;
@property (nonatomic, readonly) VMUClassInfo *destinationLayout;
@property (nonatomic, readonly) unsigned int flags;
@property (nonatomic, readonly) bool isArrayEntries;
@property (nonatomic, readonly) bool isArraySize;
@property (nonatomic, readonly) bool isByref;
@property (nonatomic, readonly) bool isCapture;
@property (nonatomic, readonly) bool isKeyField;
@property (nonatomic, readonly) bool isKeysPointer;
@property (nonatomic, readonly) bool isStorageBitmapPointer;
@property (nonatomic, readonly) bool isStorageImplPointer;
@property (nonatomic, readonly) bool isValueField;
@property (nonatomic, readonly) bool isValuesPointer;
@property (nonatomic, readonly) NSString *ivarName;
@property (readonly) unsigned int offset;
@property (readonly) unsigned int scanType;
@property (readonly) unsigned int scannableSize;
@property (readonly) unsigned int size;
@property (readonly) unsigned int stride;
@property (nonatomic, readonly) NSArray *subFieldArray;
@property (nonatomic, readonly) NSString *typeName;
@property (readonly) NSString *typedDescription;

- (void).cxx_destruct;
- (id)_fullIvarNameAtOffset:(unsigned int)arg1 leafOffset:(unsigned int*)arg2 depth:(unsigned int)arg3;
- (id)_getFieldAtOffset:(unsigned int)arg1;
- (void)_setDestinationLayout:(id)arg1;
- (void)_setFlags:(unsigned int)arg1;
- (void)_setIvarName:(id)arg1;
- (void)_setOffset:(unsigned int)arg1;
- (void)_setScanType:(unsigned int)arg1;
- (void)_setScannableSize:(unsigned int)arg1;
- (void)_setSize:(unsigned int)arg1;
- (void)_setStride:(unsigned int)arg1;
- (void)_setTypeName:(id)arg1;
- (unsigned int)bitfieldWidth;
- (id)description;
- (id)descriptionOfFieldValueInObjectMemory:(void*)arg1 scanner:(id)arg2;
- (id)destinationLayout;
- (unsigned int)flags;
- (id)fullIvarNameAtOffset:(unsigned int)arg1;
- (id)getLeafFieldAtOffset:(unsigned int)arg1 leafOffset:(unsigned int*)arg2;
- (unsigned long long)hash;
- (id)initStorageEntryFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned int)arg3 scan:(unsigned int)arg4 offset:(unsigned int)arg5 size:(unsigned int)arg6 stride:(unsigned int)arg7 subFieldArray:(id)arg8;
- (id)initStorageInfoFieldWithName:(id)arg1 type:(id)arg2 kind:(unsigned int)arg3 scan:(unsigned int)arg4 offset:(unsigned int)arg5 size:(unsigned int)arg6 stride:(unsigned int)arg7 subFieldArray:(id)arg8;
- (id)initWithName:(id)arg1 type:(id)arg2 kind:(unsigned int)arg3 scan:(unsigned int)arg4 offset:(unsigned int)arg5 size:(unsigned int)arg6 stride:(unsigned int)arg7 subFieldArray:(id)arg8;
- (id)initWithName:(id)arg1 type:(id)arg2 scan:(unsigned int)arg3 offset:(unsigned int)arg4 size:(unsigned int)arg5;
- (id)initWithObjcIvar:(struct objc_ivar { }*)arg1 size:(unsigned int)arg2 isARC:(bool)arg3 is64Bit:(bool)arg4;
- (id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned int)arg3;
- (id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(unsigned int)arg3 returnedDestinationLayoutClassInfoIndex:(unsigned int*)arg4;
- (bool)isArrayEntries;
- (bool)isArraySize;
- (bool)isByref;
- (bool)isCapture;
- (bool)isEqual:(id)arg1;
- (bool)isKeyField;
- (bool)isKeysPointer;
- (bool)isStorageBitmapPointer;
- (bool)isStorageImplPointer;
- (bool)isValueField;
- (bool)isValuesPointer;
- (id)ivarName;
- (id)mutableCopy;
- (unsigned int)offset;
- (unsigned int)scanType;
- (unsigned int)scannableSize;
- (void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 version:(unsigned int)arg3;
- (unsigned int)size;
- (unsigned int)stride;
- (id)subFieldArray;
- (id)typeName;
- (id)typedDescription;

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