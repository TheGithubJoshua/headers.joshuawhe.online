<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>CSLUIPBPropertyValue.h</title>
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

/PrivateFrameworks/UITriggerVC.framework/CSLUIPBPropertyValue.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC (1)
 */

@interface CSLUIPBPropertyValue : PBCodable <NSCopying> {
    NSMutableArray * _arrayValues;
    NSData * _dataValue;
    CSLUIPBPropertyValue * _dictionaryKey;
    CSLUIPBNumber * _numberValue;
    CSLUIPBSize * _sizeValue;
    NSString * _stringValue;
    NSData * _uUIDValue;
}

@property (nonatomic, retain) NSMutableArray *arrayValues;
@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic, retain) CSLUIPBPropertyValue *dictionaryKey;
@property (nonatomic, readonly) bool hasDataValue;
@property (nonatomic, readonly) bool hasDictionaryKey;
@property (nonatomic, readonly) bool hasNumberValue;
@property (nonatomic, readonly) bool hasSizeValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic, readonly) bool hasUUIDValue;
@property (nonatomic, retain) CSLUIPBNumber *numberValue;
@property (nonatomic, retain) CSLUIPBSize *sizeValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic, retain) NSData *uUIDValue;

- (void).cxx_destruct;
- (void)addArrayValues:(id)arg1;
- (id)arrayValues;
- (id)arrayValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)arrayValuesCount;
- (void)clearArrayValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (id)description;
- (id)dictionaryKey;
- (id)dictionaryRepresentation;
- (bool)hasDataValue;
- (bool)hasDictionaryKey;
- (bool)hasNumberValue;
- (bool)hasSizeValue;
- (bool)hasStringValue;
- (bool)hasUUIDValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)numberValue;
- (bool)readFrom:(id)arg1;
- (void)setArrayValues:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setDictionaryKey:(id)arg1;
- (void)setNumberValue:(id)arg1;
- (void)setSizeValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setUUIDValue:(id)arg1;
- (id)sizeValue;
- (id)stringValue;
- (id)uUIDValue;
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
