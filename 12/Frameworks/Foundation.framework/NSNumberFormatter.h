<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSNumberFormatter.h</title>
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

/Frameworks/Foundation.framework/NSNumberFormatter.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/Foundation.framework/Foundation (1575.23)
 */

@interface NSNumberFormatter : NSFormatter <HKNumberFormatter, NSObservable, NSObserver> {
    NSMutableDictionary * _attributes;
    unsigned long long  _behavior;
    long long  _cacheGeneration;
    unsigned long long  _counter;
    struct __CFNumberFormatter { } * _formatter;
    NSRecursiveLock * _lock;
    void * _reserved;
    unsigned long long  _stateBitMask;
}

@property bool allowsFloats;
@property bool alwaysShowsDecimalSeparator;
@property (copy) NSString *currencyCode;
@property (copy) NSString *currencyDecimalSeparator;
@property (copy) NSString *currencyGroupingSeparator;
@property (copy) NSString *currencySymbol;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *decimalSeparator;
@property (readonly, copy) NSString *description;
@property (copy) NSString *exponentSymbol;
@property unsigned long long formatWidth;
@property unsigned long long formatterBehavior;
@property long long formattingContext;
@property bool generatesDecimalNumbers;
@property (copy) NSString *groupingSeparator;
@property unsigned long long groupingSize;
@property (readonly) unsigned long long hash;
@property (copy) NSString *internationalCurrencySymbol;
@property (getter=isLenient) bool lenient;
@property (copy) NSLocale *locale;
@property (copy) NSNumber *maximum;
@property unsigned long long maximumFractionDigits;
@property unsigned long long maximumIntegerDigits;
@property unsigned long long maximumSignificantDigits;
@property (copy) NSNumber *minimum;
@property unsigned long long minimumFractionDigits;
@property unsigned long long minimumIntegerDigits;
@property unsigned long long minimumSignificantDigits;
@property (copy) NSString *minusSign;
@property (copy) NSNumber *multiplier;
@property (copy) NSString *negativeFormat;
@property (copy) NSString *negativeInfinitySymbol;
@property (copy) NSString *negativePrefix;
@property (copy) NSString *negativeSuffix;
@property (copy) NSString *nilSymbol;
@property (copy) NSString *notANumberSymbol;
@property unsigned long long numberStyle;
@property (copy) NSString *paddingCharacter;
@property unsigned long long paddingPosition;
@property (getter=isPartialStringValidationEnabled) bool partialStringValidationEnabled;
@property (copy) NSString *perMillSymbol;
@property (copy) NSString *percentSymbol;
@property (copy) NSString *plusSign;
@property (copy) NSString *positiveFormat;
@property (copy) NSString *positiveInfinitySymbol;
@property (copy) NSString *positivePrefix;
@property (copy) NSString *positiveSuffix;
@property (copy) NSNumber *roundingIncrement;
@property unsigned long long roundingMode;
@property unsigned long long secondaryGroupingSize;
@property (readonly) Class superclass;
@property (copy) NSDictionary *textAttributesForNegativeInfinity;
@property (copy) NSDictionary *textAttributesForNegativeValues;
@property (copy) NSDictionary *textAttributesForNil;
@property (copy) NSDictionary *textAttributesForNotANumber;
@property (copy) NSDictionary *textAttributesForPositiveInfinity;
@property (copy) NSDictionary *textAttributesForPositiveValues;
@property (copy) NSDictionary *textAttributesForZero;
@property bool usesGroupingSeparator;
@property bool usesSignificantDigits;
@property (copy) NSString *zeroSymbol;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (unsigned long long)defaultFormatterBehavior;
+ (void)initialize;
+ (id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2;
+ (void)setDefaultFormatterBehavior:(unsigned long long)arg1;

- (void*)__Keynote_NOOP;
- (long long)_cacheGenerationCount;
- (void)_clearFormatter;
- (bool)_hasSetCurrencyCode;
- (bool)_hasSetCurrencySymbol;
- (bool)_hasSetInternationalCurrencySymbol;
- (void)_invalidateCache;
- (bool)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (void)_regenerateFormatter;
- (void)_reset;
- (void)_setUsesCharacterDirection:(bool)arg1;
- (bool)_tracksCacheGenerationCount;
- (bool)_usesCharacterDirection;
- (bool)allowsFloats;
- (bool)alwaysShowsDecimalSeparator;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (bool)checkLocaleChange;
- (bool)checkModify;
- (void)clearPropertyBit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)currencyDecimalSeparator;
- (id)currencyGroupingSeparator;
- (id)currencySymbol;
- (void)dealloc;
- (id)decimalSeparator;
- (void)encodeWithCoder:(id)arg1;
- (id)exponentSymbol;
- (unsigned long long)formatWidth;
- (unsigned long long)formatterBehavior;
- (long long)formattingContext;
- (bool)generatesDecimalNumbers;
- (void*)getFormatter;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 error:(out id*)arg4;
- (id)groupingSeparator;
- (unsigned long long)groupingSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)internationalCurrencySymbol;
- (bool)isLenient;
- (bool)isPartialStringValidationEnabled;
- (id)locale;
- (id)maximum;
- (unsigned long long)maximumFractionDigits;
- (unsigned long long)maximumIntegerDigits;
- (unsigned long long)maximumSignificantDigits;
- (id)minimum;
- (unsigned long long)minimumFractionDigits;
- (unsigned long long)minimumIntegerDigits;
- (unsigned long long)minimumSignificantDigits;
- (id)minusSign;
- (id)multiplier;
- (id)negativeFormat;
- (id)negativeInfinitySymbol;
- (id)negativePrefix;
- (id)negativeSuffix;
- (id)nilSymbol;
- (id)notANumberSymbol;
- (id)numberFromString:(id)arg1;
- (unsigned long long)numberStyle;
- (id)paddingCharacter;
- (unsigned long long)paddingPosition;
- (id)perMillSymbol;
- (id)percentSymbol;
- (id)plusSign;
- (id)positiveFormat;
- (id)positiveInfinitySymbol;
- (id)positivePrefix;
- (id)positiveSuffix;
- (void)receiveObservedValue:(id)arg1;
- (void)resetCheckLocaleChange;
- (void)resetCheckModify;
- (id)roundingIncrement;
- (unsigned long long)roundingMode;
- (unsigned long long)secondaryGroupingSize;
- (void)setAllowsFloats:(bool)arg1;
- (void)setAlwaysShowsDecimalSeparator:(bool)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setCurrencyDecimalSeparator:(id)arg1;
- (void)setCurrencyGroupingSeparator:(id)arg1;
- (void)setCurrencySymbol:(id)arg1;
- (void)setDecimalSeparator:(id)arg1;
- (void)setExponentSymbol:(id)arg1;
- (void)setFormatWidth:(unsigned long long)arg1;
- (void)setFormatterBehavior:(unsigned long long)arg1;
- (void)setFormattingContext:(long long)arg1;
- (void)setGeneratesDecimalNumbers:(bool)arg1;
- (void)setGroupingSeparator:(id)arg1;
- (void)setGroupingSize:(unsigned long long)arg1;
- (void)setInternationalCurrencySymbol:(id)arg1;
- (void)setLenient:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaximum:(id)arg1;
- (void)setMaximumFractionDigits:(unsigned long long)arg1;
- (void)setMaximumIntegerDigits:(unsigned long long)arg1;
- (void)setMaximumSignificantDigits:(unsigned long long)arg1;
- (void)setMinimum:(id)arg1;
- (void)setMinimumFractionDigits:(unsigned long long)arg1;
- (void)setMinimumIntegerDigits:(unsigned long long)arg1;
- (void)setMinimumSignificantDigits:(unsigned long long)arg1;
- (void)setMinusSign:(id)arg1;
- (void)setMultiplier:(id)arg1;
- (void)setNegativeFormat:(id)arg1;
- (void)setNegativeInfinitySymbol:(id)arg1;
- (void)setNegativePrefix:(id)arg1;
- (void)setNegativeSuffix:(id)arg1;
- (void)setNilSymbol:(id)arg1;
- (void)setNotANumberSymbol:(id)arg1;
- (void)setNumberStyle:(unsigned long long)arg1;
- (void)setPaddingCharacter:(id)arg1;
- (void)setPaddingPosition:(unsigned long long)arg1;
- (void)setPartialStringValidationEnabled:(bool)arg1;
- (void)setPerMillSymbol:(id)arg1;
- (void)setPercentSymbol:(id)arg1;
- (void)setPlusSign:(id)arg1;
- (void)setPositiveFormat:(id)arg1;
- (void)setPositiveInfinitySymbol:(id)arg1;
- (void)setPositivePrefix:(id)arg1;
- (void)setPositiveSuffix:(id)arg1;
- (void)setPropertyBit;
- (void)setRoundingIncrement:(id)arg1;
- (void)setRoundingMode:(unsigned long long)arg1;
- (void)setSecondaryGroupingSize:(unsigned long long)arg1;
- (void)setTextAttributesForNegativeInfinity:(id)arg1;
- (void)setTextAttributesForNegativeValues:(id)arg1;
- (void)setTextAttributesForNil:(id)arg1;
- (void)setTextAttributesForNotANumber:(id)arg1;
- (void)setTextAttributesForPositiveInfinity:(id)arg1;
- (void)setTextAttributesForPositiveValues:(id)arg1;
- (void)setTextAttributesForZero:(id)arg1;
- (void)setUsesGroupingSeparator:(bool)arg1;
- (void)setUsesSignificantDigits:(bool)arg1;
- (void)setZeroSymbol:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromNumber:(id)arg1;
- (id)textAttributesForNegativeInfinity;
- (id)textAttributesForNegativeValues;
- (id)textAttributesForNil;
- (id)textAttributesForNotANumber;
- (id)textAttributesForPositiveInfinity;
- (id)textAttributesForPositiveValues;
- (id)textAttributesForZero;
- (bool)usesGroupingSeparator;
- (bool)usesSignificantDigits;
- (id)zeroSymbol;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_heartRateNumberFormatter;
+ (id)hk_percentNumberFormatter;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_formatInteger:(long long)arg1 withGrouping:(bool)arg2;
+ (id)mf_formatUnsignedInteger:(unsigned long long)arg1 withGrouping:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (id)stringFromInteger:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera

+ (id)dcaxLocalizedDouble:(double)arg1;
+ (id)dcaxLocalizedDouble:(double)arg1 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg2;
+ (id)dcaxLocalizedNumber:(id)arg1;
+ (id)dcaxLocalizedNumber:(id)arg1 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg2;
+ (id)dcaxLocalizedNumber:(id)arg1 numberStyle:(unsigned long long)arg2;
+ (id)dcaxLocalizedNumber:(id)arg1 numberStyle:(unsigned long long)arg2 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg3;
+ (id)dcaxLocalizedPercentage:(double)arg1;
+ (id)dcaxLocalizedPercentage:(double)arg1 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg2;
+ (id)dcaxLocalizedUnsignedInteger:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)gkRankFormatter;
+ (id)gk_formatInteger:(long long)arg1 withGrouping:(bool)arg2;
+ (id)gk_formatUnsignedInteger:(unsigned long long)arg1 withGrouping:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (bool)returnsUnitWithValueForDisplay;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;

// Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit

+ (id)pkaxLocalizedDouble:(double)arg1;
+ (id)pkaxLocalizedDouble:(double)arg1 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg2;
+ (id)pkaxLocalizedNumber:(id)arg1;
+ (id)pkaxLocalizedNumber:(id)arg1 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg2;
+ (id)pkaxLocalizedNumber:(id)arg1 numberStyle:(unsigned long long)arg2;
+ (id)pkaxLocalizedNumber:(id)arg1 numberStyle:(unsigned long long)arg2 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg3;
+ (id)pkaxLocalizedPercentage:(double)arg1;
+ (id)pkaxLocalizedPercentage:(double)arg1 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg2;
+ (id)pkaxLocalizedUnsignedInteger:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

+ (id)siriui_localizedStringFromNumber:(id)arg1;

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