<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>_INPBPair.h</title>
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

/protocols/_INPBPair.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
 */

@protocol _INPBPair <NSObject>

@required

+ (Class)pairCurrencyAmountValueType;
+ (Class)pairCustomObjectType;
+ (Class)pairDataStringType;
+ (Class)pairDistanceValueType;
+ (Class)pairDoubleValueType;
+ (Class)pairImageValueType;
+ (Class)pairIntegerValueType;
+ (Class)pairLocationValueType;
+ (Class)pairPaymentMethodValueType;
+ (Class)pairPersonValueType;
+ (Class)pairStringValueType;
+ (Class)pairTemperatureValueType;
+ (Class)pairUrlValueType;

- (void)addPairCurrencyAmountValue:(_INPBCurrencyAmountValue *)arg1;
- (void)addPairCustomObject:(_INPBCustomObject *)arg1;
- (void)addPairDataString:(_INPBDataString *)arg1;
- (void)addPairDistanceValue:(_INPBDistanceValue *)arg1;
- (void)addPairDoubleValue:(_INPBDoubleValue *)arg1;
- (void)addPairImageValue:(_INPBImageValue *)arg1;
- (void)addPairIntegerValue:(_INPBIntegerValue *)arg1;
- (void)addPairLocationValue:(_INPBLocationValue *)arg1;
- (void)addPairPaymentMethodValue:(_INPBPaymentMethodValue *)arg1;
- (void)addPairPersonValue:(_INPBContactValue *)arg1;
- (void)addPairStringValue:(_INPBStringValue *)arg1;
- (void)addPairTemperatureValue:(_INPBTemperatureValue *)arg1;
- (void)addPairUrlValue:(_INPBURLValue *)arg1;
- (void)clearPairCurrencyAmountValues;
- (void)clearPairCustomObjects;
- (void)clearPairDataStrings;
- (void)clearPairDistanceValues;
- (void)clearPairDoubleValues;
- (void)clearPairImageValues;
- (void)clearPairIntegerValues;
- (void)clearPairLocationValues;
- (void)clearPairPaymentMethodValues;
- (void)clearPairPersonValues;
- (void)clearPairStringValues;
- (void)clearPairTemperatureValues;
- (void)clearPairUrlValues;
- (bool)hasKey;
- (bool)hasRepeated;
- (NSString *)key;
- (_INPBCurrencyAmountValue *)pairCurrencyAmountValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairCurrencyAmountValues;
- (unsigned long long)pairCurrencyAmountValuesCount;
- (_INPBCustomObject *)pairCustomObjectAtIndex:(unsigned long long)arg1;
- (NSArray *)pairCustomObjects;
- (unsigned long long)pairCustomObjectsCount;
- (_INPBDataString *)pairDataStringAtIndex:(unsigned long long)arg1;
- (NSArray *)pairDataStrings;
- (unsigned long long)pairDataStringsCount;
- (_INPBDistanceValue *)pairDistanceValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairDistanceValues;
- (unsigned long long)pairDistanceValuesCount;
- (_INPBDoubleValue *)pairDoubleValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairDoubleValues;
- (unsigned long long)pairDoubleValuesCount;
- (_INPBImageValue *)pairImageValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairImageValues;
- (unsigned long long)pairImageValuesCount;
- (_INPBIntegerValue *)pairIntegerValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairIntegerValues;
- (unsigned long long)pairIntegerValuesCount;
- (_INPBLocationValue *)pairLocationValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairLocationValues;
- (unsigned long long)pairLocationValuesCount;
- (_INPBPaymentMethodValue *)pairPaymentMethodValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairPaymentMethodValues;
- (unsigned long long)pairPaymentMethodValuesCount;
- (_INPBContactValue *)pairPersonValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairPersonValues;
- (unsigned long long)pairPersonValuesCount;
- (_INPBStringValue *)pairStringValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairStringValues;
- (unsigned long long)pairStringValuesCount;
- (_INPBTemperatureValue *)pairTemperatureValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairTemperatureValues;
- (unsigned long long)pairTemperatureValuesCount;
- (_INPBURLValue *)pairUrlValueAtIndex:(unsigned long long)arg1;
- (NSArray *)pairUrlValues;
- (unsigned long long)pairUrlValuesCount;
- (bool)repeated;
- (void)setHasRepeated:(bool)arg1;
- (void)setKey:(NSString *)arg1;
- (void)setPairCurrencyAmountValues:(NSArray *)arg1;
- (void)setPairCustomObjects:(NSArray *)arg1;
- (void)setPairDataStrings:(NSArray *)arg1;
- (void)setPairDistanceValues:(NSArray *)arg1;
- (void)setPairDoubleValues:(NSArray *)arg1;
- (void)setPairImageValues:(NSArray *)arg1;
- (void)setPairIntegerValues:(NSArray *)arg1;
- (void)setPairLocationValues:(NSArray *)arg1;
- (void)setPairPaymentMethodValues:(NSArray *)arg1;
- (void)setPairPersonValues:(NSArray *)arg1;
- (void)setPairStringValues:(NSArray *)arg1;
- (void)setPairTemperatureValues:(NSArray *)arg1;
- (void)setPairUrlValues:(NSArray *)arg1;
- (void)setRepeated:(bool)arg1;

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
