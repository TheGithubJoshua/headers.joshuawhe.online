<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>MDLTSUZipArchive.h</title>
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

/Frameworks/ModelIO.framework/MDLTSUZipArchive.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO (1)
 */

@interface MDLTSUZipArchive : NSObject {
    long long  _endOfLastEntry;
    NSMutableOrderedSet * _entries;
    NSMutableDictionary * _entriesMap;
    unsigned long long  _options;
}

@property (nonatomic, readonly) unsigned long long archiveLength;
@property (nonatomic, readonly) long long endOfLastEntry;
@property (nonatomic, readonly) unsigned long long entriesCount;
@property (nonatomic, readonly) bool hasNonEmptyEntries;
@property (nonatomic, readonly) bool isValid;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (unsigned long long)archiveLength;
- (void)collapseCommonRootDirectory;
- (id)containedZipArchiveForEntry:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (long long)endOfLastEntry;
- (unsigned long long)entriesCount;
- (id)entryForName:(id)arg1;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg1;
- (bool)hasNonEmptyEntries;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (bool)isValid;
- (id)newArchiveReadChannel;
- (id)normalizeEntryName:(id)arg1;
- (void)readArchiveWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)readCentralDirectoryData:(id)arg1 entryCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)readCentralDirectoryWithEntryCount:(unsigned long long)arg1 offset:(long long)arg2 size:(unsigned long long)arg3 channel:(id)arg4 completion:(id /* block */)arg5;
- (bool)readCentralFileHeaderWithBuffer:(const void**)arg1 dataSize:(unsigned long long*)arg2 error:(id*)arg3;
- (id)readChannelForEntry:(id)arg1;
- (id)readChannelForEntry:(id)arg1 validateCRC:(bool)arg2;
- (void)readEndOfCentralDirectoryData:(id)arg1 eocdOffset:(long long)arg2 channel:(id)arg3 completion:(id /* block */)arg4;
- (bool)readExtraFieldsFromBuffer:(const void**)arg1 extraFieldsLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)readFileCommentFromBuffer:(const void**)arg1 fileCommentLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)readFilenameFromBuffer:(const void**)arg1 nameLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned long long*)arg4 error:(id*)arg5;
- (void)readLocalFileHeaderData:(id)arg1 atOffset:(long long)arg2 channel:(id)arg3 completion:(id /* block */)arg4;
- (void)readLocalFileHeaderEntriesFromChannel:(id)arg1 offset:(long long)arg2 previousEntry:(id)arg3 seekAttempts:(unsigned int)arg4 seekForward:(bool)arg5 completion:(id /* block */)arg6;
- (bool)readLocalFileHeaderFilenameAndExtraFieldsData:(id)arg1 forEntry:(id)arg2 error:(id*)arg3;
- (void)readZip64EndOfCentralDirectoryData:(id)arg1 channel:(id)arg2 completion:(id /* block */)arg3;
- (void)readZip64EndOfCentralDirectoryLocatorData:(id)arg1 channel:(id)arg2 completion:(id /* block */)arg3;
- (void)readZip64EndOfCentralDirectoryLocatorWithChannel:(id)arg1 eocdOffset:(long long)arg2 completion:(id /* block */)arg3;
- (void)readZip64EndOfCentralDirectoryWithChannel:(id)arg1 offset:(long long)arg2 completion:(id /* block */)arg3;
- (bool)readZip64ExtraFieldFromBuffer:(const void*)arg1 dataLength:(unsigned short)arg2 entry:(id)arg3 error:(id*)arg4;
- (id)streamReadChannelForEntry:(id)arg1;
- (id)streamReadChannelForEntry:(id)arg1 validateCRC:(bool)arg2;

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
