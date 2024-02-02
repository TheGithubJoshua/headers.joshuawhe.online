<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDCodableMetadataKeyValuePair.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDCodableMetadataKeyValuePair.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDCodableMetadataKeyValuePair : PBCodable <NSCopying> {
    NSData * _dataValue;
    double  _dateValue;
    struct { 
        unsigned int dateValue : 1; 
        unsigned int numberDoubleValue : 1; 
        unsigned int numberIntValue : 1; 
    }  _has;
    NSString * _key;
    double  _numberDoubleValue;
    long long  _numberIntValue;
    HDCodableQuantity * _quantityValue;
    NSString * _stringValue;
}

@property (nonatomic, retain) NSData *dataValue;
@property (nonatomic) double dateValue;
@property (nonatomic, readonly) bool hasDataValue;
@property (nonatomic) bool hasDateValue;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasNumberDoubleValue;
@property (nonatomic) bool hasNumberIntValue;
@property (nonatomic, readonly) bool hasQuantityValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) double numberDoubleValue;
@property (nonatomic) long long numberIntValue;
@property (nonatomic, retain) HDCodableQuantity *quantityValue;
@property (nonatomic, retain) NSString *stringValue;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataValue;
- (double)dateValue;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDataValue;
- (bool)hasDateValue;
- (bool)hasKey;
- (bool)hasNumberDoubleValue;
- (bool)hasNumberIntValue;
- (bool)hasQuantityValue;
- (bool)hasStringValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (double)numberDoubleValue;
- (long long)numberIntValue;
- (id)quantityValue;
- (bool)readFrom:(id)arg1;
- (void)setDataValue:(id)arg1;
- (void)setDateValue:(double)arg1;
- (void)setHasDateValue:(bool)arg1;
- (void)setHasNumberDoubleValue:(bool)arg1;
- (void)setHasNumberIntValue:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setNumberDoubleValue:(double)arg1;
- (void)setNumberIntValue:(long long)arg1;
- (void)setQuantityValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
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