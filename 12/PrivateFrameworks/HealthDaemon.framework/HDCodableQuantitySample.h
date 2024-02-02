<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>HDCodableQuantitySample.h</title>
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

/PrivateFrameworks/HealthDaemon.framework/HDCodableQuantitySample.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon (1)
 */

@interface HDCodableQuantitySample : PBCodable <HDDecoding, NSCopying> {
    long long  _count;
    bool  _final;
    bool  _frozen;
    struct { 
        unsigned int count : 1; 
        unsigned int max : 1; 
        unsigned int min : 1; 
        unsigned int mostRecent : 1; 
        unsigned int mostRecentDate : 1; 
        unsigned int valueInCanonicalUnit : 1; 
        unsigned int valueInOriginalUnit : 1; 
        unsigned int final : 1; 
        unsigned int frozen : 1; 
    }  _has;
    double  _max;
    double  _min;
    double  _mostRecent;
    double  _mostRecentDate;
    NSString * _originalUnitString;
    NSMutableArray * _quantitySeriesDatas;
    HDCodableSample * _sample;
    double  _valueInCanonicalUnit;
    double  _valueInOriginalUnit;
}

@property (nonatomic) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool final;
@property (nonatomic) bool frozen;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasFinal;
@property (nonatomic) bool hasFrozen;
@property (nonatomic) bool hasMax;
@property (nonatomic) bool hasMin;
@property (nonatomic) bool hasMostRecent;
@property (nonatomic) bool hasMostRecentDate;
@property (nonatomic, readonly) bool hasOriginalUnitString;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic) bool hasValueInCanonicalUnit;
@property (nonatomic) bool hasValueInOriginalUnit;
@property (readonly) unsigned long long hash;
@property (nonatomic) double max;
@property (nonatomic) double min;
@property (nonatomic) double mostRecent;
@property (nonatomic) double mostRecentDate;
@property (nonatomic, retain) NSString *originalUnitString;
@property (nonatomic, retain) NSMutableArray *quantitySeriesDatas;
@property (nonatomic, retain) HDCodableSample *sample;
@property (readonly) Class superclass;
@property (nonatomic) double valueInCanonicalUnit;
@property (nonatomic) double valueInOriginalUnit;

+ (Class)quantitySeriesDataType;

- (void).cxx_destruct;
- (bool)_applyToDiscreteQuantitySeriesSample:(id)arg1;
- (void)addQuantitySeriesData:(id)arg1;
- (bool)applyToObject:(id)arg1;
- (void)clearQuantitySeriesDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)final;
- (bool)frozen;
- (bool)hasCount;
- (bool)hasFinal;
- (bool)hasFrozen;
- (bool)hasMax;
- (bool)hasMin;
- (bool)hasMostRecent;
- (bool)hasMostRecentDate;
- (bool)hasOriginalUnitString;
- (bool)hasSample;
- (bool)hasValueInCanonicalUnit;
- (bool)hasValueInOriginalUnit;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isSeries;
- (double)max;
- (void)mergeFrom:(id)arg1;
- (double)min;
- (double)mostRecent;
- (double)mostRecentDate;
- (id)originalUnitString;
- (id)quantitySeriesDataAtIndex:(unsigned long long)arg1;
- (id)quantitySeriesDatas;
- (unsigned long long)quantitySeriesDatasCount;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (void)setCount:(long long)arg1;
- (void)setFinal:(bool)arg1;
- (void)setFrozen:(bool)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasFinal:(bool)arg1;
- (void)setHasFrozen:(bool)arg1;
- (void)setHasMax:(bool)arg1;
- (void)setHasMin:(bool)arg1;
- (void)setHasMostRecent:(bool)arg1;
- (void)setHasMostRecentDate:(bool)arg1;
- (void)setHasValueInCanonicalUnit:(bool)arg1;
- (void)setHasValueInOriginalUnit:(bool)arg1;
- (void)setMax:(double)arg1;
- (void)setMin:(double)arg1;
- (void)setMostRecent:(double)arg1;
- (void)setMostRecentDate:(double)arg1;
- (void)setOriginalUnitString:(id)arg1;
- (void)setQuantitySeriesDatas:(id)arg1;
- (void)setSample:(id)arg1;
- (void)setValueInCanonicalUnit:(double)arg1;
- (void)setValueInOriginalUnit:(double)arg1;
- (double)valueInCanonicalUnit;
- (double)valueInOriginalUnit;
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