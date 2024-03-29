<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WeatherPreferences.h</title>
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

/PrivateFrameworks/Weather.framework/WeatherPreferences.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather (1)
 */

@interface WeatherPreferences : NSObject <NSURLConnectionDelegate, WFTemperatureUnitObserver> {
    NSString * _UUID;
    NSString * _cacheDirectoryPath;
    WeatherCloudPreferences * _cloudPreferences;
    NSArray * _lastUbiquitousWrittenDefaults;
    bool  _logUnitsAndLocale;
    <WeatherPreferencesPersistence> * _persistence;
    bool  _serviceDebugging;
    NSString * _serviceHost;
    <SynchronizedDefaultsDelegate> * _syncDelegate;
    bool  _userGroupPrefsLockedWhenInit;
}

@property (retain) WeatherCloudPreferences *cloudPreferences;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLocalWeatherEnabled, setter=setLocalWeatherEnabled:, nonatomic) bool isLocalWeatherEnabled;
@property (nonatomic, readonly) NSDate *lastUpdated;
@property (nonatomic, readonly) City *localWeatherCity;
@property (readonly) Class superclass;
@property (nonatomic) <SynchronizedDefaultsDelegate> *syncDelegate;
@property (nonatomic) bool userGroupPrefsLockedWhenInit;
@property (readonly) int userTemperatureUnit;

+ (bool)performUpgradeOfPersistence:(id)arg1 fileManager:(id)arg2 error:(id*)arg3;
+ (id)preferencesWithPersistence:(id)arg1;
+ (id)readInternalDefaultValueForKey:(id)arg1;
+ (id)serviceDebuggingPath;
+ (id)sharedPreferences;
+ (id)userDefaultsPersistence;

- (void).cxx_destruct;
- (id)UUID;
- (id)_cacheDirectoryPath;
- (void)_clearCachedObjects;
- (id)_defaultCities;
- (bool)_defaultsAreValid;
- (bool)_defaultsCurrent;
- (void)adjustPrefsForLocalWeatherEnabled:(bool)arg1;
- (bool)areCitiesDefault:(id)arg1;
- (id)citiesByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2;
- (id)citiesByConsolidatingDuplicatesInBucket:(id)arg1;
- (id)cityFromPreferencesDictionary:(id)arg1;
- (id)cloudPreferences;
- (bool)ensureValidSelectedCityID;
- (void)forceSyncCloudPreferences;
- (id)init;
- (id)initWithPersistence:(id)arg1;
- (bool)isCelsius;
- (bool)isLocalWeatherEnabled;
- (id)lastUpdated;
- (int)loadActiveCity;
- (int)loadDefaultSelectedCity;
- (id)loadDefaultSelectedCityID;
- (id)loadSavedCities;
- (id)localWeatherCity;
- (id)preferencesDictionaryForCity:(id)arg1;
- (id)readDefaultValueForKey:(id)arg1;
- (id)readInternalDefaultValueForKey:(id)arg1;
- (bool)readTemperatureUnits;
- (void)registerTemperatureUnits;
- (void)resetLocale;
- (void)saveToDiskWithCities:(id)arg1;
- (void)saveToDiskWithCities:(id)arg1 activeCity:(unsigned long long)arg2;
- (void)saveToDiskWithCity:(id)arg1 forActiveIndex:(unsigned long long)arg2;
- (void)saveToDiskWithLocalWeatherCity:(id)arg1;
- (void)saveToUbiquitousStore;
- (bool)serviceDebugging;
- (id)serviceHost;
- (void)setActiveCity:(unsigned long long)arg1;
- (void)setCelsius:(bool)arg1;
- (void)setCloudPreferences:(id)arg1;
- (void)setDefaultCities:(id)arg1;
- (void)setDefaultSelectedCity:(unsigned long long)arg1;
- (void)setDefaultSelectedCityID:(id)arg1;
- (void)setLocalWeatherEnabled:(bool)arg1;
- (void)setSyncDelegate:(id)arg1;
- (void)setUserGroupPrefsLockedWhenInit:(bool)arg1;
- (void)setupUbiquitousStoreIfNeeded;
- (id)syncDelegate;
- (void)synchronizeStateToDisk;
- (void)synchronizeStateToDiskDoNotify:(bool)arg1;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2;
- (id)twcLogoURL;
- (id)twcLogoURL:(id)arg1;
- (bool)userGroupPrefsLockedWhenInit;
- (int)userTemperatureUnit;
- (void)writeDefaultValue:(id)arg1 forKey:(id)arg2;

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
