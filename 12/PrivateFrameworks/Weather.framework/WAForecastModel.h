<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <title>WAForecastModel.h</title>
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

/PrivateFrameworks/Weather.framework/WAForecastModel.h <a href="?download" download title="Download" class="download">&darr;</a>


/* Generated by RuntimeBrowser
   Platform: iOS 12.5.7 (16H81) arm64
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather (1)
 */

@interface WAForecastModel : NSObject <NSCopying> {
    WFAirQualityConditions * _airQualityConditions;
    City * _city;
    WACurrentForecast * _currentConditions;
    NSArray * _dailyForecasts;
    NSURL * _deepLink;
    NSArray * _hourlyForecasts;
    NSURL * _link;
    WFLocation * _location;
    NSDate * _sunrise;
    NSDate * _sunset;
    WFWeatherConditions * _underlyingCurrentConditions;
    NSArray * _underlyingDailyConditions;
    NSArray * _underlyingHourlyConditions;
}

@property (nonatomic, retain) WFAirQualityConditions *airQualityConditions;
@property (nonatomic, retain) City *city;
@property (nonatomic, retain) WACurrentForecast *currentConditions;
@property (nonatomic, copy) NSArray *dailyForecasts;
@property (nonatomic, retain) NSURL *deepLink;
@property (nonatomic, copy) NSArray *hourlyForecasts;
@property (nonatomic, readonly) bool isPopulated;
@property (nonatomic, retain) NSURL *link;
@property (nonatomic, retain) WFLocation *location;
@property (nonatomic, retain) NSDate *sunrise;
@property (nonatomic, retain) NSDate *sunset;
@property (nonatomic, retain) WFWeatherConditions *underlyingCurrentConditions;
@property (nonatomic, retain) NSArray *underlyingDailyConditions;
@property (nonatomic, retain) NSArray *underlyingHourlyConditions;

- (void).cxx_destruct;
- (id)airQualityConditions;
- (id)city;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentConditions;
- (id)dailyForecasts;
- (id)deepLink;
- (id)description;
- (unsigned long long)hash;
- (id)hourlyForecasts;
- (bool)isEqual:(id)arg1;
- (bool)isPopulated;
- (id)link;
- (id)location;
- (void)setAirQualityConditions:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setCurrentConditions:(id)arg1;
- (void)setDailyForecasts:(id)arg1;
- (void)setDeepLink:(id)arg1;
- (void)setHourlyForecasts:(id)arg1;
- (void)setLink:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setSunrise:(id)arg1;
- (void)setSunset:(id)arg1;
- (void)setUnderlyingCurrentConditions:(id)arg1;
- (void)setUnderlyingDailyConditions:(id)arg1;
- (void)setUnderlyingHourlyConditions:(id)arg1;
- (id)sunrise;
- (id)sunset;
- (id)underlyingCurrentConditions;
- (id)underlyingDailyConditions;
- (id)underlyingHourlyConditions;

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