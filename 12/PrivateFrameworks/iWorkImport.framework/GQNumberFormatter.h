<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>GQNumberFormatter.h</title>
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

/PrivateFrameworks/iWorkImport.framework/GQNumberFormatter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport (440)
 */

@interface GQNumberFormatter : NSObject {
    struct __CFString { } * mAdditionalCurrencyCode;
    struct __CFArray { } * mAdditionalCurrencyCodeFormatters;
    NSMutableDictionary * mCurrencyCodeToHalfWidthSymbolMap;
    NSMutableDictionary * mCurrencyCodeToSymbolMap;
    struct __CFArray { } * mCurrencyFormatters;
    NSString * mCurrencyString;
    struct __CFArray { } * mDecimalFormatters;
    NSString * mDecimalString;
    struct __CFNumberFormatter { } * mFractionFormatter;
    struct __CFLocale { } * mLocale;
    NSString * mPercentSymbol;
    struct __CFArray { } * mPercentageFormatters;
    NSString * mPercentageString;
    struct __CFArray { } * mScientificFormatters;
    NSString * mScientificString;
    NSMutableArray * mTransformedCurrencyStrings;
    NSMutableArray * mTransformedDecimalStrings;
    NSMutableArray * mTransformedPercentageStrings;
    NSMutableArray * mTransformedScientificStrings;
}

+ (id)availableCurrencyCodes;
+ (id)currencySymbolForCurrencyCode:(id)arg1;
+ (id)currentLocaleCurrencyCode;
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1;
+ (id)defaultFormatStringForValueType:(int)arg1;
+ (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
+ (id)displayNameForCurrencyCode:(id)arg1;
+ (void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3;
+ (id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2;
+ (id)formatterForLocale:(struct __CFLocale { }*)arg1;
+ (id)localizedPercentSymbol;
+ (id)numberFormatStringSpecialSymbols;
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1;
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1;
+ (int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2;
+ (id)userVisibleCurrencyCodes;

- (bool)currencyFromString:(struct __CFString { }*)arg1 additionalCurrencyCode:(struct __CFString { }*)arg2 value:(double*)arg3 formatString:(const struct __CFString {}**)arg4 currencyCode:(const struct __CFString {}**)arg5;
- (id)currencySymbolForCurrencyCode:(id)arg1;
- (id)currentLocaleCurrencyCode;
- (void)dealloc;
- (bool)decimalFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (id)defaultFormatStringForValueType:(int)arg1;
- (id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2;
- (id)displayNameForCurrencyCode:(id)arg1;
- (bool)findCurrencySymbolInString:(struct __CFString { }*)arg1 additionalCurrencyCode:(struct __CFString { }*)arg2 successfulString:(const struct __CFString {}**)arg3;
- (bool)fractionFromString:(struct __CFString { }*)arg1 value:(double*)arg2;
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1;
- (id)initWithLocale:(struct __CFLocale { }*)arg1;
- (id)localizedPercentSymbol;
- (void)numberPreferencesChanged:(id)arg1;
- (bool)percentageFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (bool)scientificFromString:(struct __CFString { }*)arg1 value:(double*)arg2 formatString:(const struct __CFString {}**)arg3;
- (bool)valueFromString:(struct __CFString { }*)arg1 formatters:(struct __CFArray { }*)arg2 value:(double*)arg3 formatString:(const struct __CFString {}**)arg4 currencyCode:(const struct __CFString {}**)arg5;

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
