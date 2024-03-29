<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>NSLocale.h</title>
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

/Frameworks/CoreFoundation.framework/NSLocale.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation (1575.23)
 */

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>

@property (readonly) long long ITUCountryCode;
@property (readonly) long long _calendarDirection;
@property (readonly, copy) NSArray *availableNumberingSystems;
@property (nonatomic, readonly) bool hk_isUSLocale;
@property (nonatomic, readonly) NSString *languageIdentifier;
@property (readonly) NSString *languageIdentifier;
@property (readonly, copy) NSString *numberingSystem;
@property (nonatomic) int wf_temperatureUnit;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)ISOCountryCodes;
+ (id)ISOCurrencyCodes;
+ (id)ISOLanguageCodes;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)availableLocaleIdentifiers;
+ (id)canonicalLanguageIdentifierFromString:(id)arg1;
+ (id)canonicalLocaleIdentifierFromString:(id)arg1;
+ (unsigned long long)characterDirectionForLanguage:(id)arg1;
+ (id)commonISOCurrencyCodes;
+ (id)componentsFromLocaleIdentifier:(id)arg1;
+ (id)currentLocale;
+ (id)internetServicesRegion;
+ (unsigned long long)lineDirectionForLanguage:(id)arg1;
+ (id)localeIdentifierFromComponents:(id)arg1;
+ (id)localeIdentifierFromWindowsLocaleCode:(unsigned int)arg1;
+ (id)localeWithLocaleIdentifier:(id)arg1;
+ (id)preferredLanguages;
+ (bool)supportsSecureCoding;
+ (id)systemLocale;
+ (unsigned int)windowsLocaleCodeFromLocaleIdentifier:(id)arg1;

- (unsigned long long)_cfTypeID;
- (id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2;
- (unsigned char)_nullLocale;
- (id)_prefs;
- (void)_setNullLocale;
- (id)alternateQuotationBeginDelimiter;
- (id)alternateQuotationEndDelimiter;
- (id)calendarIdentifier;
- (id)collationIdentifier;
- (id)collatorIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)currencyCode;
- (id)currencySymbol;
- (id)decimalSeparator;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)exemplarCharacterSet;
- (id)groupingSeparator;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocaleIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (id)localeIdentifier;
- (id)localizedStringForAlternateQuotationBeginDelimiter:(id)arg1;
- (id)localizedStringForAlternateQuotationEndDelimiter:(id)arg1;
- (id)localizedStringForCalendarIdentifier:(id)arg1;
- (id)localizedStringForCollationIdentifier:(id)arg1;
- (id)localizedStringForCollatorIdentifier:(id)arg1;
- (id)localizedStringForCountryCode:(id)arg1;
- (id)localizedStringForCurrencyCode:(id)arg1;
- (id)localizedStringForCurrencySymbol:(id)arg1;
- (id)localizedStringForDecimalSeparator:(id)arg1;
- (id)localizedStringForGroupingSeparator:(id)arg1;
- (id)localizedStringForLanguageCode:(id)arg1;
- (id)localizedStringForLocaleIdentifier:(id)arg1;
- (id)localizedStringForQuotationBeginDelimiter:(id)arg1;
- (id)localizedStringForQuotationEndDelimiter:(id)arg1;
- (id)localizedStringForScriptCode:(id)arg1;
- (id)localizedStringForVariantCode:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)quotationBeginDelimiter;
- (id)quotationEndDelimiter;
- (id)scriptCode;
- (bool)usesMetricSystem;
- (id)variantCode;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_preferredMeasurementSystem;
+ (id)_preferredTemperatureUnit;
+ (void)_setPreferredMeasurementSystem:(id)arg1;
+ (void)_setPreferredTemperatureUnit:(id)arg1;
+ (id)autoupdatingCurrentLocale;
+ (id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned long long)arg3 options:(unsigned long long)arg4;
+ (void)registerPreferredLanguage:(id)arg1 usage:(unsigned long long)arg2 confidence:(float)arg3;
+ (void)setPreferredLanguages:(id)arg1;
+ (id)systemLanguages;

- (long long)_calendarDirection;
- (Class)classForCoder;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)hk_isUSLocale;
+ (void)hk_setTestLocale:(id)arg1;
+ (id)hk_testableAutoupdatingCurrentLocale;

- (bool)hk_isUSLocale;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (unsigned long long)pu_currentCharacterDirection;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (bool)_sf_isRTL;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (id)currentDeviceLanguageForFacebook;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

+ (id)vs_systemLanaguage;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (void)af_setAceTemperatureUnit:(id)arg1;
+ (id)af_temperatureUnitForAceTemperatureUnit:(id)arg1;

- (id)af_aceTemperatureUnit;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (bool)CalLanguageIsSimplifiedChinese;
- (bool)CalPrefersFullMonthDisplayNames;
- (bool)CalRegionIsChina;
- (bool)CalShouldUseAbbreviatedDayNames;
- (bool)CalUnableToAbbreviateMonthNames;
- (bool)CalUsesCelsius;
- (bool)_calendarIsIslamic;
- (bool)_languageIsArabic;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)__ck_currentLocale;
+ (void)__ck_setTestLocale:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (bool)crk_showPhoneticNames;

// Image: /System/Library/PrivateFrameworks/InternationalSupport.framework/InternationalSupport

+ (id)_ICUdisplayNameForLanguage:(id)arg1 capitalization:(struct ULocaleDisplayNames { }*)arg2;
+ (id)_addLikelySubtagsForLocaleIdentifier:(id)arg1;
+ (id)_displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
+ (id)_displayNameForNormalizedLanguage:(id)arg1 context:(long long)arg2 displayLanguage:(id)arg3;
+ (id)_displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(bool)arg4;
+ (id)_filterLanguageList:(id)arg1 forRegion:(id)arg2 fromLanguages:(id)arg3;
+ (id)_languageNameOverrides;
+ (id)_languagesForRegionWithoutFiltering:(id)arg1;
+ (id)_languagesToExemplarStrings;
+ (id)_normalizedLanguageIdentifierFromString:(id)arg1;
+ (id)_parentLocaleIdentifierForIdentifier:(id)arg1;
+ (id)baseLanguageFromLanguage:(id)arg1;
+ (id)baseSystemLanguages;
+ (id)deviceLanguage;
+ (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
+ (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(bool)arg4;
+ (id)exemplarForLanguage:(id)arg1;
+ (id)languageFromLanguage:(id)arg1 byReplacingRegion:(id)arg2;
+ (id)matchedLanguagesFromAvailableLanguages:(id)arg1 forPreferredLanguages:(id)arg2;
+ (id)supportedLanguages;
+ (id)supportedRegions;
+ (id)systemLanguagesForRegion:(id)arg1;

- (id)availableNumberingSystems;
- (id)displayNameForLanguage:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3;
- (id)displayNameForRegion:(id)arg1 displayLanguage:(id)arg2 context:(long long)arg3 short:(bool)arg4;
- (bool)isEquivalentTo:(id)arg1;
- (id)languageIdentifier;
- (id)localizedStringForLanguage:(id)arg1 context:(long long)arg2;
- (id)localizedStringForNumberingSystem:(id)arg1 short:(bool)arg2;
- (id)localizedStringForRegion:(id)arg1 context:(long long)arg2 short:(bool)arg3;
- (id)numberingSystem;

// Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences

+ (id)addLikelySubtagsForLocaleIdentifier:(id)arg1;
+ (id)archivedPreferences;
+ (id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)arg1;
+ (id)canonicalLocaleIdentifier:(id)arg1 withNewLanguageIdentifier:(id)arg2;
+ (id)canonicalLocaleIdentifierFromComponents:(id)arg1;
+ (id)canonicalLocaleIdentifierWithValidCalendarForComponents:(id)arg1;
+ (id)deviceLanguageIdentifier;
+ (id)deviceLanguageLocale;
+ (void)enableDefaultKeyboardForPreferredLanguages;
+ (id)languageArrayAfterSettingLanguage:(id)arg1 fallback:(id)arg2 toLanguageArray:(id)arg3;
+ (bool)localeLanguageMatchesPrimaryLanguage;
+ (void)registerPreferredLanguageForAddedKeyboardLanguage:(id)arg1;
+ (id)renderableLanguagesFromList:(id)arg1;
+ (id)renderableLocaleLanguages;
+ (id)renderableUILanguages;
+ (void)resetTimeFormat;
+ (void)setArchivedPreferences:(id)arg1;
+ (void)setLanguageToPreferredLanguages:(id)arg1 fallback:(id)arg2;
+ (void)setLocaleAfterLanguageChange:(id)arg1;
+ (void)setLocaleAfterRegionChange:(id)arg1;
+ (void)setLocaleAndResetTimeFormat:(id)arg1;
+ (void)setLocaleOnly:(id)arg1;
+ (bool)shouldShowPreferredLanguages;
+ (id)string:(id)arg1 withCapitalizedDisplayNamesForFirstLanguageIdentifier:(id)arg2 secondLanguageIdentifier:(id)arg3 thirdLanguageIdentifier:(id)arg4;
+ (id)supportedCJLanguageIdentifiers;
+ (void)updateShouldShowPreferredLanguages:(bool)arg1;
+ (id)validateLocale:(id)arg1;

- (id)languageIdentifier;
- (id)localeByChangingLanguageTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (bool)mtIsIn24HourTime;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

+ (void)__loadSwizzledCurrentLocaleIfNeeded;
+ (void)__setCurrentLocal:(id)arg1;
+ (id)__userCurrentLocale;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)_localeOverridesForLocaleWithCountryCode:(id)arg1;
+ (void)_navigation_overrideDistanceUnit:(long long)arg1;
+ (id)_navigation_overrideDistanceUnitProvider;
+ (void)_navigation_setNeedsUpdateOverrideDistanceUnit;
+ (void)set_navigation_overrideDistanceUnitProvider:(id)arg1;

- (bool)_navigation_distanceUsesMetricSystem;
- (bool)_navigation_distanceUsesMetricSystemIgnoringUserPreference:(bool)arg1;
- (id)_navigation_objectForKey:(id)arg1;
- (bool)_navigation_useYardsForShortDistances;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_preferredLanguageCodes;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_firstPreferredLocalization;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)pk_deviceLanguage;
+ (id)pk_preferredLocale;

// Image: /System/Library/PrivateFrameworks/PhoneNumbers.framework/PhoneNumbers

+ (long long)ITUCountryCodeForISOCountryCode:(id)arg1;

- (long long)ITUCountryCode;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (bool)psi_languageIsGerman;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (unsigned long long)px_currentCharacterDirection;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

+ (id)rc_preferredLanguageCodes;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_localeIdentifiersForMostWidelyUsedLanguages;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

+ (id)_nonRomanLanguages;

- (bool)usesRomanTextProcessing;

// Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback

- (id)tvp_subtitleLanguageCode;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (id)localeForBundleLanguage:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_UIKBPreferredLocale;

// Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit

+ (long long)_vk_indexForLocale:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Weather.framework/Weather

- (bool)isEqualToLocaleForWeather:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

- (void)setWf_temperatureUnit:(int)arg1;
- (int)wf_temperatureUnit;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsu_firstPreferredLocalization;

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
