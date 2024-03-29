<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSRTFD.h</title>
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

/Frameworks/Foundation.framework/NSRTFD.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Foundation.framework/Foundation (1575.23)
 */

@interface NSRTFD : NSMutableDictionary {
    NSMutableDictionary * dict;
}

+ (void)initialize;

- (id)_getDocInfoForKey:(id)arg1;
- (bool)_isLink:(id)arg1;
- (id)addCommon:(id)arg1 docInfo:(id)arg2 value:(id)arg3 zone:(struct _NSZone { }*)arg4;
- (id)addData:(id)arg1 name:(id)arg2;
- (unsigned long long)addDirNamed:(id)arg1 lazy:(bool)arg2;
- (id)addFile:(id)arg1;
- (unsigned long long)addFileNamed:(id)arg1 fileAttributes:(id)arg2;
- (id)addLink:(id)arg1;
- (id)copy;
- (id)copy:(id)arg1 into:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)createRandomKey:(id)arg1;
- (id)createUniqueKey:(id)arg1;
- (id)dataForFile:(id)arg1;
- (id)dataRepresentation;
- (void)dealloc;
- (id)freeSerialized:(void*)arg1 length:(unsigned long long)arg2;
- (id)getDirInfo:(bool)arg1;
- (id)getDocument:(id)arg1 docInfo:(id)arg2;
- (id)init;
- (unsigned long long)initFromDocument:(id)arg1;
- (id)initFromElement:(id)arg1 ofDocument:(id)arg2;
- (id)initFromSerialized:(id)arg1;
- (unsigned long long)initUnixFile:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(bool)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)initWithPasteboardDataRepresentation:(id)arg1;
- (unsigned long long)insertItem:(id)arg1 path:(id)arg2 dirInfo:(id)arg3 zone:(struct _NSZone { }*)arg4 plist:(id)arg5;
- (unsigned long long)internalSaveTo:(id)arg1 removeBackup:(bool)arg2 errorHandler:(id)arg3;
- (unsigned long long)internalSaveTo:(id)arg1 removeBackup:(bool)arg2 errorHandler:(id)arg3 temp:(id)arg4 backup:(id)arg5;
- (unsigned long long)internalWritePath:(id)arg1 errorHandler:(id)arg2 remapContents:(bool)arg3 hardLinkPath:(id)arg4;
- (bool)isPackage;
- (id)keyEnumerator;
- (id)nameFromPath:(id)arg1 extra:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)pasteboardDataRepresentation;
- (unsigned long long)realAddDirNamed:(id)arg1;
- (id)removeFile:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)replaceFile:(id)arg1 data:(id)arg2;
- (id)replaceFile:(id)arg1 path:(id)arg2;
- (unsigned long long)saveToDocument:(id)arg1 removeBackup:(bool)arg2 errorHandler:(id)arg3;
- (id)serialize:(void**)arg1 length:(unsigned long long*)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)setPackage:(bool)arg1;
- (id)tmpNameFromPath:(id)arg1;
- (id)tmpNameFromPath:(id)arg1 extension:(id)arg2;
- (id)uniqueKey:(id)arg1;
- (long long)validatePath:(id)arg1 ignore:(id)arg2;
- (unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(bool)arg4 hardLinkPath:(id)arg5;
- (unsigned long long)writePath:(id)arg1 docInfo:(id)arg2 errorHandler:(id)arg3 remapContents:(bool)arg4 markBusy:(bool)arg5 hardLinkPath:(id)arg6;

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
