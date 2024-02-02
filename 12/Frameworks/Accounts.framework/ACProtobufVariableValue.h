<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>ACProtobufVariableValue.h</title>
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

/Frameworks/Accounts.framework/ACProtobufVariableValue.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Accounts.framework/Accounts (113)
 */

@interface ACProtobufVariableValue : PBCodable <NSCopying> {
    ACProtobufVariableValueList * _arrayValue;
    NSData * _dataValue;
    ACProtobufDate * _dateValue;
    ACProtobufVariableValueDictionary * _dictionaryValue;
    double  _doubleValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int integerValue : 1; 
        unsigned int unsignedIntegerValue : 1; 
    }  _has;
    long long  _integerValue;
    ACProtobufVariableValueList * _setValue;
    NSString * _stringValue;
    unsigned long long  _unsignedIntegerValue;
    ACProtobufURL * _urlValue;
    ACProtobufUUID * _uuidValue;
}

@property (nonatomic, retain) ACProtobufVariableValueList *arrayValue;
@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic, retain) ACProtobufDate *dateValue;
@property (nonatomic, retain) ACProtobufVariableValueDictionary *dictionaryValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) bool hasArrayValue;
@property (nonatomic, readonly) bool hasDataValue;
@property (nonatomic, readonly) bool hasDateValue;
@property (nonatomic, readonly) bool hasDictionaryValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasIntegerValue;
@property (nonatomic, readonly) bool hasSetValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasUnsignedIntegerValue;
@property (nonatomic, readonly) bool hasUrlValue;
@property (nonatomic, readonly) bool hasUuidValue;
@property (nonatomic) long long integerValue;
@property (nonatomic, retain) id object;
@property (nonatomic, retain) ACProtobufVariableValueList *setValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) unsigned long long unsignedIntegerValue;
@property (nonatomic, retain) ACProtobufURL *urlValue;
@property (nonatomic, retain) ACProtobufUUID *uuidValue;

- (void).cxx_destruct;
- (bool)_setObject:(id)arg1;
- (id)arrayValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (id)dateValue;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dictionaryValue;
- (double)doubleValue;
- (bool)hasArrayValue;
- (bool)hasDataValue;
- (bool)hasDateValue;
- (bool)hasDictionaryValue;
- (bool)hasDoubleValue;
- (bool)hasIntegerValue;
- (bool)hasSetValue;
- (bool)hasStringValue;
- (bool)hasUnsignedIntegerValue;
- (bool)hasUrlValue;
- (bool)hasUuidValue;
- (unsigned long long)hash;
- (id)initWithObjectValue:(id)arg1;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)object;
- (bool)readFrom:(id)arg1;
- (void)setArrayValue:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setDateValue:(id)arg1;
- (void)setDictionaryValue:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasIntegerValue:(bool)arg1;
- (void)setHasUnsignedIntegerValue:(bool)arg1;
- (void)setIntegerValue:(long long)arg1;
- (void)setObject:(id)arg1;
- (void)setSetValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setUnsignedIntegerValue:(unsigned long long)arg1;
- (void)setUrlValue:(id)arg1;
- (void)setUuidValue:(id)arg1;
- (id)setValue;
- (id)stringValue;
- (unsigned long long)unsignedIntegerValue;
- (id)urlValue;
- (id)uuidValue;
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