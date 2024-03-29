<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>TSTStructuredTextImportRecord.h</title>
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

/PrivateFrameworks/iWorkImport.framework/TSTStructuredTextImportRecord.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface TSTStructuredTextImportRecord : NSObject <NSCopying> {
    double  _confidence;
    NSDate * _importDate;
    TSKStructuredTextImportSettings * _importSettings;
    NSURL * _importSource;
    TSTCellRegion * _importedRegion;
    NSArray * _pasteInverseCommands;
    unsigned long long  _pasteType;
    bool  _pasteWasUpdate;
    unsigned long long  _sourceColumnCount;
    NSData * _sourceData;
    unsigned long long  _sourceRowCount;
}

@property (nonatomic) double confidence;
@property (nonatomic, retain) NSDate *importDate;
@property (nonatomic, retain) TSKStructuredTextImportSettings *importSettings;
@property (nonatomic, retain) NSURL *importSource;
@property (nonatomic, retain) TSTCellRegion *importedRegion;
@property (nonatomic, retain) NSArray *pasteInverseCommands;
@property (nonatomic) unsigned long long pasteType;
@property (nonatomic) bool pasteWasUpdate;
@property (getter=isReimportable, nonatomic, readonly) bool reimportable;
@property (nonatomic) unsigned long long sourceColumnCount;
@property (nonatomic, copy) NSData *sourceData;
@property (nonatomic) unsigned long long sourceRowCount;
@property (getter=isWholeTableImport, nonatomic, readonly) bool wholeTableImport;

+ (id)record;
+ (id)recordFromArchive:(const struct StructuredTextImportRecord { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct StructuredTextImportSettings {} *x7; struct CellRegion {} *x8; double x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; float x13; }*)arg1;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeToArchive:(struct StructuredTextImportRecord { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct StructuredTextImportSettings {} *x7; struct CellRegion {} *x8; double x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; float x13; }*)arg1;
- (id)importDate;
- (id)importSettings;
- (id)importSource;
- (id)importedRegion;
- (id)initFromArchive:(const struct StructuredTextImportRecord { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_6_1_1; } x6; struct StructuredTextImportSettings {} *x7; struct CellRegion {} *x8; double x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; float x13; }*)arg1;
- (bool)isReimportable;
- (bool)isWholeTableImport;
- (id)pasteInverseCommands;
- (unsigned long long)pasteType;
- (bool)pasteWasUpdate;
- (void)setConfidence:(double)arg1;
- (void)setImportDate:(id)arg1;
- (void)setImportSettings:(id)arg1;
- (void)setImportSource:(id)arg1;
- (void)setImportedRegion:(id)arg1;
- (void)setPasteInverseCommands:(id)arg1;
- (void)setPasteType:(unsigned long long)arg1;
- (void)setPasteWasUpdate:(bool)arg1;
- (void)setSourceColumnCount:(unsigned long long)arg1;
- (void)setSourceData:(id)arg1;
- (void)setSourceRowCount:(unsigned long long)arg1;
- (unsigned long long)sourceColumnCount;
- (id)sourceData;
- (unsigned long long)sourceRowCount;

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
