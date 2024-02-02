<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>Converter.h</title>
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

/PrivateFrameworks/Calculate.framework/Converter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Calculate.framework/Calculate (17)
 */

@interface Converter : NSObject {
    NSArray * _additionalResults;
    NSString * _conversionType;
    float  _currencyUpdateTimeOut;
    NSString * _inputString;
    NSString * _inputUnit;
    NSNumber * _inputValue;
    bool  _isCurrency;
    NSString * _localizedInputValueAndUnit;
    NSString * _localizedOutputUnit;
    NSString * _localizedOutputValue;
    NSString * _localizedOutputValueAndUnit;
    NSString * _outputUnit;
    NSNumber * _outputValue;
}

@property (nonatomic, retain) NSArray *additionalResults;
@property (nonatomic, retain) NSString *conversionType;
@property float currencyUpdateTimeOut;
@property (nonatomic, retain) NSString *inputString;
@property (nonatomic, retain) NSString *inputUnit;
@property (nonatomic, retain) NSNumber *inputValue;
@property (readonly) bool isCurrency;
@property (nonatomic, retain) NSString *localizedInputValueAndUnit;
@property (nonatomic, retain) NSString *localizedOutputUnit;
@property (nonatomic, retain) NSString *localizedOutputValue;
@property (nonatomic, retain) NSString *localizedOutputValueAndUnit;
@property (nonatomic, retain) NSString *outputUnit;
@property (nonatomic, retain) NSNumber *outputValue;

+ (id)currencyCacheLastRefreshDate;
+ (id)dispatchQueue;
+ (void)initialize;
+ (bool)refreshCurrencyCache;

- (double)_doubleWithoutUnrelevantDecimalsForNumber:(id)arg1;
- (id)_localizedPluralizedStringsforNumber:(id)arg1 unit:(id)arg2;
- (id)_normalizedUnitNamesForName:(id)arg1;
- (id)_operateConversionForOutputUnit:(id)arg1;
- (bool)_parseInputQuery;
- (void)_performUnitPluralization;
- (void)_standardizeInputAndOutputUnits;
- (id)_unitInfoForNormalizedName:(id)arg1;
- (void)_updateInputValueFromMatch:(id)arg1;
- (id)additionalResults;
- (id)conversionType;
- (float)currencyUpdateTimeOut;
- (void)dealloc;
- (id)initWithInput:(id)arg1;
- (id)inputString;
- (id)inputUnit;
- (id)inputValue;
- (bool)isCurrency;
- (id)localizedInputValueAndUnit;
- (id)localizedOutputUnit;
- (id)localizedOutputValue;
- (id)localizedOutputValueAndUnit;
- (id)outputUnit;
- (id)outputValue;
- (void)processConversionWithCompletion:(id /* block */)arg1;
- (void)setAdditionalResults:(id)arg1;
- (void)setConversionType:(id)arg1;
- (void)setCurrencyUpdateTimeOut:(float)arg1;
- (void)setInputString:(id)arg1;
- (void)setInputUnit:(id)arg1;
- (void)setInputValue:(id)arg1;
- (void)setLocalizedInputValueAndUnit:(id)arg1;
- (void)setLocalizedOutputUnit:(id)arg1;
- (void)setLocalizedOutputValue:(id)arg1;
- (void)setLocalizedOutputValueAndUnit:(id)arg1;
- (void)setOutputUnit:(id)arg1;
- (void)setOutputValue:(id)arg1;
- (id)similarUnitsForNormalizedName:(id)arg1;

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