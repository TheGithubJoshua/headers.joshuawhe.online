<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>AWDProactiveModelFittingQuantizedSparseMatrix.h</title>
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

/PrivateFrameworks/ProactiveML.framework/AWDProactiveModelFittingQuantizedSparseMatrix.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML (126.37)
 */

@interface AWDProactiveModelFittingQuantizedSparseMatrix : PBCodable <NSCopying> {
    float  _bucketSize;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _columnIndices;
    unsigned int  _columnLength;
    struct { 
        unsigned int bucketSize : 1; 
        unsigned int columnLength : 1; 
        unsigned int minValue : 1; 
        unsigned int rowLength : 1; 
    }  _has;
    float  _minValue;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _rowIndices;
    unsigned int  _rowLength;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _values;
}

@property (nonatomic) float bucketSize;
@property (nonatomic, readonly) unsigned int*columnIndices;
@property (nonatomic, readonly) unsigned long long columnIndicesCount;
@property (nonatomic) unsigned int columnLength;
@property (nonatomic) bool hasBucketSize;
@property (nonatomic) bool hasColumnLength;
@property (nonatomic) bool hasMinValue;
@property (nonatomic) bool hasRowLength;
@property (nonatomic) float minValue;
@property (nonatomic, readonly) unsigned int*rowIndices;
@property (nonatomic, readonly) unsigned long long rowIndicesCount;
@property (nonatomic) unsigned int rowLength;
@property (nonatomic, readonly) unsigned int*values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (id)quantizedSparseMatrixFromSparseMatrix:(id)arg1 numberOfBuckets:(unsigned long long)arg2;

- (void)addColumnIndices:(unsigned int)arg1;
- (void)addRowIndices:(unsigned int)arg1;
- (void)addValues:(unsigned int)arg1;
- (float)bucketSize;
- (void)clearColumnIndices;
- (void)clearRowIndices;
- (void)clearValues;
- (unsigned int*)columnIndices;
- (unsigned int)columnIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnIndicesCount;
- (unsigned int)columnLength;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBucketSize;
- (bool)hasColumnLength;
- (bool)hasMinValue;
- (bool)hasRowLength;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)minValue;
- (float)originalValueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (bool)readFrom:(id)arg1;
- (unsigned int*)rowIndices;
- (unsigned int)rowIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)rowIndicesCount;
- (unsigned int)rowLength;
- (void)setBucketSize:(float)arg1;
- (void)setColumnIndices:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setColumnLength:(unsigned int)arg1;
- (void)setHasBucketSize:(bool)arg1;
- (void)setHasColumnLength:(bool)arg1;
- (void)setHasMinValue:(bool)arg1;
- (void)setHasRowLength:(bool)arg1;
- (void)setMinValue:(float)arg1;
- (void)setRowIndices:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setRowLength:(unsigned int)arg1;
- (void)setValues:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)values;
- (unsigned int)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

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